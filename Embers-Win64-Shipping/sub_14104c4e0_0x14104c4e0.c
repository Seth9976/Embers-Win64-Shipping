// 函数: sub_14104c4e0
// 地址: 0x14104c4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[1])
int32_t arg_8
sub_14104b990(&arg1[6], &arg_8, arg2)
int64_t rax = sx.q(arg_8)
int64_t* rsi = nullptr
void* const rax_3

if (rax.d == 0xffffffff)
    rax_3 = nullptr
else
    rax_3 = rax * 0x30 + arg1[6]

int64_t* rdi = rax_3 + 0x20

if (rax_3 == 0)
    rdi = nullptr

int64_t result

if (rdi != 0)
    result = *rdi
else
    int64_t* rax_4 = j_sub_140a82f30(0xb0)
    
    if (rax_4 != 0)
        rsi = sub_14103f490(rax_4, *arg1, arg2)
    
    arg_8.q = rsi
    sub_14103b320(&arg1[6], arg2, &arg_8)
    result = arg_8.q

if (arg1 != -8)
    LeaveCriticalSection(&arg1[1])

return result
