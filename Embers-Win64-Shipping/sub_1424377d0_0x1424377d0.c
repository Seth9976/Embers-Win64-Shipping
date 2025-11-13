// 函数: sub_1424377d0
// 地址: 0x1424377d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0 && arg4 != 0)
    void* rcx = *(arg3 + 0x130)
    void* rax_1
    
    if (rcx == 0)
        rax_1 = nullptr
    else
        rax_1 = sub_14202aad0(rcx, arg1)
    
    *arg4 = rax_1

int32_t arg_18
sub_142434fb0(&data_143a307b0, &arg_18, arg1)
int64_t rax_2 = sx.q(arg_18)
void* rcx_1

if (rax_2.d == 0xffffffff)
    rcx_1 = nullptr
else
    rcx_1 = data_143a307b0 + rax_2 * 0x28

int64_t* result = rcx_1 + 0x18

if (rcx_1 == 0)
    result = nullptr

if (result == 0)
    return result

void* rcx_2 = *result
*arg2 = *(rcx_2 + 0xb0)
arg2[1].q = *(rcx_2 + 0xc0)
return *result
