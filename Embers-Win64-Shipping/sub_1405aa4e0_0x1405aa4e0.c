// 函数: sub_1405aa4e0
// 地址: 0x1405aa4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t rax_2 = 0
uint128_t* result = arg2
arg2.b = 0
uint64_t rbx
rbx.b = 0
char var_54 = 0
int64_t r12 = 0
int32_t var_78 = 0
char var_d8 = 0
uint128_t var_90
void* r14 = &var_90 - arg1
int32_t* r15 = arg1 + 0x1c
void* var_a0 = r14
int64_t* rdi = arg3

do
    int32_t rsi_1 = 1 << rbx.b
    int32_t rcx_2 = rsi_1 & *(arg1 + 0x18)
    
    if (rcx_2 != 0)
        if (0f f== *r15)
            goto label_1405aa674
        
        goto label_1405aa570
    
    int32_t var_d0
    uint128_t var_c8
    int64_t var_b8
    uint128_t zmm0
    
    if ((*(arg1 + 0x4c) & rsi_1) == 0)
    label_1405aa570:
        
        if (rcx_2 != 0)
            zmm0.d = r15[-7].d f/ *r15
            *(r14 + r15 - 0x1c) = zmm0.d
            rax_2 = var_78 | rsi_1
            var_78 = rax_2
    else
    label_1405aa674:
        
        if (*(arg1 + 0x6c) == 0)
            *(arg1 + 0x68) = 0
            int32_t r9_2 = 0
            *(arg1 + 0x6c) = 1
            int32_t r8_1 = -1
            void* rdx_1 = rdi[2]
            var_d0 = 0xffffffff
            int32_t var_cc_1 = 0
            int64_t rbx_1
            
            if (rdx_1 == 0)
                rbx_1 = var_d0.q
            else
                int64_t var_b0
                sub_140d3a3a0(&var_b0, rdx_1)
                rbx_1 = var_b0
                var_d0.q = rbx_1
                r9_2 = var_cc_1
                r8_1 = var_d0
            
            int64_t* r10_1 = *rdi
            void* rax_9 = r10_1[3]
            void* rcx_9 = (sx.q(r10_1[4].d) << 5) + rax_9
            uint128_t zmm3
            
            if (rax_9 == rcx_9)
            label_1405aa701:
                (*(*r10_1 + 0x28))(r10_1, &var_c8, rdi[2], rdi[3], var_d8, var_d0)
                
                if (rdi[3] != 0)
                    void* rdi_1 = *rdi
                    int64_t r14_1 = sx.q(*(rdi_1 + 0x20))
                    int32_t rax_11 = (r14_1 + 1).d
                    *(rdi_1 + 0x20) = rax_11
                    
                    if (rax_11 s> *(rdi_1 + 0x24))
                        sub_1405c4e40(rdi_1 + 0x18)
                    
                    r14 = var_a0
                    int64_t* rax_14 = (r14_1 << 5) + *(rdi_1 + 0x18)
                    rdi = arg3
                    *rax_14 = rbx_1
                    *(rax_14 + 8) = var_c8
                    rax_14[3] = var_b8
                
                zmm3 = var_c8
                zmm0 = zx.o(var_b8)
            else
                while (*rax_9 != r8_1 || *(rax_9 + 4) != r9_2)
                    rax_9 += 0x20
                    
                    if (rax_9 == rcx_9)
                        goto label_1405aa701
                
                zmm3 = *(rax_9 + 8)
                zmm0 = zx.o(*(rax_9 + 0x18))
            
            rbx = zx.q(var_d8)
            arg2 = zx.q(var_54)
            *(arg1 + 0x50) = zmm3
            *(arg1 + 0x60) = zmm0.q
            *(arg1 + 0x68) = 0x3f
        
        *(r14 + r15 - 0x1c) = r15[0xd]
        rax_2 = var_78 | rsi_1
        var_78 = rax_2
    
    if ((*(arg1 + 0x4c) & rsi_1) != 0)
        zmm0 = r15[6]
        
        if ((rax_2 & rsi_1) != 0)
            zmm0.d = zmm0.d f+ *(&var_90 + (r12 << 2))
        
        *(&var_90 + (r12 << 2)) = zmm0.d
        rax_2 = var_78 | rsi_1
        var_78 = rax_2
    
    if ((rax_2 & rsi_1) == 0)
        uint128_t var_70
        
        if (arg2.b == 0)
            int64_t* rcx_3 = *rdi
            var_54 = 1
            (*(*rcx_3 + 0x28))(rcx_3, &var_c8, rdi[2], rdi[3], var_d8, var_d0)
            arg2.b = 1
            int32_t var_58_1 = 0x3f
            var_70 = var_c8
            uint64_t var_60_1 = var_b8
        
        *(&var_90 + (r12 << 2)) = *(&var_70 + (r12 << 2))
        rax_2 = var_78 | rsi_1
        var_78 = rax_2
    
    rbx.b += 1
    r12 += 1
    r15 = &r15[1]
    var_d8 = rbx.b
while (rbx.b u< 6)

*result = var_90
int32_t var_80
result[1].d = var_80.d
int32_t var_7c
*(result + 0x14) = var_7c.d
__security_check_cookie(rax_1 ^ &var_f8)
return result
