// 函数: sub_140666b20
// 地址: 0x140666b20
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
    *rsi = &data_142d84f48
    void* rax_1 = arg1[1]
    int64_t var_18 = *arg1
    void* var_10_1 = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    sub_140669820(&rsi[2], &var_18)

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
