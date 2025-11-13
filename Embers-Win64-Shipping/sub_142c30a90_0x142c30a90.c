// 函数: sub_142c30a90
// 地址: 0x142c30a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg1 + 8
uint32_t r8_3 = (zx.d(*(arg1 + 5)) << 0x10) + (zx.d(*(arg1 + 6)) << 8) + (zx.d(*(arg1 + 4)) << 0x18)
uint64_t result = zx.q(*(arg1 + 7))

if (r8_3 != neg.d(result.d))
    uint64_t i_1 = zx.q(r8_3 + result.d)
    uint64_t i
    
    do
        int32_t rax_4 = sub_142c30740(rbp, arg2)
        int32_t rdi_1 = *arg3
        int32_t rcx_1 = arg3[1]
        int32_t rdi_2 = rdi_1 + 1
        
        if (rdi_1 + 1 s< 0)
            rdi_2 = 0
        
        int32_t* rdx_3
        
        if (rcx_1 s< 0)
            rdx_3 = &data_144017550
            data_144017550.d = 0
        else
            if (rdi_2 u<= rcx_1)
                goto label_142c30b4f
            
            int32_t rbx_1 = rcx_1
            
            do
                rbx_1 = rbx_1 + 8 + (rbx_1 u>> 1)
            while (rdi_2 u>= rbx_1)
            
            int64_t rax_7
            
            if (rbx_1 s>= 0 && rbx_1 u>= rcx_1 && rbx_1 u< 0x3fffffff)
                rax_7 = sub_140dc0f10(*(arg3 + 8), zx.q(rbx_1) << 2)
            
            if (rbx_1 s< 0 || rbx_1 u< rcx_1 || rbx_1 u>= 0x3fffffff || rax_7 == 0)
                arg3[1] = 0xffffffff
                rdx_3 = &data_144017550
                data_144017550.d = 0
            else
                arg3[1] = rbx_1
                *(arg3 + 8) = rax_7
            label_142c30b4f:
                uint64_t rcx_3 = zx.q(*arg3)
                
                if (rdi_2 u> rcx_3.d)
                    memset(*(arg3 + 8) + (rcx_3 << 2), 0, zx.q(rdi_2 - rcx_3.d) << 2)
                
                int64_t rax_9 = *(arg3 + 8)
                *arg3 = rdi_2
                rdx_3 = rax_9 + (zx.q(rdi_2 - 1) << 2)
        
        *rdx_3 = rax_4
        result = zx.q(*(rbp + 7))
        rbp = rbp + result
            + ((((zx.q(*(rbp + 5)) + (zx.q(*(rbp + 4)) << 8)) << 8) + zx.q(*(rbp + 6))) << 8)
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
