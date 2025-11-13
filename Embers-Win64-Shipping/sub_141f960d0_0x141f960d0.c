// 函数: sub_141f960d0
// 地址: 0x141f960d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*(arg1 + 0x80))

if (rcx.d s< 2)
    return 

int128_t* rdx = *(arg1 + 0x78)
float zmm0 = *arg2
int128_t zmm6
int128_t var_18_1 = zmm6
int128_t zmm7 = *rdx
int32_t arg_8
uint64_t rax

if (zmm0 f> zmm7.d)
    zmm6 = *(rdx + (rcx << 3) - 8)
    
    if (not(zmm0 f< zmm6.d))
        rax.b = *(arg1 + 0x6d) - 3
        
        if (rax.b u> 1)
            arg_8 = 0
            zmm6 = sub_141f84520(zmm7.d, zmm6, arg2, &arg_8)
            rax = zx.q(*(arg1 + 0x6d))
            
            if (rax.b != 1)
                goto label_141f961c0
            
            rax = *(arg1 + 0x78)
            *arg3 = (*(rax + (rcx << 3) - 4) f- *(rax + 4)) f* _mm_cvtepi32_ps(zx.o(arg_8)).d
else
    rax.b = *(arg1 + 0x6c) - 3
    
    if (rax.b u> 1)
        zmm6 = *(rdx + (rcx << 3) - 8)
        arg_8 = 0
        zmm6 = sub_141f84520(zmm7.d, zmm6, arg2, &arg_8)
        rax = zx.q(*(arg1 + 0x6c))
        
        if (rax.b != 1)
        label_141f961c0:
            
            if (rax.b == 2)
                rax = zx.q(arg_8) & 0x80000001
                
                if (rax.d s< 0)
                    rax = zx.q(((rax.d - 1) | 0xfffffffe) + 1)
                
                if (rax.d == 1)
                    zmm6.d = zmm6.d f- *arg2
                    zmm6.d = zmm6.d f+ zmm7.d
                    *arg2 = zmm6.d
        else
            rax = *(arg1 + 0x78)
            *arg3 = (*(rax + 4) f- *(rax + (rcx << 3) - 4)) f* _mm_cvtepi32_ps(zx.o(arg_8)).d
