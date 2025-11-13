// 函数: sub_1428b9210
// 地址: 0x1428b9210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 != 0 && arg2 != 0)
    int64_t rdi_1 = 0
    
    for (int64_t i = 0; i u< 0xa8; i += 0x18)
        if (sub_14288fc80(*(i + &data_143b855d8), arg1) == 0
                && sub_14288fc80(*(i + &data_143b855e0), arg2) == 0)
            return (&data_143b855d0)[rdi_1 * 3]
        
        rdi_1 += 1

return 0
