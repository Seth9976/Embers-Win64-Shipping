// 函数: sub_1426fb510
// 地址: 0x1426fb510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
int32_t arg_10 = 0
float arg_18 = 0f
(*(rax + 0x20))(arg2, &arg_10, &arg_18)
void var_28

if (arg3 + 8 != &var_28)
    *(arg3 + 8) = 0
    int64_t* rbx_1 = *(arg3 + 0x10)
    
    if (rbx_1 != 0)
        *(arg3 + 0x10) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

__builtin_memset(arg3, 0, 0x18)
__builtin_memset(arg3 + 0x20, 0, 0x14)
*(arg3 + 0x38) = 0
*(arg3 + 0x40) = 0
float zmm1 = arg_18 * 2f
*(arg3 + 0x34) = 0x3f800000
*(arg3 + 0x18) = arg_10
*(arg3 + 0x1c) = zmm1
*(arg3 + 0x38) = (*(*arg2 + 0x30))(arg2)
*(arg3 + 0x3c) = (*(*arg2 + 0x38))(arg2)
*(arg3 + 0x40) = (*(*arg2 + 0x40))(arg2)
void* rax_11 = (*(*arg2 + 8))(arg2)
int64_t rax_12 = sub_142737e30()
void* rcx_7 = *(rax_11 + 0x10)
uint64_t result = rax_12 + 0x30
int64_t rdx_1 = sx.q(*(result + 8))

if (rdx_1.d s<= *(rcx_7 + 0x38) && *(*(rcx_7 + 0x30) + (rdx_1 << 3)) == result)
    *(arg3 + 0x28) = *(rax_11 + 0x280)
    *(arg3 + 0x2c) = *(rax_11 + 0x284)
    *(arg3 + 0x30) = *(rax_11 + 0x27c)
    *(arg3 + 0x46) = *(rax_11 + 0x277)
    result = zx.q(*(rax_11 + 0x288))
    *(arg3 + 0x34) = result.d
    
    if (*(rax_11 + 0x278) == 0)
        uint8_t rcx_9 = *(rax_11 + 0x274)
        uint8_t rax_17 = rcx_9 u>> 5
        char result_1
        
        if ((rcx_9 & 0x40) == 0 || (rax_17 & 1) != 0)
            result_1 = 0
        else
            result_1 = 1
        
        rax_17 &= 1
        char r10_1
        
        if (rcx_9 s>= 0 || rax_17 != 0)
            r10_1 = 0
        else
            r10_1 = 1
        
        char rdx_2 = *(rax_11 + 0x275)
        char r9_1
        
        if ((rdx_2 & 1) == 0 || rax_17 != 0)
            r9_1 = 0
        else
            r9_1 = 1
        
        char r8_1
        
        if ((rdx_2 & 4) == 0 || rax_17 != 0)
            r8_1 = 0
        else
            r8_1 = 1
        
        uint16_t rax_20 = zx.w(rdx_2 u>> 3) & 1
        result = zx.q(result_1)
        *(arg3 + 0x44) = (((zx.w(rdx_2 u>> 4) & 1) * 2) | rax_20) << 6
            | (sbb.w(rax_20, rax_20, (rdx_2 & 2) != 0) & 0x28) | zx.w(r9_1) << 2 | zx.w(r8_1) << 4
            | (zx.w(r10_1) * 2) | result.w

return result
