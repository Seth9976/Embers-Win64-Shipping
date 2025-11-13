// 函数: sub_141771340
// 地址: 0x141771340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *(arg1 + 0x50)
void* rsi = arg3
int64_t rcx = sx.q(*(arg1 + 0x58)) << 2
uint64_t result = rcx + rdi
uint64_t rcx_1 = rcx u>> 2

if (rdi u> result)
    rcx_1 = 0

if (rcx_1 != 0)
    result = 0x7f7fffff
    int64_t rcx_2
    int64_t rdi_1
    rdi_1, rcx_2 = __memfill_u32(rdi, 0x7f7fffff, rcx_1)

int32_t i = 0

if (*(arg1 + 0x28) s> 0)
    uint128_t zmm9
    uint128_t var_68_1 = zmm9
    
    do
        result = zx.q(*(arg1 + 0x2c))
        int32_t j = 0
        
        if (result.d s> 0)
            do
                int32_t rbx_1 = 0
                
                if (*(arg1 + 0x30) s> 0)
                    int32_t r9 = i - 1
                    int32_t j_1 = j
                    int32_t r10_1 = i + 1
                    int32_t rcx_16
                    
                    do
                        arg3.b = 0
                        uint32_t zmm0[0x4]
                        int32_t zmm1
                        
                        if (i s> 0)
                            int32_t rcx_3 = *(rsi + 4)
                            int32_t rdx = *(rsi + 8)
                            int64_t rdi_2 = *(rsi + 0x10)
                            zmm0 = *(rdi_2 + (sx.q((rcx_3 * i + j) * rdx + rbx_1) << 2))
                            zmm0[0] f- 0f
                            
                            if (not(zmm0[0] f<= 0f))
                                zmm1 = 0x3f800000
                            else if (zmm0[0] f>= 0f)
                                zmm1 = (zx.o(0)).d
                            else
                                zmm1 = -0x40800000
                            
                            zmm0 = *(rdi_2 + (sx.q((r9 * rcx_3 + j) * rdx + rbx_1) << 2))
                            zmm0[0] f- 0f
                            
                            if (not(zmm0[0] f<= 0f))
                                zmm0 = 0x3f800000
                            else if (zmm0[0] f>= 0f)
                                zmm0 = zx.o(0)
                            else
                                zmm0 = 0xbf800000
                            
                            if (not(zmm1 f== zmm0[0]))
                                arg3.b = 1
                        
                        if (i s< *(arg1 + 0x28) - 1)
                            int32_t rcx_4 = *(rsi + 4)
                            int32_t rdx_1 = *(rsi + 8)
                            int64_t rdi_3 = *(rsi + 0x10)
                            zmm0 = *(rdi_3 + (sx.q((rcx_4 * i + j) * rdx_1 + rbx_1) << 2))
                            zmm0[0] f- 0f
                            
                            if (not(zmm0[0] f<= 0f))
                                zmm1 = 0x3f800000
                            else if (zmm0[0] f>= 0f)
                                zmm1 = (zx.o(0)).d
                            else
                                zmm1 = -0x40800000
                            
                            zmm0 = *(rdi_3 + (sx.q((rcx_4 * r10_1 + j) * rdx_1 + rbx_1) << 2))
                            zmm0[0] f- 0f
                            
                            if (not(zmm0[0] f<= 0f))
                                zmm0 = 0x3f800000
                            else if (zmm0[0] f>= 0f)
                                zmm0 = zx.o(0)
                            else
                                zmm0 = 0xbf800000
                            
                            if (not(zmm1 f== zmm0[0]))
                                arg3.b = 1
                        
                        if (j s> 0)
                            int32_t rdx_2 = *(rsi + 8)
                            int64_t rdi_4 = *(rsi + 0x10)
                            int32_t rcx_8 = *(rsi + 4) * i + j
                            zmm0 = *(rdi_4 + (sx.q(rcx_8 * rdx_2 + rbx_1) << 2))
                            zmm0[0] f- 0f
                            
                            if (not(zmm0[0] f<= 0f))
                                zmm1 = 0x3f800000
                            else if (zmm0[0] f>= 0f)
                                zmm1 = (zx.o(0)).d
                            else
                                zmm1 = -0x40800000
                            
                            zmm0 = *(rdi_4 + (sx.q((rcx_8 - 1) * rdx_2 + rbx_1) << 2))
                            zmm0[0] f- 0f
                            
                            if (not(zmm0[0] f<= 0f))
                                zmm0 = 0x3f800000
                            else if (zmm0[0] f>= 0f)
                                zmm0 = zx.o(0)
                            else
                                zmm0 = 0xbf800000
                            
                            if (not(zmm1 f== zmm0[0]))
                                arg3.b = 1
                        
                        if (j s< *(arg1 + 0x2c) - 1)
                            int32_t rdx_3 = *(rsi + 8)
                            int64_t rdi_5 = *(rsi + 0x10)
                            int32_t rcx_10 = *(rsi + 4) * i
                            zmm0 = *(rdi_5 + (sx.q((rcx_10 + j) * rdx_3 + rbx_1) << 2))
                            zmm0[0] f- 0f
                            
                            if (not(zmm0[0] f<= 0f))
                                zmm1 = 0x3f800000
                            else if (zmm0[0] f>= 0f)
                                zmm1 = (zx.o(0)).d
                            else
                                zmm1 = -0x40800000
                            
                            zmm0 = *(rdi_5 + (sx.q((rcx_10 + j + 1) * rdx_3 + rbx_1) << 2))
                            zmm0[0] f- 0f
                            
                            if (not(zmm0[0] f<= 0f))
                                zmm0 = 0x3f800000
                            else if (zmm0[0] f>= 0f)
                                zmm0 = zx.o(0)
                            else
                                zmm0 = 0xbf800000
                            
                            if (not(zmm1 f== zmm0[0]))
                                arg3.b = 1
                        
                        if (rbx_1 s> 0)
                            int64_t rcx_11 = sx.q((*(rsi + 4) * i + j) * *(rsi + 8) + rbx_1)
                            int64_t rax_48 = *(rsi + 0x10)
                            zmm0 = *(rax_48 + (rcx_11 << 2))
                            zmm0[0] f- 0f
                            
                            if (not(zmm0[0] f<= 0f))
                                zmm1 = 0x3f800000
                            else if (zmm0[0] f>= 0f)
                                zmm1 = (zx.o(0)).d
                            else
                                zmm1 = -0x40800000
                            
                            zmm0 = *(rax_48 + (rcx_11 << 2) - 4)
                            zmm0[0] f- 0f
                            
                            if (not(zmm0[0] f<= 0f))
                                zmm0 = 0x3f800000
                            else if (zmm0[0] f>= 0f)
                                zmm0 = zx.o(0)
                            else
                                zmm0 = 0xbf800000
                            
                            if (not(zmm1 f== zmm0[0]))
                                arg3.b = 1
                        
                        rcx_16 = *(arg1 + 0x30)
                        
                        if (rbx_1 s< rcx_16 - 1)
                            int64_t rdx_4 = sx.q((*(rsi + 4) * i + j) * *(rsi + 8) + rbx_1)
                            int64_t rax_55 = *(rsi + 0x10)
                            zmm0 = *(rax_55 + (rdx_4 << 2))
                            zmm0[0] f- 0f
                            
                            if (not(zmm0[0] f<= 0f))
                                zmm1 = 0x3f800000
                            else if (zmm0[0] f>= 0f)
                                zmm1 = (zx.o(0)).d
                            else
                                zmm1 = -0x40800000
                            
                            zmm0 = *(rax_55 + (rdx_4 << 2) + 4)
                            zmm0[0] f- 0f
                            
                            if (not(zmm0[0] f<= 0f))
                                zmm0 = 0x3f800000
                            else if (zmm0[0] f>= 0f)
                                zmm0 = zx.o(0)
                            else
                                zmm0 = 0xbf800000
                            
                            if (not(zmm1 f== zmm0[0]))
                                arg3.b = 1
                        
                        if (arg3.b != 0)
                            *(*(arg1 + 0x50) +
                                (sx.q((*(arg1 + 0x44) * i + j) * *(arg1 + 0x48) + rbx_1) << 2)) =
                                _mm_and_ps(
                                *(*(rsi + 0x10)
                                    + (sx.q((*(rsi + 4) * i + j) * *(rsi + 8) + rbx_1) << 2)), 
                                0x7fffffff)[0]
                            int64_t rdi_6 = sx.q(arg4[1].d)
                            int32_t rax_68 = (rdi_6 + 1).d
                            arg4[1].d = rax_68
                            
                            if (rax_68 s> *(arg4 + 0xc))
                                sub_14083a7e0(arg4)
                                r9 = i - 1
                                r10_1 = i + 1
                            
                            int64_t rax_69 = *arg4
                            int64_t rcx_15 = rdi_6 * 3
                            *(rax_69 + (rcx_15 << 2)) = i.q
                            *(rax_69 + (rcx_15 << 2) + 8) = rbx_1
                            rcx_16 = *(arg1 + 0x30)
                        
                        rbx_1 += 1
                    while (rbx_1 s< rcx_16)
                    result = zx.q(*(arg1 + 0x2c))
                
                j += 1
            while (j s< result.d)
        
        i += 1
    while (i s< *(arg1 + 0x28))

return result
