// 函数: sub_1406c2090
// 地址: 0x1406c2090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
*(arg1 + 0x47e) = 0
void var_68
av_init_packet(&var_68)
*(arg1 + 0x470) = 1
int64_t var_78

do
    sub_1406bb190(arg1, 0, &var_68)
    
    if (*(arg1 + 0x470) != 0)
        av_packet_rescale_ts(&var_68, *(*(arg1 + 0x3d0) + 0x64), *(*(arg1 + 0x3c8) + 0x18))
        int32_t var_44_1 = **(arg1 + 0x3c8)
        int32_t rax_2 = av_interleaved_write_frame(*(arg1 + 0x3f8), &var_68)
        
        if (rax_2 s< 0)
            var_78 = 0
            int64_t var_70_1 = 0
            arg_8 = 1
            sub_140a20c40(&var_78, rax_2)
            int64_t rcx_6 = var_78
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
    
    *(arg1 + 0x3c0) += 1
while (*(arg1 + 0x470) != 0)

int32_t rax_3 = av_write_trailer(*(arg1 + 0x3f8))

if (rax_3 s< 0)
    var_78 = 0
    int64_t var_70_2 = 0
    arg_8 = 2
    sub_140a20c40(&var_78, rax_3)
    int64_t rcx_9 = var_78
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

avcodec_free_context(arg1 + 0x3d0)
av_frame_free(arg1 + 0x3e0)
sws_freeContext(*(arg1 + 0x410))

if ((*(*(arg1 + 0x3f0) + 0x2c) & 1) == 0)
    int32_t rax_5 = avio_closep(*(arg1 + 0x3f8) + 0x20)
    
    if (rax_5 s< 0)
        var_78 = 0
        int64_t var_70_3 = 0
        arg_8 = 4
        sub_140a20c40(&var_78, rax_5)
        int64_t rcx_16 = var_78
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)

return avformat_free_context(*(arg1 + 0x3f8))
