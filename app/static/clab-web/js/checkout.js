/**
 * Created by CoderSong on 16/11/3.
 */

$(function () {

    $('#sureBtn').click(function () {
        var input = $('#input-rule').val();
        var url = '/checkout';
        $.ajax({
            url:url,
            type:'POST',
            data:{
                'input':input
            },
            success:function (data) {
                if (data['error'] == '') {
                    $('#output-summary').val(data['output']);
                    $('.download-btn').removeAttr('disabled');
                }
                else {
                        $('#output-summary').empty();
                        alert(data['error']);
                }
            }
        })
    });

    // 上传组件
    $('.sure-upload-btn').click(function () {
        $('#exampleInputFile').trigger('click');
        $('#exampleInputFile').change(function(){
            var fileName = $(this).val();
            $('#file-name-input').val(getFileName(fileName));
            var file = this.files[0];
            uploadFile(file);
        });
    });

    function getFileName(fileName){
        var pos = fileName.lastIndexOf("\\");
        return fileName.substring(pos+1);
    }

    function uploadFile(formData){
        var fd = new FormData();
        fd.append('file',formData);
        $.ajax({
            url:'/checkout/uploadFile',
            type: 'POST',
            data: fd,
            processData: false,
            contentType: false,
            success: function (data) {
                if (data['error'] == '') {
                    $('#output-summary').val(data['output']);
                    $('#input-rule').val(data['input']);
                    $('.download-btn').removeAttr('disabled');
                }
                else {
                    $('#output-summary').empty();
                    alert(data[error]);
                }
            }
        })
    }

})