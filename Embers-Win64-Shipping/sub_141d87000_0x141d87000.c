// 函数: sub_141d87000
// 地址: 0x141d87000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x198)
void*** rsi

if (rax == 0)
    rsi = nullptr
else
    rsi = sub_141d856d0(rax)

void** const result = j_sub_140a82f30(0x18)
void*** result_1 = result

if (result == 0)
    result_1 = nullptr
else
    result[1].d = 1
    *(result + 0xc) = 1
    result = &data_142d42ea8
    *result_1 = &data_142d42ea8
    result_1[2] = rsi

void**** rdi = &rsi[3]

if (rsi == 0)
    rdi = nullptr

if (rdi != 0)
    if (*rdi != 0)
        result = rdi[1]
    
    if (*rdi == 0 || result == 0 || result[1].d s<= 0)
        if (result_1 != 0)
            result_1[1].d += 1
        
        *rdi = rsi
        int64_t* rcx_2 = rdi[1]
        
        if (result_1 != rcx_2)
            if (result_1 != 0)
                *(result_1 + 0xc) += 1
                rcx_2 = rdi[1]
            
            if (rcx_2 != 0)
                int32_t temp6_1 = *(rcx_2 + 0xc)
                *(rcx_2 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    result = (*(*rcx_2 + 8))(rcx_2, 1)
            
            rdi[1] = result_1
        
        if (result_1 != 0)
            result_1[1].d -= 1
            
            if (result_1[1].d == 1)
                result = (**result_1)(result_1)
                int32_t temp5_1 = *(result_1 + 0xc)
                *(result_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    result = (*result_1)[1](result_1, 1)

void*** rdi_1 = data_143f38710
data_143f38708 = rsi

if (result_1 != rdi_1)
    data_143f38710 = result_1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            result = (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                return (*rdi_1)[1](rdi_1, 1)
else if (result_1 != 0)
    result_1[1].d -= 1
    
    if (result_1[1].d == 1)
        result = (**result_1)(result_1)
        int32_t temp2_1 = *(result_1 + 0xc)
        *(result_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*result_1)[1](result_1, 1)

return result
