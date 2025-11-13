// 函数: sub_141af51a0
// 地址: 0x141af51a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t rax_2 = 0
int32_t* result = arg2
arg2.b = 0
uint64_t rbx
rbx.b = 0
char var_74 = 0
int64_t r12 = 0
int32_t var_88 = 0
char var_d8 = 0
int32_t var_90
void* rsi = &var_90 - arg1
int32_t* r15 = arg1 + 0xc
void* var_a8 = rsi
int64_t* rdi = arg3

do
    int32_t r14_1 = 1 << rbx.b
    int32_t rcx_2 = *(arg1 + 8) & r14_1
    
    if (rcx_2 != 0)
        if (0f f== *r15)
            goto label_141af5334
        
        goto label_141af5233
    
    int32_t var_d0
    int64_t zmm0
    
    if ((*(arg1 + 0x1c) & r14_1) == 0)
    label_141af5233:
        
        if (rcx_2 != 0)
            zmm0.d = r15[-3].d f/ *r15
            *(rsi + r15 - 0xc) = zmm0.d
            rax_2 = var_88 | r14_1
            var_88 = rax_2
    else
    label_141af5334:
        
        if (*(arg1 + 0x2c) == 0)
            *(arg1 + 0x28) = 0
            int32_t r9_2 = 0
            *(arg1 + 0x2c) = 1
            int32_t r8_1 = -1
            void* rdx_1 = rdi[2]
            var_d0 = 0xffffffff
            int32_t var_cc_1 = 0
            int64_t rbx_1
            
            if (rdx_1 == 0)
                rbx_1 = var_d0.q
            else
                int64_t var_b8
                sub_140d3a3a0(&var_b8, rdx_1)
                rbx_1 = var_b8
                var_d0.q = rbx_1
                r9_2 = var_cc_1
                r8_1 = var_d0
            
            int64_t* r10_1 = *rdi
            int32_t* rax_10 = r10_1[3]
            void* rcx_9 = &rax_10[sx.q(r10_1[4].d) * 4]
            int32_t zmm1
            
            if (rax_10 == rcx_9)
            label_141af53c1:
                int32_t var_c8
                (*(*r10_1 + 0x28))(r10_1, &var_c8, rdi[2], rdi[3], var_d8, var_d0)
                
                if (rdi[3] != 0)
                    void* rdi_1 = *rdi
                    int64_t rsi_1 = sx.q(*(rdi_1 + 0x20))
                    int32_t rax_12 = (rsi_1 + 1).d
                    *(rdi_1 + 0x20) = rax_12
                    
                    if (rax_12 s> *(rdi_1 + 0x24))
                        sub_1405a4f90(rdi_1 + 0x18)
                    
                    rsi = var_a8
                    int64_t* rax_15 = (rsi_1 << 4) + *(rdi_1 + 0x18)
                    rdi = arg3
                    *rax_15 = rbx_1
                    rax_15[1] = var_c8.q
                
                zmm0 = var_c8
                int32_t var_c4
                zmm1 = var_c4
            else
                while (*rax_10 != r8_1 || rax_10[1] != r9_2)
                    rax_10 = &rax_10[4]
                    
                    if (rax_10 == rcx_9)
                        goto label_141af53c1
                
                zmm0 = rax_10[2]
                zmm1 = rax_10[3]
            
            rbx = zx.q(var_d8)
            arg2 = zx.q(var_74)
            int32_t var_bc_1 = zmm1
            *(arg1 + 0x20) = zmm0.d.q
            *(arg1 + 0x28) = 3
        
        *(rsi + r15 - 0xc) = r15[5]
        rax_2 = var_88 | r14_1
        var_88 = rax_2
    
    if ((*(arg1 + 0x1c) & r14_1) != 0)
        zmm0 = r15[2]
        
        if ((rax_2 & r14_1) != 0)
            zmm0.d = zmm0.d f+ (&var_90)[r12]
        
        (&var_90)[r12] = zmm0.d
        rax_2 = var_88 | r14_1
        var_88 = rax_2
    
    if ((rax_2 & r14_1) == 0)
        int64_t var_80
        
        if (arg2.b == 0)
            int64_t* rcx_3 = *rdi
            var_74 = 1
            int64_t var_a0
            (*(*rcx_3 + 0x28))(rcx_3, &var_a0, rdi[2], rdi[3], var_d8, var_d0)
            arg2.b = 1
            var_80 = var_a0
            int32_t var_78_1 = 3
        
        (&var_90)[r12] = *(&var_80 + (r12 << 2))
        rax_2 = var_88 | r14_1
        var_88 = rax_2
    
    rbx.b += 1
    r12 += 1
    r15 = &r15[1]
    var_d8 = rbx.b
while (rbx.b u< 2)

*result = var_90.d
int32_t var_8c
result[1] = var_8c
__security_check_cookie(rax_1 ^ &var_f8)
return result
