// 函数: sub_141ff2300
// 地址: 0x141ff2300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x38)

if (result == 0)
    return 0

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142d84f88
result[2] = 0
result[3] = 0
void*** rax = j_sub_140a82f30(0x30)
void*** rsi = rax

if (rax == 0)
    rsi = nullptr
else
    rax[1].d = 1
    *(rax + 0xc) = 1
    *rsi = &data_142d84f58
    sub_140669740(&rsi[2], arg1)

result[4] = &rsi[2]
result[5] = rsi

if (rsi != 0)
    rsi[1].d += 1
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            (**rsi)(rsi)
            int32_t temp1_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rsi)[1](rsi, 1)

result[6].b = 0
return result
