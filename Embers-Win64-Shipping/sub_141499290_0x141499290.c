// 函数: sub_141499290
// 地址: 0x141499290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbp = arg4
void* rbx = arg3
void* r13 = arg1
int64_t r14_1 = sx.q(*(arg3 + 0x28)) * 0x70 + *(arg1 + 0x2f0)
void* var_60 = arg6
char var_68 = 0
char var_70 = 0
int64_t var_50 = r14_1
sub_1414998e0(arg1, arg2, arg3, arg4, arg5, 0)
uint64_t r15 = 0
int32_t i = 0
int32_t i_2 = 0

if (*(r14_1 + 0x28) s> 0)
    char* rdx = arg7
    int64_t* rcx = nullptr
    int64_t* var_48_1 = nullptr
    
    do
        void* r12_1 = *(rcx + *(r14_1 + 0x20))
        int32_t rcx_1 = *(r12_1 + 0x570)
        
        if ((rcx_1.b & 0x41) == 0x41 && not(test_bit(rcx_1, 9)))
            void* r11_1 = arg3
            
            if ((*(*(r11_1 + 0x20) + 0x138) & 8) == 0)
            label_14149938d:
                *rdx = 1
                void* r9 = *(r12_1 + 0x48)
                int32_t r8 = *(r13 + 0xa8)
                
                if (r9 == 0)
                    int32_t j = 0
                    
                    if (r8 s> 0)
                        do
                            int32_t rbx_2 = *(arg2 + 0x8c)
                            int64_t* r14_3 = *(r13 + 0xa0) + r15
                            int32_t rax_16 = r14_3[0x15b].d
                            
                            if (rbx_2 != rax_16)
                                bool cond:2_1 = *(arg2 + 0x14) u> 0
                                *(arg2 + 0x8c) = rax_16
                                
                                if (cond:2_1)
                                    void*** rdx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    void* rax_17 = &rdx_16[3]
                                    
                                    if (rax_17 u> *(arg2 + 0x38))
                                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                                        r11_1 = arg3
                                        rdx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_17 = &rdx_16[3]
                                    
                                    *(arg2 + 0x30) = rax_17
                                    int64_t* rax_18 = *(arg2 + 8)
                                    *(arg2 + 0x14) += 1
                                    *rax_18 = rdx_16
                                    int32_t rax_19 = *(arg2 + 0x8c)
                                    *(arg2 + 8) = &rdx_16[1]
                                    rdx_16[1] = 0
                                    *rdx_16 = &data_142f11588
                                    rdx_16[2].d = rax_19
                                else
                                    *(arg2 + 0x90) = rax_16
                            
                            var_70.d = j
                            sub_1414d5c10(r13, arg2, r11_1, r12_1, r14_3, var_70)
                            
                            if (*(arg2 + 0x8c) != rbx_2)
                                bool cond:4_1 = *(arg2 + 0x14) u> 0
                                *(arg2 + 0x8c) = rbx_2
                                
                                if (cond:4_1)
                                    void*** rdx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                    void* rax_20 = &rdx_21[3]
                                    
                                    if (rax_20 u> *(arg2 + 0x38))
                                        sub_140b0e3d0(arg2 + 0x30, 0x20)
                                        rdx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                        rax_20 = &rdx_21[3]
                                    
                                    *(arg2 + 0x30) = rax_20
                                    int64_t* rax_21 = *(arg2 + 8)
                                    *(arg2 + 0x14) += 1
                                    *rax_21 = rdx_21
                                    int32_t rax_22 = *(arg2 + 0x8c)
                                    *(arg2 + 8) = &rdx_21[1]
                                    rdx_21[1] = 0
                                    *rdx_21 = &data_142f11588
                                    rdx_21[2].d = rax_22
                                else
                                    *(arg2 + 0x90) = rbx_2
                            
                            r11_1 = arg3
                            j += 1
                            r15 += 0x5240
                        while (j s< *(r13 + 0xa8))
                        
                        r14_1 = var_50
                        r15 = 0
                        i = i_2
                        rdx = arg7
                else
                    int32_t rbp_1 = -1
                    int32_t rdx_1 = 0
                    
                    if (r8 s> 0)
                        do
                            if (r9 == sx.q(rdx_1) * 0x5240 + *(r13 + 0xa0))
                                rbp_1 = rdx_1
                                break
                            
                            rdx_1 += 1
                        while (rdx_1 s< r8)
                    
                    int32_t rbx_1 = *(arg2 + 0x8c)
                    int32_t rax_8 = *(r9 + 0xad8)
                    
                    if (rbx_1 != rax_8)
                        bool cond:3_1 = *(arg2 + 0x14) u> 0
                        *(arg2 + 0x8c) = rax_8
                        
                        if (cond:3_1)
                            void*** rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_9 = &rdx_4[3]
                            
                            if (rax_9 u> *(arg2 + 0x38))
                                sub_140b0e3d0(arg2 + 0x30, 0x20)
                                r11_1 = arg3
                                rdx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_9 = &rdx_4[3]
                            
                            i = i_2
                            *(arg2 + 0x30) = rax_9
                            int64_t* rax_10 = *(arg2 + 8)
                            *(arg2 + 0x14) += 1
                            *rax_10 = rdx_4
                            int32_t rax_11 = *(arg2 + 0x8c)
                            *(arg2 + 8) = &rdx_4[1]
                            rdx_4[1] = 0
                            *rdx_4 = &data_142f11588
                            rdx_4[2].d = rax_11
                        else
                            *(arg2 + 0x90) = rax_8
                    
                    var_70.d = rbp_1
                    sub_1414d5c10(r13, arg2, r11_1, r12_1, *(r12_1 + 0x48), var_70)
                    
                    if (*(arg2 + 0x8c) != rbx_1)
                        bool cond:5_1 = *(arg2 + 0x14) u> 0
                        *(arg2 + 0x8c) = rbx_1
                        
                        if (cond:5_1)
                            void*** rdx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_13 = &rdx_10[3]
                            
                            if (rax_13 u> *(arg2 + 0x38))
                                sub_140b0e3d0(arg2 + 0x30, 0x20)
                                rdx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_13 = &rdx_10[3]
                            
                            *(arg2 + 0x30) = rax_13
                            int64_t* rax_14 = *(arg2 + 8)
                            *(arg2 + 0x14) += 1
                            *rax_14 = rdx_10
                            int32_t rax_15 = *(arg2 + 0x8c)
                            *(arg2 + 8) = &rdx_10[1]
                            rdx_10[1] = 0
                            *rdx_10 = &data_142f11588
                            rdx_10[2].d = rax_15
                        else
                            *(arg2 + 0x90) = rbx_1
                    
                    rdx = arg7
            else if ((rcx_1.b & 0x40) != 0 && *(r12_1 + 0x534) s>= 0 && (rcx_1.b & 0x10) != 0)
                goto label_14149938d
        
        i += 1
        rcx = &var_48_1[1]
        i_2 = i
        var_48_1 = rcx
    while (i s< *(r14_1 + 0x28))
    
    rbx = arg3
    rbp = arg4

