// 函数: sub_1417fb020
// 地址: 0x1417fb020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x20) = 0
uint32_t count = *(arg2 + 0x28)
void* rbp = *(arg2 + 0x20)
*(arg1 + 0x28) = count

if (count != 0)
    sub_1417fc670(arg1, count, 0)
    void* rax_1 = *(arg1 + 0x20)
    void* rdx_1 = arg2
    void* rcx = arg1
    
    if (rbp != 0)
        rdx_1 = rbp
    
    if (rax_1 != 0)
        rcx = rax_1
    
    memcpy(rcx, rdx_1, count)
else
    *(arg1 + 0x2c) = 0x20

*(arg1 + 0x48) = 0
void* rsi = arg1 + 0x30
uint32_t count_1 = *(arg2 + 0x50)
void* rbp_1 = arg2 + 0x30
void* r15 = *(rbp_1 + 0x18)
*(rsi + 0x20) = count_1

if (count_1 != 0)
    sub_1417fc5f0(rsi, count_1, 0)
    void* rax_2 = *(rsi + 0x18)
    
    if (r15 != 0)
        rbp_1 = r15
    
    if (rax_2 != 0)
        rsi = rax_2
    
    memcpy(rsi, rbp_1, count_1)
else
    *(rsi + 0x24) = 0x14

sub_140596d10(arg1 + 0x58, arg2 + 0x58)
sub_140596d10(arg1 + 0x68, arg2 + 0x68)
return arg1
