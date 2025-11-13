// 函数: sub_142780d00
// 地址: 0x142780d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rdi = result.d
int128_t zmm0
int64_t zmm1
int64_t zmm2
int128_t zmm3
float zmm4
float zmm5

if (result.d s>= 0)
    int32_t rsi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        uint64_t r11_1 = zx.q(rdi)
        
        if (rsi_1 s< arg2)
            do
                uint64_t r9_1 = zx.q(((r11_1 << 1) + 1).d)
                int32_t r8_1 = (r9_1 + 1).d
                
                if (r8_1 s< arg2)
                    int64_t rcx = sx.q(r8_1) * 0x1c
                    int64_t rdx_1 = sx.q(r9_1.d) * 0x1c
                    zmm0 = *(rcx + arg1 + 0x10)
                    zmm2 = *(rcx + arg1 + 0xc)
                    zmm1 = *(rcx + arg1 + 0x14)
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm0.d = zmm0.d f* zmm0.d
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm3 = *(rdx_1 + arg1 + 0x10)
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm5 = *(rdx_1 + arg1 + 0xc)
                    zmm4 = *(rdx_1 + arg1 + 0x14)
                    zmm3.d = zmm3.d f* zmm3.d
                    zmm2.d = zmm2.d f+ zmm1.d
                    zmm2 = _mm_sqrt_ss(zmm2.d, zmm2.d).q
                    
                    if (_mm_sqrt_ss(0, zmm5 * zmm5 f+ zmm3.d + zmm4 * zmm4).d f< zmm2.d)
                        r8_1 = r9_1.d
                    
                    r9_1 = zx.q(r8_1)
                
                result = sx.q(r9_1.d)
                void* r8_3 = sx.q(r11_1.d) * 0x1c + arg1
                zmm0 = *(r8_3 + 0x10)
                zmm1 = *(r8_3 + 0x14)
                zmm2 = *(r8_3 + 0xc)
                zmm0.d = zmm0.d f* zmm0.d
                void* rdx_3 = result * 0x1c + arg1
                zmm1.d = zmm1.d f* zmm1.d
                zmm2.d = zmm2.d f* zmm2.d
                zmm3 = *(rdx_3 + 0x10)
                zmm5 = *(rdx_3 + 0xc)
                zmm4 = *(rdx_3 + 0x14)
                zmm2.d = zmm2.d f+ zmm0.d
                zmm3.d = zmm3.d f* zmm3.d
                zmm2.d = zmm2.d f+ zmm1.d
                
                if (_mm_sqrt_ss(0, zmm2.d).q.d
                        f<= _mm_sqrt_ss(0, zmm5 * zmm5 f+ zmm3.d + zmm4 * zmm4).d)
                    break
                
                if (r8_3 != rdx_3)
                    int32_t rcx_1 = *(r8_3 + 0x18)
                    zmm3 = *r8_3
                    zmm2 = *(r8_3 + 0x10)
                    *r8_3 = *rdx_3
                    *(r8_3 + 0x10) = *(rdx_3 + 0x10)
                    *(r8_3 + 0x18) = *(rdx_3 + 0x18)
                    *rdx_3 = zmm3
                    *(rdx_3 + 0x10) = zmm2
                    *(rdx_3 + 0x18) = rcx_1
                
                result = zx.q(((r9_1 << 1) + 1).d)
                r11_1 = zx.q(r9_1.d)
            while (result.d s< arg2)
        
        rsi_1 -= 2
        temp2_1 = rdi
        rdi -= 1
    while (temp2_1 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    void* rdi_2 = result * 0x1c + arg1
    
    do
        if (arg1 != rdi_2)
            int32_t rcx_2 = *(arg1 + 0x18)
            zmm3 = *arg1
            zmm2 = arg1[1].q
            *arg1 = *rdi_2
            arg1[1].q = *(rdi_2 + 0x10)
            result = zx.q(*(rdi_2 + 0x18))
            *(arg1 + 0x18) = result.d
            *rdi_2 = zmm3
            *(rdi_2 + 0x10) = zmm2
            *(rdi_2 + 0x18) = rcx_2
        
        uint64_t rbx_1 = 0
        
        if (i s> 1)
            do
                uint64_t r9_2 = zx.q(((rbx_1 << 1) + 1).d)
                int32_t r8_4 = (r9_2 + 1).d
                
                if (r8_4 s< i)
                    int64_t rcx_3 = sx.q(r8_4) * 0x1c
                    int64_t rdx_4 = sx.q(r9_2.d) * 0x1c
                    zmm0 = *(rcx_3 + arg1 + 0x10)
                    zmm2 = *(rcx_3 + arg1 + 0xc)
                    zmm1 = *(rcx_3 + arg1 + 0x14)
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm0.d = zmm0.d f* zmm0.d
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm3 = *(rdx_4 + arg1 + 0x10)
                    zmm2.d = zmm2.d f+ zmm0.d
                    zmm5 = *(rdx_4 + arg1 + 0xc)
                    zmm4 = *(rdx_4 + arg1 + 0x14)
                    zmm3.d = zmm3.d f* zmm3.d
                    zmm2.d = zmm2.d f+ zmm1.d
                    zmm2 = _mm_sqrt_ss(zmm2.d, zmm2.d).q
                    
                    if (_mm_sqrt_ss(0, zmm5 * zmm5 f+ zmm3.d + zmm4 * zmm4).d f< zmm2.d)
                        r8_4 = r9_2.d
                    
                    r9_2 = zx.q(r8_4)
                
                result = sx.q(r9_2.d)
                int128_t* r8_6 = sx.q(rbx_1.d) * 0x1c + arg1
                zmm0 = r8_6[1].d
                zmm1 = *(r8_6 + 0x14)
                zmm2 = *(r8_6 + 0xc)
                zmm0.d = zmm0.d f* zmm0.d
                int128_t* rdx_6 = result * 0x1c + arg1
                zmm1.d = zmm1.d f* zmm1.d
                zmm2.d = zmm2.d f* zmm2.d
                zmm3 = rdx_6[1].d
                zmm5 = *(rdx_6 + 0xc)
                zmm4 = *(rdx_6 + 0x14)
                zmm2.d = zmm2.d f+ zmm0.d
                zmm3.d = zmm3.d f* zmm3.d
                zmm2.d = zmm2.d f+ zmm1.d
                
                if (_mm_sqrt_ss(0, zmm2.d).q.d
                        f<= _mm_sqrt_ss(0, zmm5 * zmm5 f+ zmm3.d + zmm4 * zmm4).d)
                    break
                
                if (r8_6 != rdx_6)
                    int32_t rcx_4 = *(r8_6 + 0x18)
                    zmm3 = *r8_6
                    zmm2 = r8_6[1].q
                    *r8_6 = *rdx_6
                    r8_6[1].q = rdx_6[1].q
                    *(r8_6 + 0x18) = *(rdx_6 + 0x18)
                    *rdx_6 = zmm3
                    rdx_6[1].q = zmm2
                    *(rdx_6 + 0x18) = rcx_4
                
                result = zx.q(((r9_2 << 1) + 1).d)
                rbx_1 = zx.q(r9_2.d)
            while (result.d s< i)
        
        i -= 1
        rdi_2 -= 0x1c
    while (i s> 0)

return result
