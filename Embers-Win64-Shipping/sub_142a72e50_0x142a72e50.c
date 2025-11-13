// 函数: sub_142a72e50
// 地址: 0x142a72e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int32_t rdi = arg2

if (arg3 u> 0xb)
    rdi += sub_142acca60(_mm_cvtepi32_pd(zx.q(arg3)), 0xc, &arg_18)

int32_t rbx_1 = rdi & 0x80000003

if (rbx_1 s< 0)
    rbx_1 = ((rbx_1 - 1) | 0xfffffffc) + 1

int64_t rbp
rbp.b = rbx_1 == 0
int64_t rsi_1 = (sx.q(rdi) - 1) * 0x16d + 0x1a444f + sub_142accb50(sx.q(rdi) - 1, 4)
int64_t rax_2
rax_2.b = rdi s>= *(arg1 + 0x280)
bool cond:1 = *(arg1 + 0x289) == 0
*(arg1 + 0x288) = rax_2.b

if (not(cond:1))
    rax_2.b = rax_2.b == 0
    *(arg1 + 0x288) = rax_2.b

if (*(arg1 + 0x288) != 0)
    int32_t rdx_1
    int32_t rdx_5
    
    if (rbx_1 == 0)
        int32_t temp0_2
        int32_t temp1_1
        temp0_2:temp1_1 = muls.dp.d(0x51eb851f, rdi)
        rdx_1 = temp0_2 s>> 5
        
        if (rdi == rdi s/ 0x64 * 0x64)
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = muls.dp.d(0x51eb851f, rdi)
            rdx_5 = temp2_1 s>> 7
    
    if (rbx_1 != 0 ||
            (rdi == (rdx_1 + (rdx_1 u>> 0x1f)) * 0x64 && rdi != (rdx_5 + (rdx_5 u>> 0x1f)) * 0x190))
        rbp.b = 0
    else
        rbp.b = 1
    
    int32_t rbx_4 = 2 - sub_142accb50(sx.q(rdi) - 1, 0x64)
    rsi_1 += sx.q(sub_142accb50(sx.q(rdi) - 1, 0x190) + rbx_4)

int64_t rax_11 = sx.q(arg_18)

if (rax_11.d == 0)
    return zx.q(rsi_1.d)

if (rbp.b == 0)
    return sx.q(*((rax_11 << 1) + 0x1436405e0)) + rsi_1

return sx.q(*((rax_11 << 1) + 0x1436405f8)) + rsi_1