int64_t result
uint128_t zmm6
result, zmm6 = sub_1410afa70(r13, arg2, rbx, rbp, r14_1 + 0x30, 0)

if (*(r13 + 0xa8) s> 0)
    int64_t r12_2 = 0
    
    do
        int32_t rbx_3 = *(arg2 + 0x8c)
        void* r14_5 = *(r13 + 0xa0) + r12_2
        int32_t rax_24 = *(r14_5 + 0xad8)
        
        if (rbx_3 != rax_24)
            bool cond:0_1 = *(arg2 + 0x14) u> 0
            *(arg2 + 0x8c) = rax_24
            
            if (cond:0_1)
                void*** rdx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_25 = &rdx_27[3]
                
                if (rax_25 u> *(arg2 + 0x38))
                    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x20)
                    rdx_27 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_25 = &rdx_27[3]
                
                *(arg2 + 0x30) = rax_25
                int64_t* rax_26 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_26 = rdx_27
                int32_t rax_27 = *(arg2 + 0x8c)
                *(arg2 + 8) = &rdx_27[1]
                rdx_27[1] = 0
                *rdx_27 = &data_142f11588
                rdx_27[2].d = rax_27
            else
                *(arg2 + 0x90) = rax_24
        
        int32_t i_1 = 0
        
        if (*(var_50 + 0x28) s> 0)
            void** rsi = nullptr
            
            do
                void* r9_4 = *(rsi + *(var_50 + 0x20))
                
                if ((*(r9_4 + 0x570) & 0x41).b == 0x41)
                    result, zmm6 = sub_1411dbd90(r14_5 + 0x50d8, r14_5, arg2, r9_4, zmm6)
                
                i_1 += 1
                rsi = &rsi[1]
            while (i_1 s< *(var_50 + 0x28))
            
            r13 = arg1
        
        if (*(arg2 + 0x8c) != rbx_3)
            bool cond:1_1 = *(arg2 + 0x14) u> 0
            *(arg2 + 0x8c) = rbx_3
            
            if (cond:1_1)
                void*** rdx_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_30 = &rdx_33[3]
                
                if (rax_30 u> *(arg2 + 0x38))
                    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x20)
                    rdx_33 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_30 = &rdx_33[3]
                
                *(arg2 + 0x30) = rax_30
                void**** rax_31 = *(arg2 + 8)
                *(arg2 + 0x14) += 1
                *rax_31 = rdx_33
                result = zx.q(*(arg2 + 0x8c))
                *(arg2 + 8) = &rdx_33[1]
                rdx_33[1] = 0
                *rdx_33 = &data_142f11588
                rdx_33[2].d = result.d
            else
                *(arg2 + 0x90) = rbx_3
        
        r15 = zx.q(r15.d + 1)
        r12_2 += 0x5240
    while (r15.d s< *(r13 + 0xa8))
    
    rbx = arg3
    rbp = arg4

if (arg6 != 0)
    sub_1411e9c30(arg2, r13 + 0xa0, rbx, arg6, rbp)

result.b = 1
return result
