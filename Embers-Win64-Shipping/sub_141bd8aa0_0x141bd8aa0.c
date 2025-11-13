// 函数: sub_141bd8aa0
// 地址: 0x141bd8aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(*(arg1 + 0x148))

if (rbp.d != 0)
    int32_t rax_1 = *(arg1 + 0x158)
    int32_t rdx_1 = rax_1 + rbp.d
    
    if (rdx_1 s> *(arg1 + 0x15c))
        sub_140638c50(arg1 + 0x150, rdx_1)
        rax_1 = *(arg1 + 0x158)
    
    memcpy(*(arg1 + 0x150) + (sx.q(rax_1) << 3), *(arg1 + 0x140), (rbp << 3).d)
    *(arg1 + 0x158) += rbp.d

*(arg1 + 0x148) = 0

if (*(arg1 + 0x14c) != 0)
    sub_140638c50(arg1 + 0x140, 0)

*(arg1 + 0x1d0) = 0

if (*(arg1 + 0x1d4) s<= 0xffffffff)
    sub_1405c5570(arg1 + 0x1c8, 0)

int64_t* rcx_4 = *(arg1 + 0x208)

if (rcx_4 != 0)
    (*(*rcx_4 + 0x248))(rcx_4)
