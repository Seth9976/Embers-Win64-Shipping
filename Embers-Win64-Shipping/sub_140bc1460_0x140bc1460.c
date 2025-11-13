// 函数: sub_140bc1460
// 地址: 0x140bc1460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg2
int32_t rcx

if (rdx != 0)
    rcx = *(rdx + 8)

int64_t* rdx_1

if (rdx == 0 || ((rcx u>> 0x17).b & 1) != 0
        || (((rcx u>> 0x19).b & 1) != 0 && ((arg1[6].d u>> 0x16).b & 1) == 0))
    int64_t arg_8 = 0
    rdx_1 = &arg_8
else
    sub_140bc81e0(arg1, rdx, 1)
    rdx_1 = arg2

(*(*arg1 + 0x150))(arg1, rdx_1, 8)
return arg1
