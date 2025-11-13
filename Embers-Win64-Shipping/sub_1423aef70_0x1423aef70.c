// 函数: sub_1423aef70
// 地址: 0x1423aef70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(*arg2 + 0x78)
void arg_10
void arg_20
void* rax_1
int32_t rcx
int64_t* rbx
int32_t rbp

if (rsi == 0)
    rbx = nullptr
    rax_1 = &arg_10
    rbp = 0
    rcx = 2
else
    rbx = *(rsi + 0xe8)
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rax_1 = &arg_20
    rbp = 1
    rcx = 0

int64_t* var_28 = rbx
*rax_1 = 0

if (rcx != 0)
    sub_1405d1550(&arg_10)

if (rbp != 0)
    sub_1405d1550(&arg_20)

if (rbx == 0 || *(arg1 + 0x10) == 0)
    rbx.b = 0
else
    sub_1423b6d90(arg1)
    sub_1423cc420(rsi, arg1 + 0x10, *(arg2 + 0xc), arg4, arg3)
    sub_1405d16e0(arg1 + 0x10, nullptr)
    *(arg1 + 8) = 2
    rbx.b = 1
    *(arg1 + 0xc) = 2

sub_1405d1550(&var_28)
return zx.q(rbx.b)
