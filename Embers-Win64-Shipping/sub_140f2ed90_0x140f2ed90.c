// 函数: sub_140f2ed90
// 地址: 0x140f2ed90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx_1 = *(arg1 + 0x2c8) + 0x1a8
float arg_8

if (*(rbx_1 + 0x10) != 0)
    int64_t* rcx = *(rbx_1 + 8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(rbx_1 + 0x10) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rbx_1 + 8)
        
        (*(*rcx_1 + 0x48))(rcx_1, &arg_8)
        *rbx_1 = arg_8.b

if (*rbx_1 == data_1439ae51d)
    *arg2 = 0.0
else
    float var_28
    int512_t zmm2
    int128_t zmm6_1
    zmm2, zmm6_1 = sub_140f47f00(arg1, &var_28, arg3)
    zmm2.o = zmm6_1
    sub_140f2e390(arg1, &arg_8)
    float var_20
    *arg2 = var_28 + var_20 + arg_8
    float var_24
    float var_1c
    arg2[1] = var_1c + var_24 + arg4

return arg2
