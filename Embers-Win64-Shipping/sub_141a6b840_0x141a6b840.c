// 函数: sub_141a6b840
// 地址: 0x141a6b840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t __saved_zmm8 = arg5
int128_t __saved_zmm7 = arg4
arg4 = arg2
int64_t* result = (*(arg1[5] + 0x78))(&arg1[5])
int64_t* result_1

if (result == 0)
    result_1 = nullptr
else
    int64_t rdx_1 = *result
    result = (*(rdx_1 + 0x150))(result, rdx_1)
    result_1 = result

arg5 = zx.o(0)

if (result_1 != 0)
    arg5 = result_1[0xa4].d

int64_t arg_8

if (arg1[0x8b].b == 1)
    int128_t __saved_zmm6_1 = arg3
    arg3 = arg1[0x92].d
    
    if ((*(arg1 + 0x45c) & 1) != 0)
        arg3 ^= data_142d3f780
    
    if (*(arg1 + 0x884) != 0)
        arg2 = arg1[0x110].d
        
        if (not(arg2.d f< 0f))
            arg4.d = arg5.d f- arg2.d
    
    int64_t* rcx_2 = arg1[0x109]
    int512_t zmm2
    zmm2.o = arg3
    (*(*rcx_2 + 8))(rcx_2, arg4, zmm2)
    
    if (result_1 != 0)
        int64_t* rax_2
        int32_t zmm0_1
        rax_2, zmm0_1 = sub_142437e30(result_1, 0, 1)
        int64_t rdx_2 = *rax_2
        (*(rdx_2 + 0x638))(rax_2, rdx_2)
        arg3.d = arg3.d f* zmm0_1
    
    int64_t* rcx_5 = arg1[0x109]
    int64_t var_48 = *(arg1 + 0x7d4)
    int512_t zmm3
    zmm3.o = arg3
    (*(*rcx_5 + 0x20))(rcx_5, &arg_8, &var_48, zmm3, var_48, arg1[0xf8], __saved_zmm8, 
        __saved_zmm7, __saved_zmm6_1)
    result, arg5 = sub_141a6c860(arg1, arg_8, 0)

if (result_1 != 0)
    result = &arg_8
    
    if (&arg_8 != &arg1[0x110])
        arg1[0x110].d = arg5.d
        *(arg1 + 0x884) = 1

return result
