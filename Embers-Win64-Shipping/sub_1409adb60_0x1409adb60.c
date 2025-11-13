// 函数: sub_1409adb60
// 地址: 0x1409adb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
void* rsi = arg2
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *(arg2 + 0x18) = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2 + 0x18, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg2 + 0x18, 4)

if ((arg1[5].b & 1) != 0)
    *(rsi + 0x1c) = *(rsi + 0x18)
    sub_1405a4410(rsi, 0)

void* rcx_3 = *(rsi + 0x10)
int64_t r9 = *arg1
uint64_t r8_4 = zx.q(*(rsi + 0x18) + 0x1f) u>> 5 << 2

if (rcx_3 != 0)
    rsi = rcx_3

(*(r9 + 0x150))(arg1, rsi, r8_4, r9)
return arg1
