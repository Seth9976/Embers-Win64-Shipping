// 函数: sub_1425ec530
// 地址: 0x1425ec530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0

if (arg1 == 0 || arg2 == 0)
    return 7

if (arg1 != arg2)
    int64_t rax_1 = sx.q(*arg2)
    
    if (rax_1.d u> 0xc)
        rdi = 4
    else
        switch (rax_1)
            case 0
                return sub_1425ec4c0(arg1)
            case 1
                return sub_1425ea780(arg1, arg2[2].b)
            case 2
                return sub_1425ea870(arg1, *(arg2 + 8))
            case 3
                return sub_1425ea820(arg1, zx.o(*(arg2 + 8)))
            case 4
                return sub_1425ea9b0(arg1, &arg2[2])
            case 5
                return sub_1425eaa00(arg1, &arg2[2])
            case 6
                return sub_1425ea8c0(arg1, &arg2[2])
            case 7
                return sub_1425ea910(arg1, &arg2[2])
            case 8
                return sub_1425ea960(arg1, &arg2[2])
            case 9
                return sub_1425ea7d0(arg1, &arg2[2])
            case 0xa
                return sub_1425eaa50(arg1, *(arg2 + 8))
            case 0xb
                return sub_1425eab10(arg1, *(arg2 + 8))
            case 0xc
                int64_t* rsi = *(arg2 + 8)
                int32_t rax_14 = sub_1425ec4c0(arg1)
                
                if (rax_14 == 0)
                    *arg1 = 0xc
                    *(arg1 + 8) = rsi
                    
                    if (rsi != 0)
                        (**rsi)(rsi)
                
                return zx.q(rax_14)

return zx.q(rdi)
