// 函数: sub_141d1f010
// 地址: 0x141d1f010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x60))(arg2)
(*(*arg1 + 0x60))(arg1)
int32_t i_3 = (*(*arg2 + 0x48))(arg2)
int64_t r8 = *arg1
int64_t i_2 = sx.q(i_3)
int64_t result = (*r8)(arg1, zx.q(i_2.d), r8)
int64_t i_1 = i_2

if (i_2.d s> 0)
    int64_t rdi_1 = 0
    int64_t i
    
    do
        int64_t* rcx_5 = arg2[1] + rdi_1
        int64_t* rbx_1 = arg1[1] + rdi_1
        
        if (rbx_1 != rcx_5)
            int32_t rsi_1 = rcx_5[1].d
            int64_t r14_1 = *rcx_5
            int32_t r8_1 = *(rbx_1 + 0xc)
            rbx_1[1].d = rsi_1
            
            if (rsi_1 != 0 || r8_1 != 0)
                sub_1405a4c70(rbx_1, rsi_1, r8_1)
                result = memcpy(*rbx_1, r14_1, rsi_1 * 2)
            else
                *(rbx_1 + 0xc) = 0
        
        rdi_1 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
