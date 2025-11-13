// 函数: sub_142363ec0
// 地址: 0x142363ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
*arg2 = 0
arg2[1] = 0
(*(*arg1 + 0x288))()
int16_t* var_18
int32_t var_10

if (not(arg3.d f>= 10000f))
    sub_140a2e390(&var_18, u"%3.2fs", fconvert.d(arg3.d))
    
    if (arg2 == &var_18)
        int16_t* rcx_2 = var_18
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
    else
        int64_t rcx_1 = *arg2
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        *arg2 = var_18
        arg2[1].d = var_10
        int32_t var_c
        *(arg2 + 0xc) = var_c
else if (*arg2 != u"Forever")
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 8)
        sub_1405947f0(arg2, 8)
        rdi = arg2[1].d
    
    arg2[1].d = rdi + 8
    
    if (rdi + 8 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    **arg2 = *u"Forever"

sub_140a20ba0(arg2, &data_142e70f50, 2)
int64_t arg_8 = *((*(*arg1 + 0x2c8))(arg1) + 0x18)
sub_140b63b70(&arg_8, &var_18)
int16_t* const rdx_2 = &data_142d40450
int64_t r8_2 = -1

if (var_10 != 0)
    rdx_2 = var_18

do
    r8_2 += 1
while (rdx_2[r8_2] != 0)

sub_140a20ba0(arg2, rdx_2, r8_2.d)
int16_t* rcx_10 = var_18

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

sub_140a20ba0(arg2, &data_142d84a20, 1)
return arg2
