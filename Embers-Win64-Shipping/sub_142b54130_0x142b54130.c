// 函数: sub_142b54130
// 地址: 0x142b54130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_20
void* var_28 = &arg_20
void var_18
void* var_30 = &var_18
int32_t var_14
int32_t arg_8
int32_t arg_10
int32_t arg_18
sub_142accb70(j_sub_142a4bbc0(), &arg_10, &arg_8, &arg_18, &var_14)
int32_t rdx_2 = arg1[1].d - 1
uint64_t result = zx.q(arg_10 << 0x10)
int32_t i = (arg_8 + 1) << 8 | result.d | arg_18

if (rdx_2 s> 0)
    result = *arg1
    int64_t rcx = sx.q(rdx_2)
    int64_t r8_1 = result + (rcx << 2)
    
    while (i s< *r8_1)
        rdx_2 -= 1
        rcx -= 1
        r8_1 -= 4
        
        if (rcx s<= 0)
            break

*(arg1 + 0xc) = rdx_2
return result
