// 函数: sub_1418d9650
// 地址: 0x1418d9650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg3 + 4))
int64_t r14 = sx.q(arg2)
*(arg1 + (rax << 2)) += 1

if (r14.d s>= *(arg1 + 0x38))
    int64_t rdi_1 = sx.q(*(arg1 + 0x38))
    int32_t rdx = (r14 + 1).d
    
    if (rdx s> rdi_1.d)
        *(arg1 + 0x38) = rdx
        int32_t i_1 = rdx - rdi_1.d
        
        if (rdx s> *(arg1 + 0x3c))
            sub_1405a4df0(arg1 + 0x30)
        
        int64_t* rdx_2 = *(arg1 + 0x30) + rdi_1 * 0x18
        
        if (i_1 != 0)
            int32_t i
            
            do
                *rdx_2 = 0
                rdx_2[1] = 0
                rdx_2 = &rdx_2[3]
                i = i_1
                i_1 -= 1
            while (i != 1)
    else if (rdx s< rdi_1.d)
        sub_1418ec240(arg1 + 0x30, rdx, rdi_1.d - rdx, 0)

int64_t rdi_3 = r14 * 0x18
int64_t* rbx_3 = *(arg1 + 0x30) + rdi_3
int64_t rsi = sx.q(rbx_3[1].d)
int32_t rax_2 = (rsi + 1).d
rbx_3[1].d = rax_2

if (rax_2 s> *(rbx_3 + 0xc))
    sub_1405a4df0(rbx_3)

int64_t rax_3 = *rbx_3
int64_t rcx_5 = rsi * 3
*(rax_3 + (rcx_5 << 3)) = *arg3
*(rax_3 + (rcx_5 << 3) + 0x10) = arg3[1].q
uint64_t result = zx.q(*(arg3 + 4))

if (result.d s>= 0)
    if (result.d s<= 3)
        result = *(arg1 + 0x48)
        *(result + rdi_3 + 0x10) += 1
    else if (result.d s> 5)
        if (result.d s<= 8)
            result = *(arg1 + 0x48)
            *(result + rdi_3 + 0x12) += 1
        else if (result.d == 0xa)
            result = *(arg1 + 0x48)
            *(result + rdi_3 + 0x10) += 1

return result
