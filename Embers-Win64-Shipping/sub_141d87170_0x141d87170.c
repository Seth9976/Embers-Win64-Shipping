// 函数: sub_141d87170
// 地址: 0x141d87170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x78)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    __builtin_memset(&rax[1], 0, 0x20)
    *rdi = &data_143237bc8
    rdi[5] = 2
    rdi[6] = 0
    rdi[7] = 0
    rdi[8] = 2
    rdi[9] = 0
    rdi[0xa] = 0
    rdi[0xb] = 2
    rdi[0xc] = 0
    rdi[0xd] = 0
    rdi[0xe] = 2

void** const result = j_sub_140a82f30(0x18)
void*** result_1 = result

if (result == 0)
    result_1 = nullptr
else
    result[1].d = 1
    *(result + 0xc) = 1
    result = &data_143237dc0
    *result_1 = &data_143237dc0
    result_1[2] = rdi

void**** r14 = &rdi[1]

if (rdi == 0)
    r14 = nullptr

if (r14 != 0)
    if (*r14 != 0)
        result = r14[1]
    
    if (*r14 == 0 || result == 0 || result[1].d s<= 0)
        if (result_1 != 0)
            result_1[1].d += 1
        
        *r14 = rdi
        int64_t* rcx_1 = r14[1]
        
        if (result_1 != rcx_1)
            if (result_1 != 0)
                *(result_1 + 0xc) += 1
                rcx_1 = r14[1]
            
            if (rcx_1 != 0)
                int32_t temp6_1 = *(rcx_1 + 0xc)
                *(rcx_1 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    result = (*(*rcx_1 + 8))(rcx_1, 1)
            
            r14[1] = result_1
        
        if (result_1 != 0)
            result_1[1].d -= 1
            
            if (result_1[1].d == 1)
                result = (**result_1)(result_1)
                int32_t temp5_1 = *(result_1 + 0xc)
                *(result_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    result = (*result_1)[1](result_1, 1)

data_143f38720 = rdi
void*** rdi_1 = data_143f38728

if (result_1 != rdi_1)
    data_143f38728 = result_1
    
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
