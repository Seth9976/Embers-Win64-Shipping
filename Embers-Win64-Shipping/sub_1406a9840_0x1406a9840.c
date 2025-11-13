// 函数: sub_1406a9840
// 地址: 0x1406a9840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x50)
void*** rdx = rax

if (rax == 0)
    rdx = rax
else
    rax[1].d = 7
    *rdx = &data_142d8c610
    __builtin_memset(rdx + 0xc, 0, 0x36)
    rdx[9] = 0

rdx[3] = *(arg1 + 8)
void* result = *(arg1 + 8)
int64_t rcx = *(result + 0x10)

if (rcx != 0)
    rdx[2] = rcx
    *(*(*(arg1 + 8) + 0x10) + 0x18) = rdx
    result = *(arg1 + 8)

*(result + 0x10) = rdx
*(arg1 + 8) = rdx
return result
