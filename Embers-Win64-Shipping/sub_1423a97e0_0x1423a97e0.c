// 函数: sub_1423a97e0
// 地址: 0x1423a97e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = 0
int32_t var_40 = 0
sub_141f1b700(arg2, arg3, &var_48)
int64_t* rbx

if (var_40 != 0)
    int64_t rcx_1 = var_48
    char arg_20 = 0
    sub_14239e6f0(rcx_1, var_40, arg_20)
    sub_140865c40(arg1 + 0x168, &arg_20, arg2)
    int64_t rax_1 = sx.q(arg_20.d)
    int64_t rcx_3
    
    if (rax_1.d == 0xffffffff)
        rcx_3 = 0
    else
        rcx_3 = *(arg1 + 0x168) + rax_1 * 0x18
    
    int32_t zmm2_1 = arg2[0x4e].d
    int64_t rax_3 = rcx_3 + 8
    int32_t zmm1_1 = *(arg2 + 0x104)
    int32_t var_38 = arg2[0x20].d
    int32_t zmm0_1 = arg2[0x21].d
    
    if (rcx_3 == 0)
        rax_3 = 0
    
    arg_20.q = rax_3
    int32_t var_34_1 = zmm1_1
    int64_t var_28 = var_48
    int32_t var_30_1 = zmm0_1
    int32_t var_2c_1 = 0x3f800000
    int32_t var_20_1 = var_40
    int32_t var_78_1
    var_78_1.q = &arg_20
    sub_1423a9e00(arg1, arg2, &var_28, 
        sub_1423a8ab0(arg1, &arg2[0x20], 0xffff0000, arg2, zmm2_1, &var_38, 0, 0, 0x7f7fffff), 
        var_78_1)
    rbx.b = 2
else
    rbx.b = 0

int64_t rcx_6 = var_48

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return zx.q(rbx.b)
