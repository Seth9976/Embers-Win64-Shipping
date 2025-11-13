// 函数: sub_1403e74d0
// 地址: 0x1403e74d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg1, 0, 0x70)
*(arg1 + 0x5c) = 0x32
*(arg1 + 0x60) = 0x19
*(arg1 + 0x64) = 0x10
*(arg1 + 0x68) = 0xc
int32_t rcx = *(arg1 + 0x60)
*(arg1 + 0x3c) = 0x1388
*(arg1 + 0x4c) = 0x68db8
int32_t rcx_1 = rcx * 0x64
*(arg1 + 0x40) = rcx_1
int32_t rcx_3 = *(arg1 + 0x64) * 0x64
*(arg1 + 0x50) = divs.dp.d(0:0x7fffffff, rcx_1)
*(arg1 + 0x44) = rcx_3
int32_t rcx_5 = *(arg1 + 0x68) * 0x64
*(arg1 + 0x54) = divs.dp.d(0:0x7fffffff, rcx_3)
*(arg1 + 0x48) = rcx_5
*(arg1 + 0x58) = divs.dp.d(0:0x7fffffff, rcx_5)
*(arg1 + 0x6c) = 0xf
*(arg1 + 0x28) = 0x640000006400
*(arg1 + 0x30) = 0x640000006400
return 0
