// 函数: sub_142b8f430
// 地址: 0x142b8f430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

memset(arg1, 0, 0x200)
*(arg1 + 0x200) = arg1
*(arg1 + 0x208) = 0x80
int32_t* i = nullptr
*(arg1 + 0x210) = 0

do
    *(i + *(arg1 + 0x200)) = 0
    *(i + *(arg1 + 0x200) + 4) = 0
    i = &i[2]
while (i s< 0x200)

return arg1
