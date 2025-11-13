// 函数: sub_141beb5f0
// 地址: 0x141beb5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141beee70(arg1)
uint64_t result = sub_140f2d570(arg1[0x28])
int32_t i = 0
int32_t var_28
int64_t var_20

if (arg1[0x25].d s> 0)
    int32_t* rsi_1 = nullptr
    
    do
        int64_t* rcx_1 = arg1[0x28]
        var_28 = *(rsi_1 + arg1[0x24])
        char var_24_1 = 1
        var_20 = 0
        int32_t var_18_1 = 0
        sub_140f5d3c0(rcx_1, i, &var_28)
        result = sub_140745b20(&var_20)
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< arg1[0x25].d)

int32_t i_1 = 0

if (arg1[0x27].d s> 0)
    int32_t* rsi_2 = nullptr
    
    do
        int64_t* rcx_3 = arg1[0x28]
        var_28 = *(rsi_2 + arg1[0x26])
        char var_24_2 = 1
        var_20 = 0
        int32_t var_18_2 = 0
        sub_140f606f0(rcx_3, i_1, &var_28)
        result = sub_140745b20(&var_20)
        i_1 += 1
        rsi_2 = &rsi_2[1]
    while (i_1 s< arg1[0x27].d)

return result
