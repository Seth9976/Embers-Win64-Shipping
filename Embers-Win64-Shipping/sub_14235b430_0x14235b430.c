// 函数: sub_14235b430
// 地址: 0x14235b430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_20 = arg4
int64_t* rsi = arg4
int64_t rdi = sx.q(arg3)

if (arg1[0x2a].d != *(arg1 + 0x17c))
    void* rbx_1 = &arg1[0x30]
    void* r10_1 = *(rbx_1 + 8)
    
    if (r10_1 != 0)
        rbx_1 = r10_1
    
    int32_t i = *(rbx_1 + (((sx.q(arg1[0x32].d) - 1) & rdi) << 2))
    
    if (i != 0xffffffff)
        int64_t r8 = arg1[0x29]
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rdx = i_1 * 3
            
            if (*(r8 + (rdx << 3)) == rdi.d)
                if (i != 0xffffffff)
                    void* rcx = r8 + i_1 * 0x18
                    
                    if (rcx != 0)
                        int64_t* result = *(rcx + 8)
                        
                        if (result != 0)
                            uint64_t rbp_1 = zx.q(result[4].b)
                            
                            if ((rbp_1 - 4).d u<= 2)
                                return result
                            
                            int64_t r8_1 = sx.q(result[1].d)
                            
                            if (result[3].d s> r8_1.d)
                                return result
                            
                            void* const j
                            
                            if (rbp_1.d u<= 6)
                                switch (rbp_1)
                                    case 1
                                        int64_t* rdx_1 = *result
                                        j = nullptr
                                        void* j_1 = nullptr
                                        int64_t r8_2 = 0
                                        uint64_t r9_1 = r8_1 << 3 u>> 3
                                        
                                        if (rdx_1 u> &rdx_1[r8_1])
                                            r9_1 = 0
                                        
                                        if (r9_1 != 0)
                                            do
                                                void* j_3 = *rdx_1
                                                
                                                if (j_1 == 0 ||
                                                        not((*(j_1 + 0x190))[0] f>= *(j_3 + 0x190)))
                                                    j_1 = j_3
                                                
                                                rdx_1 = &rdx_1[1]
                                                r8_2 += 1
                                            while (r8_2 != r9_1)
                                        
                                        if (arg5 == 0 || j_1 == 0
                                                || not((*(j_1 + 0x190))[0] f< *(arg2 + 0x190)))
                                            j = j_1
                                        
                                    label_14235b6ce:
                                        
                                        if (j != 0)
                                            int64_t* rdx_4 = *rsi
                                            int64_t r8_5 = sx.q(rsi[1].d)
                                            int64_t* rax_7 = rdx_4
                                            void* rcx_5 = &rdx_4[r8_5]
                                            
                                            if (rdx_4 != rcx_5)
                                                while (*rax_7 != j)
                                                    rax_7 = &rax_7[1]
                                                    
                                                    if (rax_7 == rcx_5)
                                                        goto label_14235b70c
                                            
                                            if (rdx_4 == rcx_5
                                                || ((rax_7 - rdx_4) s>> 3).d == 0xffffffff)
                                            label_14235b70c:
                                                int32_t rcx_6 = (r8_5 + 1).d
                                                rsi[1].d = rcx_6
                                                
                                                if (rcx_6 s> *(rsi + 0xc))
                                                    sub_1405a4d70(rsi)
                                                
                                                *(*rsi + (r8_5 << 3)) = j
                                            
                                            return result
                                    case 2, 3
                                        float zmm1[0x4] = *(arg2 + 0x230)
                                        void* rcx_3 = *arg1
                                        float var_58 = zmm1[0]
                                        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                                        arg4.b = 1
                                        float var_50_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
                                        float var_54_1 = temp0_1[0]
                                        float arg_8
                                        sub_141e7ab30(rcx_3, &var_58, &arg_8, arg4.b)
                                        j = nullptr
                                        int64_t* r14_1 = *result
                                        int64_t rsi_1 = 0
                                        uint64_t r13_2 = sx.q(result[1].d) << 3 u>> 3
                                        
                                        if (r14_1 u> &r14_1[result[1]])
                                            r13_2 = 0
                                        
                                        if (r13_2 != 0)
                                            do
                                                void* j_2 = *r14_1
                                                void* rcx_4 = *arg1
                                                float zmm1_1[0x4] = *(j_2 + 0x230)
                                                float var_4c = zmm1_1[0]
                                                float temp0_3[0x4] =
                                                    _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                                                float var_44_1 =
                                                    _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                                                float var_48_1 = temp0_3[0]
                                                int32_t var_68
                                                sub_141e7ab30(rcx_4, &var_4c, &var_68, 1)
                                                zmm1_1 = var_68
                                                float zmm0_1[0x4] = arg_8
                                                
                                                if (zmm1_1[0] > zmm0_1[0])
                                                    arg_8 = zmm1_1[0]
                                                    j = j_2
                                                else if (rbp_1.d == 3 && not(zmm1_1[0] != zmm0_1[0])
                                                        && (j == 0 ||
                                                        not((*(j + 0x190))[0] f>= *(j_2 + 0x190))) && (
                                                        arg5 == 0 || not((*(arg2 + 0x190))[0] f>=
                                                        *(j_2 + 0x190))))
                                                    arg_8 = zmm1_1[0]
                                                    j = j_2
                                                
                                                r14_1 = &r14_1[1]
                                                rsi_1 += 1
                                            while (rsi_1 != r13_2)
                                        
                                        rsi = arg_20
                                        goto label_14235b6ce
                
                break
            
            i = *(r8 + (rdx << 3) + 0x10)
        while (i != 0xffffffff)

return 0
