// 函数: sub_141e63970
// 地址: 0x141e63970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = data_143f399f0
int64_t rcx
void*** rdi

if (data_143de5480 == 0)
    rdi = nullptr
    rcx = 0
else
    rdi = nullptr
    rcx.b = GetCurrentThreadId().d != data_143de5470

if (*(rsi + (rcx << 2)) == 0 || *(arg1 + 0x260) u< 2)
    return 

if (sub_140bc7f20(arg1 + 0x280) != 0 && *(arg1 + 0x268) == 0)
    void*** rax_2 = j_sub_140a82f30(0x38)
    void*** rax_3
    
    if (rax_2 == 0)
        rax_3 = nullptr
    else
        rax_3 = sub_141e4f2c0(rax_2, arg1 + 0x224, arg1 + 0x280, 0)
    
    *(arg1 + 0x268) = rax_3
    sub_141997e80(rax_3)

if (sub_140bc7f20(arg1 + 0x2a0) != 0 && *(arg1 + 0x270) == 0)
    void*** rax_5 = j_sub_140a82f30(0x38)
    void*** rax_6
    
    if (rax_5 == 0)
        rax_6 = nullptr
    else
        rax_6 = sub_141e4f2c0(rax_5, arg1 + 0x224, arg1 + 0x2a0, 1)
    
    *(arg1 + 0x270) = rax_6
    sub_141997e80(rax_6)

if (sub_140bc7f20(arg1 + 0x2c0) s<= 0 || *(arg1 + 0x278) != 0)
    return 

void*** rax_7 = j_sub_140a82f30(0x38)

if (rax_7 != 0)
    rdi = sub_141e4f2c0(rax_7, arg1 + 0x224, arg1 + 0x2c0, 2)

*(arg1 + 0x278) = rdi
sub_141997e80(rdi)
