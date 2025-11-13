// 函数: sub_140d91fd0
// 地址: 0x140d91fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = __crt_deferred_errno_cache::get(&data_143db7b00)
int16_t* const rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

int64_t* rax_2 = (*(*rax + 0xc0))(rax, rdx, 0)
*arg1 = rax_2

if (rax_2 == 0)
    arg1[1] = 0
    return arg1

int64_t rdx_1 = *rax_2
arg1[1] = (*(rdx_1 + 0x40))(rax_2, rdx_1)
return arg1
