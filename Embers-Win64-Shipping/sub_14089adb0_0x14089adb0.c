// 函数: sub_14089adb0
// 地址: 0x14089adb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143ceaef0
char r8 = rax

if (rax == 0)
    r8 = 1

bool cond:1 = data_143ceab30 == 0
data_143ceaef0 = r8

if (not(cond:1))
    return 0xffffffff

char rcx_1 = (sbb.d(arg1.d, arg1.d, arg2 != 0)).b & 7

if (arg2 == 0)
    arg2 = arg1

int32_t rax_4 = sub_14089b370(nullptr, 0, arg1, arg2, rcx_1, 1)
int32_t rax_5 = neg.d(rax_4)
return zx.q(neg.d(sbb.d(rax_5, rax_5, rax_4 != 0)) - 1)
