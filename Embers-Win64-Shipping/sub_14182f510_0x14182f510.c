// 函数: sub_14182f510
// 地址: 0x14182f510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_140a82f30(0x60, 0x10)
*arg2 = rax
*rax = &data_142fe5ea8
rax[2] = *(arg1 + 0x10)
void* rcx = *(arg1 + 0x18)
rax[3] = rcx

if (rcx != 0)
    *(rcx + 8) += 1

rax[4] = *(arg1 + 0x20)
rax[6] = 0

if (rax[4] != 0)
    void* r8_1 = *(arg1 + 0x30)
    void* rcx_1 = arg1 + 0x40
    
    if (r8_1 != 0)
        rcx_1 = r8_1
    
    int64_t r8_2 = *rcx_1
    (*r8_2)(rcx_1, arg3, r8_2)

*rax = &data_142fe5ec8
return &rax[2]
