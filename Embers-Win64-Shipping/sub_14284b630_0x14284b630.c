// 函数: sub_14284b630
// 地址: 0x14284b630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = 0

for (int64_t i = 0; i u< 0x100; i -= -0x80)
    int64_t* r9_1 = *(i + &data_1434d65f0)
    
    if (*r9_1 == *arg1 && r9_1[1] == arg1[1] && *(i + 0x1434d65fc) != 0)
        result |= 0x1000000
    
    if (*r9_1 == *arg2 && r9_1[1] == arg2[1] && *(i + 0x1434d65fc) != 0)
        result |= 0x2000000
    
    int64_t* r9_2 = *(i + &data_1434d6600)
    
    if (*r9_2 == *arg1 && r9_2[1] == arg1[1] && *(i + 0x1434d660c) != 0)
        result |= 0x1000000
    
    if (*r9_2 == *arg2 && r9_2[1] == arg2[1] && *(i + 0x1434d660c) != 0)
        result |= 0x2000000
    
    int64_t* r9_3 = *(i + &data_1434d6610)
    
    if (*r9_3 == *arg1 && r9_3[1] == arg1[1] && *(i + 0x1434d661c) != 0)
        result |= 0x1000000
    
    if (*r9_3 == *arg2 && r9_3[1] == arg2[1] && *(i + 0x1434d661c) != 0)
        result |= 0x2000000
    
    int64_t* r9_4 = *(i + &data_1434d6620)
    
    if (*r9_4 == *arg1 && r9_4[1] == arg1[1] && *(i + 0x1434d662c) != 0)
        result |= 0x1000000
    
    if (*r9_4 == *arg2 && r9_4[1] == arg2[1] && *(i + 0x1434d662c) != 0)
        result |= 0x2000000
    
    int64_t* r9_5 = *(i + &data_1434d6630)
    
    if (*r9_5 == *arg1 && r9_5[1] == arg1[1] && *(i + 0x1434d663c) != 0)
        result |= 0x1000000
    
    if (*r9_5 == *arg2 && r9_5[1] == arg2[1] && *(i + 0x1434d663c) != 0)
        result |= 0x2000000
    
    int64_t* r9_6 = *(i + &data_1434d6640)
    
    if (*r9_6 == *arg1 && r9_6[1] == arg1[1] && *(i + 0x1434d664c) != 0)
        result |= 0x1000000
    
    if (*r9_6 == *arg2 && r9_6[1] == arg2[1] && *(i + 0x1434d664c) != 0)
        result |= 0x2000000
    
    int64_t* r9_7 = *(i + &data_1434d6650)
    
    if (*r9_7 == *arg1 && r9_7[1] == arg1[1] && *(i + 0x1434d665c) != 0)
        result |= 0x1000000
    
    if (*r9_7 == *arg2 && r9_7[1] == arg2[1] && *(i + 0x1434d665c) != 0)
        result |= 0x2000000
    
    int64_t* r9_8 = *(i + &data_1434d6660)
    
    if (*r9_8 == *arg1 && r9_8[1] == arg1[1] && *(i + 0x1434d666c) != 0)
        result |= 0x1000000
    
    if (*r9_8 == *arg2 && r9_8[1] == arg2[1] && *(i + 0x1434d666c) != 0)
        result |= 0x2000000

if ((result & 0x3000000) != 0x3000000)
    return result

return result & 0xfcffffff
