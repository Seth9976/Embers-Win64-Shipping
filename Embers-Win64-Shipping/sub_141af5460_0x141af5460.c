// 函数: sub_141af5460
// 地址: 0x141af5460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t rax_2 = 0
int128_t* result = arg2
arg2.b = 0
uint64_t rbx
rbx.b = 0
char var_5c = 0
int64_t r12 = 0
int32_t var_78 = 0
char var_e8 = 0
int128_t var_88
void* r14 = &var_88 - arg1
int32_t* r15 = arg1 + 0x14
void* var_d8 = r14
int64_t* rdi = arg3
int128_t zmm0

do
    int32_t rsi_1 = 1 << rbx.b
    int32_t rcx_2 = rsi_1 & *(arg1 + 0x10)
    
    if (rcx_2 != 0)
        if (0f f== *r15)
            goto label_141af55db
        
        goto label_141af54f0
    
    int32_t var_e0
    
    if ((*(arg1 + 0x34) & rsi_1) == 0)
    label_141af54f0:
        
        if (rcx_2 != 0)
            zmm0.d = r15[-5].d f/ *r15
            *(r14 + r15 - 0x14) = zmm0.d
            rax_2 = var_78 | rsi_1
            var_78 = rax_2
    else
    label_141af55db:
        
        if (*(arg1 + 0x4c) == 0)
            *(arg1 + 0x48) = 0
            int32_t r9_2 = 0
            *(arg1 + 0x4c) = 1
            int32_t r8_1 = -1
            void* rdx_1 = rdi[2]
            var_e0 = 0xffffffff
            int32_t var_dc_1 = 0
            int64_t rbx_1
            
            if (rdx_1 == 0)
                rbx_1 = var_e0.q
            else
                int64_t var_c8
                sub_140d3a3a0(&var_c8, rdx_1)
                rbx_1 = var_c8
                var_e0.q = rbx_1
                r9_2 = var_dc_1
                r8_1 = var_e0
            
            int64_t* r10_1 = *rdi
            int32_t* rax_9 = r10_1[3]
            void* rcx_9 = &rax_9[sx.q(r10_1[4].d) * 8]
            
            if (rax_9 == rcx_9)
            label_141af566c:
                int128_t var_a8
                (*(*r10_1 + 0x28))(r10_1, &var_a8, rdi[2], rdi[3], var_e8, var_e0, var_d8)
                
                if (rdi[3] != 0)
                    void* rdi_1 = *rdi
                    int64_t r14_1 = sx.q(*(rdi_1 + 0x20))
                    int32_t rax_11 = (r14_1 + 1).d
                    *(rdi_1 + 0x20) = rax_11
                    
                    if (rax_11 s> *(rdi_1 + 0x24))
                        sub_1405c4e40(rdi_1 + 0x18)
                    
                    r14 = var_d8
                    int64_t* rax_14 = (r14_1 << 5) + *(rdi_1 + 0x18)
                    rdi = arg3
                    *rax_14 = rbx_1
                    *(rax_14 + 0x10) = var_a8
                
                zmm0 = var_a8
            else
                while (*rax_9 != r8_1 || rax_9[1] != r9_2)
                    rax_9 = &rax_9[8]
                    
                    if (rax_9 == rcx_9)
                        goto label_141af566c
                
                zmm0 = *(rax_9 + 0x10)
            
            rbx = zx.q(var_e8)
            arg2 = zx.q(var_5c)
            *(arg1 + 0x38) = zmm0
            *(arg1 + 0x48) = 0xf
        
        *(r14 + r15 - 0x14) = r15[9]
        rax_2 = var_78 | rsi_1
        var_78 = rax_2
    
    if ((*(arg1 + 0x34) & rsi_1) != 0)
        zmm0 = r15[4]
        
        if ((rax_2 & rsi_1) != 0)
            zmm0.d = zmm0.d f+ *(&var_88 + (r12 << 2))
        
        *(&var_88 + (r12 << 2)) = zmm0.d
        rax_2 = var_78 | rsi_1
        var_78 = rax_2
    
    if ((rax_2 & rsi_1) == 0)
        int128_t var_70
        
        if (arg2.b == 0)
            int64_t* rcx_3 = *rdi
            var_5c = 1
            int128_t var_98
            (*(*rcx_3 + 0x28))(rcx_3, &var_98, rdi[2], rdi[3], var_e8, var_e0, var_d8)
            arg2.b = 1
            var_70 = var_98
            int32_t var_60_1 = 0xf
        
        *(&var_88 + (r12 << 2)) = *(&var_70 + (r12 << 2))
        rax_2 = var_78 | rsi_1
        var_78 = rax_2
    
    rbx.b += 1
    r12 += 1
    r15 = &r15[1]
    var_e8 = rbx.b
while (rbx.b u< 4)

zmm0 = var_88
var_d8.o = zmm0
*result = zmm0
__security_check_cookie(rax_1 ^ &var_108)
return result
