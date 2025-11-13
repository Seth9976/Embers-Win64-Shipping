// 函数: sub_142261520
// 地址: 0x142261520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* r13 = arg1
int64_t* var_140 = arg1
(*(*arg1 + 0xc30))()
int32_t i = 0
void var_138

if (r13[0x5f].d s> 0)
    void* rbx_1 = &r13[0x5e]
    int32_t r14_1 = 1
    void* var_130_1 = rbx_1
    int64_t r13_1 = 0
    int32_t var_148_1 = 1
    int64_t* rax_13
    
    do
        int64_t* rcx = *rbx_1
        void* rsi_1 = *(rcx + r13_1)
        
        if (rsi_1 == 0)
            int32_t rdx_6 = *(rbx_1 + 8)
            int32_t rax_20 = rdx_6 - i
            
            if (rax_20 != 1)
                memmove(&rcx[sx.q(i)], &rcx[sx.q(r14_1)], (rax_20 - 1) << 3)
                rdx_6 = *(rbx_1 + 8)
            
            *(rbx_1 + 8) = rdx_6 - 1
            sub_1405c53d0(rbx_1)
            i -= 1
            r14_1 -= 1
            r13_1 -= 8
        else
            void* var_58_1 = nullptr
            int32_t var_4c_1 = 0x18
            int32_t var_50_1 = 0
            void* rax_3 = sub_142577430()
            void* rdi_1
            
            if (rax_3 == 0)
                rdi_1 = nullptr
            else
                void* rax_4 = sub_142459c10()
                
                if (rax_4 == 0)
                    rdi_1 = nullptr
                else
                    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                    
                    if (rax_5.d s> *(rax_3 + 0x38)
                            || *(*(rax_3 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                        rdi_1 = nullptr
                    else
                        rdi_1 = rax_3
            
            void var_118
            void* r8 = &var_118
            
            if (rdi_1 != sub_142459c10())
                sub_1419f71f0(rsi_1, rax_3, r8)
            else
                sub_1419f6fe0(rsi_1, rax_3, r8)
            
            void* rcx_3 = var_58_1
            int32_t rbp_1 = 0
            
            if (var_50_1 s> 0)
                int64_t r14_2 = 0
                
                do
                    void* rax_8 = &var_118
                    
                    if (rcx_3 != 0)
                        rax_8 = rcx_3
                    
                    void* rbx_3 = *(rax_8 + r14_2)
                    
                    if ((*(rbx_3 + 0x88) & 1) != 0)
                        void var_128
                        sub_140998ff0(arg3, &var_128, rbx_3 + 0x254, nullptr)
                        void** j = *(rbx_3 + 0xd0)
                        
                        for (void* rsi_2 = &j[sx.q(*(rbx_3 + 0xd8))]; j != rsi_2; j = &j[1])
                            void* rbx_4 = *j
                            
                            if (rbx_4 != 0)
                                void* rax_10 = sub_142577430()
                                void* rdx_3 = *(rbx_4 + 0x10)
                                int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                                
                                if (rax_11.d s<= *(rdx_3 + 0x38)
                                        && *(*(rdx_3 + 0x30) + (rax_11 << 3)) == rax_10 + 0x30
                                        && (*(rbx_4 + 0x88) & 1) != 0)
                                    sub_140998ff0(arg3, &var_138, rbx_4 + 0x254, nullptr)
                        
                        rcx_3 = var_58_1
                    
                    rbp_1 += 1
                    r14_2 += 8
                while (rbp_1 s< var_50_1)
                
                r14_1 = var_148_1
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rbx_1 = var_130_1
        
        rax_13 = var_140
        r14_1 += 1
        i += 1
        var_148_1 = r14_1
        r13_1 += 8
    while (i s< rax_13[0x5f].d)
    
    r13 = rax_13

int32_t rbx_5 = r13[0x61].d
int32_t rbx_6 = rbx_5 - 1

if (rbx_5 - 1 s>= 0)
    int64_t rsi_3 = sx.q(rbx_6) << 3
    int64_t r14_3 = rsi_3
    int64_t rbp_3 = sx.q(rbx_6 + 1) << 3
    int32_t temp3_1
    
    do
        var_140 = *(rsi_3 + r13[0x60])
        
        if (sub_140d3e110(&var_140) == 0)
            int32_t rax_25 = r13[0x61].d
            int32_t rcx_14 = rax_25 - rbx_6
            
            if (rcx_14 != 1)
                int64_t rax_26 = r13[0x60]
                memmove(rax_26 + r14_3, rax_26 + rbp_3, (rcx_14 - 1) << 3)
                rax_25 = r13[0x61].d
            
            r13[0x61].d = rax_25 - 1
            sub_1405c53d0(&r13[0x60])
        else
            void* rax_18 = sub_140d3c6e0(&var_140)
            
            if ((*(rax_18 + 0x88) & 1) != 0)
                sub_140998ff0(arg3, &var_138, rax_18 + 0x254, nullptr)
        
        rbp_3 -= 8
        r14_3 -= 8
        rsi_3 -= 8
        temp3_1 = rbx_6
        rbx_6 -= 1
    while (temp3_1 - 1 s>= 0)

int64_t result = (*(*r13 + 0xc38))(r13, arg2, arg3)
__security_check_cookie(rax_1 ^ &var_168)
return result
