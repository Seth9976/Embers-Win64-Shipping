// 函数: sub_141a64b50
// 地址: 0x141a64b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t rdi = *(arg1 + 0xc8)
int32_t rdi_1 = rdi - 1
void* var_c0 = arg4
void* i_1 = nullptr
int32_t var_50 = 0
int32_t var_4c = 8
char var_d8 = 1
int64_t var_d0
void var_98

if (rdi - 1 s>= 0)
    int64_t r14_2 = sx.q(rdi_1) * 0x18
    int64_t r12_1 = r14_2
    int64_t r15_2 = sx.q(rdi_1 + 1) * 0x18
    int32_t temp2_1
    
    do
        void* rax_4 = *(arg1 + 0xc0)
        void* rcx_1 = arg1
        
        if (rax_4 != 0)
            rcx_1 = rax_4
        
        int96_t zmm1 = (*(rcx_1 + r14_2)).12
        int64_t zmm0 = *(rcx_1 + r14_2 + 0x10)
        
        if ((zmm1.q u>> 0x20).d == arg3[1] && zmm1.d == *arg3 && zmm1:8.d == arg3[2])
            char rax_9
            
            if (*(arg4 + 0x10) != 0)
                int64_t rcx_2 = *(arg4 + 8)
                var_d0 = zmm0
                rax_9 = (*arg4)(rcx_2, &var_d0)
            
            if (*(arg4 + 0x10) == 0 || rax_9 != 0)
                int64_t rsi_1 = sx.q(var_50)
                int32_t rax_10 = (rsi_1 + 1).d
                var_50 = rax_10
                
                if (rax_10 s> var_4c)
                    sub_1407752f0(&var_98, rsi_1.d)
                
                void* i_2 = &var_98
                
                if (i_1 != 0)
                    i_2 = i_1
                
                *(i_2 + (rsi_1 << 3)) = zmm0
                int32_t rax_12 = *(arg1 + 0xc8)
                int32_t rdx_3 = rax_12 - rdi_1
                
                if (rdx_3 != 1)
                    void* rax_13 = *(arg1 + 0xc0)
                    void* rcx_4 = arg1
                    
                    if (rax_13 != 0)
                        rcx_4 = rax_13
                    
                    memmove(rcx_4 + r12_1, rcx_4 + r15_2, (rdx_3 - 1) * 0x18)
                    rax_12 = *(arg1 + 0xc8)
                
                *(arg1 + 0xc8) = rax_12 - 1
                sub_141a64000(arg1)
            else
                var_d8 = rax_9
            
            arg4 = var_c0
        
        r15_2 -= 0x18
        r12_1 -= 0x18
        r14_2 -= 0x18
        temp2_1 = rdi_1
        rdi_1 -= 1
    while (temp2_1 - 1 s>= 0)

void* rax_16 = sub_140d3c6e0(arg1 + 0x130)
int32_t rsi_2 = *(arg1 + 0x118)
void* r9 = rax_16
int32_t rsi_3 = rsi_2 - 1

if (rsi_2 - 1 s>= 0)
    int64_t rcx_8 = sx.q(rsi_3)
    void* r14_3 = rcx_8 * 0x58
    int64_t r13_1 = rcx_8 << 3
    var_d0 = r13_1
    int64_t r12_3 = sx.q(rsi_3 + 1) << 3
    int32_t temp3_1
    
    do
        void* rax_17 = *(arg1 + 0x110)
        void* rcx_10 = arg1 + 0xd0
        
        if (rax_17 != 0)
            rcx_10 = rax_17
        
        void* i = &var_98
        
        if (i_1 != 0)
            i = i_1
        
        for (void* r8_2 = i + (sx.q(var_50) << 3); i != r8_2; i += 8)
            if (*i == *(rcx_10 + r13_1))
                int32_t* rax_19 = *(arg1 + 0x120)
                int32_t temp4_1 = *(rax_19 + r14_3)
                *(rax_19 + r14_3) -= 1
                
                if (temp4_1 == 1)
                    void* rbx_2 = r14_3 + *(arg1 + 0x120)
                    sub_141a653d0(rbx_2, arg2, r9)
                    
                    if ((*(rbx_2 + 0x50) & 1) == 0)
                        int32_t rax_23 = *(arg1 + 0x118)
                        int32_t rdx_10 = rax_23 - rsi_3
                        
                        if (rdx_10 != 1)
                            void* rax_24 = *(arg1 + 0x110)
                            void* r9_1 = arg1 + 0xd0
                            
                            if (rax_24 != 0)
                                r9_1 = rax_24
                            
                            memmove(var_d0 + r9_1, r12_3 + r9_1, (rdx_10 - 1) << 3)
                            rax_23 = *(arg1 + 0x118)
                        
                        *(arg1 + 0x118) = rax_23 - 1
                        sub_141a61af0(arg1 + 0x120, rsi_3, 1, 0)
                    else
                        char rax_21 = *(rbx_2 + 0x50)
                        void* rcx_12 = rbx_2 + 0x30
                        
                        if ((rax_21 & 2) == 0)
                            rcx_12 = *(rbx_2 + 0x30)
                        
                        *(rbx_2 + 0x50) = rax_21 & 0xfe
                        (**rcx_12)(rcx_12, 0)
                        
                        if ((*(rbx_2 + 0x50) & 2) == 0)
                            sub_140a74f90(*(rbx_2 + 0x30))
                    
                    r9 = rax_16
                
                break
        
        var_d0 -= 8
        r12_3 -= 8
        r13_1 -= 8
        r14_3 -= 0x58
        temp3_1 = rsi_3
        rsi_3 -= 1
    while (temp3_1 - 1 s>= 0)

if (i_1 != 0)
    sub_140a74f90(i_1)

if (*(var_c0 + 0x10) != 0)
    *(var_c0 + 0x10) = 0

__security_check_cookie(rax_1 ^ &var_f8)
return zx.q(var_d8)
