// 函数: sub_142a20c30
// 地址: 0x142a20c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1 + 0x1620
int16_t result

for (int32_t i = 0; i s< 0x80; )
    *(rdi - 0x200) = sub_142a2e5a0(i, *(arg1 + 0x1e94))
    *rdi = sub_142a2e560(i, *(arg1 + 0x1e98))
    *(rdi + 0x200) = sub_142a2e5d0(i, *(arg1 + 0x1ea0))
    *(rdi - 0x1fe) = sub_142a2e530(i)
    *(rdi + 2) = sub_142a2e4c0(i, *(arg1 + 0x1e9c))
    result = sub_142a2e500(i, *(arg1 + 0x1ea4))
    i += 1
    *(rdi + 0x202) = result
    rdi += 4

return result
