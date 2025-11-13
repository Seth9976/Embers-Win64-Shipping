// 函数: sub_14228fdd0
// 地址: 0x14228fdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x20)
int64_t rax_1 = rcx s>> 1
char r8 = *(arg1 + 0x20) & 1
void* rdx_1

if (r8 == 0)
    rdx_1 = rcx
else
    rdx_1 = arg1 + 0x20 + rax_1

if (rdx_1 != 0)
    if (r8 != 0)
        rcx = arg1 + 0x20 + rax_1
    
    if (rcx != 0)
        (**rcx)(rcx, 1)
    
    *(arg1 + 0x20) = 0

void* rax_3 = j_sub_140a82f30(0x28)
void* rcx_2 = rax_3

if (rax_3 == 0)
    rcx_2 = nullptr
else
    *(rax_3 + 0x10) = 0
    *(rax_3 + 0x18) = 0
    *(rcx_2 + 8) = &data_143314160
    *(rcx_2 + 0x20) = arg2
    *rcx_2 = &data_1433141a0

*(arg1 + 0x20) = rcx_2

if ((rcx_2.b & 1) != 0)
    rcx_2 = (rcx_2 s>> 1) + 0x20 + arg1

int32_t result = (*(*rcx_2 + 0x20))(rcx_2)
*(arg1 + 0x30) = result
return result
