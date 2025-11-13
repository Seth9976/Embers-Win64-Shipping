// 函数: sub_142372730
// 地址: 0x142372730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_2 = arg1[1].d
int32_t i = 0
uint64_t result = zx.q(result_2)

if (result_2 s> 0)
    int32_t result_1 = result_2
    int64_t rdi_1 = 0
    
    do
        int64_t* rcx = *arg1
        result = zx.q(result_1)
        
        if (*(rcx + rdi_1) == arg2)
            int32_t rax_1 = result.d - i - 1
            
            if (rax_1 s>= 1)
                rax_1 = 1
            
            if (rax_1 != 0)
                memcpy(&rcx[sx.q(i)], &rcx[sx.q(result_1 - rax_1)], rax_1 << 3)
                result_1 = arg1[1].d
            
            arg1[1].d = result_1 - 1
            sub_1405c53d0(arg1)
            result = zx.q(arg1[1].d)
            i -= 1
            rdi_1 -= 8
        
        i += 1
        rdi_1 += 8
        result_1 = result.d
    while (i s< result.d)

if (result_2 != result.d)
    int32_t* rbp_3
    
    if (*(arg2 + 0x60) == *(arg2 + 0x8c))
    label_14237283f:
        rbp_3 = nullptr
    else
        void* r8_3 = arg2 + 0x90
        void* rdx_1 = *(r8_3 + 8)
        int64_t r9_2 = sx.q(arg1[2].d)
        
        if (rdx_1 != 0)
            r8_3 = rdx_1
        
        int32_t rax_6 = *(r8_3 + (((sx.q(*(arg2 + 0xa0)) - 1) & r9_2) << 2))
        
        if (rax_6 == 0xffffffff)
        label_14237283f_1:
            rbp_3 = nullptr
        else
            while (true)
                rbp_3 = (sx.q(rax_6) << 5) + *(arg2 + 0x58)
                
                if (*rbp_3 == r9_2.d)
                    break
                
                rax_6 = rbp_3[6]
                
                if (rax_6 == 0xffffffff)
                    goto label_14237283f_2
            
            if (rax_6 == 0xffffffff)
            label_14237283f_2:
                rbp_3 = nullptr
    
    int64_t r15_1 = 0
    void** r14 = *arg1
    result = &r14[arg1[1]]
    uint64_t r12_2 = sx.q(arg1[1].d) << 3 u>> 3
    
    if (r14 u> result)
        r12_2 = 0
    
    if (r12_2 != 0)
        do
            void* rdi_2 = *r14
            result = zx.q(*(rdi_2 + 0x60))
            int32_t* rdx_6
            
            if (result.d == *(rdi_2 + 0x8c))
            label_1423728de:
                rdx_6 = nullptr
            else
                void* r8_4 = rdi_2 + 0x90
                void* rdx_3 = *(r8_4 + 8)
                int64_t r9_3 = sx.q(arg1[2].d)
                
                if (rdx_3 != 0)
                    r8_4 = rdx_3
                
                result = zx.q(*(r8_4 + (((sx.q(*(rdi_2 + 0xa0)) - 1) & r9_3) << 2)))
                
                if (result.d == 0xffffffff)
                label_1423728de_1:
                    rdx_6 = nullptr
                else
                    while (true)
                        rdx_6 = (sx.q(result.d) << 5) + *(rdi_2 + 0x58)
                        
                        if (*rdx_6 == r9_3.d)
                            break
                        
                        result = zx.q(rdx_6[6])
                        
                        if (result.d == 0xffffffff)
                            goto label_1423728de_2
                    
                    if (result.d == 0xffffffff)
                    label_1423728de_2:
                        rdx_6 = nullptr
            
            int32_t rcx_9 = rdx_6[1]
            
            if (rcx_9 s> rbp_3[1])
                rcx_9 -= 1
                rdx_6[1] = rcx_9
            
            if ((*(arg1 + 0x2c) & 1) != 0)
                float _X = *(arg1 + 0x24)
                uint128_t zmm1
                zmm1.d = _mm_cvtepi32_ps(zx.o(arg1[1].d - rcx_9)).d f- 1f
                
                if (_X >= 0f)
                    _X = _mm_min_ss(_X, 0x3f800000)
                else
                    _X = (zx.o(0)).d
                
                uint32_t zmm0[0x4] = powf(_X, zmm1.d)
                
                if (zmm0[0] f>= 0f)
                    zmm0 = _mm_min_ss(zmm0[0], 0x3f800000)
                else
                    zmm0 = zx.o(0)
                
                result = sub_142376e80(rdi_2, &rdx_6[1], zmm0, arg1[6].d)
            
            r14 = &r14[1]
            r15_1 += 1
        while (r15_1 != r12_2)

return result
