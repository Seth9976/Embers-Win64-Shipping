// 函数: sub_1406bd050
// 地址: 0x1406bd050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_50 = 0
*(arg1 + 0x47e) = 1
int64_t* rcx = *(arg1 + 0xb8)
int64_t var_58
int32_t* rax_1 = (*(*rcx + 0x18))(rcx, &var_58)
*(arg1 + 0x3b8) = *rax_1
*(arg1 + 0x3bc) = rax_1[1]
void* rdi = arg1 + 0x488
void* r9 = rdi

if (*(rdi + 0x18) u>= 0x10)
    r9 = *rdi

avformat_alloc_output_context2(arg1 + 0x3f8, 0, 0, r9)
int64_t* result = *(arg1 + 0x3f8)

if (result != 0)
    *(arg1 + 0x3f0) = result[2]
    int64_t var_38 = 0
    
    for (int64_t i = av_codec_iterate(&var_38); i != 0; i = av_codec_iterate(&var_38))
        av_codec_is_encoder(i)
    
    *(*(arg1 + 0x3f8) + 0x558) = avcodec_find_encoder_by_name("libx264")
    int32_t rdx_1 = *(*(arg1 + 0x3f0) + 0x24)
    
    if (rdx_1 != 0)
        sub_1406b8300(arg1, rdx_1)
    
    int64_t r14_1 = *(arg1 + 0x3d0)
    var_58 = 0
    av_dict_copy(&var_58, *(arg1 + 0x408), 0)
    int32_t rax_6 = avcodec_open2(r14_1, *(arg1 + 0x400), &var_58)
    av_dict_free(&var_58)
    int64_t var_48
    
    if (rax_6 s< 0)
        var_48 = 0
        int64_t var_40_1 = 0
        int32_t var_50_1 = 4
        sub_140a20c40(&var_48, rax_6)
        int64_t rcx_12 = var_48
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
    
    void* rax_7 = av_frame_alloc()
    *(arg1 + 0x3e0) = rax_7
    
    if (rax_7 != 0)
        *(rax_7 + 0x74) = *(*(arg1 + 0x3d0) + 0x88)
        *(*(arg1 + 0x3e0) + 0x68) = *(arg1 + 0x3b8)
        *(*(arg1 + 0x3e0) + 0x6c) = *(arg1 + 0x3bc)
        av_frame_get_buffer(*(arg1 + 0x3e0), 0x20)
        
        if (*(arg1 + 0x3e0) != 0)
            avcodec_parameters_from_context(*(*(arg1 + 0x3c8) + 0xd0), r14_1)
    
    *(arg1 + 0x3d8) = 0
    void* r8_2 = rdi
    
    if (*(rdi + 0x18) u>= 0x10)
        r8_2 = *rdi
    
    av_dump_format(*(arg1 + 0x3f8), 0, r8_2, 1)
    int32_t rax_11
    
    if ((*(*(arg1 + 0x3f0) + 0x2c) & 1) == 0)
        if (*(rdi + 0x18) u>= 0x10)
            rdi = *rdi
        
        rax_11 = avio_open(*(arg1 + 0x3f8) + 0x20, rdi, 2)
    
    if ((*(*(arg1 + 0x3f0) + 0x2c) & 1) != 0 || rax_11 s>= 0)
        result = avformat_write_header(*(arg1 + 0x3f8), arg1 + 0x408)
        
        if (result.d s>= 0)
            void* r8_3 = *(arg1 + 0x3d0)
            *(arg1 + 0x474) = *(r8_3 + 0x74) << 2
            int32_t rdx_10 = *(r8_3 + 0x78)
            int32_t rcx_25 = *(r8_3 + 0x74)
            result = sws_getContext(rcx_25, rdx_10, 0x1a, zx.q(rcx_25), rdx_10, *(r8_3 + 0x88), 
                0x10, 0, 0, 0)
            *(arg1 + 0x410) = result
    else
        result = sub_1406bc020(&var_48, rax_11)
        int64_t rcx_23 = var_48
        
        if (rcx_23 != 0)
            return sub_140a74f90(rcx_23)

return result
