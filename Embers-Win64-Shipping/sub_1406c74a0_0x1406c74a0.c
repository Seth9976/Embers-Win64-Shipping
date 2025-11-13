// 函数: sub_1406c74a0
// 地址: 0x1406c74a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
int32_t var_78 = 0
void var_20
int64_t rax_1 = *sub_140b58170(&var_20, "FFMPEGMedia", 1)
j_sub_140b3db50()
int64_t* rax_2 = sub_140b407e0(&data_143de7d78, rax_1)
int32_t var_78_1
int64_t* var_60
int64_t var_30
void var_18

if (rax_2 == 0)
    var_78_1 = 2
    var_30 = 0
    void var_28
    var_28.q = 0
    var_60 = &var_30
else
    var_78_1 = 1
    var_60 = (*(*rax_2 + 0x40))(rax_2, &var_18, arg3)

*arg2 = *var_60
arg2[1] = var_60[1]
var_60[1] = 0
*var_60 = 0

if ((var_78_1 & 2) != 0)
    var_78_1 &= 0xfffffffd
    sub_1406c61c0(&var_30)

if ((var_78_1 & 1) != 0)
    int32_t var_78_2 = var_78_1 & 0xfffffffe
    sub_1406c61c0(&var_18)

return arg2
