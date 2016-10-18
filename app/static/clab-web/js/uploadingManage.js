/**
 * Created by CoderSong on 16/8/9.
 */

$(function () {

    // $('.download-btn').attr('disabled','disabled');

    $('#sureBtn').click(function () {
        var rule = $('#input-rule').val();
        var url = '/clab/uploading/submitForm/textarea';
        $.ajax({
            url:url,
            type:'POST',
            data:{
                'rule':rule
            },
            success:function (data) {
                if (data['error'] == '') {
                    $('#output-summary').val(data['summary']);
                    $('#output-detail').val(data['detail']);
                    $('.download-btn').removeAttr('disabled');
                }
                else {
                    alert(data['error']);
                }
            }
        })
    })
    
    $('#summary-btn').click(function () {
        window.location.href = 'CLab10/examples/shirt/shirt.cc'
    });
})