// 函数: sub_1406ac7b0
// 地址: 0x1406ac7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i
void* i_1 = i
void* rsi = arg2
int64_t* r12 = arg1
int64_t var_88
sub_14068c240(&var_88, arg1)
int64_t r15 = r12[5]
void* rdi = &r12[5]
int64_t r14 = *(rdi + 8)
void* r13 = nullptr
void* var_60
__builtin_memset(&var_60, 0, 0x18)
int128_t var_58

if (r15 != r14)
    int64_t r14_1 = r14 - r15
    int64_t rbx_1 = r14_1 s>> 4
    void* rax_1 = sub_1406afec0(&var_60, rbx_1)
    i = (rbx_1 << 4) + rax_1
    var_60 = rax_1
    var_58:8.q = i
    r13 = rax_1
    memmove(rax_1, r15, r14_1.d)
    var_58.q = i

void* var_80

if (rsi == 0)
label_1406ac96d:
    i.b = 0
else
    void* rcx_3 = &r12[1]
    int64_t r15_1 = 0xfffffffffffffff
    void* arg_20 = rcx_3
    
    while (true)
        *r12 = var_88
        sub_140693140(rcx_3, &var_80)
        r13 = var_60
        
        if (rdi == &var_60)
            goto label_1406ac94e
        
        void* rcx_4 = *rdi
        void* r14_3 = var_58.q - r13
        int64_t r8_3 = r14_3 s>> 4
        int64_t rdx_6 = (*(rdi + 0x10) - rcx_4) s>> 4
        
        if (r8_3 u<= rdx_6)
        label_1406ac92e:
            i = *rdi
            memmove(i, r13, r14_3.d)
            *(rdi + 8) = r14_3 + i
        label_1406ac94e:
            
            if (sub_1406ae3c0(r12, *(rsi + 0x10)) != 0)
                if (r12[0x19].b == 0)
                    i.b = 1
                    break
                
                int64_t var_c8
                sub_14068c240(&var_c8, r12)
                void* rax_14 = *rdi
                int64_t r14_4 = *(rdi + 8)
                void* var_a0
                __builtin_memset(&var_a0, 0, 0x18)
                int128_t var_98
                
                if (rax_14 != r14_4)
                    void* r14_5 = r14_4 - rax_14
                    int64_t rbx_7 = r14_5 s>> 4
                    void* rax_15 = sub_1406afec0(&var_a0, rbx_7)
                    void* rbx_9 = (rbx_7 << 4) + rax_15
                    var_a0 = rax_15
                    var_98:8.q = rbx_9
                    memmove(rax_15, rax_14, r14_5.d)
                    var_98.q = rbx_9
                
                i = *(rsi + 0x28)
                int64_t rax_16 = var_88
                void* i_2 = i
                int64_t arg_18 = *r12 - rax_16
                void* var_c0
                
                if (i != 0)
                    void* rsi_1 = &r12[1]
                    
                    do
                        *r12 = rax_16
                        sub_140693140(rsi_1, &var_80)
                        r13 = var_60
                        
                        if (rdi != &var_60)
                            void* rcx_15 = *rdi
                            void* rsi_3 = var_58.q - r13
                            int64_t r8_8 = rsi_3 s>> 4
                            int64_t rdx_23 = (*(rdi + 0x10) - rcx_15) s>> 4
                            
                            if (r8_8 u> rdx_23)
                                if (r8_8 u> 0xfffffffffffffff)
                                    goto label_1406ace38
                                
                                uint64_t r9_4 = rdx_23 u>> 1
                                int64_t rbx_10
                                
                                if (rdx_23 u<= 0xfffffffffffffff - r9_4)
                                    rbx_10 = r9_4 + rdx_23
                                    
                                    if (rbx_10 u< r8_8)
                                        rbx_10 = r8_8
                                else
                                    rbx_10 = 0xfffffffffffffff
                                
                                if (rcx_15 != 0)
                                    if (rdx_23 << 4 u>= 0x1000)
                                        void* r8_9 = *(rcx_15 - 8)
                                        
                                        if (rcx_15 - r8_9 - 8 u> 0x1f)
                                            goto label_1406ac9e9
                                        
                                        rcx_15 = r8_9
                                    
                                    j_sub_140a74f90(rcx_15)
                                    __builtin_memset(rdi, 0, 0x18)
                                
                                void* rax_19 = sub_1406afec0(rdi, rbx_10)
                                *rdi = rax_19
                                *(rdi + 8) = rax_19
                                *(rdi + 0x10) = (rbx_10 << 4) + rax_19
                            
                            int64_t rbx_13 = *rdi
                            memmove(rbx_13, r13, rsi_3.d)
                            i = i_2
                            *(rdi + 8) = rsi_3 + rbx_13
                            rsi_1 = &r12[1]
                        
                        if (sub_1406ae3c0(r12, *(i + 0x10)) != 0)
                            int64_t rax_22 = *r12
                            int64_t r14_9 = rax_22 - var_88
                            
                            if (arg_18 s< r14_9)
                                var_c8 = rax_22
                                sub_140693140(&var_c0, rsi_1)
                                
                                if (&var_a0 != rdi)
                                    int64_t rax_23 = *rdi
                                    void* r12_2 = *(rdi + 8) - rax_23
                                    void* rbx_14 = var_a0
                                    int64_t rcx_22 = r12_2 s>> 4
                                    int64_t rdx_31 = (var_98:8.q - rbx_14) s>> 4
                                    
                                    if (rcx_22 u> rdx_31)
                                        if (rcx_22 u> 0xfffffffffffffff)
                                            goto label_1406ace38
                                        
                                        uint64_t r8_12 = rdx_31 u>> 1
                                        int64_t rsi_4
                                        
                                        if (rdx_31 u<= 0xfffffffffffffff - r8_12)
                                            rsi_4 = r8_12 + rdx_31
                                            
                                            if (rsi_4 u< rcx_22)
                                                rsi_4 = rcx_22
                                        else
                                            rsi_4 = 0xfffffffffffffff
                                        
                                        if (rbx_14 != 0)
                                            if (rdx_31 << 4 u>= 0x1000)
                                                void* rcx_23 = *(rbx_14 - 8)
                                                
                                                if (rbx_14 - rcx_23 - 8 u> 0x1f)
                                                    goto label_1406ac9e9
                                                
                                                rbx_14 = rcx_23
                                            
                                            j_sub_140a74f90(rbx_14)
                                        
                                        void* rax_26 = sub_1406afec0(&var_a0, rsi_4)
                                        rbx_14 = rax_26
                                        var_a0 = rax_26
                                        var_98:8.q = (rsi_4 << 4) + rax_26
                                        rsi_1 = arg_20
                                    
                                    memmove(rbx_14, rax_23, r12_2.d)
                                    r12 = arg1
                                    i = i_2
                                    var_98.q = r12_2 + rbx_14
                                
                                arg_18 = r14_9
                        
                        i = *(i + 0x28)
                        rax_16 = var_88
                        i_2 = i
                    while (i != 0)
                
                *r12 = var_c8
                sub_140693140(&r12[1], &var_c0)
                void* rsi_7 = var_a0
                
                if (rdi == &var_a0)
                    goto label_1406acd96
                
                void* rcx_28 = *rdi
                void* r14_11 = var_98.q - rsi_7
                int64_t r8_15 = r14_11 s>> 4
                int64_t rdx_38 = (*(rdi + 0x10) - rcx_28) s>> 4
                
                if (r8_15 u<= rdx_38)
                label_1406acd7d:
                    i = *rdi
                    memmove(i, rsi_7, r14_11.d)
                    *(rdi + 8) = r14_11 + i
                label_1406acd96:
                    i.b = 1
                    
                    if (rsi_7 != 0)
                        void* rax_33 = rsi_7
                        
                        if (((var_98:8.q - rsi_7) & 0xfffffffffffffff0) u>= 0x1000)
                            rsi_7 = *(rsi_7 - 8)
                            
                            if (rax_33 - rsi_7 - 8 u> 0x1f)
                                goto label_1406ac9e9
                        
                        j_sub_140a74f90(rsi_7)
                    
                    void* rcx_33 = var_c0
                    
                    if (rcx_33 == 0)
                        break
                    
                    void* rax_36 = rcx_33
                    int64_t var_b0
                    
                    if (((var_b0 - rcx_33) & 0xfffffffffffffffc) u>= 0x1000)
                        rcx_33 = *(rcx_33 - 8)
                        
                        if (rax_36 - rcx_33 - 8 u> 0x1f)
                            goto label_1406ac9e9
                    
                    j_sub_140a74f90(rcx_33)
                    break
                
                if (r8_15 u<= 0xfffffffffffffff)
                    uint64_t r9_6 = rdx_38 u>> 1
                    
                    if (rdx_38 u<= 0xfffffffffffffff - r9_6)
                        r15_1 = r9_6 + rdx_38
                        
                        if (r15_1 u< r8_15)
                            r15_1 = r8_15
                    
                    if (rcx_28 != 0)
                        if (rdx_38 << 4 u>= 0x1000)
                            void* r8_16 = *(rcx_28 - 8)
                            
                            if (rcx_28 - r8_16 - 8 u> 0x1f)
                                goto label_1406ac9e9
                            
                            rcx_28 = r8_16
                        
                        j_sub_140a74f90(rcx_28)
                        __builtin_memset(rdi, 0, 0x18)
                    
                    void* rax_31 = sub_1406afec0(rdi, r15_1)
                    *rdi = rax_31
                    *(rdi + 8) = rax_31
                    *(rdi + 0x10) = (r15_1 << 4) + rax_31
                    goto label_1406acd7d
            else
                rsi = *(rsi + 0x28)
                rcx_3 = &r12[1]
                
                if (rsi == 0)
                    goto label_1406ac96d
                
                continue
        else if (r8_3 u<= 0xfffffffffffffff)
            uint64_t r9_2 = rdx_6 u>> 1
            int64_t rbx_3
            
            if (rdx_6 u<= 0xfffffffffffffff - r9_2)
                rbx_3 = r9_2 + rdx_6
                
                if (rbx_3 u< r8_3)
                    rbx_3 = r8_3
            else
                rbx_3 = 0xfffffffffffffff
            
            if (rcx_4 != 0)
                if (rdx_6 << 4 u>= 0x1000)
                    void* r8_4 = *(rcx_4 - 8)
                    
                    if (rcx_4 - r8_4 - 8 u> 0x1f)
                        goto label_1406ac9e9
                    
                    rcx_4 = r8_4
                
                j_sub_140a74f90(rcx_4)
                __builtin_memset(rdi, 0, 0x18)
            
            void* rax_5 = sub_1406afec0(rdi, rbx_3)
            *rdi = rax_5
            *(rdi + 8) = rax_5
            *(rdi + 0x10) = (rbx_3 << 4) + rax_5
            goto label_1406ac92e
        
    label_1406ace38:
        sub_140610c20()
        noreturn

if (r13 == 0)
    goto label_1406ac9a8

void* rax_8 = r13

if (((var_58:8.q - r13) & 0xfffffffffffffff0) u< 0x1000)
label_1406ac9a3:
    j_sub_140a74f90(r13)
label_1406ac9a8:
    void* rcx_10 = var_80
    
    if (rcx_10 == 0)
        return zx.q(i.b)
    
    void* rax_11 = rcx_10
    int64_t var_70
    
    if (((var_70 - rcx_10) & 0xfffffffffffffffc) u< 0x1000)
        j_sub_140a74f90(rcx_10)
        return zx.q(i.b)
    
    rcx_10 = *(rcx_10 - 8)
    
    if (rax_11 - rcx_10 - 8 u<= 0x1f)
        j_sub_140a74f90(rcx_10)
        return zx.q(i.b)
else
    r13 = *(r13 - 8)
    
    if (rax_8 - r13 - 8 u<= 0x1f)
        goto label_1406ac9a3

label_1406ac9e9:
_invalid_parameter_noinfo_noreturn()
noreturn
