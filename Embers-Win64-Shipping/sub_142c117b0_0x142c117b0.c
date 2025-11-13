// 函数: sub_142c117b0
// 地址: 0x142c117b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x24)

if (rax == 0)
    *(arg1 + 0x20) = 1
else
    *(arg1 + 0x24) = rax - 1
    
    if (rax - 1 u< *(arg1 + 0x28))
        int64_t* result = (zx.q(rax - 1) << 5) + *(arg1 + 0x30)
        sub_142c0e810(arg1, result)
        return result

__builtin_memset(&data_144017550, 0, 0x20)
sub_142c0e810(arg1, &data_144017550)
return &data_144017550
