// 函数: sub_140a13360
// 地址: 0x140a13360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
uint64_t var_38 = __security_cookie ^ &var_f8
uint64_t result

if (arg3 u< 3 || arg2 == 0 || *arg2 != 2)
labelid_2:
    result.b = 0
else
    void* rdi_1 = 1
    int32_t i = 0
    void* var_d8
    __builtin_memset(&var_d8, 0, 0x18)
    int64_t rcx = 0
    
    while (true)
        if (rdi_1 u>= arg3)
            goto label_140a13546_2
        
        result = zx.q(*(rdi_1 + arg2))
        rdi_1 += 1
        (&var_d8)[rcx] += result
        
        if (result.b u< 0xff)
            rcx += 1
            
            if (rcx s>= 2)
                break
    
    void* r14_1 = var_d8
    void* var_d0
    int64_t rax_3 = arg3 - var_d0 - r14_1
    void* r13_1 = var_d0 + r14_1
    
    if (rax_3 + r13_1 != arg3)
    labelid_2:
        result.b = 0
    else
        void* var_b8
        memset(&var_b8, 0, 0x78)
        int32_t var_b0_1 = r14_1.d
        var_b8 = rdi_1 + arg2
        int32_t var_ac_1 = 1
        int32_t var_88_1 = var_d0.d
        void* var_90_1 = r14_1 + rdi_1 + arg2
        int32_t var_60_1 = rax_3.d - rdi_1.d
        void* var_68_1 = rdi_1 + r13_1 + arg2
        int64_t rax_9 = j_sub_140a82f30(0x138)
        int64_t rdi_2 = rax_9
        
        if (rax_9 == 0)
            rdi_2 = 0
        else
            memset(rax_9, 0, 0x138)
        
        int64_t rcx_3 = *(arg1 + 8)
        
        if (rcx_3 != rdi_2)
            *(arg1 + 8) = rdi_2
            j_sub_140a74f90(rcx_3)
            rcx_3 = *(arg1 + 8)
        
        vorbis_info_init(rcx_3)
        vorbis_comment_init(&var_d8)
        
        do
            if (vorbis_synthesis_headerin(*(arg1 + 8), &var_d8, &(&var_b8)[sx.q(i) * 5]) != 0)
                vorbis_comment_clear(&var_d8)
                goto label_140a13546_2
            
            i += 1
        while (i s< 3)
        
        vorbis_comment_clear(&var_d8)
        int64_t rdx_3 = *(arg1 + 8)
        
        if (vorbis_synthesis_init(rdx_3 + 0x28, rdx_3).d != 0)
        label_140a13546:
            result.b = 0
        else
            void* rcx_8 = *(arg1 + 8)
            
            if (*(rcx_8 + 4) != *(arg1 + 0x44) || *(rcx_8 + 8) != *(arg1 + 0x40))
            label_140a13546_1:
                result.b = 0
            else if (vorbis_block_init(rcx_8 + 0x28, rcx_8 + 0xa8).d != 0)
            label_140a13546_2:
                result.b = 0
            else
                *(arg1 + 0x44)
                *(arg1 + 0x3c) = divs.dp.d(0:0x1000, *(arg1 + 0x44))
                result.b = 1

__security_check_cookie(var_38 ^ &var_f8)
return result
