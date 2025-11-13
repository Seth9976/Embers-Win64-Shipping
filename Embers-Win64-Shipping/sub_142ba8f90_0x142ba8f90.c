// 函数: sub_142ba8f90
// 地址: 0x142ba8f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = sx.d(*(arg1 + 0x1ce))
uint32_t rax

if (rdx != 0)
    int32_t* rbx_1 = *(arg2 + 0x10) + (zx.q(arg3) << 3)
    rax = sub_142b93dd0(arg4, rdx, *(arg1 + 0x318))
    *rbx_1 += rax

int32_t rdx_1 = sx.d(*(arg1 + 0x1d0))

if (rdx_1 == 0)
    return 

void* rbx_2 = *(arg2 + 0x10) + (zx.q(arg3) << 3)
rax = sub_142b93dd0(arg4, rdx_1, *(arg1 + 0x318))
*(rbx_2 + 4) += rax
