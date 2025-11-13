// 函数: sub_1418c8dd0
// 地址: 0x1418c8dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143efb2d0)
int32_t r8 = *(arg1 + 0x24)
int32_t r10 = arg1[8].d

if (arg3 u>= r8)
    r8 = arg3

int64_t result = 0
int32_t r9 = 0

if (r10 s> 0)
    int32_t* r11_1 = arg1[7]
    int32_t* rax_1 = r11_1
    
    do
        int32_t rsi_1 = *rax_1
        int32_t rdi_3 = (r8 - 1 + rsi_1) & neg.d(r8)
        int32_t rbx_3 = rdi_3 - rsi_1 + arg2
        
        if (rbx_3 u<= rax_1[1])
            int64_t rax_2 = sx.q(r9)
            void* rcx_2 = &r11_1[rax_2 * 2]
            int32_t rax_3 = r11_1[rax_2 * 2 + 1]
            
            if (rbx_3 u>= rax_3)
                int32_t rdx = r10
                int32_t rax_6 = r10 - r9
                
                if (rax_6 != 1)
                    memmove(rcx_2, &r11_1[sx.q(r9 + 1) * 2], (rax_6 - 1) << 3)
                    rdx = arg1[8].d
                
                arg1[8].d = rdx - 1
            else
                *rcx_2 += rbx_3
                *(rcx_2 + 4) = rax_3 - rbx_3
            
            arg1[6] += zx.q(rbx_3)
            int64_t result_1 = (*(*arg1 + 8))(arg1, zx.q(arg2), zx.q(rdi_3), zx.q(rbx_3), rsi_1)
            int64_t rbx_4 = sx.q(arg1[0xa].d)
            result = result_1
            int32_t rax_12 = (rbx_4 + 1).d
            arg1[0xa].d = rax_12
            
            if (rax_12 s> *(arg1 + 0x54))
                sub_1405a4d70(&arg1[9])
            
            *(arg1[9] + (rbx_4 << 3)) = result
            break
        
        r9 += 1
        rax_1 = &rax_1[2]
    while (r9 s< r10)

LeaveCriticalSection(&data_143efb2d0)
return result
