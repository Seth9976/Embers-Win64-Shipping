// 函数: sub_1420585b0
// 地址: 0x1420585b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* result = data_143f432a8
int128_t zmm6 = *result

if (not(zmm6.d f== data_143a2e1cc))
    data_143a2e1cc = zmm6.d
    
    if (not(zmm6.d f>= 0f))
        zmm6 = zx.o(0)
    else if (not(zmm6.d f< 1f))
        zmm6 = 0x3f800000
    
    int64_t var_48
    int128_t zmm1_1
    result, zmm1_1 = sub_142047280(&var_48, 0x30, 1, 0x20000000)
    int32_t i_3
    int32_t i_2 = i_3
    uint64_t rsi_1 = 0
    int64_t rbx_1 = var_48
    int32_t i = i_2
    uint64_t var_30 = 0
    int32_t i_1 = i_2
    
    if (i_2 != 0)
        sub_1405c4a00(&var_30, i_2, 0)
        rsi_1 = var_30
        result = memcpy(rsi_1, rbx_1, i_2 << 3)
        i_2 = i_3
        i = i_1
    
    int32_t result_2
    int32_t result_1 = result_2
    
    while (result_1 != i_2)
        int64_t* rdi_1 = *(rsi_1 + (sx.q(result_1) << 3))
        
        if ((rdi_1[0xb6].b & 1) != 0 && not(zmm6.d f== *(rdi_1 + 0x5b4)))
            bool cond:1_1 = (rdi_1[1].b & 0x30) != 0
            *(rdi_1 + 0x5b4) = zmm6.d
            
            if (not(cond:1_1))
                rdi_1[0xbc].b |= 2
                int64_t* rcx_4 = rdi_1[0x88]
                
                if (rcx_4 != 0 && ((rcx_4[1].d u>> 0xa).b & 1) == 0)
                    sub_140cd85e0(rcx_4)
                    char rax_3 = rdi_1[0xbc].b
                    
                    if ((rax_3 & 1) == 0)
                        zmm1_1, zmm6 = sub_142050d80(rdi_1, zmm1_1)
                    else
                        rdi_1[0xbc].b = rax_3 | 4
        
        result = zx.q(result_1 + 1)
        result_1 = result.d
        
        while (result.d s< i)
            result = sx.q(result_1)
            
            if (*(rsi_1 + (result << 3)) != 0)
                break
            
            result = zx.q(result_1 + 1)
            result_1 = result.d
    
    if (rsi_1 != 0)
        result = sub_140a74f90(rsi_1)
    
    int64_t rcx_7 = var_48
    
    if (rcx_7 != 0)
        return sub_140a74f90(rcx_7)

return result
