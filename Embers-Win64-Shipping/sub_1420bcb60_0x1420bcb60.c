// 函数: sub_1420bcb60
// 地址: 0x1420bcb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38
int32_t var_28
int32_t rcx_2
int512_t result
rcx_2, result = sub_141a1d730(arg1 + 0x60, &var_28, 
    sub_141a1d730(arg1 + 0x48, &var_38, arg3, &data_143dbb1f8), &data_143dbb1f8)
int32_t r10 = *(arg1 + 0x98)
int32_t rdx_3 = r10 & 8

if (arg2 == neg.d(sbb.d(rcx_2, rcx_2, rdx_3 != 0)) - 1)
    result.o = var_38
    return result

int32_t r8 = 1
int32_t rax_2 = 1

if (rdx_3 == 0)
    rax_2 = -1

if (arg2 == rax_2)
    int32_t var_34
    result.o = var_34
    return result

int32_t rcx_6 = 2
int32_t rax_3 = 2

if (rdx_3 == 0)
    rax_3 = -1

if (arg2 == rax_3)
    int32_t var_30
    result.o = var_30
    return result

int32_t rax_5 = r10 & 0x11
int32_t r9

if (rax_5 != 0x10)
    r9 = -1
    rdx_3 = r10 & 8
else if (rdx_3 == 0)
    r9 = 0
else
    r9 = rax_5 - 0xd

if (arg2 == r9)
    result.o = var_28
    return result

if (rax_5 != 0x10)
    r8 = -1
else if (rdx_3 != 0)
    r8 = 4

if (arg2 == r8)
    int32_t var_24
    result.o = var_24
    return result

if (rax_5 != 0x10)
    rcx_6 = -1
else if (rdx_3 != 0)
    rcx_6 = 5

if (arg2 != rcx_6)
    result.o = zx.o(0)
    return result

int32_t var_20
result.o = var_20
return result
