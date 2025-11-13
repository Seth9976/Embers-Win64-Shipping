// 函数: sub_1427a1370
// 地址: 0x1427a1370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x20)
void*** rcx = rax

if (rax == 0)
    rcx = rax
else
    __builtin_memset(&rcx[1], 0, 0x18)
    *rcx = &data_1434b71c0

void arg_8

if (arg1 + 0x140 != &arg_8)
    void*** r8_1 = *(arg1 + 0x140)
    *(arg1 + 0x140) = rcx
    
    if (r8_1 != 0)
        (*r8_1)[7](r8_1, 1)
else if (rcx != 0)
    (*rcx)[7](rcx, 1)

void* rcx_1 = *(arg1 + 0x140)
*(rcx_1 + 8) = *(arg1 + 0x130)
int32_t result = *(arg1 + 0x138)
*(rcx_1 + 0x10) = result
return result
