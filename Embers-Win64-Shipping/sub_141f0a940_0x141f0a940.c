// 函数: sub_141f0a940
// 地址: 0x141f0a940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3 = arg1
arg1 = (zx.o(0)).d

if (arg2 s<= 0)
    return arg1

float zmm1 = 1f
int32_t i = 0
int32_t zmm2 = (zx.o(0)).d

if (arg3 s>= 8)
    int32_t r8 = 2
    
    do
        if (i s< arg2)
            arg1 = arg1 f+ zmm1
        
        zmm2 = zmm2 f+ zmm1
        zmm1 = zmm1 * zmm3
        
        if (r8 - 1 s< arg2)
            arg1 = arg1 f+ zmm1
        
        zmm2 = zmm2 f+ zmm1
        zmm1 = zmm1 * zmm3
        
        if (r8 s< arg2)
            arg1 = arg1 f+ zmm1
        
        zmm2 = zmm2 f+ zmm1
        zmm1 = zmm1 * zmm3
        
        if (r8 + 1 s< arg2)
            arg1 = arg1 f+ zmm1
        
        zmm2 = zmm2 f+ zmm1
        zmm1 = zmm1 * zmm3
        
        if (r8 + 2 s< arg2)
            arg1 = arg1 f+ zmm1
        
        zmm2 = zmm2 f+ zmm1
        zmm1 = zmm1 * zmm3
        
        if (r8 + 3 s< arg2)
            arg1 = arg1 f+ zmm1
        
        zmm2 = zmm2 f+ zmm1
        zmm1 = zmm1 * zmm3
        
        if (r8 + 4 s< arg2)
            arg1 = arg1 f+ zmm1
        
        zmm2 = zmm2 f+ zmm1
        zmm1 = zmm1 * zmm3
        
        if (r8 + 5 s< arg2)
            arg1 = arg1 f+ zmm1
        
        i += 8
        zmm2 = zmm2 f+ zmm1
        r8 += 8
        zmm1 = zmm1 * zmm3
    while (i s< arg3 - 7)

while (i s< arg3)
    if (i s< arg2)
        arg1 = arg1 f+ zmm1
    
    i += 1
    zmm2 = zmm2 f+ zmm1
    zmm1 = zmm1 * zmm3

return arg1 f/ zmm2
