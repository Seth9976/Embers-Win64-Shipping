// 函数: sub_14184dc10
// 地址: 0x14184dc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const r8

if (arg2[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *arg2

int64_t* rcx = arg1[1]
int64_t* arg_8
(*(*rcx + 0x50))(rcx, &arg_8, r8, 0)
int64_t* rdx_1 = arg_8

if (rdx_1 == 0)
    int64_t result
    result.b = 1
    return result

char rax_2 = (*(*arg1 + 0x30))(arg1, rdx_1, arg3)
int64_t* rcx_2 = arg_8

if (rcx_2 != 0)
    int64_t r8_2 = *rcx_2
    (*r8_2)(rcx_2, 1, r8_2)

return zx.q(rax_2)
