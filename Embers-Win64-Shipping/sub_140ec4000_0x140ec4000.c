// 函数: sub_140ec4000
// 地址: 0x140ec4000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x3b0)
void** result = arg2
void* r15 = *(arg1 + 0x3a8)
void* const r12 = arg1

if (rdi != 0)
    rdi[1].d += 1
    
    if (rdi != 0)
        rdi[1].d += 1
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp1_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi + 8))(rdi, 1)

int64_t* rsi = *(r12 + 0x3a0)
int64_t* r14 = nullptr
void* r13 = nullptr

if (rsi != 0)
    int32_t rax_3 = rsi[1].d
    
    if (rax_3 == 0)
        rsi = nullptr
    else
        rsi[1].d = rax_3 + 1
        r13 = *(r12 + 0x398)

int64_t rax_6 = *(*(r13 + 0x3a0) + 0x60)
int16_t* var_128
int128_t var_e8
int128_t var_d8
void var_c8

if (*(r15 + 0x120) == 0)
label_140ec43d2:
    
    if (*(r15 + 0x130) == 0)
    label_140ec4412:
        
        if (*(r15 + 0x138) == 0)
            *result = data_143e244b0
            void* rax_36 = data_143e244b8
            result[1] = rax_36
            
            if (rax_36 != 0)
                *(rax_36 + 8) += 1
        else
            char rdx_15 = *(r15 + 0x160)
            void* const arg_8 = nullptr
            __builtin_memset(&var_e8, 0, 0x20)
            sub_140e961b0(&var_c8, rdx_15, &var_e8, &var_d8, 0, rax_6, 1, 0)
            var_128 = *(r15 + 0x138)
            void* rax_34 = *(r15 + 0x140)
            void* var_120_3 = rax_34
            
            if (rax_34 != 0)
                *(rax_34 + 8) += 1
            
            sub_1405d9400()
            sub_140ea2fc0(&var_c8, &var_128, &data_143cd6fd8, 0, 1)
            sub_140ec4810(&var_c8, result, nullptr, 0x3e8)
            sub_140e982f0(&var_c8)
    else
        int64_t* rcx_28 = *(r15 + 0x128)
        
        if (rcx_28 == 0)
            goto label_140ec4412
        
        if ((*(*rcx_28 + 0x28))(rcx_28) == 0)
            goto label_140ec4412
        
        if (*(r15 + 0x130) != 0)
            r14 = *(r15 + 0x128)
        
        (*(*r14 + 0x48))(r14, result)
else
    int64_t* rcx_2 = *(r15 + 0x118)
    
    if (rcx_2 == 0)
        goto label_140ec43d2
    
    if ((*(*rcx_2 + 0x28))(rcx_2) == 0)
        goto label_140ec43d2
    
    int64_t rbx = *(r15 + 0x80)
    int32_t rcx_3
    rcx_3.b = sub_140b5b8a0(rbx.d, 0) == 0
    rcx_3.b |= (rbx u>> 0x20).d != 0
    int64_t var_108
    int32_t rcx_8
    
    if (rcx_3.b != 0)
        int64_t* rbx_2 = *(r13 + 0x3a8)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp10_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp10_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
        
        var_108 = 0
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp8_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        rcx_8.b = sub_140b5b8a0(var_108.d, 0) == 0
    
    int16_t* var_118
    int64_t rbx_4
    
    if (rcx_3.b == 0 || (var_108:4.d != 0 | rcx_8.b) == 0)
        rbx_4 = 0
    else
        int64_t var_f8 = *(r15 + 0x80)
        int64_t* rax_16 = sub_140b63b70(&var_108, &var_e8)
        int16_t* rcx_10 = *rax_16
        int32_t rdx_1 = rax_16[1].d
        int32_t rdx_2 = neg.d(rdx_1)
        *rax_16 = 0
        int32_t r8_1 = rax_16[1].d
        var_118 = rcx_10
        int32_t rcx_11 = *(rax_16 + 0xc)
        int32_t rdx_5 = sbb.d(rdx_2, rdx_2, rdx_1 != 0) + 2 + r8_1
        int64_t var_110
        var_110.d = r8_1
        var_110:4.d = rcx_11
        rax_16[1] = 0
        
        if (rdx_5 s> rcx_11)
            sub_1405947f0(&var_118, rdx_5)
        
        sub_140a20ba0(&var_118, &data_142d404c4, 1)
        int32_t rax_17 = var_110.d
        int16_t* r13_1 = var_118
        int32_t rax_18 = var_110:4.d
        int64_t var_110_1 = 0
        var_118 = nullptr
        int64_t* rax_19 = sub_140b63b70(&var_f8, &var_d8)
        int32_t rax_20
        int16_t* r12_1
        
        if (rax_17 s> 1)
            int32_t rax_21 = rax_19[1].d
            int32_t r12_2 = rax_21 - 1
            
            if (rax_21 == 0)
                r12_2 = 0
            
            int32_t rax_22
            
            if (rax_17 == 0)
                rax_22 = rax_17 + 1
            
            if (rax_17 != 0 || r12_2 == 0)
                rax_22 = 0
            
            int32_t rdx_8 = rax_22 + r12_2 + rax_17
            var_128 = r13_1
            int32_t var_120 = rax_17
            r13_1 = nullptr
            
            if (rdx_8 s> rax_18)
                sub_1405947f0(&var_128, rdx_8)
            
            sub_140a20ba0(&var_128, *rax_19, r12_2)
            rax_20 = rax_18
            r12_1 = var_128
            int64_t var_120_1 = 0
            var_128 = nullptr
        else
            r12_1 = *rax_19
            *rax_19 = 0
            rax_20 = rax_19[1].d
            rax_19[1] = 0
        
        int16_t* const rdx_10 = &data_142d40450
        
        if (rax_20 != 0)
            rdx_10 = r12_1
        
        int64_t var_f0
        sub_140b58260(&var_f0, rdx_10, 1)
        rbx_4 = var_f0
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
        
        if (r13_1 != 0)
            sub_140a74f90(r13_1)
        
        int64_t rcx_21 = var_e8.q
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        int64_t rcx_22 = var_d8.q
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
        
        r12 = arg1
    
    var_128 = *(r15 + 0x150)
    void* rax_24 = *(r15 + 0x158)
    void* var_120_2 = rax_24
    
    if (rax_24 != 0)
        *(rax_24 + 8) += 1
    
    void* rcx_23 = *(r12 + 0x3a8)
    var_118 = *(rcx_23 + 0x70)
    void* rax_26 = *(rcx_23 + 0x78)
    void* var_110_2 = rax_26
    
    if (rax_26 != 0)
        *(rax_26 + 8) += 1
    
    sub_140e961b0(&var_c8, *(r15 + 0x160), &var_118, &var_128, 0, rax_6, 1, rbx_4)
    
    if (*(r15 + 0x120) != 0)
        r14 = *(r15 + 0x118)
    
    (*(*r14 + 0x48))(r14, &var_c8)
    result = arg2
    sub_140ec4810(&var_c8, result, nullptr, 0x3e8)
    sub_140e982f0(&var_c8)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        (**rsi)(rsi)
        int32_t temp4_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rsi + 8))(rsi, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp6_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return result
