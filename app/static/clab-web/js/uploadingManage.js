/**
 * Created by CoderSong on 16/8/9.
 */

$(function () {
    
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
                    $('#output-summary').attr('disabled','');
                    $('#output-detail').val(data['output-detail']);
                    $('#output-detail').attr('disabled','');
                }
                else {
                    alert(data['error']);
                }
            }
        })
    })
})