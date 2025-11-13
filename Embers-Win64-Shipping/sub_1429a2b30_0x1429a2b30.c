// 函数: sub_1429a2b30
// 地址: 0x1429a2b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 1)
    if (arg3 == 2)
        arg2 &= 0xffffff3f
    
    *arg1 = arg2
    return 

int32_t rax = arg2 & 0x3f7f7fbf
*arg1 = rax

if (test_bit(arg2, 0xf))
    rax |= 0x800000
    *arg1 = rax

if (test_bit(arg2, 0x17))
    rax |= 0x80000000
    *arg1 = rax

if (test_bit(arg2, 0x1e))
    rax |= 0x40000000
    *arg1 = rax

if (arg2 s< 0)
    *arg1 = rax | 0x8000
