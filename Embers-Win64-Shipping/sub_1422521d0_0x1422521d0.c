// 函数: sub_1422521d0
// 地址: 0x1422521d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142251b90(arg1 + 0x2028)
int64_t* i = *arg2
int32_t arg_8
void arg_10
int64_t* arg_18
int64_t arg_20

for (void* rbx_3 = &i[sx.q(arg2[1].d) * 2]; i != rbx_3; i = &i[2])
    void* r10_1 = *i
    
    if (r10_1 != 0)
        void* rax_1 = i[1]
        
        if (rax_1 != 0)
            int64_t r10_2 = *(r10_1 + 0x10)
            arg_20 = r10_2
            arg_18 = *(rax_1 + 0x10)
            uint32_t rcx_2 = (r10_2 u>> 4).d
            int32_t rdx_1 = (0x9e3779b9 - rcx_2) ^ rcx_2 << 8
            int32_t r9_3 = neg.d(rdx_1 + rcx_2) ^ rdx_1 u>> 0xd
            int32_t rcx_5 = (rcx_2 - rdx_1 - r9_3) ^ r9_3 u>> 0xc
            int32_t rdx_4 = (rdx_1 - rcx_5 - r9_3) ^ rcx_5 << 0x10
            int32_t r9_6 = (r9_3 - rdx_4 - rcx_5) ^ rdx_4 u>> 5
            int32_t rcx_8 = (rcx_5 - rdx_4 - r9_6) ^ r9_6 u>> 3
            int32_t rdx_7 = (rdx_4 - rcx_8 - r9_6) ^ rcx_8 << 0xa
            int32_t r9_9 = (r9_6 - rdx_7 - rcx_8) ^ rdx_7 u>> 0xf
            void* rax_20
            
            if (*(arg1 + 0x2030) == *(arg1 + 0x205c))
            label_14225231d:
                rax_20 = sub_1422375c0(arg1 + 0x2028, r9_9, &arg_20)
            else
                void* rcx_9 = *(arg1 + 0x2068)
                void* r8_1 = arg1 + 0x2060
                
                if (rcx_9 != 0)
                    r8_1 = rcx_9
                
                int32_t rax_19 = *(r8_1 + (((sx.q(*(arg1 + 0x2070)) - 1) & sx.q(r9_9)) << 2))
                
                if (rax_19 == 0xffffffff)
                label_14225231d_1:
                    rax_20 = sub_1422375c0(arg1 + 0x2028, r9_9, &arg_20)
                else
                    int64_t* rcx_13
                    
                    while (true)
                        rcx_13 = sx.q(rax_19) * 0x60 + *(arg1 + 0x2028)
                        
                        if (*rcx_13 == r10_2)
                            break
                        
                        rax_19 = rcx_13[0xb].d
                        
                        if (rax_19 == 0xffffffff)
                            goto label_14225231d_2
                    
                    if (rax_19 == 0xffffffff || rcx_13 == 0)
                    label_14225231d_2:
                        rax_20 = sub_1422375c0(arg1 + 0x2028, r9_9, &arg_20)
                    else
                        rax_20 = &rcx_13[1]
            
            sub_140812a70(rax_20, &arg_8, &arg_18, nullptr)
            int64_t* r9_10 = arg_18
            uint32_t rcx_17 = (r9_10 u>> 4).d
            int32_t rdx_15 = (0x9e3779b9 - rcx_17) ^ rcx_17 << 8
            int32_t r10_5 = neg.d(rdx_15 + rcx_17) ^ rdx_15 u>> 0xd
            int32_t rcx_20 = (rcx_17 - rdx_15 - r10_5) ^ r10_5 u>> 0xc
            int32_t rdx_18 = (rdx_15 - rcx_20 - r10_5) ^ rcx_20 << 0x10
            int32_t r10_8 = (r10_5 - rdx_18 - rcx_20) ^ rdx_18 u>> 5
            int32_t rcx_23 = (rcx_20 - rdx_18 - r10_8) ^ r10_8 u>> 3
            int32_t rdx_21 = (rdx_18 - rcx_23 - r10_8) ^ rcx_23 << 0xa
            int32_t r10_11 = (r10_8 - rdx_21 - rcx_23) ^ rdx_21 u>> 0xf
            void* rax_38
            
            if (*(arg1 + 0x2030) == *(arg1 + 0x205c))
            label_14225241d:
                rax_38 = sub_1422375c0(arg1 + 0x2028, r10_11, &arg_18)
            else
                void* rcx_24 = *(arg1 + 0x2068)
                void* r8_5 = arg1 + 0x2060
                
                if (rcx_24 != 0)
                    r8_5 = rcx_24
                
                int32_t rax_37 = *(r8_5 + (((sx.q(*(arg1 + 0x2070)) - 1) & sx.q(r10_11)) << 2))
                
                if (rax_37 == 0xffffffff)
                label_14225241d_1:
                    rax_38 = sub_1422375c0(arg1 + 0x2028, r10_11, &arg_18)
                else
                    int64_t* rcx_28
                    
                    while (true)
                        rcx_28 = sx.q(rax_37) * 0x60 + *(arg1 + 0x2028)
                        
                        if (*rcx_28 == r9_10)
                            break
                        
                        rax_37 = rcx_28[0xb].d
                        
                        if (rax_37 == 0xffffffff)
                            goto label_14225241d_2
                    
                    if (rax_37 == 0xffffffff || rcx_28 == 0)
                    label_14225241d_2:
                        rax_38 = sub_1422375c0(arg1 + 0x2028, r10_11, &arg_18)
                    else
                        rax_38 = &rcx_28[1]
            
            sub_140812a70(rax_38, &arg_10, &arg_20, nullptr)

