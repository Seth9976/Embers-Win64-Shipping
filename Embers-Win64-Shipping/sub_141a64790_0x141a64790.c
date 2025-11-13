// 函数: sub_141a64790
// 地址: 0x141a64790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t r10 = arg2
int32_t rdi = *(arg1 + 0xc8)
int32_t rdi_1 = rdi - 1
void* var_b8 = arg4
void* i_1 = nullptr
int32_t var_48 = 0
int32_t var_44 = 8
char var_c8 = 1
int64_t var_c0
void var_90

if (rdi - 1 s>= 0)
    int64_t rbp_2 = sx.q(rdi_1) * 0x18
    int64_t r15_1 = rbp_2
    int64_t r14_2 = sx.q(rdi_1 + 1) * 0x18
    int32_t temp2_1
    
    do
        void* rax_4 = *(arg1 + 0xc0)
        void* rcx_1 = arg1
        
        if (rax_4 != 0)
            rcx_1 = rax_4
        
        int96_t zmm1 = (*(rcx_1 + rbp_2)).12
        int64_t zmm0 = *(rcx_1 + rbp_2 + 0x10)
        
        if ((zmm1.q u>> 0x20).d == arg3[1] && zmm1.d == *arg3 && zmm1:8.d == arg3[2])
            char rax_9
            
            if (*(arg4 + 0x10) != 0)
                int64_t rcx_2 = *(arg4 + 8)
                var_c0 = zmm0
                rax_9 = (*arg4)(rcx_2, &var_c0)
            
            if (*(arg4 + 0x10) == 0 || rax_9 != 0)
                int64_t rsi_1 = sx.q(var_48)
                int32_t rax_10 = (rsi_1 + 1).d
                var_48 = rax_10
                
                if (rax_10 s> var_44)
                    sub_1407752f0(&var_90, rsi_1.d)
                
                void* i_2 = &var_90
                
                if (i_1 != 0)
                    i_2 = i_1
                
                *(i_2 + (rsi_1 << 3)) = zmm0
                int32_t rax_11 = *(arg1 + 0xc8)
                int32_t rdx_4 = rax_11 - rdi_1
                
                if (rdx_4 != 1)
                    void* rax_12 = *(arg1 + 0xc0)
                    void* rcx_4 = arg1
                    
                    if (rax_12 != 0)
                        rcx_4 = rax_12
                    
                    memmove(rcx_4 + r15_1, r14_2 + rcx_4, (rdx_4 - 1) * 0x18)
                    rax_11 = *(arg1 + 0xc8)
                
                *(arg1 + 0xc8) = rax_11 - 1
                sub_141a64000(arg1)
            else
                var_c8 = rax_9
            
            arg4 = var_b8
        
        r14_2 -= 0x18
        r15_1 -= 0x18
        rbp_2 -= 0x18
        temp2_1 = rdi_1
        rdi_1 -= 1
    while (temp2_1 - 1 s>= 0)
    r10 = arg2

int32_t rsi_2 = *(arg1 + 0x118)
int32_t rsi_3 = rsi_2 - 1

if (rsi_2 - 1 s>= 0)
    int64_t rax_15 = sx.q(rsi_3)
    int64_t r14_3 = rax_15 * 0x58
    int64_t r12_1 = rax_15 << 3
    var_c0 = r12_1
    int64_t r15_3 = sx.q(rsi_3 + 1) << 3
    int32_t temp3_1
    
    do
        void* rax_17 = *(arg1 + 0x110)
        void* rcx_7 = arg1 + 0xd0
        
        if (rax_17 != 0)
            rcx_7 = rax_17
        
        void* i = &var_90
        
        if (i_1 != 0)
            i = i_1
        
        for (void* r8_2 = i + (sx.q(var_48) << 3); i != r8_2; i += 8)
            if (*i == *(rcx_7 + r12_1))
                int32_t* rax_19 = *(arg1 + 0x120)
                int32_t temp4_1 = *(rax_19 + r14_3)
                *(rax_19 + r14_3) -= 1
                
                if (temp4_1 == 1)
                    void* rbx_3 = *(arg1 + 0x120) + r14_3
                    void* rcx_8
                    bool cond:3_1
                    
                    if ((*(rbx_3 + 0x50) & 1) == 0)
                        cond:3_1 = (*(rbx_3 + 0x28) & 2) != 0
                        rcx_8 = rbx_3 + 8
                    else
                        cond:3_1 = (*(rbx_3 + 0x50) & 2) != 0
                        rcx_8 = rbx_3 + 0x30
                    
                    if (not(cond:3_1))
                        rcx_8 = *rcx_8
                    
                    (*(*rcx_8 + 8))(rcx_8, r10)
                    
                    if ((*(rbx_3 + 0x50) & 1) == 0)
                        int32_t rax_23 = *(arg1 + 0x118)
                        int32_t rdx_11 = rax_23 - rsi_3
                        
                        if (rdx_11 != 1)
                            void* rax_24 = *(arg1 + 0x110)
                            void* r9 = arg1 + 0xd0
                            
                            if (rax_24 != 0)
                                r9 = rax_24
                            
                            memmove(var_c0 + r9, r15_3 + r9, (rdx_11 - 1) << 3)
                            rax_23 = *(arg1 + 0x118)
                        
                        *(arg1 + 0x118) = rax_23 - 1
                        sub_141a61af0(arg1 + 0x120, rsi_3, 1, 0)
                    else
                        char rax_21 = *(rbx_3 + 0x50)
                        void* rcx_9 = rbx_3 + 0x30
                        
                        if ((rax_21 & 2) == 0)
                            rcx_9 = *(rbx_3 + 0x30)
                        
                        *(rbx_3 + 0x50) = rax_21 & 0xfe
                        (**rcx_9)(rcx_9, 0)
                        
                        if ((*(rbx_3 + 0x50) & 2) == 0)
                            sub_140a74f90(*(rbx_3 + 0x30))
                
                break
        
        var_c0 -= 8
        r15_3 -= 8
        r10 = arg2
        r12_1 -= 8
        r14_3 -= 0x58
        temp3_1 = rsi_3
        rsi_3 -= 1
    while (temp3_1 - 1 s>= 0)

if (i_1 != 0)
    sub_140a74f90(i_1)

if (*(var_b8 + 0x10) != 0)
    *(var_b8 + 0x10) = 0

__security_check_cookie(rax_1 ^ &var_e8)
return zx.q(var_c8)
