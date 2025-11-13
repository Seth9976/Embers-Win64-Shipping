// 函数: sub_141f76360
// 地址: 0x141f76360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0x7d]

if (rcx == 0 || arg1[0xa6].d s<= 0)
    return 

void* rdx_1 = arg1[0x86]

if (*(rdx_1 + 0x170) s<= 0)
    return 

int64_t* var_58 = nullptr
int64_t var_50_1 = 0
int64_t* r8_1 = *(rdx_1 + 0x168)
int64_t* arg_18 = r8_1
void* rax_2 = &r8_1[sx.q(*(rdx_1 + 0x170))]

if (r8_1 != rax_2)
    do
        void* rax_3 = *r8_1
        
        if (rax_3 != 0)
            void* rcx_1 = *(rax_3 + 0x30)
            void* arg_10 = rcx_1
            void* rax_7 = sx.q(*(rax_3 + 0x38)) * 0x30 + rcx_1
            
            if (rcx_1 != rax_7)
                do
                    int32_t* r13_1 = *(rcx_1 + 0x18)
                    int64_t rcx_2 = 0
                    int64_t arg_8 = 0
                    uint64_t r8_3 = sx.q(*(rcx_1 + 0x20)) << 2 u>> 2
                    
                    if (r13_1 u> &r13_1[sx.q(*(rcx_1 + 0x20))])
                        r8_3 = 0
                    
                    uint64_t arg_20 = r8_3
                    
                    if (r8_3 != 0)
                        do
                            int32_t i = 0
                            int64_t r15_1 = sx.q(*r13_1)
                            
                            if (*(*(rdx_1 + 0x58) + 8) s> 0)
                                int64_t* rsi_1 = nullptr
                                
                                do
                                    int64_t* rcx_4 = *(rsi_1 + **(rdx_1 + 0x58))
                                    
                                    if (r15_1.d s>= 0 && r15_1.d s< rcx_4[1].d)
                                        int64_t r8_4 = *arg1
                                        int64_t j = (*(r8_4 + 0x548))(arg1, 
                                            zx.q(*(r15_1 * 0xe8 + *rcx_4)), r8_4)
                                        int64_t* r8_5 = var_58
                                        int64_t rdi_1 = sx.q(var_50_1.d)
                                        int64_t* rcx_7 = r8_5
                                        void* rax_13 = &r8_5[rdi_1]
                                        
                                        if (r8_5 != rax_13)
                                            while (*rcx_7 != j)
                                                rcx_7 = &rcx_7[1]
                                                
                                                if (rcx_7 == rax_13)
                                                    goto label_141f764fc
                                        
                                        if (r8_5 == rax_13
                                            || ((rcx_7 - r8_5) s>> 3).d == 0xffffffff)
                                        label_141f764fc:
                                            int32_t rax_14 = (rdi_1 + 1).d
                                            var_50_1.d = rax_14
                                            
                                            if (rax_14 s> var_50_1:4.d)
                                                sub_1405a4d70(&var_58)
                                                r8_5 = var_58
                                            
                                            r8_5[rdi_1] = j
                                    
                                    rdx_1 = arg1[0x86]
                                    i += 1
                                    rsi_1 = &rsi_1[1]
                                while (i s< *(*(rdx_1 + 0x58) + 8))
                                
                                rcx_2 = arg_8
                                r8_3 = arg_20
                            
                            rcx_2 += 1
                            r13_1 = &r13_1[1]
                            arg_8 = rcx_2
                        while (rcx_2 != r8_3)
                    
                    rcx_1 = arg_10 + 0x30
                    arg_10 = rcx_1
                while (rcx_1 != rax_7)
                
                r8_1 = arg_18
        
        r8_1 = &r8_1[1]
        arg_18 = r8_1
    while (r8_1 != rax_2)
    
    rcx = arg1[0x7d]

sub_142320e00(rcx, &var_58)
int64_t* rcx_12 = var_58

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)
