// 函数: sub_141e88060
// 地址: 0x141e88060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t arg_18 = arg3
int64_t* arg_10 = arg2
int64_t r13 = 0
int64_t r15 = sx.q(arg3)
char rdi = arg4
void* r12 = arg1
int64_t* var_80 = nullptr
int64_t var_78 = 0

if (r15.d s< arg2[1].d)
    int64_t rcx = r15 << 3
    int128_t zmm6
    int128_t var_58_1 = zmm6
    int64_t var_88_1 = rcx
    
    do
        int64_t* rcx_1 = *(rcx + *arg2)
        result = nullptr
        int64_t* var_98 = rcx_1
        void* rdx = *rcx_1
        
        if (0 == *(rdx + 0x1a4))
            *(rdx + 0x1a4) = 0
        else
            result = zx.q(*(rdx + 0x1a4))
        
        if (result.d != 1)
            void*** rcx_2 = var_98
            
            if (data_143a2d478 != 0)
                result = *rcx_2
            
            if (data_143a2d478 == 0 || ((result[1].d u>> 0xa).b & 1) == 0)
                result = sub_141e6c030(rcx_2)
                
                if (result.b == 0)
                    int64_t* rbx_1 = var_98
                    
                    if (rdi != 0 || (rbx_1[0x20].d & 0x100) != 0)
                        int64_t* r14_1 = r12 + 0x160
                        int32_t var_a8
                        sub_140865c40(r14_1, &var_a8, rbx_1)
                        int64_t rax_1 = sx.q(var_a8)
                        void* rcx_4
                        
                        if (rax_1.d != 0xffffffff)
                            rcx_4 = *r14_1 + rax_1 * 0x18
                        
                        int64_t* result_2
                        
                        if (rax_1.d == 0xffffffff || rcx_4 == 0)
                            result_2 = nullptr
                        else
                            result_2 = *(rcx_4 + 8)
                        
                        int64_t* result_1 = result_2
                        
                        if (result_2 != 0)
                        label_141e88497:
                            result = (*(*result_2 + 0x20))(result_2)
                            
                            if (result.b == 0)
                                int64_t* result_8 = result_1
                                result = (*(*result_8 + 0x10))(result_8)
                                
                                if (result.b != 0)
                                    int64_t* result_9 = result_1
                                    
                                    if ((*(*result_9 + 0x18))(result_9, var_98) == 0)
                                        sub_141e6c360(var_98)
                                        int64_t rdi_4 = sx.q(*(r12 + 0x158))
                                        int32_t rax_37 = (rdi_4 + 1).d
                                        *(r12 + 0x158) = rax_37
                                        
                                        if (rax_37 s> *(r12 + 0x15c))
                                            sub_1405a4d70(r12 + 0x150)
                                        
                                        result = result_1
                                        *(*(r12 + 0x150) + (rdi_4 << 3)) = result
                                        rdi = arg4
                                    else
                                        int64_t* result_10 = result_1
                                        result = (*(*result_10 + 0x28))(result_10)
                                        int64_t* result_11 = result_1
                                        
                                        if ((*(result_11 + 0x74) & 8) == 0)
                                            result = (*(*result_11 + 0x30))(result_11)
                        else
                            char rax_3 = sub_141e64770(rbx_1)
                            char rax_6
                            
                            if (rax_3 != 0)
                                int64_t* rax_5 = sub_1405f7040(sub_141f88540())
                                int64_t r8_1 = *rax_5
                                rax_6 = (*(r8_1 + 0xc8))(rax_5, var_98, r8_1)
                            
                            if (rax_3 == 0 || rax_6 != 0)
                                if ((*(r12 + 0x352) & 0x20) != 0 && *(r12 + 0x158) == 0)
                                    int64_t* r15_1 = *(r12 + 0x140)
                                    int64_t* rdi_1 = nullptr
                                    int64_t* rsi_1 = nullptr
                                    int64_t* r14_2 = nullptr
                                    int64_t r12_1 = 0
                                    uint64_t r13_2 = sx.q(*(r12 + 0x148)) << 3 u>> 3
                                    
                                    if (r15_1 u> &r15_1[sx.q(*(r12 + 0x148))])
                                        r13_2 = 0
                                    
                                    int64_t rax_11
                                    int64_t* rcx_16
                                    
                                    if (r13_2 == 0)
                                        rax_11 = *rsi_1
                                        rcx_16 = rsi_1
                                    else
                                        do
                                            int64_t* rbx_2 = *r15_1
                                            
                                            if ((*(*rbx_2 + 0x48))(rbx_2) == 0)
                                                int64_t* rcx_12 = rbx_2[2]
                                                
                                                if (rcx_12 != 0)
                                                    if (rcx_12[0x1f].d != 2
                                                            && (rcx_12[0x20].d & 0x100) == 0)
                                                        if (r14_2 != 0)
                                                            int128_t zmm0_3 = sub_141e63220(rcx_12)
                                                            
                                                            if (sub_141e63220(r14_2[2]) f> zmm0_3.d)
                                                                r14_2 = rbx_2
                                                        else
                                                            r14_2 = rbx_2
                                                    
                                                    if (rsi_1 != 0)
                                                        int128_t zmm0_5 = sub_141e63220(rbx_2[2])
                                                        
                                                        if (sub_141e63220(rsi_1[2]) f> zmm0_5.d)
                                                            rsi_1 = rbx_2
                                                    else
                                                        rsi_1 = rbx_2
                                            else if (rdi_1 != 0)
                                                if (not(sub_141e63220(rbx_2[2]).d
                                                        f>= sub_141e63220(rdi_1[2])))
                                                    rdi_1 = rbx_2
                                            else
                                                rdi_1 = rbx_2
                                            
                                            r15_1 = &r15_1[1]
                                            r12_1 += 1
                                        while (r12_1 != r13_2)
                                        
                                        if (rdi_1 != 0)
                                            rax_11 = *rdi_1
                                            rcx_16 = rdi_1
                                        else if (r14_2 == 0)
                                            rax_11 = *rsi_1
                                            rcx_16 = rsi_1
                                        else
                                            rax_11 = *r14_2
                                            rcx_16 = r14_2
                                    
                                    (*(rax_11 + 0x40))(rcx_16)
                                    r12 = arg1
                                    r13 = 0
                                    r15 = zx.q(arg_18)
                                
                                int64_t rdx_6 = sx.q(*(r12 + 0x158))
                                int64_t* result_12 = *(*(r12 + 0x150) + (rdx_6 << 3) - 8)
                                *(r12 + 0x158) = (rdx_6 - 1).d
                                sub_1405c53d0(r12 + 0x150)
                                int64_t* rsi_2 = var_98
                                result_1 = result_12
                                int64_t i = *rsi_2
                                
                                if (i != 0)
                                    int64_t* rcx_18 = var_80
                                    void* rdx_7 = &rcx_18[sx.q(var_78.d)]
                                    
                                    if (rcx_18 == rdx_7)
                                    label_141e88374:
                                        int64_t rdi_2 = sx.q(var_78.d)
                                        int32_t rax_15 = (rdi_2 + 1).d
                                        var_78.d = rax_15
                                        
                                        if (rax_15 s> var_78:4.d)
                                            sub_1405a4d70(&var_80)
                                        
                                        var_80[rdi_2] = *rsi_2
                                        rsi_2 = var_98
                                        result_12 = result_1
                                    else
                                        while (*rcx_18 != i)
                                            rcx_18 = &rcx_18[1]
                                            
                                            if (rcx_18 == rdx_7)
                                                goto label_141e88374
                                        
                                        if (((rcx_18 - var_80) s>> 3).d == 0xffffffff)
                                            goto label_141e88374
                                
                                if ((*(*result_12 + 8))(result_12, rsi_2) == 0)
                                label_141e88452:
                                    sub_141e6c360(var_98)
                                    result_1[2] = 0
                                    int64_t rdi_3 = sx.q(*(r12 + 0x158))
                                    int32_t rax_29 = (rdi_3 + 1).d
                                    *(r12 + 0x158) = rax_29
                                    
                                    if (rax_29 s> *(r12 + 0x15c))
                                        sub_1405a4d70(r12 + 0x150)
                                    
                                    *(*(r12 + 0x150) + (rdi_3 << 3)) = result_1
                                    result = sub_140d29f20(r14_1, var_98)
                                else
                                    int64_t* result_3 = result_1
                                    
                                    if ((*(*result_3 + 0x10))(result_3) != 0)
                                        int64_t* result_4 = result_1
                                        
                                        if ((*(*result_4 + 0x18))(result_4, var_98) == 0)
                                            goto label_141e88452
                                        
                                        int64_t* result_5 = result_1
                                        sub_141e6bc60(result_5, 
                                            (*(result_5[2] + 0x100) u>> 0xc).b & 1)
                                        int64_t* result_6 = result_1
                                        (*(*result_6 + 0x28))(result_6)
                                        int64_t* result_7 = result_1
                                        
                                        if ((*(result_7 + 0x74) & 8) == 0)
                                            (*(*result_7 + 0x30))(result_7)
                                        
                                        goto label_141e88410
                                    
                                label_141e88410:
                                    int64_t* rax_27 = sub_1405f7040(sub_141f88540())
                                    int64_t r8_2 = *rax_27
                                    (*(r8_2 + 0xd0))(rax_27, result_1, r8_2)
                                    int64_t** var_70 = &var_98
                                    int64_t** var_68_1 = &result_1
                                    void var_a4
                                    result = sub_1408d5f10(r14_1, &var_a4, &var_70, nullptr)
                                
                                rdi = arg4
                            else
                                result_2 = result_1
                                
                                if (result_2 != 0)
                                    goto label_141e88497
                                
                                result = sub_141e6c360(var_98)
        
        r15 = zx.q(r15.d + 1)
        arg2 = arg_10
        rcx = var_88_1 + 8
        arg_18 = r15.d
        var_88_1 = rcx
    while (r15.d s< arg2[1].d)
    
    int64_t rdi_5 = sx.q(var_78.d)
    
    if (rdi_5.d s> 0)
        result = EnterCriticalSection(r12 + 0x3a8)
        int64_t* r14_3 = var_80
        void* rcx_36 = &r14_3[rdi_5]
        uint64_t r15_5 = (rcx_36 - r14_3 + 7) u>> 3
        
        if (r14_3 u> rcx_36)
            r15_5 = 0
        
        if (r15_5 != 0)
            do
                int64_t* rdx_19 = *(r12 + 0x398)
                int64_t r8_4 = sx.q(*(r12 + 0x3a0))
                int64_t* rax_38 = rdx_19
                int64_t i_1 = *r14_3
                void* rcx_37 = &rdx_19[r8_4]
                
                if (rdx_19 != rcx_37)
                    while (*rax_38 != i_1)
                        rax_38 = &rax_38[1]
                        
                        if (rax_38 == rcx_37)
                            goto label_141e885dc
                    
                    result = (rax_38 - rdx_19) s>> 3
                
                if (rdx_19 == rcx_37 || result.d == 0xffffffff)
                label_141e885dc:
                    int32_t rax_40 = (r8_4 + 1).d
                    *(r12 + 0x3a0) = rax_40
                    
                    if (rax_40 s> *(r12 + 0x3a4))
                        sub_1405a4d70(r12 + 0x398)
                    
                    result = *(r12 + 0x398)
                    result[r8_4] = i_1
                
                r14_3 = &r14_3[1]
                r13 += 1
            while (r13 != r15_5)
        
        if (r12 != -0x3a8)
            result = LeaveCriticalSection(r12 + 0x3a8)
    
    int64_t* r14_4 = var_80
    
    if (r14_4 != 0)
        return sub_140a74f90(r14_4)

return result
