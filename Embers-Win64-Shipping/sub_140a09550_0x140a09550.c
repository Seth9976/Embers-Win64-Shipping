// 函数: sub_140a09550
// 地址: 0x140a09550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg2)
int64_t* r13 = arg1

if (result.d s< arg1[0x8a].d)
    int64_t rbx_1 = sx.q(arg3[1].d)
    int64_t* r12_3 = (result << 6) + arg1[0x89]
    
    if (r12_3[1].d == rbx_1.d)
        float var_60[0x2][0x4]
        float (* rax)[0x4] = sub_140acc600(&var_60, arg3)
        *(r12_3 + 0x20) = *rax
        r12_3[6] = rax[1][0].q
        r12_3[7].d = (*rax)[6]
        
        if (rbx_1.d s> 0)
            int64_t r8 = 0
            float (* r11_1)[0x4] = nullptr
            void* r9 = nullptr
            int64_t r10_1 = 0
            
            do
                int64_t* rdx_2 = *r12_3 + r10_1
                
                if (arg3[1].d == rbx_1.d)
                    int64_t rax_2 = *arg3
                    *rdx_2 = *(r9 + rax_2)
                    rdx_2[1].d = *(r9 + rax_2 + 8)
                
                if (arg4[1].d == rbx_1.d)
                    int64_t rax_4 = *arg4
                    *(rdx_2 + 0xc) = *(r9 + rax_4)
                    *(rdx_2 + 0x14) = *(r9 + rax_4 + 8)
                
                if (arg10[1].d == rbx_1.d)
                    *(rdx_2 + 0x18) = *(r11_1 + *arg10)
                
                if (arg5[1].d == rbx_1.d)
                    *(rdx_2 + 0x2c) = *(*arg5 + (r8 << 3))
                
                if (arg6[1].d == rbx_1.d)
                    *(rdx_2 + 0x34) = *(*arg6 + (r8 << 3))
                
                if (arg7[1].d == rbx_1.d)
                    *(rdx_2 + 0x3c) = *(*arg7 + (r8 << 3))
                
                if (arg8[1].d == rbx_1.d)
                    *(rdx_2 + 0x44) = *(*arg8 + (r8 << 3))
                
                if (arg9[1].d == rbx_1.d)
                    rdx_2[5].d = *(*arg9 + (r8 << 2))
                
                r8 += 1
                r10_1 += 0x4c
                r9 += 0xc
                r11_1 = &r11_1[1]
            while (r8 s< rbx_1)
            
            r13 = arg1
        
        if (*(r12_3 + 0x3c) != 0)
            int64_t* i = r13[0x89]
            void* r15_4 = &i[sx.q(r13[0x8a].d) * 8]
            int64_t var_98 = 0
            int64_t var_90_1 = 0
            
            for (; i != r15_4; i = &i[8])
                if (*(i + 0x3c) != 0)
                    int32_t j = 0
                    
                    if (i[1].d s> 0)
                        int64_t rsi_1 = 0
                        
                        do
                            int64_t rbx_2 = sx.q(var_90_1.d)
                            void* r14_2 = *i
                            int32_t rax_14 = (rbx_2 + 1).d
                            var_90_1.d = rax_14
                            
                            if (rax_14 s> var_90_1:4.d)
                                sub_140638a00(&var_98)
                            
                            int64_t rax_15 = var_98
                            int64_t rcx_3 = rbx_2 * 3
                            j += 1
                            *(rax_15 + (rcx_3 << 2)) = *(r14_2 + rsi_1)
                            int32_t rax_16 = *(r14_2 + rsi_1 + 8)
                            rsi_1 += 0x4c
                            *(rax_15 + (rcx_3 << 2) + 8) = rax_16
                        while (j s< i[1].d)
            
            sub_142227b70(&r13[0x55])
            int64_t rcx_5 = var_98
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
        
        if (r13[0x7d] != 0 && (r13[0x11].b & 0x20) == 0)
            int32_t* rax_17 = j_sub_140a82f30(0x18)
            int32_t* rbx_3 = rax_17
            
            if (rax_17 == 0)
                rbx_3 = nullptr
            else
                *(rax_17 + 8) = 0
                *(rax_17 + 0x10) = 0
            
            *rbx_3 = arg2
            sub_1409fb6b0(&rbx_3[2], r12_3)
            void* rdi_1 = r13[0x7d]
            int32_t* var_80_1 = rbx_3
            char rax_19 = sub_140a80f40()
            
            if (rax_19 != 0)
                sub_140a09a50(rdi_1, rbx_3)
            else if (data_143f138f4 != rax_19)
            label_140a09880:
                void var_78
                void** rax_21 = sub_140a019a0(&var_78, nullptr, 0xff)
                *(*rax_21 + 0x10) = rdi_1.o
                void* rcx_10 = *rax_21
                int32_t r8_1 = rax_21[2].d
                int64_t* rdx_7 = rax_21[1]
                int64_t* rbx_4 = *(rcx_10 + 0x28)
                int64_t* arg_8 = rbx_4
                void* rdi_2 = &rbx_4[9]
                
                if (rbx_4 != 0)
                    *rdi_2 += 1
                    rbx_4 = arg_8
                
                sub_1405e48c0(rcx_10, rdx_7, r8_1, 1)
                
                if (rbx_4 != 0)
                    int32_t rax_22 = *rdi_2
                    *rdi_2 -= 1
                    
                    if (rax_22 == 1)
                        sub_140a2f6e0(arg_8)
            else if (data_143de5480 == rax_19)
                sub_140a09a50(rdi_1, rbx_3)
            else
                uint32_t rax_20
                rax_20.b = GetCurrentThreadId() == data_143de5470
                
                if (rax_20.b == 0)
                    goto label_140a09880
                
                sub_140a09a50(rdi_1, rbx_3)
        
        sub_140a092f0(r13)
        return sub_141ee8690(r13)

return result
