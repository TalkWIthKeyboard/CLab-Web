/**
 * Created by CoderSong on 16/8/9.
 */

$(function () {
    
    $('#sureBtn').click(function () {
        
        var rule = $('#textForm').val();
        var url = '/clab/uploading/submitForm/textarea';
        $.ajax({
            url:url,
            type:'POST',
            data:{
                'rule':rule
            },
            success:function (data) {
                if (data.message == 0) {
                    $('#showUrl').modal('show');
                }
                else {
                    if (data.message == 1) {
                        alert('请输入正确的文件格式');
                    }
                    else{
                        alert('出现异常：' + data.e);
                    }
                }
            }
        })
        
    })

})