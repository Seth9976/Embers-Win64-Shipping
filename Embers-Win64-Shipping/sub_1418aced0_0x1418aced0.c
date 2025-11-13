// 函数: sub_1418aced0
// 地址: 0x1418aced0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t r15_1 = sub_14184de40(0x3f81111111111111) + _Query_perf_frequency()
char var_68 = 0xff
int64_t var_90

if (_Query_perf_frequency() u< r15_1)
    int64_t rax_26
    
    do
        void* rdi_1 = **(arg1 + 0xe8)
        
        if (rdi_1 == 0)
            break
        
        sub_14189e9c0(&var_90, rdi_1 + 8)
        void* rsi_1 = *(arg1 + 0xe8)
        *(arg1 + 0xe8) = rdi_1
        char var_38_1 = 0xff
        int64_t var_60
        sub_14189e9c0(rdi_1 + 8, &var_60)
        uint64_t rdx_3 = zx.q(var_38_1)
        bool cond:2_1
        
        if (rdx_3.d u<= 5)
            switch (rdx_3)
                case 0
                    if (rdx_3.b == 0)
                        char var_38_2 = 0xff
                        sub_14189e230(&var_60)
                case 1
                    if (rdx_3.b == 1)
                        char var_38_3 = 0xff
                case 2
                    cond:2_1 = rdx_3.b != 2
                label_1418acfc8:
                    
                    if (not(cond:2_1))
                        int64_t rcx_5 = var_60
                        char var_38_4 = 0xff
                        
                        if (rcx_5 != 0)
                            sub_140a74f90(rcx_5)
                case 3
                    cond:2_1 = rdx_3.b != 3
                    goto label_1418acfc8
                case 4
                    if (rdx_3.b == 4)
                        char var_38_5 = 0xff
                case 5
                    char rax_7 = rdx_3.b
                    
                    if (rdx_3.b == 4)
                        rax_7 = -1
                    
                    char var_38_6 = rax_7
        
        if (rsi_1 != 0)
            sub_1418aab80(rsi_1 + 8)
            j_sub_140a74f90(rsi_1)
        
        if (var_68 == 0)
            sub_1418a7f40(arg1, &var_90)
        else
            void var_9c
            int64_t var_80
            
            if (var_68 == 1)
                if (*sub_140910250(arg1 + 0x38, &var_9c, &var_90) != 0xffffffff)
                    int32_t var_a8
                    sub_140910250(arg1 + 0x38, &var_a8, &var_90)
                    int64_t rax_10 = sx.q(var_a8)
                    void* const r8_3
                    
                    if (rax_10.d == 0xffffffff)
                        r8_3 = nullptr
                    else
                        r8_3 = *(arg1 + 0x38) + rax_10 * 0x28
                    
                    int64_t rdx_9 = 0
                    int64_t* rcx_11 = *(r8_3 + 0x10)
                    uint64_t r9_2 = sx.q(*(r8_3 + 0x18)) << 3 u>> 3
                    
                    if (rcx_11 u> &rcx_11[sx.q(*(r8_3 + 0x18))])
                        r9_2 = 0
                    
                    if (r9_2 != 0)
                        do
                            void* r8_4 = *rcx_11
                            
                            if (*(r8_4 + 0x30) s<= 9)
                                *(r8_4 + 0x30) = var_80.d
                            
                            rcx_11 = &rcx_11[1]
                            rdx_9 += 1
                        while (rdx_9 != r9_2)
            else
                void var_94
                void var_98
                
                if (var_68 == 2)
                    if (*sub_140926e00(arg1 + 0x88, &var_98, &var_90) != 0xffffffff)
                        int32_t var_a4
                        sub_140926e00(arg1 + 0x88, &var_a4, &var_90)
                        int64_t rax_16 = sx.q(var_a4)
                        void* const rcx_14
                        
                        if (rax_16.d == 0xffffffff)
                            rcx_14 = nullptr
                        else
                            rcx_14 = *(arg1 + 0x88) + rax_16 * 0x28
                        
                        int64_t r8_7 = 0
                        int64_t* rdx_13 = *(rcx_14 + 0x10)
                        uint64_t r9_4 = sx.q(*(rcx_14 + 0x18)) << 3 u>> 3
                        
                        if (rdx_13 u> &rdx_13[sx.q(*(rcx_14 + 0x18))])
                            r9_4 = 0
                        
                        if (r9_4 != 0)
                            do
                                void* rcx_15 = *rdx_13
                                r8_7 += 1
                                rdx_13 = &rdx_13[1]
                                *(rcx_15 + 0x30) = var_80.d
                            while (r8_7 != r9_4)
                else if (var_68 == 3 && *sub_140926e00(arg1 + 0x88, &var_94, &var_90) != 0xffffffff)
                    int32_t var_a0
                    sub_140926e00(arg1 + 0x88, &var_a0, &var_90)
                    int64_t rax_22 = sx.q(var_a0)
                    void* const rcx_18
                    
                    if (rax_22.d == 0xffffffff)
                        rcx_18 = nullptr
                    else
                        rcx_18 = *(arg1 + 0x88) + rax_22 * 0x28
                    
                    int64_t* i = *(rcx_18 + 0x10)
                    
                    for (void* r9_5 = &i[sx.q(*(rcx_18 + 0x18))]; i != r9_5; i = &i[1])
                        void* r8_10 = *i
                        int64_t rcx_19 = *(r8_10 + 0x20)
                        int64_t var_78
                        
                        if (rcx_19 u>= var_78)
                            break
                        
                        int32_t var_70
                        
                        if (rcx_19 + *(r8_10 + 0x28) u> var_80)
                            *(r8_10 + 0x30) = var_70
        
        rax_26 = _Query_perf_frequency()
    while (rax_26 u< r15_1)

uint64_t rdx_17 = zx.q(var_68)
bool cond:0_1

if (rdx_17.d u<= 5)
    switch (rdx_17)
        case 0
            if (rdx_17.b == 0)
                char var_68_1 = 0xff
                sub_14189e230(&var_90)
        case 2
            cond:0_1 = rdx_17.b != 2
        label_1418ad286:
            
            if (not(cond:0_1))
                int64_t rcx_24 = var_90
                char var_68_2 = 0xff
                
                if (rcx_24 != 0)
                    sub_140a74f90(rcx_24)
        case 3
            cond:0_1 = rdx_17.b != 3
            goto label_1418ad286
uint64_t result
result.b = 1
__security_check_cookie(rax_1 ^ &var_c8)
return result
