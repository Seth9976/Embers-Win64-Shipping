// 函数: sub_140f2fae0
// 地址: 0x140f2fae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
char* rbx_1 = *(arg1 + 0x2c8) + 0x1a8
char arg_8

if (*(rbx_1 + 0x10) != 0)
    int64_t* rcx = *(rbx_1 + 8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(rbx_1 + 0x10) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rbx_1 + 8)
        
        (*(*rcx_1 + 0x48))(rcx_1, &arg_8)
        *rbx_1 = arg_8

if (*rbx_1 == data_1439ae51d)
    *arg2 = data_143dbb1f0
else
    if (*(arg1 + 0x300) != 0)
        int64_t* rcx_2 = *(arg1 + 0x2f8)
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            if (*(arg1 + 0x300) != 0)
                rsi = *(arg1 + 0x2f8)
            
            uint128_t var_58
            (*(*rsi + 0x48))(rsi, &var_58)
            *(arg1 + 0x2e0) = var_58
    
    int128_t zmm6 = *(arg1 + 0x2e8)
    int128_t zmm8 = *(arg1 + 0x2e0)
    int128_t zmm9 = *(arg1 + 0x2ec)
    int128_t zmm7 = *(arg1 + 0x2e4)
    int64_t* rax_9 = sub_140e13cf0(*(arg1 + 0x2c8), &arg_8)
    zmm8.d = zmm8.d f+ zmm6.d
    zmm9.d = zmm9.d f+ zmm7.d
    zmm8.d = zmm8.d f+ *rax_9
    zmm9.d = zmm9.d f+ *(rax_9 + 4)
    *arg2 = zmm8.d
    arg2[1] = zmm9.d

return arg2
