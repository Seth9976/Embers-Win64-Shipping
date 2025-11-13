// 函数: sub_142780990
// 地址: 0x142780990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_28 = zmm6
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rdi = result.d
uint128_t zmm0
int64_t zmm1
uint128_t zmm2
uint128_t zmm3
uint128_t zmm4
float zmm5

if (result.d s>= 0)
    int32_t rsi_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        uint64_t r8 = zx.q(rdi)
        
        if (rsi_1 s< arg2)
            do
                zmm6 = *(arg4 + 4)
                uint64_t r10_1 = zx.q(((r8 << 1) + 1).d)
                int32_t rdx_1 = (r10_1 + 1).d
                
                if (rdx_1 s< arg2)
                    zmm4 = *arg4
                    zmm3 = *(arg4 + 8)
                    int32_t* rcx = sx.q(rdx_1) * 0x1c
                    zmm5 = zmm6.d f- *(rcx + arg1 + 4)
                    zmm2.d = zmm4.d f- *(rcx + arg1)
                    zmm0.d = zmm3.d f- *(rcx + arg1 + 8)
                    int32_t* rcx_1 = sx.q(r10_1.d) * 0x1c
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm0.d = zmm0.d f* zmm0.d
                    zmm1.d = zmm6.q.d f- *(rcx_1 + arg1 + 4)
                    zmm4.d = zmm4.d f- *(rcx_1 + arg1)
                    zmm3.d = zmm3.d f- *(rcx_1 + arg1 + 8)
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm4.d = zmm4.d f* zmm4.d
                    zmm3.d = zmm3.d f* zmm3.d
                    zmm1.d = zmm1.d f+ zmm4.d
                    zmm1.d = zmm1.d f+ zmm3.d
                    
                    if (zmm5 * zmm5 f+ zmm2.d f+ zmm0.d f< zmm1.d)
                        rdx_1 = r10_1.d
                    
                    r10_1 = zx.q(rdx_1)
                
                zmm3 = *arg4
                zmm2 = *(arg4 + 8)
                result = sx.q(r10_1.d)
                void* r8_2 = sx.q(r8.d) * 0x1c + arg1
                zmm4.d = zmm6.d f- *(r8_2 + 4)
                zmm1.d = zmm3.q.d f- *r8_2
                zmm0.d = zmm2.d f- *(r8_2 + 8)
                void* rdx_3 = result * 0x1c + arg1
                zmm4.d = zmm4.d f* zmm4.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm6.d = zmm6.d f- *(rdx_3 + 4)
                zmm3.d = zmm3.d f- *rdx_3
                zmm2.d = zmm2.d f- *(rdx_3 + 8)
                zmm4.d = zmm4.d f+ zmm1.d
                zmm0.d = zmm0.d f* zmm0.d
                zmm6.d = zmm6.d f* zmm6.d
                zmm3.d = zmm3.d f* zmm3.d
                zmm2.d = zmm2.d f* zmm2.d
                zmm4.d = zmm4.d f+ zmm0.d
                zmm6.d = zmm6.d f+ zmm3.d
                zmm6.d = zmm6.d f+ zmm2.d
                
                if (zmm4.d f>= zmm6.d)
                    break
                
                if (r8_2 != rdx_3)
                    int32_t rcx_2 = *(r8_2 + 0x18)
                    zmm3 = *r8_2
                    zmm2 = zx.o(*(r8_2 + 0x10))
                    *r8_2 = *rdx_3
                    *(r8_2 + 0x10) = *(rdx_3 + 0x10)
                    *(r8_2 + 0x18) = *(rdx_3 + 0x18)
                    *rdx_3 = zmm3
                    *(rdx_3 + 0x10) = zmm2.q
                    *(rdx_3 + 0x18) = rcx_2
                
                result = zx.q(((r10_1 << 1) + 1).d)
                r8 = zx.q(r10_1.d)
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
            int32_t rcx_3 = *(arg1 + 0x18)
            zmm3 = *arg1
            zmm2 = zx.o(arg1[1].q)
            *arg1 = *rdi_2
            arg1[1].q = *(rdi_2 + 0x10)
            result = zx.q(*(rdi_2 + 0x18))
            *(arg1 + 0x18) = result.d
            *rdi_2 = zmm3
            *(rdi_2 + 0x10) = zmm2.q
            *(rdi_2 + 0x18) = rcx_3
        
        uint64_t r8_3 = 0
        
        if (i s> 1)
            do
                zmm6 = *(arg4 + 4)
                uint64_t r10_2 = zx.q(((r8_3 << 1) + 1).d)
                int32_t rdx_4 = (r10_2 + 1).d
                
                if (rdx_4 s< i)
                    zmm4 = *arg4
                    zmm3 = *(arg4 + 8)
                    int32_t* rcx_4 = sx.q(rdx_4) * 0x1c
                    zmm5 = zmm6.d f- *(rcx_4 + arg1 + 4)
                    zmm2.d = zmm4.d f- *(rcx_4 + arg1)
                    zmm0.d = zmm3.d f- *(rcx_4 + arg1 + 8)
                    int32_t* rcx_5 = sx.q(r10_2.d) * 0x1c
                    zmm2.d = zmm2.d f* zmm2.d
                    zmm0.d = zmm0.d f* zmm0.d
                    zmm1.d = zmm6.q.d f- *(rcx_5 + arg1 + 4)
                    zmm4.d = zmm4.d f- *(rcx_5 + arg1)
                    zmm3.d = zmm3.d f- *(rcx_5 + arg1 + 8)
                    zmm1.d = zmm1.d f* zmm1.d
                    zmm4.d = zmm4.d f* zmm4.d
                    zmm3.d = zmm3.d f* zmm3.d
                    zmm1.d = zmm1.d f+ zmm4.d
                    zmm1.d = zmm1.d f+ zmm3.d
                    
                    if (zmm5 * zmm5 f+ zmm2.d f+ zmm0.d f< zmm1.d)
                        rdx_4 = r10_2.d
                    
                    r10_2 = zx.q(rdx_4)
                
                zmm3 = *arg4
                zmm2 = *(arg4 + 8)
                result = sx.q(r10_2.d)
                uint128_t* r8_5 = sx.q(r8_3.d) * 0x1c + arg1
                zmm4.d = zmm6.d f- *(r8_5 + 4)
                zmm1.d = zmm3.q.d f- *r8_5
                zmm0.d = zmm2.d f- *(r8_5 + 8)
                int128_t* rdx_6 = result * 0x1c + arg1
                zmm4.d = zmm4.d f* zmm4.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm6.d = zmm6.d f- *(rdx_6 + 4)
                zmm3.d = zmm3.d f- *rdx_6
                zmm2.d = zmm2.d f- *(rdx_6 + 8)
                zmm4.d = zmm4.d f+ zmm1.d
                zmm0.d = zmm0.d f* zmm0.d
                zmm6.d = zmm6.d f* zmm6.d
                zmm3.d = zmm3.d f* zmm3.d
                zmm2.d = zmm2.d f* zmm2.d
                zmm4.d = zmm4.d f+ zmm0.d
                zmm6.d = zmm6.d f+ zmm3.d
                zmm6.d = zmm6.d f+ zmm2.d
                
                if (zmm4.d f>= zmm6.d)
                    break
                
                if (r8_5 != rdx_6)
                    int32_t rcx_6 = *(r8_5 + 0x18)
                    zmm3 = *r8_5
                    zmm2 = zx.o(r8_5[1].q)
                    *r8_5 = *rdx_6
                    r8_5[1].q = rdx_6[1].q
                    *(r8_5 + 0x18) = *(rdx_6 + 0x18)
                    *rdx_6 = zmm3
                    rdx_6[1].q = zmm2.q
                    *(rdx_6 + 0x18) = rcx_6
                
                result = zx.q(((r10_2 << 1) + 1).d)
                r8_3 = zx.q(r10_2.d)
            while (result.d s< i)
        
        i -= 1
        rdi_2 -= 0x1c
    while (i s> 0)

return result
