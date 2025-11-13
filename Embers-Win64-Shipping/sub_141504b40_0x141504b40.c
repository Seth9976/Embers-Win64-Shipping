// 函数: sub_141504b40
// 地址: 0x141504b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
void**** r14 = nullptr
EnterCriticalSection(&arg1[0x30])
void**** rsi = nullptr
int32_t r15 = 0
void var_28

if (&var_28 != &arg1[0x3a])
    r14 = *(arg1 + 0xe8)
    *(arg1 + 0xe8) = 0
    rsi = r14
    r15 = arg1[0x3c]
    *(arg1 + 0xf0) = 0

if (arg1 != -0xc0)
    LeaveCriticalSection(&arg1[0x30])

void* result = &rsi[sx.q(r15)]
uint64_t rbx_2 = sx.q(r15) << 3 u>> 3

if (rsi u> result)
    rbx_2 = 0

if (rbx_2 != 0)
    do
        result = sub_14150dcd0(*rsi, arg1)
        rdi += 1
        rsi = &rsi[1]
    while (rdi != rbx_2)

if (r14 == 0)
    return result

return sub_140a74f90(r14)
