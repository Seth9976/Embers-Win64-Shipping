// 函数: sub_142377680
// 地址: 0x142377680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x20)
void* i_2 = arg1
void* arg_10 = rdi
int64_t* i
i.b = 1

if (rdi != 0)
    void* rax_1 = sub_14259f000()
    void* rdx_1 = *(rdi + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        int64_t* rdx_2 = *(rdi + 0x168)
        int64_t* var_48 = nullptr
        int32_t var_40_1 = 0
        int64_t* var_68 = nullptr
        int64_t var_60_1 = 0
        sub_14234e960(rdi, rdx_2, &var_48)
        int64_t* r15_1 = var_48
        void* r12_1 = &r15_1[sx.q(var_40_1)]
        
        if (r15_1 == r12_1)
        label_142377843:
            int64_t* rdx_9 = *(rdi + 0x168)
            int64_t** var_58 = nullptr
            int32_t var_50_1 = 0
            sub_14234ea60(rdi, rdx_9, &var_58)
            int64_t** r15_2 = var_58
            void* r12_2 = &r15_2[sx.q(var_50_1)]
            
            if (r15_2 == r12_2)
            label_142377992:
                i.b = 1
            else
                while (true)
                    bool cond:3_1 = var_60_1:4.d s>= 0
                    i = *r15_2
                    var_60_1.d = 0
                    
                    if (not(cond:3_1))
                        sub_1405c5570(&var_68, 0)
                    
                    if (i != 0)
                        void* rax_13 = sub_14259e570()
                        void* rdx_10 = i[2]
                        int64_t rax_14 = sx.q(*(rax_13 + 0x38))
                        
                        if (rax_14.d s<= *(rdx_10 + 0x38)
                                && *(*(rdx_10 + 0x30) + (rax_14 << 3)) == rax_13 + 0x30)
                            int64_t* r8_8 = var_68
                            int64_t rdi_2 = sx.q(var_60_1.d)
                            int64_t* rcx_14 = r8_8
                            void* rdx_11 = &r8_8[rdi_2]
                            
                            if (r8_8 != rdx_11)
                                while (*rcx_14 != i)
                                    rcx_14 = &rcx_14[1]
                                    
                                    if (rcx_14 == rdx_11)
                                        goto label_1423778fb
                            
                            if (r8_8 == rdx_11 || ((rcx_14 - r8_8) s>> 3).d == 0xffffffff)
                            label_1423778fb:
                                int32_t rax_16 = (rdi_2 + 1).d
                                var_60_1.d = rax_16
                                
                                if (rax_16 s> var_60_1:4.d)
                                    sub_1405a4d70(&var_68)
                                    r8_8 = var_68
                                
                                r8_8[rdi_2] = i
                        
                        int32_t rax_18 = (*(*i + 0x2a8))(i)
                        int32_t rsi_2 = 0
                        int64_t i_1 = 0
                        
                        if (i[6].d s> 0)
                            while (i_1 s< sx.q(rax_18))
                                sub_14234e860(arg_10, *(i[5] + (i_1 << 3)), &var_68)
                                rsi_2 += 1
                                i_1 += 1
                                
                                if (rsi_2 s>= i[6].d)
                                    break
                            
                            i_2 = arg1
                    
                    int64_t* rax_19 = var_68
                    void* rdx_15 = &rax_19[sx.q(var_60_1.d)]
                    
                    if (rax_19 != rdx_15)
                        while (*rax_19 != i_2)
                            rax_19 = &rax_19[1]
                            
                            if (rax_19 == rdx_15)
                                goto label_142377981
                        
                        r15_2 = var_58
                        i.b = 0
                        break
                    
                label_142377981:
                    r15_2 = &r15_2[1]
                    
                    if (r15_2 == r12_2)
                        r15_2 = var_58
                        goto label_142377992
            
            if (r15_2 != 0)
                sub_140a74f90(r15_2)
        else
            while (true)
                bool cond:2_1 = var_60_1:4.d s>= 0
                i = *r15_1
                var_60_1.d = 0
                
                if (not(cond:2_1))
                    sub_1405c5570(&var_68, 0)
                
                if (i != 0)
                    void* rax_5 = sub_14259e570()
                    void* rdx_3 = i[2]
                    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                    
                    if (rax_6.d s<= *(rdx_3 + 0x38)
                            && *(*(rdx_3 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
                        int64_t* r8_4 = var_68
                        int64_t rdi_1 = sx.q(var_60_1.d)
                        int64_t* rcx_4 = r8_4
                        void* rdx_4 = &r8_4[rdi_1]
                        
                        if (r8_4 != rdx_4)
                            while (*rcx_4 != i)
                                rcx_4 = &rcx_4[1]
                                
                                if (rcx_4 == rdx_4)
                                    goto label_1423777a4
                        
                        if (r8_4 == rdx_4 || ((rcx_4 - r8_4) s>> 3).d == 0xffffffff)
                        label_1423777a4:
                            int32_t rax_8 = (rdi_1 + 1).d
                            var_60_1.d = rax_8
                            
                            if (rax_8 s> var_60_1:4.d)
                                sub_1405a4d70(&var_68)
                                r8_4 = var_68
                            
                            r8_4[rdi_1] = i
                    
                    int32_t rax_10 = (*(*i + 0x2a8))(i)
                    int32_t rsi_1 = 0
                    int64_t i_3 = 0
                    
                    if (i[6].d s> 0)
                        while (i_3 s< sx.q(rax_10))
                            sub_14234e860(arg_10, *(i[5] + (i_3 << 3)), &var_68)
                            rsi_1 += 1
                            i_3 += 1
                            
                            if (rsi_1 s>= i[6].d)
                                break
                        
                        i_2 = arg1
                
                int64_t* rcx_10 = var_68
                void* rdx_8 = &rcx_10[sx.q(var_60_1.d)]
                
                if (rcx_10 != rdx_8)
                    while (*rcx_10 != i_2)
                        rcx_10 = &rcx_10[1]
                        
                        if (rcx_10 == rdx_8)
                            goto label_142377832
                    
                    i.b = 0
                    break
                
            label_142377832:
                r15_1 = &r15_1[1]
                
                if (r15_1 == r12_1)
                    rdi = arg_10
                    goto label_142377843
        
        int64_t* rcx_22 = var_68
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        int64_t* rcx_23 = var_48
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)

return zx.q(i.b)