int32_t* result = nullptr
*(arg1 + 0x2080) = 0

if (*(arg1 + 0x2084) != 0)
    sub_1405a5410(arg1 + 0x2078, 0)
    result = nullptr

int64_t i_4 = sx.q(*(arg1 + 0x2008))

if (i_4 s> 0)
    int64_t i_2 = i_4
    int64_t* rcx_32 = nullptr
    int64_t r12_1 = 1
    arg_20 = 1
    arg_18 = nullptr
    int64_t i_3 = i_2
    int64_t i_1
    
    do
        result = *(arg1 + 0x2000)
        int64_t rdi = r12_1
        int64_t rbp_1 = *(*(rcx_32 + result) + 0x10)
        
        if (r12_1 s< i_4)
            do
                int64_t rsi_1 = *(*(*(arg1 + 0x2000) + (rdi << 3)) + 0x10)
                sub_140ba6ab0(arg1 + 0x2028, &arg_8, rbp_1)
                int64_t rax_40 = sx.q(arg_8)
                void* const rax_43
                
                if (rax_40.d == 0xffffffff)
                    rax_43 = nullptr
                else
                    rax_43 = rax_40 * 0x60 + *(arg1 + 0x2028)
                
                int64_t* rcx_36 = rax_43 + 8
                
                if (rax_43 == 0)
                    rcx_36 = nullptr
                
                if (rcx_36 != 0)
                    result = sub_1408296b0(rcx_36, &arg_10, rsi_1)
                
                if (rcx_36 == 0 || *result == 0xffffffff)
                    int64_t var_58_1 = rsi_1
                    int64_t rsi_2 = sx.q(*(arg1 + 0x2080))
                    int32_t rax_44 = (rsi_2 + 1).d
                    *(arg1 + 0x2080) = rax_44
                    
                    if (rax_44 s> *(arg1 + 0x2084))
                        sub_1405a4f90(arg1 + 0x2078)
                    
                    result = *(arg1 + 0x2078)
                    *(result + rsi_2 * 0x10) = rbp_1.o
                
                rdi += 1
            while (rdi s< i_4)
            
            r12_1 = arg_20
            i_2 = i_3
        
        r12_1 += 1
        rcx_32 = &arg_18[1]
        arg_20 = r12_1
        i_1 = i_2
        i_2 -= 1
        arg_18 = rcx_32
        i_3 = i_2
    while (i_1 != 1)

*(arg1 + 0x20cc) = 1
return result
