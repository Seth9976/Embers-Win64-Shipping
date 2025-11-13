// 函数: sub_141c65940
// 地址: 0x141c65940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = 0
int64_t r14 = sx.q(arg3)
arg2[1].d = 0

if (*(arg2 + 0xc) s<= 0xffffffff)
    sub_1405c5510(arg2, 0)

if (*(arg1 + 0x378) == 0)
    int32_t rax_2 = *(arg1 + 0x374)
    *(arg1 + 0x370) = 0
    
    if (rax_2 s< 0 && rax_2 != 0)
        sub_1405dadb0(arg1 + 0x368, 0)
    
    int64_t r15_1 = sx.q(*(arg1 + 0x370))
    int32_t r12_1 = (r14 << 2).d
    int32_t rax_3 = r15_1.d + r12_1
    *(arg1 + 0x370) = rax_3
    
    if (rax_3 s> *(arg1 + 0x374))
        sub_1406105e0(arg1 + 0x368)
    
    memset(*(arg1 + 0x368) + (r15_1 << 2), 0, sx.q(r12_1) << 2)
    int64_t* rcx_8 = *(arg1 + 0x360)
    
    if (rcx_8 != 0)
        void* r15_2 = *(arg1 + 0x368)
        int32_t rax_5 = sub_141c658e0(rcx_8, r15_2, zx.q(r14.d))
        int64_t rsi_2 = sx.q(arg2[1].d)
        int32_t rbp_1 = (r14 * 2).d
        int32_t rcx_9 = rsi_2.d + rbp_1
        arg2[1].d = rcx_9
        
        if (rcx_9 s> *(arg2 + 0xc))
            sub_1405daba0(arg2)
        
        memset(rsi_2 + *arg2, 0, sx.q(rbp_1))
        void* r10_1 = *arg2
        float zmm0_1
        
        if (r14 s>= 4)
            void* rdx_5 = r10_1 + 4
            int64_t i_2 = ((r14 - 4) u>> 2) + 1
            void* rcx_13 = r15_2 + 8
            i_1 = i_2 << 2
            int64_t i
            
            do
                zmm0_1 = *(rcx_13 - 8)
                
                if (zmm0_1 >= -1f)
                    zmm0_1 = _mm_min_ss(zmm0_1, 0x3f800000)
                else
                    zmm0_1 = -1f
                
                *(rdx_5 - 4) = (int.d(zmm0_1 * 32767f)).w
                float zmm2_1 = *(rcx_13 - 4)
                
                if (zmm2_1 >= -1f)
                    zmm2_1 = _mm_min_ss(zmm2_1, 0x3f800000)
                else
                    zmm2_1 = -1f
                
                *(rdx_5 - 2) = (int.d(zmm2_1 * 32767f)).w
                zmm0_1 = *rcx_13
                
                if (zmm0_1 >= -1f)
                    zmm0_1 = _mm_min_ss(zmm0_1, 0x3f800000)
                else
                    zmm0_1 = -1f
                
                *rdx_5 = (int.d(zmm0_1 * 32767f)).w
                zmm0_1 = *(rcx_13 + 4)
                
                if (zmm0_1 >= -1f)
                    zmm0_1 = _mm_min_ss(zmm0_1, 0x3f800000)
                else
                    zmm0_1 = -1f
                
                rcx_13 += 0x10
                *(rdx_5 + 2) = (int.d(zmm0_1 * 32767f)).w
                rdx_5 += 8
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        for (; i_1 s< r14; i_1 += 1)
            zmm0_1 = *(r15_2 + (i_1 << 2))
            
            if (zmm0_1 >= -1f)
                zmm0_1 = _mm_min_ss(zmm0_1, 0x3f800000)
            else
                zmm0_1 = -1f
            
            *(r10_1 + (i_1 << 1)) = (int.d(zmm0_1 * 32767f)).w
        
        return zx.q(rax_5)
else
    int64_t rbx = sx.q(arg2[1].d)
    int32_t rsi = (r14 << 2).d
    int32_t rax = rbx.d + rsi
    arg2[1].d = rax
    
    if (rax s> *(arg2 + 0xc))
        sub_1405daba0(arg2)
    
    memset(rbx + *arg2, 0, sx.q(rsi))
    int64_t* rcx_4 = *(arg1 + 0x360)
    
    if (rcx_4 != 0)
        return sub_141c658e0(rcx_4, *arg2, zx.q(r14.d))

return 0
