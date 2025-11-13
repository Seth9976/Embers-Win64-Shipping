// 函数: sub_14202d6a0
// 地址: 0x14202d6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = (*(*arg1 + 0x150))()
int64_t* rax_2 = sub_142168400()
int64_t r9 = *rax_2
void*** result = (*(r9 + 0x2e0))(rax_2, rax_1, arg1[0x46], r9)

if (result.b != 0)
    int64_t* var_18
    sub_1424373a0(rax_1, &var_18)
    int32_t i_1
    int32_t i = i_1
    
    while (i s>= 0)
        int64_t* rdx_2 = var_18
        
        if (i s>= rdx_2[1].d)
            break
        
        int64_t* rax_4 = sub_140d3c6e0(*rdx_2 + (sx.q(i) << 3))
        
        if (rax_4 != 0)
            int64_t rdx_3 = *rax_4
            
            if ((*(rdx_3 + 0x6a8))(rax_4, rdx_3) == 0)
                sub_1425691c0(rax_4)
        
        i = i_1 + 1
        i_1 = i
    
    void*** result_1 = nullptr
    void*** result_2 = sub_140a84c80(0, 0x30, 0)
    result_1 = result_2
    int32_t var_20_1 = 3
    
    if (result_2 != 0)
        *result_2 = &data_142e335b8
        sub_140d3a3a0(&result_2[1], arg1)
        result_2[2] = sub_14201b3ec
        result_2[4] = sub_140a387b0()
        *result_2 = &data_142e33610
    
    int64_t* rax_8 = sub_142168400()
    result = (*(*rax_8 + 0x2d8))(rax_8, rax_1, arg1[0x46], &result_1)
    
    if (var_20_1 == 0)
        result = result_1
    label_14202d806:
        
        if (result != 0)
            return sub_140a74f90(result)
    else
        void*** result_3 = result_1
        
        if (result_3 != 0)
            (*result_3)[7](result_3, 0)
            result = result_1
            
            if (result != 0)
                result = sub_140a84c80(result, 0, 0)
                result_1 = result
            
            int32_t var_20_2 = 0
            goto label_14202d806

return result
