// 函数: sub_1429873f0
// 地址: 0x1429873f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg1 + 0x58)
*(arg1 + 0x58) = 0

if (rbp == 0)
    int64_t* rcx = *(arg1 + 0x50)
    rbp = (*(*rcx + 0x10))(rcx)

*(*(arg2 + 0x58) + (sx.q(divs.dp.d(sx.q(*(arg2 + 0x38) - *(arg2 + 0x4c)), *(arg2 + 0xe0))) << 3)) =
    rbp
char arg_18
char arg_19
char arg_1a
char arg_1b

if (*(arg2 + 0x18) != 0)
    int32_t rdx_2 = *(arg2 + 0xf0)
    int64_t* rcx_2 = *(arg1 + 0x50)
    arg_19 = (rdx_2 s>> 8).b
    arg_18 = rdx_2.b
    arg_1a = (rdx_2 s>> 0x10).b
    arg_1b = (rdx_2 s>> 0x18).b
    (*(*rcx_2 + 8))(rcx_2, &arg_18, 4)

int64_t* rcx_3 = *(arg1 + 0x50)
arg_18 = arg3.b
arg_19 = (arg3 s>> 8).b
arg_1a = (arg3 s>> 0x10).b
arg_1b = (arg3 s>> 0x18).b
(*(*rcx_3 + 8))(rcx_3, &arg_18, 4)
int32_t arg_28
int64_t rbx_2 = sx.q(arg_28)
int64_t* rcx_4 = *(arg1 + 0x50)
arg_28:1.b = (rbx_2.d s>> 8).b
arg_28:2.b = (rbx_2.d s>> 0x10).b
arg_28:3.b = (rbx_2.d s>> 0x18).b
arg_28.b = rbx_2.b
(*(*rcx_4 + 8))(rcx_4, &arg_28, 4)
int64_t* rcx_5 = *(arg1 + 0x50)
(*(*rcx_5 + 8))(rcx_5, arg4, zx.q(rbx_2.d))
int64_t result = rbx_2 + 8 + rbp
*(arg1 + 0x58) = result

if (*(arg2 + 0x18) != 0)
    result += 4
    *(arg1 + 0x58) = result

return result
