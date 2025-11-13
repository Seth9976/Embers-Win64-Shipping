// 函数: sub_141af4a30
// 地址: 0x141af4a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t rax_2 = 0
int128_t* result = arg2
arg2.b = 0
uint64_t rbx
rbx.b = 0
char var_54 = 0
int64_t r12 = 0
int32_t var_70 = 0
char var_d8 = 0
int128_t var_80
void* r14 = &var_80 - arg1
int32_t* r15 = arg1 + 0x14
void* var_c8 = r14
int64_t* rdi = arg3
int128_t zmm0

do
    int32_t rsi_1 = 1 << rbx.b
    int32_t rcx_2 = rsi_1 & *(arg1 + 0x10)
    
    if (rcx_2 != 0)
        if (0f f== *r15)
            goto label_141af4baa
        
        goto label_141af4ac0
    
    int32_t var_d0
    
    if ((*(arg1 + 0x34) & rsi_1) == 0)
    label_141af4ac0:
        
        if (rcx_2 != 0)
            zmm0.d = r15[-5].d f/ *r15
            *(r14 + r15 - 0x14) = zmm0.d
            rax_2 = var_70 | rsi_1
            var_70 = rax_2
    else
    label_141af4baa:
        
        if (*(arg1 + 0x4c) == 0)
            *(arg1 + 0x48) = 0
            int32_t r9_2 = 0
            *(arg1 + 0x4c) = 1
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
            int32_t* rdx_2 = r10_1[3]
            void* rax_10 = &rdx_2[sx.q(r10_1[4].d) * 6]
            
            if (rdx_2 == rax_10)
            label_141af4c3a:
                int128_t var_a0
                (*(*r10_1 + 0x28))(r10_1, &var_a0, rdi[2], rdi[3], var_d8, var_d0, var_c8)
                
                if (rdi[3] != 0)
                    void* rdi_1 = *rdi
                    int64_t r14_1 = sx.q(*(rdi_1 + 0x20))
                    int32_t rax_12 = (r14_1 + 1).d
                    *(rdi_1 + 0x20) = rax_12
                    
                    if (rax_12 s> *(rdi_1 + 0x24))
                        sub_1405a4df0(rdi_1 + 0x18)
                    
                    int64_t rax_13 = *(rdi_1 + 0x18)
                    int64_t rcx_10 = r14_1 * 3
                    rdi = arg3
                    r14 = var_c8
                    *(rax_13 + (rcx_10 << 3)) = rbx_1
                    *(rax_13 + (rcx_10 << 3) + 8) = var_a0
                
                zmm0 = var_a0
            else
                while (*rdx_2 != r8_1 || rdx_2[1] != r9_2)
                    rdx_2 = &rdx_2[6]
                    
                    if (rdx_2 == rax_10)
                        goto label_141af4c3a
                
                zmm0 = *(rdx_2 + 8)
            
            rbx = zx.q(var_d8)
            arg2 = zx.q(var_54)
            *(arg1 + 0x38) = zmm0
            *(arg1 + 0x48) = 0xf
        
        *(r14 + r15 - 0x14) = r15[9]
        rax_2 = var_70 | rsi_1
        var_70 = rax_2
    
    if ((*(arg1 + 0x34) & rsi_1) != 0)
        zmm0 = r15[4]
        
        if ((rax_2 & rsi_1) != 0)
            zmm0.d = zmm0.d f+ *(&var_80 + (r12 << 2))
        
        *(&var_80 + (r12 << 2)) = zmm0.d
        rax_2 = var_70 | rsi_1
        var_70 = rax_2
    
    if ((rax_2 & rsi_1) == 0)
        int128_t var_68
        
        if (arg2.b == 0)
            int64_t* rcx_3 = *rdi
            var_54 = 1
            int128_t var_90
            (*(*rcx_3 + 0x28))(rcx_3, &var_90, rdi[2], rdi[3], var_d8, var_d0, var_c8)
            int32_t var_58_1 = 0xf
            arg2.b = 1
            var_68 = var_90
        
        *(&var_80 + (r12 << 2)) = *(&var_68 + (r12 << 2))
        rax_2 = var_70 | rsi_1
        var_70 = rax_2
    
    rbx.b += 1
    r12 += 1
    r15 = &r15[1]
    var_d8 = rbx.b
while (rbx.b u< 4)

zmm0 = var_80
var_c8.o = zmm0
*result = zmm0
__security_check_cookie(rax_1 ^ &var_f8)
return result
