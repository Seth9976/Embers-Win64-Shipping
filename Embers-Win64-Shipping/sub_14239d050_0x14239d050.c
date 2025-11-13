// 函数: sub_14239d050
// 地址: 0x14239d050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    *(arg1 + 0xc0) = arg2
    *(arg1 + 0x528) = arg2
    
    if (*(arg1 + 0x52c) s<= 0xffffffff)
        arg5 = sub_1405dadb0(arg1 + 0x520, arg2)

int64_t rbp = sx.q(*(arg1 + 0xc0))
uint64_t result = zx.q(divs.dp.d(sx.q((arg2 + 1) * *(arg1 + 0x18)), arg3))
int64_t r12 = sx.q(result.d)

if (rbp s< r12)
    int64_t r14_1 = rbp * 0xd8
    int64_t i_1 = r12 - rbp
    int64_t i
    
    do
        int64_t* rdi_2 = *(arg1 + 0x10) + r14_1
        
        if (*rdi_2 != 0)
            uint32_t rcx_2 = zx.d(rdi_2[0x16].b)
            void* rdx_2
            uint64_t r8
            
            if (rcx_2 == 0)
                rdx_2 = arg1 + 0xc8
                r8 = 0x31
            else if (rcx_2 == 1)
                rdx_2 = *(arg1 + 0x190)
                r8 = zx.q(*(arg1 + 0x198))
            else if (rcx_2 == 2)
                rdx_2 = *(arg1 + 0x1a0)
                r8 = zx.q(*(arg1 + 0x1a8))
            else
                rdx_2 = nullptr
                r8 = 0xffffffff
            
            result, arg5 = sub_1423b7af0(rdi_2, rdx_2, r8, arg1 + 0x1b0, arg5, arg4)
            
            if ((*(rdi_2 + 0xb4) & 0x20) != 0)
                int64_t rsi_1 = sx.q(*(arg1 + 0x528))
                int32_t rax_3 = (rsi_1 + 1).d
                *(arg1 + 0x528) = rax_3
                
                if (rax_3 s> *(arg1 + 0x52c))
                    arg5 = sub_1405a4cf0(arg1 + 0x520)
                
                result = *(arg1 + 0x520)
                *(result + (rsi_1 << 2)) = rbp.d
        
        rbp = zx.q(rbp.d + 1)
        r14_1 += 0xd8
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0xc0) = r12.d
return result
