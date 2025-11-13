// 函数: sub_1405f8f00
// 地址: 0x1405f8f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t var_28 = -2
arg_10 = arg1 + 0x10
EnterCriticalSection(arg1 + 0x10)
int64_t* rax = 0xd0

if (arg3 != 0)
    rax = 0xe0

int64_t* arg_8 = arg2
*arg2 = 0
int64_t rdi_1 = sx.q(*(rax + arg1 + 8))
int64_t rsi_1 = *(rax + arg1)
arg2[1].d = rdi_1.d

if (rdi_1.d != 0)
    sub_1405a4be0(arg2, rdi_1.d, 0)
    memcpy(*arg2, rsi_1, (rdi_1 << 4).d)
else
    *(arg2 + 0xc) = 0

if (arg1 != -0x10)
    LeaveCriticalSection(arg1 + 0x10)

return arg2
