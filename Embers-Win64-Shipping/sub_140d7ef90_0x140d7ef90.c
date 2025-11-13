// 函数: sub_140d7ef90
// 地址: 0x140d7ef90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x94) != 0)
    return 0

int64_t* rcx = *(arg1 + 0xd8)

if ((*(*rcx + 0x60))(rcx) != 0)
    return 1

int32_t rbx_1 = 0

while (true)
    if (rbx_1 s< 0)
        return 0
    
    if (rbx_1 s>= *(arg1 + 0xf0))
        return 0
    
    int64_t* rcx_3 = *(*(arg1 + 0xe8) + sx.q(rbx_1) * 0x10)
    
    if ((*(*rcx_3 + 0x60))(rcx_3) != 0)
        return 1
    
    rbx_1 += 1
