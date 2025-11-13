// 函数: sub_1415076e0
// 地址: 0x1415076e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 8) != 0)
    if (*(arg1 + 0x68) s> 2 || (*(arg1 + 0x70) == 0 && *(arg1 + 0x74) == 0
            && *(arg1 + 0x78) == *(arg1 + 0x50) && *(arg1 + 0x7c) == *(arg1 + 0x54)))
        sub_1415074c0(data_143ef3288, arg1 + 8, arg1 + 0x70, *(arg1 + 0x58))
    else
        int128_t* i = *(arg1 + 0x60)
        
        for (void* rsi_3 = &i[sx.q(*(arg1 + 0x68))]; i != rsi_3; i = &i[1])
            int32_t r9_1 = *(arg1 + 0x58)
            void* rcx_1 = data_143ef3288
            int128_t var_18 = *i
            sub_1415074c0(rcx_1, arg1 + 8, &var_18, r9_1)

*(arg1 + 0x68) = 0

if (*(arg1 + 0x6c) s<= 0xffffffff)
    sub_1405a5410(arg1 + 0x60, 0)

*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0
