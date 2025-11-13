// 函数: sub_140de9660
// 地址: 0x140de9660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
char* rbx_1 = *(arg1 + 0x2c8) + 0x1a8

if (*(rbx_1 + 0x10) != 0)
    int64_t* rcx = *(rbx_1 + 8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(rbx_1 + 0x10) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rbx_1 + 8)
        
        char arg_18
        (*(*rcx_1 + 0x48))(rcx_1, &arg_18)
        *rbx_1 = arg_18

int128_t zmm0
float zmm1

if (*rbx_1 == data_1439ae51d)
    zmm0 = data_143dbb1f0.d
    zmm1 = data_143dbb1f0:4.d
else
    if (*(arg1 + 0x300) != 0)
        int64_t* rcx_2 = *(arg1 + 0x2f8)
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            if (*(arg1 + 0x300) != 0)
                rsi = *(arg1 + 0x2f8)
            
            int128_t var_28
            (*(*rsi + 0x48))(rsi, &var_28)
            *(arg1 + 0x2e0) = var_28
    
    int32_t* rcx_4 = &data_143dbb1f0
    int32_t* rax_10 = *(arg1 + 0x2c8) + 0x158
    zmm0.d = (*(arg1 + 0x2e8)).d f+ *(arg1 + 0x2e0)
    
    if (rax_10[2].b != 0)
        rcx_4 = rax_10
    
    zmm0.d = zmm0.d f+ *rcx_4
    zmm1 = *(arg1 + 0x2ec) f+ *(arg1 + 0x2e4) f+ rcx_4[1]

zmm0.d = zmm0.d f* arg3.d
*arg2 = zmm0.d
arg2[1] = zmm1 f* arg3.d
return arg2
