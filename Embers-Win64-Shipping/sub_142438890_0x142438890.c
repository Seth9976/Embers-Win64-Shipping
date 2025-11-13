// 函数: sub_142438890
// 地址: 0x142438890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x4098)
void var_40a8
int64_t rax_1 = __security_cookie ^ &var_40a8
int64_t* r9 = arg2
void* rcx = nullptr
int32_t* r8 = *(*(arg1 + 0x18) + 8)
uint64_t result = zx.q(*r8)
void* rbp_2 = (sx.q(*(arg1 + 0x60)) << 6) + *(r8 + 0x28)
int32_t result_1 = result.d
void* var_58 = nullptr
uint32_t var_50 = 0
int32_t var_4c = 0x4000

if (result.d != 0)
    void* r12_1 = arg1 + 0x20
    int32_t rsi_1 = 1
    uint64_t i_1 = zx.q(result.d)
    int16_t* r14_1 = rbp_2 + 0x28
    char* r15_1 = rbp_2 + 0x38
    uint64_t result_2 = result
    uint64_t i
    
    do
        uint64_t rdx = zx.q(*r14_1)
        uint32_t rbx_1
        
        if (rsi_1 u>= result.d)
            rbx_1 = *(rbp_2 + 0x24)
        else
            rbx_1 = zx.d(*(rbp_2 + (zx.q(rsi_1) << 1) + 0x28))
        
        void* rax_5 = nullptr
        uint32_t rbx_2 = rbx_1 - rdx.d
        
        if (rbx_1 != rdx.d)
            int64_t* rcx_1 = *r9
            int64_t var_4078 = 0
            uint64_t r13_1 = zx.q(rbx_2)
            rax_5 = (**rcx_1)(rcx_1, &var_4078, rdx, zx.q(rbx_2), result_1, result_2, var_4078, 
                arg2, rdx)
            
            if (var_4078 s>= r13_1)
                rcx = var_58
            else
                uint32_t rax_6 = var_50
                void var_4058
                
                if (rbx_2 s> rax_6)
                    var_50 = rbx_2
                    
                    if (rbx_2 s> var_4c)
                        sub_142442620(&var_4058, rax_6)
                else if (rbx_2 s< rax_6)
                    uint32_t rdi_2 = rax_6 - rbx_2
                    
                    if (rax_6 != rbx_2)
                        uint32_t rcx_4 = rax_6 - rdi_2
                        
                        if (rcx_4 != rbx_2)
                            void* r9_2 = &var_4058
                            
                            if (var_58 != 0)
                                r9_2 = var_58
                            
                            memmove(sx.q(rbx_2) + r9_2, sx.q(rdi_2 + rbx_2) + r9_2, rcx_4 - rbx_2)
                            rax_6 = var_50
                        
                        var_50 = rax_6 - rdi_2
                        sub_1424426b0(&var_4058)
                    
                    i_1 = result_2
                
                void* rdx_5 = &var_4058
                
                if (var_58 != 0)
                    rdx_5 = var_58
                
                int64_t* rcx_10 = *arg2
                (*(*rcx_10 + 0x10))(rcx_10, rdx_5, rdx, r13_1)
                rcx = var_58
                rax_5 = &var_4058
                
                if (rcx != 0)
                    rax_5 = rcx
        
        if (*r15_1 == 6)
            rcx = var_58
            *r12_1 = j_sub_141c79b70(rax_5, rbx_2)
        
        result = zx.q(result_1)
        rsi_1 += 1
        r9 = arg2
        r14_1 = &r14_1[1]
        r12_1 += 8
        r15_1 = &r15_1[1]
        i = i_1
        i_1 -= 1
        result_2 = i_1
    while (i != 1)
    
    if (rcx != 0)
        result = sub_140a74f90(rcx)

__security_check_cookie(rax_1 ^ &var_40a8)
return result
