// 函数: sub_1423e9720
// 地址: 0x1423e9720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = *(arg2 + 0x18)
int16_t* var_18
sub_140b63b70(&arg_10, &var_18)
int16_t* const rdx_1 = &data_142d40450
int32_t var_10

if (var_10 != 0)
    rdx_1 = var_18

uint64_t arg_8
sub_140b58260(&arg_8, rdx_1, 1)
int32_t var_28 = 0

if (sub_140d2f0c0(nullptr, arg3, arg_8, 0, 0, 0) != 0)
    int64_t i
    
    do
        int16_t* rdx_3 = &data_142d40450
        
        if (var_10 != 0)
            rdx_3 = var_18
        
        int32_t var_28_1 = 0
        uint64_t r8_3 = *sub_140b581d0(&arg_10, rdx_3, arg_8:4.d + 1, 1)
        arg_8 = r8_3
        i = sub_140d2f0c0(nullptr, arg3, r8_3, 0, 0, 0)
    while (i != 0)

sub_140b63b70(&arg_8, arg1)
int16_t* rcx_4 = var_18

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return arg1
