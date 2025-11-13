// 函数: sub_142487600
// 地址: 0x142487600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int128_t var_28 = zx.o(0)

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rcx_1 = *(arg2 + 0x20)
int32_t rbx = 0
int64_t r15 = var_28.q
int64_t rax_2
rax_2.b = rcx_1 != 0
int64_t result = rax_2 + rcx_1
*(arg2 + 0x20) = result

if (r15 != 0)
    int32_t rbp_1 = *(arg1 + 0x7a8)
    
    if (rbp_1 s> 0)
        int64_t rdi_1 = 0
        int32_t rsi_1 = 1
        
        do
            int64_t r9_1 = *(arg1 + 0x7a0)
            
            if (*(rdi_1 + r9_1 + 8) == r15)
                int32_t rcx_2 = *(arg1 + 0x7a8)
                int32_t rax_4 = rcx_2 - rbx
                
                if (rax_4 != 1)
                    memmove((sx.q(rbx) << 4) + r9_1, (sx.q(rsi_1) << 4) + r9_1, (rax_4 - 1) << 4)
                    rcx_2 = *(arg1 + 0x7a8)
                
                *(arg1 + 0x7a8) = rcx_2 - 1
                result = sub_1405a5010(arg1 + 0x7a0)
                rbx -= 1
                rsi_1 -= 1
                rdi_1 -= 0x10
                rbp_1 -= 1
            
            rbx += 1
            rsi_1 += 1
            rdi_1 += 0x10
        while (rbx s< rbp_1)

return result
