// 函数: sub_140cdd710
// 地址: 0x140cdd710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t var_38
int64_t var_28
int64_t var_18
int64_t* rcx_5
int32_t rbx

if (not(test_bit(zx.q(*(arg1 + 0x40)), 0x1d)))
    sub_140b63b70(arg1 + 0x28, &var_18)
    rcx_5 = &var_18
    rbx = 4
else
    int32_t rcx_1 = sub_140b63b70(arg1 + 0x28, &var_38)
    int32_t var_30
    int32_t r8_1 = var_30
    int64_t var_48 = var_38
    var_38 = 0
    var_30.q = 0
    int32_t rdx_2 = sbb.d(rcx_1, rcx_1, r8_1 != 0) + 0xc + r8_1
    int32_t var_2c
    
    if (rdx_2 s> var_2c)
        sub_1405947f0(&var_48, rdx_2)
    
    sub_140a20ba0(&var_48, u"_DEPRECATED", 0xb)
    rcx_5 = &var_28
    var_28 = var_48
    rbx = 3
    int32_t var_20_1 = r8_1
    int32_t var_1c_1 = var_2c

*arg2 = *rcx_5
*rcx_5 = 0
arg2[1].d = rcx_5[1].d
*(arg2 + 0xc) = *(rcx_5 + 0xc)
rcx_5[1] = 0

if ((rbx.b & 4) != 0)
    int64_t rcx_6 = var_18
    rbx &= 0xfffffffb
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

if ((rbx.b & 2) != 0)
    int64_t rcx_7 = var_28
    rbx &= 0xfffffffd
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

if ((rbx.b & 1) != 0)
    int64_t rcx_8 = var_38
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

return arg2
