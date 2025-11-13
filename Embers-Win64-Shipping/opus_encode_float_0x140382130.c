// 函数: opus_encode_float
// 地址: 0x140382130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx

if (arg1[0x18] != 0x803)
    rcx = arg1[0x1a]
else
    rcx = 0

void* const* (* var_30)(int64_t arg1, void* arg2, int32_t arg3, int32_t arg4, int32_t arg5, 
    int32_t arg6, float arg7) = sub_140380aa0
var_30.d = arg3
int32_t var_38
var_38.q = arg2
return sub_140382210(arg1, arg2, 
    sub_140380320(arg2, arg3, arg1[0x24], arg1[0x19], arg1[0x21], arg1[0x25], rcx, sub_140380aa0, 
        &arg1[0xab6]), 
    arg4, arg5, 0x18, var_38, 0x40380aa0, 0, 0xfffffffe, arg1[0x19], sub_140380aa0)
