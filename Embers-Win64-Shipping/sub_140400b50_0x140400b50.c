// 函数: sub_140400b50
// 地址: 0x140400b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = 0xbf800000
int32_t i_2 = 0
int64_t rsi = sx.q(arg3)
*arg5 = 0
int128_t zmm3 = 0x3f800000
int128_t zmm4 = 0xbf800000
arg5[1] = 1
uint32_t r8 = 0
uint64_t result = 0
int128_t zmm7 = zx.o(0)
int32_t zmm5 = (zx.o(0)).d
int128_t zmm0
int32_t zmm1
int128_t zmm2

if (rsi.d s>= 4)
    void* rcx = arg2 + 8
    uint64_t rax_2 = zx.q(((rsi - 4).d u>> 2) + 1)
    uint64_t i_3 = zx.q(rax_2.d)
    r8 = (rax_2 << 2).d
    result = rax_2 << 2
    uint64_t i
    
    do
        zmm0 = *(rcx - 8)
        zmm1 = *(rcx - 4)
        zmm2 = *rcx
        rcx += 0x10
        zmm0.d = zmm0.d f* zmm0.d
        zmm2.d = zmm2.d f* zmm2.d
        zmm0.d = zmm0.d f+ zmm3.d
        zmm3 = *(rcx - 0xc)
        zmm3.d = zmm3.d f* zmm3.d
        zmm2.d = zmm2.d f+ zmm1 f* zmm1 f+ zmm0.d
        zmm3.d = zmm3.d f+ zmm2.d
        i = i_3
        i_3 -= 1
    while (i != 1)

if (r8 s< rsi.d)
    void* rcx_1 = arg2 + (result << 2)
    uint64_t i_4 = zx.q(rsi.d - r8)
    uint64_t i_1
    
    do
        zmm0 = *rcx_1
        rcx_1 += 4
        zmm0.d = zmm0.d f* zmm0.d
        zmm0.d = zmm0.d f+ zmm3.d
        zmm3 = zmm0
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

uint64_t rcx_2 = 0

