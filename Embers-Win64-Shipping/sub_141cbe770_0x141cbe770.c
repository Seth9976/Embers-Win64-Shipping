// 函数: sub_141cbe770
// 地址: 0x141cbe770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1
sub_140d15db0(arg1, arg2)
result[5] = 0
result[6] = 0
result[7] = 0
result[8] = 0
*result = &data_143214208
result[0xa] = 0
result[0xb] = 0
__builtin_memset(&result[0xc], 0, 0x40)
result[0x15] = 0
result[0x16] = 0
int64_t var_18
int64_t* rax = sub_140cdcc40(result, &var_18)

if (&result[5] != rax)
    int64_t rcx_1 = result[5]
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    result[5] = *rax
    *rax = 0
    result[6].d = rax[1].d
    *(result + 0x34) = *(rax + 0xc)
    rax[1] = 0

int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

result[9].w = 0x101
*(result + 0x4a) = 0
var_18 = 0
int64_t var_10 = 0
sub_1405947f0(&var_18, 4)
int32_t r14_1 = var_10:4.d
int32_t rbp = var_10.d + 4
var_10.d = rbp

if (rbp s> r14_1)
    sub_140594770(&var_18)
    r14_1 = var_10:4.d
    rbp = var_10.d

int64_t rsi_1 = var_18
sub_1405a7220(rsi_1, 4, ""',", 4, 0x3f)

if (&result[0xa] != &var_18)
    int64_t rcx_7 = result[0xa]
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    result[0xa] = rsi_1
    result[0xb].d = rbp
    *(result + 0x5c) = r14_1
else if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

result[0x14].d = 6
*(result + 0xa4) = 0x10
return result
