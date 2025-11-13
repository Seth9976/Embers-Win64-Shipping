// 函数: sub_141f45220
// 地址: 0x141f45220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x430)

if (result != 0)
    void* rdx_1 = *(result + 0x60)
    
    if (rdx_1 != 0)
        sub_140597df0(arg1 + 0x980, rdx_1 + 0x248)
    
    int64_t* rcx_1 = *(arg1 + 0x650)
    uint8_t var_28 = *(arg1 + 0x71a) u>> 3 & 1
    void* var_20_1 = arg1 + 0x750
    int32_t var_18_1 = *(arg1 + 0x558)
    
    if (rcx_1 != 0)
        sub_141e0ac00(rcx_1, &var_28)
    
    int64_t rdi_1 = 0
    int64_t** rbx_1 = *(arg1 + 0x6c0)
    uint64_t r14_2 = sx.q(*(arg1 + 0x6c8)) << 3 u>> 3
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x6c8))])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            sub_141e0ac00(*rbx_1, &var_28)
            rdi_1 += 1
            rbx_1 = &rbx_1[1]
        while (rdi_1 != r14_2)
    
    int64_t* rcx_3 = *(arg1 + 0x658)
    
    if (rcx_3 != 0)
        sub_141e0ac00(rcx_3, &var_28)
    
    result = *(arg1 + 0x430)
    
    if (result != 0)
        void* rcx_4 = *(result + 0x60)
        
        if (rcx_4 != 0)
            result = zx.q(*(rcx_4 + 0x268))
            *(arg1 + 0x720) = result.w

return result
