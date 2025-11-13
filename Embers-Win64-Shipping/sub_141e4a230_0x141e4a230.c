// 函数: sub_141e4a230
// 地址: 0x141e4a230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg4 + 0x99) == 0
int128_t* rsi = *(arg2 + 8)
int128_t zmm6 = zx.o(0)
int128_t zmm7
zmm7.d = (*(arg1 + 0x94)).d f* *(arg2 + 0x10)
int128_t zmm8 = *rsi
float arg_10 = zmm8.d
int32_t arg_8 = 0
char var_68
int512_t zmm2
int128_t zmm3
int64_t var_70

if (cond:0)
    if (*(arg2 + 0x40) == 0)
        zmm3 = arg1[0x12].d
        zmm8 = zmm3
        zmm3.d = zmm3.d f* *(arg4 + 0x94)
        zmm8.d = zmm8.d f* *(arg4 + 0x90)
        *rsi = zmm3.d
    else
        bool rax_2
        
        if (*(arg4 + 0x98) != 0)
            rax_2 = sub_141e44d60(arg4 + 0x48)
        
        if (*(arg4 + 0x98) == 0 || rax_2 == 0)
            arg_10 = zmm7.d f* *(arg4 + 0x88)
            zmm2, zmm6, zmm7, zmm8 = sub_141de1490(arg2 + 0x1c, &arg_10, rsi, &arg1[0x12])
            zmm3 = *rsi
        else
            var_68 = *(arg2 + 0x1c)
            var_70.d = *(arg4 + 0x8c)
            sub_141e4b260(arg1, *(arg2 + 0x38), arg4 + 0x48, rsi, &arg_10, var_70, var_68)
            zmm3 = *rsi
            zmm8 = arg_10
    
    if (zmm3.d f== zmm8.d)
        zmm3 = arg_8
    else
        zmm3.d = zmm3.d f- zmm8.d
        arg_8 = zmm3.d
        
        if (not(zmm3.d f* zmm7.d f>= zmm6.d))
            zmm7.d f- zmm6.d
            
            if (not(zmm7.d f<= zmm6.d))
                zmm6 = 0x3f800000
            else if (not(zmm7.d f>= zmm6.d))
                zmm6 = 0xbf800000
            
            zmm6.d = zmm6.d f* arg1[0x12].d
            zmm6.d = zmm6.d f+ zmm3.d
            arg_8 = zmm6.d
            zmm3 = zmm6
else
    zmm7.d = zmm7.d f* *(arg4 + 0x88)
    *(arg4 + 0x8c) = zmm7.d
    zmm3 = zmm7
    float zmm0 = zmm8.d f/ arg1[0x12].d
    arg_8 = zmm7.d
    *(arg4 + 0x90) = zmm0
    
    if (not(zmm7.d f== 0f))
        if (*(arg2 + 0x40) == 0 || *(arg4 + 0x98) == 0)
            zmm2, zmm8 = sub_141de1490(arg2 + 0x1c, &arg_8, rsi, &arg1[0x12])
        else
            var_68 = *(arg2 + 0x1c)
            var_70.d = zmm7.d
            sub_141e4b310(arg1, *(arg2 + 0x38), arg4 + 0x48, rsi, &arg_10, var_70.d, var_68)
            zmm8 = arg_10
        
        zmm3 = arg_8
    
    *(arg4 + 0x94) = *rsi f/ arg1[0x12].d
zmm2.o = zmm8
return (*(*arg1 + 0x2c8))(arg1, arg4, zmm2, zmm3, arg2, arg3, var_68)
