// 函数: sub_142854230
// 地址: 0x142854230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rax = sub_1406938b0(arg1)

if (rax != 0)
    for (int64_t i = 0; i u< 9; i += 1)
        if (*(&data_1434d9f20 + (i << 3)) == rax)
            if (arg2 != 0)
                *arg2 = i
            
            return &data_1434d9f20 + (i << 3)

return 0
