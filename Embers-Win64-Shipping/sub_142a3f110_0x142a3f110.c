// 函数: sub_142a3f110
// 地址: 0x142a3f110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    int64_t* rbx_1 = *(arg1 + 0x50)
    
    if (rbx_1 == 0)
        break
    
    *(arg1 + 0x40) -= 1
    *(arg1 + 0x50) = rbx_1[2]
    rbx_1[2] = 0
    sub_142a43f80(*(arg1 + 0x58) + 0x1e0, 1)
    sub_142a3f8b0(rbx_1, rbx_1[8], arg1)
