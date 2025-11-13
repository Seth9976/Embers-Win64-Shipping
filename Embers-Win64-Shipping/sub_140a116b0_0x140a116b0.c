// 函数: sub_140a116b0
// 地址: 0x140a116b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *arg2
int64_t var_68
__builtin_memset(&var_68, 0, 0x28)
var_68 = *rdx
int64_t var_60
var_60.d = rdx[1].d

if (vorbis_synthesis(*(arg1 + 8) + 0xa8, &var_68) == 0)
    int64_t rcx_2 = *(arg1 + 8)
    
    if (vorbis_synthesis_blockin(rcx_2 + 0x28, rcx_2 + 0xa8) == 0)
        int64_t rsi = *(arg1 + 0x18)
        int32_t rdi = 0
        int64_t arg_8
        int32_t i_2 = vorbis_synthesis_pcmout(*(arg1 + 8) + 0x28, &arg_8)
        int32_t i_1 = i_2
        
        if (i_2 s> 0)
            int32_t i
            
            do
                int32_t rcx_6 = *(arg1 + 0x44)
                
                if (i_1 s> *(arg1 + 0x3c))
                    i_1 = *(arg1 + 0x3c)
                
                int32_t r15_1 = 0
                int64_t i_3 = sx.q(i_1)
                
                if (rcx_6 s> 0)
                    int64_t* r12_1 = nullptr
                    
                    do
                        int64_t r10_1 = 0
                        int32_t rdx_4 = r15_1
                        void* rbp_1 = *(r12_1 + arg_8)
                        
                        if (i_3 s>= 4)
                            void* r9_1 = rbp_1 + 8
                            int64_t j_1 = ((i_3 - 4) u>> 2) + 1
                            r10_1 = j_1 << 2
                            int64_t j
                            
                            do
                                int32_t rax_5 = int.d(*(r9_1 - 8) * 32767f)
                                int16_t r8_1
                                
                                if (rax_5 s>= 0xffff8000)
                                    r8_1 = -0x8000
                                    
                                    if (rax_5 s< 0x8000)
                                        r8_1 = rax_5.w
                                else
                                    r8_1 = -0x8000
                                
                                *(rsi + (sx.q(rdx_4 + rdi) << 1)) = r8_1
                                int32_t rdx_5 = rdx_4 + *(arg1 + 0x44)
                                int32_t rax_7 = int.d(*(r9_1 - 4) * 32767f)
                                int16_t r8_2
                                
                                if (rax_7 s>= 0xffff8000)
                                    r8_2 = -0x8000
                                    
                                    if (rax_7 s< 0x8000)
                                        r8_2 = rax_7.w
                                else
                                    r8_2 = -0x8000
                                
                                *(rsi + (sx.q(rdx_5 + rdi) << 1)) = r8_2
                                int32_t rdx_6 = rdx_5 + *(arg1 + 0x44)
                                int32_t rax_9 = int.d(*r9_1 * 32767f)
                                int16_t r8_3
                                
                                if (rax_9 s>= 0xffff8000)
                                    r8_3 = -0x8000
                                    
                                    if (rax_9 s< 0x8000)
                                        r8_3 = rax_9.w
                                else
                                    r8_3 = -0x8000
                                
                                *(rsi + (sx.q(rdx_6 + rdi) << 1)) = r8_3
                                int32_t rdx_7 = rdx_6 + *(arg1 + 0x44)
                                int32_t rax_11 = int.d(*(r9_1 + 4) * 32767f)
                                int16_t r8_4
                                
                                if (rax_11 s>= 0xffff8000)
                                    r8_4 = -0x8000
                                    
                                    if (rax_11 s< 0x8000)
                                        r8_4 = rax_11.w
                                else
                                    r8_4 = -0x8000
                                
                                r9_1 += 0x10
                                *(rsi + (sx.q(rdx_7 + rdi) << 1)) = r8_4
                                rcx_6 = *(arg1 + 0x44)
                                rdx_4 = rdx_7 + rcx_6
                                j = j_1
                                j_1 -= 1
                            while (j != 1)
                        
                        while (r10_1 s< i_3)
                            int32_t rax_13 = int.d(*(rbp_1 + (r10_1 << 2)) * 32767f)
                            int16_t r8_5
                            
                            if (rax_13 s>= 0xffff8000)
                                r8_5 = -0x8000
                                
                                if (rax_13 s< 0x8000)
                                    r8_5 = rax_13.w
                            else
                                r8_5 = -0x8000
                            
                            r10_1 += 1
                            *(rsi + (sx.q(rdx_4 + rdi) << 1)) = r8_5
                            rcx_6 = *(arg1 + 0x44)
                            rdx_4 += rcx_6
                        
                        r15_1 += 1
                        r12_1 = &r12_1[1]
                    while (r15_1 s< rcx_6)
                
                vorbis_synthesis_read(*(arg1 + 8) + 0x28, zx.q(i_1))
                rdi += i_1
                i = vorbis_synthesis_pcmout(*(arg1 + 8) + 0x28, &arg_8)
                i_1 = i
            while (i s> 0)
        
        return zx.q(rdi)

return 0xffffffff
