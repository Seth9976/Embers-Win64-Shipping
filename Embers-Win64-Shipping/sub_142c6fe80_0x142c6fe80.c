// 函数: sub_142c6fe80
// 地址: 0x142c6fe80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg2 + 0x4b8)

if (rdx == 0)
    return 

while (*rdx != arg1)
    rdx = rdx[2]
    
    if (rdx == 0)
        return 

sub_142c69fe0(arg2 + 0x4b8, rdx, arg2 + 0x4d8, *(arg2 + 0x4e0))
int64_t* rcx_1 = *(arg2 + 0x4b8)

if (rcx_1 != 0)
    *(arg2 + 0x4b1) = 0
    sub_142c52ab0(*rcx_1, 0, 6, arg3)
