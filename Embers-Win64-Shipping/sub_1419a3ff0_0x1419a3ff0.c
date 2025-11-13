// 函数: sub_1419a3ff0
// 地址: 0x1419a3ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419a2e50()
data_143f10908 += 1
int32_t i_1 = 0
int32_t i = 0

if (data_143f1afd0 s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* rcx_2 = *(rsi_1 + data_143f1afc8)
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x18))(rcx_2)
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< data_143f1afd0)

data_143f10908 -= 1
int64_t result = sub_1419a2e50()
data_143f10908 += 1

if (data_143f1afd0 s> 0)
    int64_t* rdi = nullptr
    
    do
        int64_t* rcx_4 = *(rdi + data_143f1afc8)
        
        if (rcx_4 != 0)
            result = (*(*rcx_4 + 8))(rcx_4)
        
        i_1 += 1
        rdi = &rdi[1]
    while (i_1 s< data_143f1afd0)

data_143f10908 -= 1
return result
