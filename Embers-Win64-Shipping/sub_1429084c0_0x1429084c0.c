// 函数: sub_1429084c0
// 地址: 0x1429084c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t result = sub_14291a950(nullptr, arg1, arg2, arg3, arg4)

if (result == 0)
    return result

if (arg1[2].d == 0)
    return 1

int64_t* (* rax_1)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = sub_1428d8f70

if (arg3[2].d != 0)
    rax_1 = sub_1428d9010

switch (rax_1)
    case sub_1428d8f70
        return sub_1428d8f70(arg1, arg1, arg3) __tailcall
    case sub_1428d9010
        return sub_1428d9010(arg1, arg1, arg3) __tailcall
