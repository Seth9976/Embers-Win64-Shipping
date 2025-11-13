// 函数: sub_1422e34d0
// 地址: 0x1422e34d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 6) |= 0xfe
*(arg2 + 7) = 0xff
*(arg2 + 0x218) = *arg1
*(arg2 + 0x21c) = arg1[1]
*(arg2 + 0x220) = arg1[2]
*(arg2 + 0x23c) = *(arg1 + 0x24)
*(arg2 + 0x224) = arg1[3]
*(arg2 + 0x24c) = *(arg1 + 0x34)
*(arg2 + 0x228) = arg1[4]
*(arg2 + 0x25c) = *(arg1 + 0x44)
*(arg2 + 0x22c) = arg1[5]
*(arg2 + 0x26c) = *(arg1 + 0x54)
*(arg2 + 0x230) = arg1[6]
*(arg2 + 0x27c) = *(arg1 + 0x64)
*(arg2 + 0x234) = arg1[7]
*(arg2 + 0x28c) = *(arg1 + 0x74)
int32_t rax_8 = arg1[8]
*(arg2 + 8) |= 0xf7
*(arg2 + 0x238) = rax_8
*(arg2 + 0x2a0) = *(arg1 + 0x88)
*(arg2 + 0x29c) = arg1[0x24]
*(arg2 + 0x2a8) = *(arg1 + 0x94)
*(arg2 + 0x2b0) = arg1[0x27]
*(arg2 + 0x2b4) = arg1[0x28]
*(arg2 + 0x2b8) = arg1[0x29]
int32_t rax_14 = arg1[0x2a]
*(arg2 + 6) |= 1
*(arg2 + 0x2bc) = rax_14
char result = arg1[0x2c].b
*(arg2 + 0x21) = result
return result
