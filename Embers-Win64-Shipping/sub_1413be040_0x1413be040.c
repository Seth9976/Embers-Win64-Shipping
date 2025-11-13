// 函数: sub_1413be040
// 地址: 0x1413be040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0xa].b = 0

if (arg2[0xa].b != 0)
    void* r8_1 = &arg1[2]
    *arg1 = 0
    arg1[1] = 0
    *(r8_1 + 0x10) = 0
    *(r8_1 + 0x18) = 0
    *(r8_1 + 0x1c) = 0x80
    void* rax_1 = *(r8_1 + 0x10)
    
    if (rax_1 != 0)
        r8_1 = rax_1
    
    *r8_1 = 0
    *(r8_1 + 8) = 0
    *(arg1 + 0x34) = 0
    arg1[6].d = 0xffffffff
    arg1[8] = 0
    arg1[9].d = 0
    sub_140780cc0(arg1, arg2)
    arg1[0xa].b = 1

return arg1
