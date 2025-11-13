// 函数: sub_14235e2d0
// 地址: 0x14235e2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t* r12 = *arg3
uint64_t result = &r12[sx.q(arg3[1].d) * 2]
void* var_168 = arg2
uint64_t result_1 = result

if (r12 != result)
    do
        int32_t rax_5
        
        if ((*(*r12 + 4) & 1) == 0 || *(arg2 + 0x38) == 0)
            rax_5 = 0
            
            if (r12[1].d == 0)
                rax_5 = 3
        else if (*(r12 + 0xc) == 0 || *(arg2 + 0x18) == 0)
            rax_5 = 1
        else
            rax_5 = 2
        
        int32_t var_178_3
        char* var_170_3
        int64_t* rcx_21
        int32_t* rdx_26
        int32_t r8_9
        int32_t* r9_3
        void* r14_3
        
        if (rax_5 == 0)
            int64_t r9_7 = sx.q(r12[1].d)
            
            if (*(arg1 + 0x10) == *(arg1 + 0x3c))
            label_14235e8d2:
                void* rax_26 = sub_14235e090(arg1, r12)
                r14_3 = rax_26
                int32_t rbx_8 = *(rax_26 + 0x10)
                int32_t var_c0
                sub_14090a150(arg1 + 8, &var_c0)
                rcx_21 = arg1 + 8
                int32_t* var_b8
                r9_3 = var_b8
                var_170_3 = nullptr
                *var_b8 = r12[1].d
                int32_t rdx_51 = var_c0
                var_b8[1] = rbx_8
                var_178_3 = rdx_51
                void var_13c
                rdx_26 = &var_13c
                var_b8[2] = 0xffffffff
                r8_9 = *var_b8
            label_14235e921:
                sub_140d438a0(rcx_21, rdx_26, r8_9, r9_3, var_178_3, var_170_3)
                int64_t rbx_9 = sx.q(arg4[1].d)
                int32_t rax_27 = (rbx_9 + 1).d
                arg4[1].d = rax_27
                
                if (rax_27 s> *(arg4 + 0xc))
                    sub_1405a4d70(arg4)
                
                result = *arg4
                *(result + (rbx_9 << 3)) = r14_3
                arg2 = var_168
            else
                void* rcx_35 = *(arg1 + 0x48)
                void* r8_16 = arg1 + 0x40
                
                if (rcx_35 != 0)
                    r8_16 = rcx_35
                
                result = zx.q(*(r8_16 + (((sx.q(*(arg1 + 0x50)) - 1) & r9_7) << 2)))
                
                if (result.d == 0xffffffff)
                    goto label_14235e8d2
                
                int64_t rdx_47 = *(arg1 + 8)
                
                while (true)
                    int64_t rcx_37 = sx.q(result.d) * 2
                    
                    if (*(rdx_47 + (rcx_37 << 3)) == r9_7.d)
                        break
                    
                    result = zx.q(*(rdx_47 + (rcx_37 << 3) + 8))
                    
                    if (result.d == 0xffffffff)
                        goto label_14235e8d2
                
                if (result.d == 0xffffffff)
                    goto label_14235e8d2
                
                arg2 = var_168
        else
            int64_t var_a8
            void* r15_1
            
            if (rax_5 == 1)
                int64_t r9_4 = sx.q(*(arg2 + 0x38))
                int32_t rax_19 = *(arg1 + 0x60)
                int32_t var_15c = r9_4.d
                
                if (rax_19 == *(arg1 + 0x8c))
                label_14235e6f5:
                    void* rax_21 = sub_14235e090(arg1, r12)
                    int32_t rbx_6 = r12[1].d
                    r15_1 = rax_21
                    int32_t var_7c_2 = 0x80
                    int32_t var_78_2 = 0xffffffff
                    int32_t rdi_7 = *(rax_21 + 0x10)
                    __builtin_memset(&var_a8, 0, 0x2c)
                    int32_t var_74_2 = 0
                    int64_t var_68_2 = 0
                    int32_t var_60_2 = 0
                    int32_t var_e0
                    sub_14090a150(&var_a8, &var_e0)
                    int32_t rax_22 = var_e0
                    char* var_170_4 = nullptr
                    int32_t* var_d8
                    *var_d8 = rbx_6
                    var_d8[1] = rdi_7
                    var_d8[2] = 0xffffffff
                    void var_144
                    sub_140d438a0(&var_a8, &var_144, rbx_6, var_d8, rax_22, var_170_4)
                    int32_t* var_d0 = &var_15c
                    int64_t* var_c8_1 = &var_a8
                    void var_140
                    sub_14234da30(arg1 + 0x58, &var_140, &var_d0, nullptr)
                    sub_1405ae180(&var_a8)
                label_14235e446:
                    int64_t rbx_2 = sx.q(arg4[1].d)
                    int32_t rax_10 = (rbx_2 + 1).d
                    arg4[1].d = rax_10
                    
                    if (rax_10 s> *(arg4 + 0xc))
                        sub_1405a4d70(arg4)
                    
                    result = *arg4
                    *(result + (rbx_2 << 3)) = r15_1
                    arg2 = var_168
                else
                    void* r8_10 = arg1 + 0x90
                    void* rcx_22 = *(r8_10 + 8)
                    
                    if (rcx_22 != 0)
                        r8_10 = rcx_22
                    
                    int32_t rax_20 = *(r8_10 + (((sx.q(*(arg1 + 0xa0)) - 1) & r9_4) << 2))
                    
                    if (rax_20 == 0xffffffff)
                        goto label_14235e6f5
                    
                    int64_t r8_11 = *(arg1 + 0x58)
                    int64_t rdx_30
                    
                    while (true)
                        rdx_30 = sx.q(rax_20)
                        int32_t* rcx_24 = rdx_30 * 0x60
                        
                        if (*(rcx_24 + r8_11) == r9_4.d)
                            break
                        
                        rax_20 = *(rcx_24 + r8_11 + 0x58)
                        
                        if (rax_20 == 0xffffffff)
                            goto label_14235e6f5
                    
                    if (rax_20 == 0xffffffff)
                        goto label_14235e6f5
                    
                    int64_t rdi_9 = rdx_30 * 0x60
                    void* rdi_10 = rdi_9 + r8_11
                    
                    if (rdi_9 == neg.q(r8_11) || rdi_10 == -8)
                        goto label_14235e6f5
                    
                    int64_t r9_6 = sx.q(r12[1].d)
                    
                    if (*(rdi_10 + 0x10) == *(rdi_10 + 0x3c))
                    label_14235e827:
                        void* rax_24 = sub_14235e090(arg1, r12)
                        r14_3 = rax_24
                        int32_t rbx_7 = *(rax_24 + 0x10)
                        int32_t var_f0
                        sub_14090a150(rdi_10 + 8, &var_f0)
                        rcx_21 = rdi_10 + 8
                        int32_t* var_e8
                        r9_3 = var_e8
                        var_170_3 = nullptr
                        *var_e8 = r12[1].d
                        int32_t rdx_43 = var_f0
                        var_e8[1] = rbx_7
                        var_178_3 = rdx_43
                        void var_148
                        rdx_26 = &var_148
                        var_e8[2] = 0xffffffff
                        r8_9 = *var_e8
                        goto label_14235e921
                    
                    void* rcx_30 = *(rdi_10 + 0x48)
                    void* r8_14 = rdi_10 + 0x40
                    
                    if (rcx_30 != 0)
                        r8_14 = rcx_30
                    
                    result = zx.q(*(r8_14 + (((sx.q(*(rdi_10 + 0x50)) - 1) & r9_6) << 2)))
                    
                    if (result.d == 0xffffffff)
                        goto label_14235e827
                    
                    int64_t rdx_39 = *(rdi_10 + 8)
                    
                    while (true)
                        int64_t rcx_32 = sx.q(result.d) * 2
                        
                        if (*(rdx_39 + (rcx_32 << 3)) == r9_6.d)
                            break
                        
                        result = zx.q(*(rdx_39 + (rcx_32 << 3) + 8))
                        
                        if (result.d == 0xffffffff)
                            goto label_14235e827
                    
                    if (result.d == 0xffffffff)
                        goto label_14235e827
                    
                    arg2 = var_168
            else
                result = zx.q(rax_5 - 2)
                
                if (rax_5 == 2)
                    int64_t r9_1 = sx.q(*(arg2 + 0x38))
                    int64_t r15_2 = sx.q(*(*(arg2 + 0x18) + 0xc))
                    int32_t rax_12 = *(arg1 + 0xb0)
                    int32_t var_160 = r9_1.d
                    
                    if (rax_12 == *(arg1 + 0xdc))
                    label_14235e4e5:
                        void* rax_14 = sub_14235e090(arg1, r12)
                        int32_t var_7c_1 = 0x80
                        int32_t var_78_1 = 0xffffffff
                        int32_t rbx_3 = *(rax_14 + 0x10)
                        __builtin_memset(&var_a8, 0, 0x2c)
                        int32_t var_74_1 = 0
                        int64_t var_68_1 = 0
                        int32_t var_60_1 = 0
                        int32_t var_110
                        sub_14090a150(&var_a8, &var_110)
                        int32_t rax_15 = var_110
                        char* var_170_2 = nullptr
                        int32_t* var_108
                        *var_108 = r15_2.d
                        var_108[1] = rbx_3
                        var_108[2] = 0xffffffff
                        void var_150
                        sub_140d438a0(&var_a8, &var_150, r15_2.d, var_108, rax_15, var_170_2)
                        int32_t* var_100 = &var_160
                        int64_t* var_f8_1 = &var_a8
                        void var_14c
                        sub_14234da30(arg1 + 0xa8, &var_14c, &var_100, nullptr)
                        sub_1405ae180(&var_a8)
                        int64_t rbx_4 = sx.q(arg4[1].d)
                        int32_t rax_16 = (rbx_4 + 1).d
                        arg4[1].d = rax_16
                        
                        if (rax_16 s> *(arg4 + 0xc))
                            sub_1405a4d70(arg4)
                        
                        result = *arg4
                        *(result + (rbx_4 << 3)) = rax_14
                        arg2 = var_168
                    else
                        void* rcx_7 = *(arg1 + 0xe8)
                        void* r8_3 = arg1 + 0xe0
                        
                        if (rcx_7 != 0)
                            r8_3 = rcx_7
                        
                        int32_t rax_13 = *(r8_3 + (((sx.q(*(arg1 + 0xf0)) - 1) & r9_1) << 2))
                        
                        if (rax_13 == 0xffffffff)
                            goto label_14235e4e5
                        
                        int64_t r8_4 = *(arg1 + 0xa8)
                        int64_t rdx_12
                        
                        while (true)
                            rdx_12 = sx.q(rax_13)
                            int32_t* rcx_9 = rdx_12 * 0x60
                            
                            if (*(rcx_9 + r8_4) == r9_1.d)
                                break
                            
                            rax_13 = *(rcx_9 + r8_4 + 0x58)
                            
                            if (rax_13 == 0xffffffff)
                                goto label_14235e4e5
                        
                        if (rax_13 == 0xffffffff)
                            goto label_14235e4e5
                        
                        int64_t rdi_4 = rdx_12 * 0x60
                        void* rdi_5 = rdi_4 + r8_4
                        
                        if (rdi_4 == neg.q(r8_4) || rdi_5 == -8)
                            goto label_14235e4e5
                        
                        if (*(rdi_5 + 0x10) == *(rdi_5 + 0x3c))
                        label_14235e636:
                            void* rax_18 = sub_14235e090(arg1, r12)
                            r14_3 = rax_18
                            int32_t rbx_5 = *(rax_18 + 0x10)
                            int32_t var_120
                            sub_14090a150(rdi_5 + 8, &var_120)
                            rcx_21 = rdi_5 + 8
                            int32_t* var_118
                            r9_3 = var_118
                            var_170_3 = nullptr
                            var_178_3 = var_120
                            void var_154
                            rdx_26 = &var_154
                            *var_118 = r15_2.d
                            var_118[1] = rbx_5
                            var_118[2] = 0xffffffff
                            r8_9 = r15_2.d
                            goto label_14235e921
                        
                        void* rcx_16 = *(rdi_5 + 0x48)
                        void* r8_7 = rdi_5 + 0x40
                        
                        if (rcx_16 != 0)
                            r8_7 = rcx_16
                        
                        result = zx.q(*(r8_7 + (((sx.q(*(rdi_5 + 0x50)) - 1) & r15_2) << 2)))
                        
                        if (result.d == 0xffffffff)
                            goto label_14235e636
                        
                        int64_t rdx_22 = *(rdi_5 + 8)
                        
                        while (true)
                            int64_t rcx_18 = sx.q(result.d) * 2
                            
                            if (*(rdx_22 + (rcx_18 << 3)) == r15_2.d)
                                break
                            
                            result = zx.q(*(rdx_22 + (rcx_18 << 3) + 8))
                            
                            if (result.d == 0xffffffff)
                                goto label_14235e636
                        
                        if (result.d == 0xffffffff)
                            goto label_14235e636
                        
                        arg2 = var_168
                else if (result.d == 1)
                    int64_t r14_1 = sx.q(*(*(arg2 + 0x18) + 0xc))
                    
                    if (*(arg1 + 0x100) == *(arg1 + 0x12c))
                    label_14235e3f6:
                        void* rax_9 = sub_14235e090(arg1, r12)
                        r15_1 = rax_9
                        int32_t rbx_1 = *(rax_9 + 0x10)
                        int32_t var_130
                        sub_14090a150(arg1 + 0xf8, &var_130)
                        int32_t rdx_6 = var_130
                        char* var_170_1 = nullptr
                        int32_t* var_128
                        *var_128 = r14_1.d
                        var_128[1] = rbx_1
                        var_128[2] = 0xffffffff
                        void var_158
                        sub_140d438a0(arg1 + 0xf8, &var_158, r14_1.d, var_128, rdx_6, var_170_1)
                        goto label_14235e446
                    
                    void* rcx = *(arg1 + 0x138)
                    void* r8 = arg1 + 0x130
                    
                    if (rcx != 0)
                        r8 = rcx
                    
                    result = zx.q(*(r8 + (((sx.q(*(arg1 + 0x140)) - 1) & r14_1) << 2)))
                    
                    if (result.d == 0xffffffff)
                        goto label_14235e3f6
                    
                    int64_t rdx_3 = *(arg1 + 0xf8)
                    
                    while (true)
                        int64_t rcx_2 = sx.q(result.d) * 2
                        
                        if (*(rdx_3 + (rcx_2 << 3)) == r14_1.d)
                            break
                        
                        result = zx.q(*(rdx_3 + (rcx_2 << 3) + 8))
                        
                        if (result.d == 0xffffffff)
                            goto label_14235e3f6
                    
                    if (result.d == 0xffffffff)
                        goto label_14235e3f6
                    
                    arg2 = var_168
        r12 = &r12[2]
    while (r12 != result_1)

__security_check_cookie(rax_1 ^ &var_198)
return result
