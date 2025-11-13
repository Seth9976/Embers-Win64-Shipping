// 函数: sub_141e435a0
// 地址: 0x141e435a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
float arg_18 = arg4
int32_t arg_20 = arg3.d
char r9 = *(arg5 + 0x1c)
int64_t var_38 = 0
int64_t var_30 = 0
sub_141e3e1a0(arg1, &arg_20, &arg_18, r9, arg3, &var_38)
float zmm6_1 = sub_141e13c40(arg6, *(arg2 + 0x99), &var_38, *(arg5 + 0x14))
int64_t rcx_1 = var_38

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t r8_2 = sx.q(arg1[0x18].d)

if (r8_2.d s> 0)
    int64_t rcx_2 = 0
    int32_t* rax_2 = arg1[0x17] + 4
    
    do
        float zmm0_1 = *rax_2
        
        if (zmm6_1 < zmm0_1)
            break
        
        rsi += 1
        zmm6_1 = zmm6_1 - zmm0_1
        rcx_2 += 1
        rax_2 = &rax_2[0xc]
    while (rcx_2 s< r8_2)

void*** rax_3
int64_t r9_1
rax_3, r9_1 = sub_141f88540()
r9_1.b = 1
jump(*(*sub_1405f89a0(rax_3) + 0xb0))
