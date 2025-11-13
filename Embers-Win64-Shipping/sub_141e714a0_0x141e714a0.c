// 函数: sub_141e714a0
// 地址: 0x141e714a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg3
arg1[1] = sub_142470a10()
void* r9 = &arg1[4]
int64_t rdi = 0
arg1[2] = 0
arg1[3] = 0
*(r9 + 0x10) = 0
*(r9 + 0x18) = 0
*(r9 + 0x1c) = 0x80
void* rax_1 = *(r9 + 0x10)

if (rax_1 != 0)
    r9 = rax_1

*r9 = 0
*(r9 + 8) = 0
arg1[8].d = 0xffffffff
*(arg1 + 0x44) = 0
arg1[0xa] = 0
arg1[0xb].d = 0
arg1[0xd] = arg2

if (rsi == 0)
    if (arg2 == 0)
        rsi = 0
    else
        rsi = sub_142437e30(arg2, 0, 1)

arg1[0xe] = rsi
void* rcx_1 = arg1[0xd]
int64_t rax_3

if (rcx_1 == 0)
    rax_3 = 0
else
    rax_3 = sub_142435f50(rcx_1)

arg1[0xf] = rax_3

if (rax_3 == 0)
    void* rcx_2 = data_143f5b298
    
    if (rcx_2 != 0)
        rdi = sub_1423ddb40(rcx_2)
    
    arg1[0xf] = rdi

sub_141e778c0(arg1)
return arg1
