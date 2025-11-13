// 函数: sub_14212f920
// 地址: 0x14212f920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = 0x31

if (data_143f56360 != 0)
    void* rax_1 = *(arg1 + 0x28)
    uint32_t rcx
    
    if (rax_1 == 0)
        rcx = 0x31
    else
        rcx = zx.d(*(rax_1 + 0x58))
    
    if (rcx == arg2)
        int64_t rcx_1 = *(arg1 + 0x10)
        
        if (rcx_1 != 0)
            sub_1419c69c0(rcx_1)

EnterCriticalSection(&data_143f4ab20)
void* rdi = *(arg1 + 0x28)
uint64_t rax_2

if (rdi == 0)
    rax_2 = 0x31
else
    rax_2 = zx.q(*(rdi + 0x58))

int32_t arg_8
sub_1421244c0(rax_2 * 0x50 + &data_143f4ab50, &arg_8, arg1 + 0x40)
int64_t rax_3 = sx.q(arg_8)
int64_t rax_4

if (rax_3.d != 0xffffffff)
    rax_4 = rax_3 * 0x38

if (rax_3.d == 0xffffffff || rax_4 == neg.q(*(rax_2 * 0x50 + &data_143f4ab50))
        || *(rax_4 + *(rax_2 * 0x50 + &data_143f4ab50) + 0x28) == 0)
    arg_8.q = arg1
    
    if (rdi != 0)
        rsi = zx.q(*(rdi + 0x58))
    
    sub_142117d30(rsi * 0x50 + &data_143f4ab50, arg1 + 0x40, &arg_8)
    *(arg1 + 0x7c) |= 1

return LeaveCriticalSection(&data_143f4ab20) __tailcall
