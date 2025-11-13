// 函数: sub_142ae7a10
// 地址: 0x142ae7a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t rsi = *(arg1 + 8)
void* r10 = arg2

if (rsi != 0)
    while (true)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rsi + rdi)
        int64_t rbp_1 = sx.q((temp1_1 - temp0_1) s>> 1)
        
        if (arg3(*(*(arg1 + 0x10) + (rbp_1 << 3)), r10) s<= 0)
            rdi = (rbp_1 + 1).d
        else
            rsi = rbp_1.d
        
        if (rdi == rsi)
            break
        
        r10 = arg2

void* result = sub_142ae7310(arg1, *(arg1 + 8) + 1, arg4)

if (result.b != 0)
    int64_t rax_6 = sx.q(*(arg1 + 8))
    int64_t r8_1 = sx.q(rdi)
    
    while (rax_6 s> r8_1)
        int64_t* rdx_4 = *(arg1 + 0x10) + (rax_6 << 3)
        rax_6 -= 1
        *rdx_4 = rdx_4[-1]
    
    result = arg2
    *(*(arg1 + 0x10) + (r8_1 << 3)) = result
    *(arg1 + 8) += 1

return result
