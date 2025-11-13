// 函数: sub_142c36a60
// 地址: 0x142c36a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int64_t rcx = *(arg1 + 0x58)

if (rcx != 0)
    j_sub_140a74f90(rcx)

*(arg1 + 0x50) = 0
*(arg1 + 0x58) = 0
void* rbx = arg1 + 0x68
int64_t i_1 = 2
int64_t i

do
    int64_t rcx_1 = *rbx
    
    if (rcx_1 != 0)
        j_sub_140a74f90(rcx_1)
    
    *(rbx - 8) = 0
    *rbx = 0
    rbx += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t result =
    `eh vector vbase constructor iterator'(arg1 + 0x60, zx.q((i_1 + 0x10).d), zx.q((i_1 + 2).d))
int64_t rcx_3 = *(arg1 + 0x58)

if (rcx_3 != 0)
    result = j_sub_140a74f90(rcx_3)

*(arg1 + 0x50) = 0
*(arg1 + 0x58) = 0
return result
