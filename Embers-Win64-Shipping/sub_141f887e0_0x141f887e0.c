// 函数: sub_141f887e0
// 地址: 0x141f887e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_18
sub_140b63b70(arg3, &var_18)
int16_t* const rdi = &data_142d40450
int16_t* const rcx_1 = &data_142d40450
int32_t var_10

if (var_10 != 0)
    rcx_1 = var_18

int32_t rax = sub_140a54510(rcx_1, &(*U"RGBXYZF10|")[3])
int32_t rax_1

if (rax != 0)
    int16_t* const rcx_2 = &data_142d40450
    
    if (var_10 != 0)
        rcx_2 = var_18
    
    rax_1 = sub_140a54510(rcx_2, U"RGBXYZF10|")

if (rax == 0 || rax_1 == 0)
    *arg2 = 0x3f800000
    *(arg2 + 8) = 0
    *(arg2 + 0xc) = 0x3f800000
else
    int16_t* const rcx_3 = &data_142d40450
    
    if (var_10 != 0)
        rcx_3 = var_18
    
    int32_t rax_2 = sub_140a54510(rcx_3, &(*U"RGBXYZF10|")[4])
    int32_t rax_3
    
    if (rax_2 != 0)
        int16_t* const rcx_4 = &data_142d40450
        
        if (var_10 != 0)
            rcx_4 = var_18
        
        rax_3 = sub_140a54510(rcx_4, &(*U"RGBXYZF10|")[1])
    
    if (rax_2 == 0 || rax_3 == 0)
        *(arg2 + 4) = 0x3f800000
        *arg2 = 0
        *(arg2 + 0xc) = 0x3f800000
    else
        int16_t* rcx_5 = &data_142d40450
        
        if (var_10 != 0)
            rcx_5 = var_18
        
        int32_t rax_4 = sub_140a54510(rcx_5, &(*U"RGBXYZF10|")[5])
        int32_t rax_5
        
        if (rax_4 != 0)
            if (var_10 != 0)
                rdi = var_18
            
            rax_5 = sub_140a54510(rdi, &(*U"RGBXYZF10|")[2])
        
        if (rax_4 == 0 || rax_5 == 0)
            *arg2 = 0x3d4ccccd
            *(arg2 + 4) = 0x3d4ccccd
            *(arg2 + 8) = 0x3f800000
            *(arg2 + 0xc) = 0x3f800000
        else
            *arg2 = data_14399f5d0

int16_t* rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return arg2
