// 函数: sub_1426cdee0
// 地址: 0x1426cdee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg2 + 0xc0)
uint64_t rdi
rdi.b = 0
void* const r15

if (r14 == 0)
    r15 = nullptr
else
    r15 = *(r14 + 0x2d8)

if (r15 != 0)
    void* r12_1 = *(arg2 + 0xb8)
    int128_t zmm6 = *(arg1 + 0x90)
    
    if ((*(arg1 + 0xd4) & 1) != 0 && r14 != 0)
        int64_t rdx = *(r14 + 0x250)
        
        if (rdx != 0 && *(arg1 + 0xa8) != 0)
            sub_1426cce30(arg1 + 0x98, rdx)
            void* rax_1 = *(arg1 + 0xa0)
            int64_t rax_2
            
            if (rax_1 != 0)
                rax_2 = sx.q(*(rax_1 + 0x4c))
            
            if (rax_1 == 0 || rax_2 == neg.q(*(arg1 + 0xa8)))
                zmm6 = *(arg1 + 0xc8)
            else
                zmm6 = *(rax_2 + *(arg1 + 0xa8))
    
    void* const rsi_1
    
    if (*(arg1 + 0x80) == 0)
        rsi_1 = nullptr
    else
        void* rax_4 = sub_14272ef20()
        
        if (rax_4 == 0)
            rsi_1 = nullptr
        else
            rsi_1 = *(arg1 + 0x80)
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s> *(rsi_1 + 0x38) || *(*(rsi_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                rsi_1 = nullptr
    
    float var_48
    int32_t var_44
    int64_t var_38
    float zmm1[0x4]
    int64_t zmm2
    
    if (rsi_1 != sub_14272e650())
        void* const rsi_3
        
        if (*(arg1 + 0x80) == 0)
            rsi_3 = nullptr
        else
            void* rax_20 = sub_14272ef20()
            
            if (rax_20 == 0)
                rsi_3 = nullptr
            else
                rsi_3 = *(arg1 + 0x80)
                int64_t rax_21 = sx.q(*(rax_20 + 0x38))
                
                if (rax_21.d s> *(rsi_3 + 0x38)
                        || *(*(rsi_3 + 0x30) + (rax_21 << 3)) != rax_20 + 0x30)
                    rsi_3 = nullptr
        
        if (rsi_3 == sub_14272e8c0())
            sub_1426a2930(r12_1, &var_48, *(arg1 + 0x88))
            zmm1 = data_143b58058
            zmm2 = var_48
            int32_t var_40
            int128_t zmm3 = var_40
            float zmm5_1[0x4] = var_44
            char rax_24
            
            if ((zmm1 ^ 0x80000000)[0] f>= zmm2.d || zmm2.d f>= zmm1[0])
                rax_24 = 0
            else
                zmm1 = data_143b5805c
                
                if ((zmm1 ^ 0x80000000)[0] >= zmm5_1[0] || zmm5_1[0] >= zmm1[0])
                    rax_24 = 0
                else
                    zmm1 = data_143b58060
                    
                    if ((zmm1 ^ 0x80000000)[0] f>= zmm3.d || zmm3.d f>= zmm1[0])
                        rax_24 = 0
                    else
                        rax_24 = 1
            
            if (rax_24 != 0)
                if ((*(arg1 + 0xd4) & 4) == 0)
                    void* rax_26 = *(r14 + 0x250)
                    
                    if (rax_26 == 0)
                        rdi.b = 0
                    else
                        void* rcx_11 = *(rax_26 + 0x130)
                        float var_30_3
                        float zmm0_2[0x4]
                        
                        if (rcx_11 == 0)
                            float rax_27 = data_143dbb200
                            var_38 = data_143dbb1f8.q
                            var_30_3 = rax_27
                        else
                            zmm1 = *(rcx_11 + 0x1d0)
                            var_38.d = zmm1[0]
                            zmm0_2 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                            var_30_3 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                            var_38:4.d = zmm0_2[0]
                        
                        uint32_t rcx_12 = zx.d(*(arg1 + 0xd0))
                        var_48.q = var_38
                        
                        if (rcx_12 == 0)
                            zmm2.d = zmm2.d f- var_48
                            zmm3.d = zmm3.d f- var_30_3
                            zmm5_1[0] = zmm5_1[0] f- var_44
                            zmm2.d = zmm2.d f* zmm2.d
                            zmm3.d = zmm3.d f* zmm3.d
                            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                            zmm5_1[0] = zmm5_1[0] f+ zmm2.d
                            zmm5_1[0] = zmm5_1[0] f+ zmm3.d
                            zmm6.d = zmm6.d f* zmm6.d
                            rdi.b = zmm6.d f> zmm5_1[0]
                        else if (rcx_12 == 1)
                            zmm2.d = zmm2.d f- var_48
                            zmm6.d = zmm6.d f* zmm6.d
                            zmm5_1[0] = zmm5_1[0] f- var_44
                            zmm2.d = zmm2.d f* zmm2.d
                            zmm5_1[0] = zmm5_1[0] * zmm5_1[0]
                            zmm5_1[0] = zmm5_1[0] f+ zmm2.d
                            rdi.b = zmm6.d f> zmm5_1[0]
                        else if (rcx_12 != 2)
                            zmm6.d = zmm6.d f* zmm6.d
                            rdi.b = zmm6.d f> 0x7f7fffff[0]
                        else
                            zmm0_2 = var_30_3
                            zmm0_2[0] = zmm0_2[0] f- zmm3.d
                            zmm6.d = zmm6.d f* zmm6.d
                            zmm0_2[0] = zmm0_2[0] * zmm0_2[0]
                            rdi.b = zmm6.d f> zmm0_2[0]
                else
                    rdi = zx.q(sub_142702cb0(r15, &var_48, 1, zmm6))
    else
        void* rax_8 = sub_1426a2600(r12_1, *(arg1 + 0x88))
        
        if (rax_8 != 0)
            void* rax_9 = sub_142452380()
            void* rdx_3 = *(rax_8 + 0x10)
            int64_t rax_10 = sx.q(*(rax_9 + 0x38))
            
            if (rax_10.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax_10 << 3)) == rax_9 + 0x30)
                int32_t rax_12 = *(arg1 + 0xd4)
                
                if ((rax_12.b & 4) == 0)
                    void* rcx_5 = *(r14 + 0x250)
                    
                    if (rcx_5 == 0)
                        rdi.b = 0
                    else
                        void* rax_15 = *(rax_8 + 0x130)
                        float rdx_5 = data_143dbb200
                        zmm2 = data_143dbb1f8.q
                        int32_t* rax_16
                        uint128_t zmm0_1
                        
                        if (rax_15 == 0)
                            var_38 = zmm2
                            rax_16 = &var_38
                            float var_30_1 = rdx_5
                        else
                            zmm1 = *(rax_15 + 0x1d0)
                            rax_16 = &var_48
                            var_48 = zmm1[0]
                            zmm0_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                            float var_40_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                            var_44 = zmm0_1.d
                        
                        int32_t rax_17 = rax_16[2]
                        void* rax_18 = *(rcx_5 + 0x130)
                        uint64_t var_58_1 = *rax_16
                        float var_30_2
                        
                        if (rax_18 == 0)
                            var_38 = zmm2
                            var_30_2 = rdx_5
                        else
                            zmm1 = *(rax_18 + 0x1d0)
                            var_38.d = zmm1[0]
                            zmm0_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                            var_30_2 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                            var_38:4.d = zmm0_1.d
                        
                        uint32_t rcx_6 = zx.d(*(arg1 + 0xd0))
                        var_48.q = var_38
                        
                        if (rcx_6 == 0)
                            zmm1 = var_58_1.d
                            zmm2.d = var_58_1:4.d.d f- var_44
                            zmm1[0] = zmm1[0] - var_48
                            zmm0_1.d = rax_17.d f- var_30_2
                            zmm2.d = zmm2.d f* zmm2.d
                            zmm1[0] = zmm1[0] * zmm1[0]
                            zmm0_1.d = zmm0_1.d f* zmm0_1.d
                            zmm2.d = zmm2.d f+ zmm1[0]
                            zmm2.d = zmm2.d f+ zmm0_1.d
                            zmm6.d = zmm6.d f* zmm6.d
                            rdi.b = zmm6.d f> zmm2.d
                        else if (rcx_6 == 1)
                            zmm2.d = var_58_1:4.d.d f- var_44
                            zmm0_1.d = var_58_1.d.d f- var_48
                            zmm6.d = zmm6.d f* zmm6.d
                            zmm2.d = zmm2.d f* zmm2.d
                            zmm0_1.d = zmm0_1.d f* zmm0_1.d
                            zmm2.d = zmm2.d f+ zmm0_1.d
                            rdi.b = zmm6.d f> zmm2.d
                        else if (rcx_6 != 2)
                            zmm6.d = zmm6.d f* zmm6.d
                            rdi.b = zmm6.d f> 0x7f7fffff.d
                        else
                            zmm2.d = var_30_2.d f- rax_17
                            zmm6.d = zmm6.d f* zmm6.d
                            zmm2.d = zmm2.d f* zmm2.d
                            rdi.b = zmm6.d f> zmm2.d
                else
                    void* r8_2
                    r8_2.b = 3
                    rdi = zx.q(sub_142702db0(r15, rax_8, r8_2.b, zmm6.d, (rax_12 u>> 1).b & 1))

return zx.q(rdi.b)
