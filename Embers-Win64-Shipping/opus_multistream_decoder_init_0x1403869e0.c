// 函数: opus_multistream_decoder_init
// 地址: 0x1403869e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 - 1 u<= 0xfe && arg5 s<= arg4 && arg4 + arg5 s<= 0xff && arg4 s>= 1 && arg5 s>= 0)
    int32_t i_1 = 0
    *arg1 = arg3
    arg1[1] = arg4
    arg1[2] = arg5
    int32_t i = 0
    
    if (arg3 s> 0)
        void* rcx_1 = &arg1[3]
        
        do
            char rax_2 = *(arg6 - arg1 + rcx_1 - 0xc)
            i += 1
            rcx_1 += 1
            *(rcx_1 - 1) = rax_2
        while (i s< *arg1)
    
    if (sub_14038ad30(arg1) == 0)
        return 0xffffffff
    
    void* rdi = &arg1[0x44]
    int32_t rax_5 = opus_decoder_get_size(2)
    int32_t rax_6 = opus_decoder_get_size(1)
    int32_t result
    
    if (arg1[2] s> 0)
        do
            result = opus_decoder_init(rdi, arg2, 2)
            
            if (result != 0)
                return result
            
            i_1 += 1
            rdi += sx.q(rax_5 + 7) & 0xfffffffffffffff8
        while (i_1 s< arg1[2])
    
    if (i_1 s>= arg1[1])
        return 0
    
    while (true)
        result = opus_decoder_init(rdi, arg2, 1)
        
        if (result != 0)
            return result
        
        i_1 += 1
        rdi += sx.q(rax_6 + 7) & 0xfffffffffffffff8
        
        if (i_1 s>= arg1[1])
            return 0

return 0xffffffff
