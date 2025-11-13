// 函数: sub_141f556e0
// 地址: 0x141f556e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f31af0(arg1, arg2, arg3)
int64_t var_18

if (sub_141f1d640(arg2) == 0)
    var_18 = 0
    int64_t var_10_1 = 0
else
    var_18.o = *(arg1 + 0xa8)

*(arg2 + 0x1f0) = var_18.o
void* rax_1 = *(arg1 + 0xc0)
int64_t* rsi = arg2[0x4d]
arg2[0x4d] = rax_1

if (rax_1 != 0)
    *(rax_1 + 0x68) += 1

if (rsi != 0)
    rsi[0xd].d -= 1
    
    if (rsi[0xd].d == 1)
        sub_141997f50(rsi)
        sub_141997870(&rsi[9])

void* rcx_3 = *(arg1 + 0xc8)
int64_t* rsi_1 = arg2[0x61]
arg2[0x61] = rcx_3

if (rcx_3 != 0)
    sub_1422b8cc0(rcx_3)

if (rsi_1 != 0)
    sub_1422ce7f0(rsi_1)

bool cond:0 = arg2[0x4d] == 0
*(arg2 + 0x270) = *(arg1 + 0xd0)
*(arg2 + 0x280) = *(arg1 + 0xe0)
*(arg2 + 0x290) = *(arg1 + 0xf0)
*(arg2 + 0x2a0) = *(arg1 + 0x100)
*(arg2 + 0x2b0) = *(arg1 + 0x110)
*(arg2 + 0x2c0) = *(arg1 + 0x120)
*(arg2 + 0x2d0) = *(arg1 + 0x130)
*(arg2 + 0x2e0) = *(arg1 + 0x140)
*(arg2 + 0x2f0) = *(arg1 + 0x150)
arg2[0x60].d = *(arg1 + 0xb8)

if (not(cond:0) && *(arg2 + 0x265) != 0)
    EnterCriticalSection(&data_143f3b838)
    int64_t* arg_8 = arg2
    sub_1409d7d20(&data_143f3b9c0, &arg_8)
    LeaveCriticalSection(&data_143f3b838)

return sub_141ee8490(arg2) __tailcall
