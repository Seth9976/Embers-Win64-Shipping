// 函数: sub_140bc3bb0
// 地址: 0x140bc3bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a82f30(0x60, 0x10)
*arg2 = rax
*rax = &data_142d577c0
rax[2] = *(arg1 + 0x10)
rax[4] = 0

if (rax[2] != 0)
    void* r8_1 = *(arg1 + 0x20)
    void* rcx = arg1 + 0x30
    
    if (r8_1 != 0)
        rcx = r8_1
    
    int64_t r8_2 = *rcx
    (*r8_2)(rcx, arg3, r8_2)

rax[0xa] = *(arg1 + 0x50)
rax[0xb] = *(arg1 + 0x58)
*rax = &data_142e86f40
return &rax[2]
