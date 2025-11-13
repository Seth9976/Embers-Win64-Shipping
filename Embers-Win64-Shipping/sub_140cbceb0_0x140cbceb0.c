// 函数: sub_140cbceb0
// 地址: 0x140cbceb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_1439a9e58)
int128_t var_18
int128_t zmm0

if (arg2 == data_1439a9e80)
    zmm0 = data_1439a9e88.o
else
    data_1439a9e80 = arg2
    int32_t arg_8
    sub_1405ba560(&data_1439a9e08, &arg_8, arg2)
    int64_t rax_1 = sx.q(arg_8)
    void* const rcx_2
    
    if (rax_1.d == 0xffffffff)
        rcx_2 = nullptr
    else
        rcx_2 = (rax_1 << 5) + data_1439a9e08
    
    int128_t* rax_2 = rcx_2 + 8
    
    if (rcx_2 == 0)
        rax_2 = nullptr
    
    if (rax_2 == 0)
        var_18.q = 0
        var_18:8.q = 0
        zmm0 = var_18
        data_1439a9e88.o = zmm0
    else
        zmm0 = *rax_2
        data_1439a9e88.o = zmm0

var_18 = zmm0
LeaveCriticalSection(&data_1439a9e58)
*arg1 = var_18

if ((*(arg1 + 0xc) | *(arg1 + 8) | *(arg1 + 4) | *arg1) == 0)
    *arg1 = *sub_140b214c0(&var_18)
    sub_140ca9950(&data_1439a9e00, arg2, arg1)
    sub_140d25500(arg2)

return arg1