if (arg4 s>= 4)
    void* rbx_3 = (rsi << 2) - arg1 + arg2
    void* r9_1 = arg2 - arg1
    int32_t r8_1 = 2
    int32_t* rdx_1 = arg1 + 4
    rcx_2 = zx.q(((arg4 - 4) u>> 2) + 1) << 2
    
    do
        zmm2 = rdx_1[-1]
        
        if (not(zmm2.d f<= 0f))
            zmm2.d = zmm2.d f* 9.99999996e-13f
            zmm2.d = zmm2.d f* zmm2.d
            zmm0.d = zmm4.d f* zmm3.d
            
            if (not(zmm5 f* zmm2.d f<= zmm0.d))
                zmm0.d = zmm6.d f* zmm3.d
                
                if (zmm7.d f* zmm2.d f<= zmm0.d)
                    zmm4 = zmm2
                    zmm5 = zmm3.d
                    arg5[1] = i_2
                else
                    result = zx.q(*arg5)
                    zmm4 = zmm6
                    zmm5 = zmm7.d
                    *arg5 = i_2
                    arg5[1] = result.d
                    zmm6 = zmm2
                    zmm7 = zmm3
        
        zmm1 = *(rbx_3 + rdx_1 - 4)
        zmm0 = *(rdx_1 + r9_1 - 4)
        zmm0.d = zmm0.d f* zmm0.d
        zmm3.d = zmm3.d f+ zmm1 f* zmm1 f- zmm0.d
        
        if (not(1f f<= zmm3.d))
            zmm3 = 0x3f800000
        
        zmm2 = *rdx_1
        
        if (not(zmm2.d f<= 0f))
            zmm2.d = zmm2.d f* 9.99999996e-13f
            zmm2.d = zmm2.d f* zmm2.d
            zmm0.d = zmm4.d f* zmm3.d
            
            if (not(zmm5 f* zmm2.d f<= zmm0.d))
                zmm0.d = zmm6.d f* zmm3.d
                
                if (zmm7.d f* zmm2.d f<= zmm0.d)
                    result = zx.q(r8_1 - 1)
                    zmm4 = zmm2
                    zmm5 = zmm3.d
                    arg5[1] = result.d
                else
                    zmm4 = zmm6
                    zmm5 = zmm7.d
                    arg5[1] = *arg5
                    result = zx.q(r8_1 - 1)
                    zmm6 = zmm2
                    zmm7 = zmm3
                    *arg5 = result.d
        
        zmm1 = *(rbx_3 + rdx_1)
        zmm0 = *(r9_1 + rdx_1)
        zmm0.d = zmm0.d f* zmm0.d
        zmm3.d = zmm3.d f+ zmm1 f* zmm1 f- zmm0.d
        
        if (not(1f f<= zmm3.d))
            zmm3 = 0x3f800000
        
        zmm2 = rdx_1[1]
        
        if (not(zmm2.d f<= 0f))
            zmm2.d = zmm2.d f* 9.99999996e-13f
            zmm2.d = zmm2.d f* zmm2.d
            zmm0.d = zmm4.d f* zmm3.d
            
            if (not(zmm5 f* zmm2.d f<= zmm0.d))
                zmm0.d = zmm6.d f* zmm3.d
                
                if (zmm7.d f* zmm2.d f<= zmm0.d)
                    zmm4 = zmm2
                    zmm5 = zmm3.d
                    arg5[1] = r8_1
                else
                    result = zx.q(*arg5)
                    zmm4 = zmm6
                    zmm5 = zmm7.d
                    *arg5 = r8_1
                    arg5[1] = result.d
                    zmm6 = zmm2
                    zmm7 = zmm3
        
        zmm1 = *(rdx_1 + rbx_3 + 4)
        zmm0 = *(rdx_1 + r9_1 + 4)
        zmm0.d = zmm0.d f* zmm0.d
        zmm3.d = zmm3.d f+ zmm1 f* zmm1 f- zmm0.d
        
        if (not(1f f<= zmm3.d))
            zmm3 = 0x3f800000
        
        zmm2 = rdx_1[2]
        
        if (not(zmm2.d f<= 0f))
            zmm2.d = zmm2.d f* 9.99999996e-13f
            zmm2.d = zmm2.d f* zmm2.d
            zmm0.d = zmm4.d f* zmm3.d
            
            if (not(zmm5 f* zmm2.d f<= zmm0.d))
                zmm0.d = zmm6.d f* zmm3.d
                
                if (zmm7.d f* zmm2.d f<= zmm0.d)
                    result = zx.q(r8_1 + 1)
                    zmm4 = zmm2
                    zmm5 = zmm3.d
                    arg5[1] = result.d
                else
                    zmm4 = zmm6
                    zmm5 = zmm7.d
                    arg5[1] = *arg5
                    result = zx.q(r8_1 + 1)
                    zmm6 = zmm2
                    zmm7 = zmm3
                    *arg5 = result.d
        
        zmm1 = *(rdx_1 + (rsi << 2) + 8 - arg1 + arg2)
        zmm0 = *(rdx_1 + r9_1 + 8)
        zmm0.d = zmm0.d f* zmm0.d
        zmm3.d = zmm3.d f+ zmm1 f* zmm1 f- zmm0.d
        
        if (not(1f f<= zmm3.d))
            zmm3 = 0x3f800000
        
        i_2 += 4
        rdx_1 = &rdx_1[4]
        r8_1 += 4
    while (i_2 s< arg4 - 3)

if (i_2 s< arg4)
    void* rcx_6 = arg1 + (rcx_2 << 2)
    
    do
        zmm2 = *rcx_6
        
        if (not(zmm2.d f<= 0f))
            zmm2.d = zmm2.d f* 9.99999996e-13f
            zmm2.d = zmm2.d f* zmm2.d
            zmm0.d = zmm4.d f* zmm3.d
            
            if (not(zmm5 f* zmm2.d f<= zmm0.d))
                zmm0.d = zmm6.d f* zmm3.d
                
                if (zmm7.d f* zmm2.d f<= zmm0.d)
                    zmm4 = zmm2
                    zmm5 = zmm3.d
                    arg5[1] = i_2
                else
                    result = zx.q(*arg5)
                    zmm4 = zmm6
                    zmm5 = zmm7.d
                    *arg5 = i_2
                    arg5[1] = result.d
                    zmm6 = zmm2
                    zmm7 = zmm3
        
        zmm1 = *((rsi << 2) - arg1 + arg2 + rcx_6)
        zmm0 = *(arg2 - arg1 + rcx_6)
        zmm0.d = zmm0.d f* zmm0.d
        zmm3.d = zmm3.d f+ zmm1 f* zmm1 f- zmm0.d
        
        if (not(1f f<= zmm3.d))
            zmm3 = 0x3f800000
        
        i_2 += 1
        rcx_6 += 4
    while (i_2 s< arg4)

return result
