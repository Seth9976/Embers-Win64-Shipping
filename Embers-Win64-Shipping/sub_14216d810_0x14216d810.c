// 函数: sub_14216d810
// 地址: 0x14216d810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x140)

if (rbx != 0)
    sub_1405c2d80(rbx + 0x370, *(arg1 + 0x5b8))
    sub_1405c2d80(rbx + 0x388, *(arg1 + 0x5c0))
    sub_1405c2d80(rbx + 0x3a0, *(arg1 + 0x5c8))
    sub_1405c2d80(rbx + 0x3b8, *(arg1 + 0x5d0))
    int64_t* rbx_1 = *(arg1 + 0x6f0)
    *(arg1 + 0x140) = 0
    *(arg1 + 0x148) = 0
    *(arg1 + 0x208) = 0
    sub_142165ea0(rbx_1, 0)
    sub_142165ea0(&rbx_1[0xa], 0)
    sub_142165ea0(&rbx_1[0x14], 0)
    sub_14084f020(&rbx_1[0x1e], 0)

int64_t* rcx_8 = *(arg1 + 0x6e8)

if (rcx_8 == 0)
    return 

(*(*rcx_8 + 0x260))(rcx_8, 0)
int64_t* rcx_9 = *(arg1 + 0x6e8)
(*(*rcx_9 + 0x270))(rcx_9, 0)
