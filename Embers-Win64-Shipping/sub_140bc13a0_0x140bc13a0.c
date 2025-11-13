// 函数: sub_140bc13a0
// 地址: 0x140bc13a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = (*(arg1 + 0x29) & 0x20) != 0
int32_t arg_8
int32_t* rdx = &arg_8
arg_8 = 0
int32_t arg_10 = 0
int64_t r9
int64_t entry_r9

if (cond:0)
    r9 = sub_140b54140(arg1, rdx, 4, entry_r9, arg3)
else
    r9 = (*(*arg1 + 0x150))(arg1, rdx, 4)
int32_t* rdx_1 = &arg_10
int64_t r9_1

if ((*(arg1 + 0x29) & 0x20) != 0)
    r9_1 = sub_140b54140(arg1, rdx_1, 4, r9, arg3)
else
    r9_1 = (*(*arg1 + 0x150))(arg1, rdx_1, 4)

int32_t arg_18
char* rdx_2 = &arg_18

if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54140(arg1, rdx_2, 4, r9_1, arg3)
else
    (*(*arg1 + 0x150))(arg1, rdx_2, 4)

arg_8 = arg_8
int32_t arg_c = arg_18
*arg2 = arg_8.q
return arg1
