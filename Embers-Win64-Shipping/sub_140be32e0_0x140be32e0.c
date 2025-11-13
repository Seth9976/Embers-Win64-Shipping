// 函数: sub_140be32e0
// 地址: 0x140be32e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x20) == 0 & sub_140b5b8a0(*(arg1 + 0x1c), 0)) != 0)
    *(arg1 + 0x1c) = *(arg1 + 4)

int32_t rcx_1
rcx_1.b = *(arg1 + 0x28) == 0

if ((rcx_1.b & sub_140b5b8a0(*(arg1 + 0x24), 0)) != 0)
    *(arg1 + 0x24) = *(arg1 + 0xc)

int32_t rbx_2 = *(arg1 + 0x30)
int64_t result = sub_140b5b8a0(*(arg1 + 0x2c), 0)
int32_t rcx_2
rcx_2.b = rbx_2 == 0

if ((rcx_2.b & result.b) != 0)
    result = *(arg1 + 0x14)
    *(arg1 + 0x2c) = result

return result
