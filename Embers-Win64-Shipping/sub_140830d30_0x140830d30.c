// 函数: sub_140830d30
// 地址: 0x140830d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rdi = &data_142d40450

if (arg3[1].d != 0)
    *arg3

int64_t* var_48
int64_t** rax = sub_14082fa30(*(arg1 + 0x28), &var_48)
int64_t* r8

if (rax[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax

int16_t* var_58
sub_140a2e390(&var_58, u"%s%s", r8)
int64_t* rcx_2 = var_48

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int32_t var_50

if (var_50 != 0)
    rdi = var_58

int64_t arg_8
sub_140b58260(&arg_8, rdi, 1)
int64_t var_38 = arg_8
int64_t var_30 = data_14396f0c8
int16_t var_28 = data_14396f0d0
int64_t var_20 = 0
int64_t var_18 = 0
int32_t var_26 = 0xffffffff
int32_t* rax_5 = (*(*(arg1 + 0x40) + 0x30))(arg1 + 0x40, &var_38)

if (rax_5 != 0)
    int64_t rax_6 = sx.q(*rax_5)
    
    if (rax_6.d != 0xffffffff)
        int64_t* rax_7 = *(arg1 + 0x60)
        int32_t rax_8 = *(rax_7 + rax_6 + 8)
        *arg2 = *(rax_7 + rax_6)
        arg2[1].d = rax_8

if (var_20 != 0)
    sub_140a74f90(var_20)

int16_t* rcx_7 = var_58

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return arg2
