// 函数: sub_140b4d080
// 地址: 0x140b4d080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_18
int64_t* rdx = &var_18

if ((*(arg1 + 0x28) & 1) == 0)
    int512_t zmm1 = sub_140b63b70(arg2, rdx)
    sub_140a1d9d0(*(arg1 + 0x90), &var_18, zmm1)
else
    int64_t* rcx = *(arg1 + 0x90)
    var_18 = nullptr
    int32_t var_10_1 = 0
    sub_140a1d9d0(rcx, rdx, arg3)
    int16_t* const rdx_1 = &data_142d40450
    
    if (var_10_1 != 0)
        rdx_1 = var_18
    
    void arg_8
    *arg2 = *sub_140b58260(&arg_8, rdx_1, 1)

int16_t* rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return arg1
