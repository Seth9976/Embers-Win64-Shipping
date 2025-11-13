// 函数: sub_142029ad0
// 地址: 0x142029ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0xb8)

if (rdx == 0 || *(rdx + 0xbc) != data_143f58d48 || rdx == 8)
    *arg2 = 0
    arg2[1] = 0
else
    int64_t r8_1 = *(rdx + 0x248)
    int64_t* rcx_1 = *(rdx + 0x250)
    
    if (rcx_1 != 0)
        *(rcx_1 + 0xc) += 1
    
    int64_t* rax_2 = rcx_1
    
    if (rcx_1 != 0)
        int32_t rax_3 = rcx_1[1].d
        char r9
        
        if (rax_3 != 0)
            r9 = 1
            rcx_1[1].d = rax_3 + 1
        else
            r9 = 0
        
        rax_2 = rcx_1
        
        if (r9 == 0)
            rax_2 = nullptr
    
    if (rax_2 == 0)
        r8_1 = 0
    
    *arg2 = r8_1
    arg2[1] = rax_2
    
    if (rcx_1 != 0)
        int32_t temp0_1 = *(rcx_1 + 0xc)
        *(rcx_1 + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rcx_1 + 8))(rcx_1, 1)

return arg2
