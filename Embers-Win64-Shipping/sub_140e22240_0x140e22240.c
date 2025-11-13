// 函数: sub_140e22240
// 地址: 0x140e22240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbp = nullptr
int32_t rsi = 0
int32_t rax = 0
int16_t* var_28 = nullptr
int64_t var_20 = 0

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        rax = var_20:4.d
        rsi = var_20.d
        rbp = var_28
    
    rsi += rbx_1.d + 1
    var_20.d = rsi
    
    if (rsi s> rax)
        sub_140594770(&var_28)
        rsi = var_20.d
        rbp = var_28
    
    sub_1405a7220(rbp, rbx_1.d + 1, arg3, rbx_1.d + 1, 0x3f)

int32_t rsi_1

if (rsi == 0)
    rsi_1 = 0
else
    rsi_1 = rsi - 1

int32_t rax_2

if (*(arg1 + 0x18) == 0)
    rax_2 = 2

if (*(arg1 + 0x18) != 0 || rsi_1 == 0xffffffff)
    rax_2 = 1

*arg2 = 0
int32_t rcx_3 = rax_2 + rsi_1
int32_t rbx_3 = *(arg1 + 0x18)
int64_t r14_1 = *(arg1 + 0x10)
arg2[1].d = rbx_3

if (rbx_3 != 0 || rcx_3 != 0)
    sub_1405a4c70(arg2, rbx_3 + rcx_3, 0)
    memcpy(*arg2, r14_1, rbx_3 * 2)
else
    *(arg2 + 0xc) = rcx_3

sub_140a2cf70(arg2, rbp, rsi_1)

if (rbp != 0)
    sub_140a74f90(rbp)

return arg2
