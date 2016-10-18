/**
 * Created by CoderSong on 16/8/9.
 */

$(function () {

    $('.download-btn').attr('disabled','disabled');

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
                        $('#output-summary').empty();
                        $('#output-detail').empty();
                        alert(data['error']);
                }
            }
        })
    })
})