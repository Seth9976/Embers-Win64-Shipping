// 函数: sub_142c07020
// 地址: 0x142c07020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x18)

if (rcx != 0)
    j_sub_140a74f90(rcx)

*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 0
void* rbx_1 = arg1 + 0x28
int64_t i_1 = 2
int64_t i

do
    int64_t rcx_1 = *rbx_1
    
    if (rcx_1 != 0)
        j_sub_140a74f90(rcx_1)
    
    *(rbx_1 - 8) = 0
    *rbx_1 = 0
    int64_t rcx_2 = *(rbx_1 + 0x20)
    
    if (rcx_2 != 0)
        j_sub_140a74f90(rcx_2)
    
    *(rbx_1 + 0x18) = 0
    *(rbx_1 + 0x20) = 0
    rbx_1 += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
