// 函数: sub_14093bef0
// 地址: 0x14093bef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t arg_8
sub_14093f560(arg1 + 8, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rax_3

if (rax.d == 0xffffffff)
    rax_3 = nullptr
else
    rax_3 = rax * 0x30 + *(arg1 + 8)

int32_t* rbx = rax_3 + 8
int32_t rax_4 = arg3[1].d

if (rax_3 == 0)
    rbx = nullptr

if (rbx != 0)
    if (rax_4 == 0)
        int16_t* rax_6 = sub_140943f20(rbx, &data_142d40450)
        rbx[6] = arg4
        return rax_6
    
    int16_t* rax_5 = sub_140943f20(rbx, *arg3)
    rbx[6] = arg4
    return rax_5

int32_t var_38 = 0
int64_t var_30 = 0
int64_t var_28 = 0
int16_t* rdx_2

if (rax_4 == 0)
    rdx_2 = &data_142d40450
else
    rdx_2 = *arg3

sub_140943f20(&var_38, rdx_2)
int32_t var_20 = arg4
int64_t* var_48 = &arg_10
int32_t var_1c = 0xffffffff
int32_t* var_40 = &var_38
sub_14093ba30(arg1 + 8, &arg_8, &var_48, nullptr)
int32_t rax_7 = var_38

if (rax_7 != 6 && rax_7 != 8 && rax_7 != 0xa)
    return rax_7

return j_sub_140a74f90(var_30)
