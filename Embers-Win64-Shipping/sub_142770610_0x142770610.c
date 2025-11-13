// 函数: sub_142770610
// 地址: 0x142770610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x10) = 0
char result = sub_140af2fd0(data_143ddb400, u"Voice", u"bEnabled", arg1 + 0x10, &data_143de5780)

if (*(arg1 + 0x10) != 0 && data_143f879f0 == 0)
    int64_t* rax = j_sub_140a82f30(0xa0)
    int64_t* rdx_1 = rax
    
    if (rax == 0)
        rdx_1 = nullptr
    else
        __builtin_memset(rax, 0, 0x11)
        int64_t* rcx_1 = &rax[0xc]
        __builtin_memset(&rax[3], 0, 0x28)
        rax[0xa] = 0
        rax[0xb] = 0
        rcx_1[2] = 0
        rcx_1[3].d = 0
        *(rcx_1 + 0x1c) = 0x80
        int64_t* rax_1 = rcx_1[2]
        
        if (rax_1 != 0)
            rcx_1 = rax_1
        
        *rcx_1 = 0
        rcx_1[1] = 0
        rdx_1[0x10].d = 0xffffffff
        *(rdx_1 + 0x84) = 0
        rdx_1[0x12] = 0
        rdx_1[0x13].d = 0
    
    data_143f879f0 = rdx_1
    result = sub_142772b10(rdx_1)
    
    if (result == 0)
        result = sub_142771a10()
    
    if (data_143f879f0 == 0)
        return sub_142771a10() __tailcall

return result
