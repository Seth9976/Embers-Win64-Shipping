// 函数: sub_141af56f0
// 地址: 0x141af56f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t rax_2 = 0
int64_t* var_d0 = arg2
arg2.b = 0
uint64_t rbx
rbx.b = 0
char var_68 = 0
int64_t r12 = 0
int32_t var_ac = 0
char var_108 = 0
int32_t var_b8
void* r14 = &var_b8 - arg1
int32_t* r15 = arg1 + 0x10
void* var_d8 = r14
int64_t* rdi = arg3
uint128_t result

do
    int32_t rsi_1 = 1 << rbx.b
    int32_t rcx_2 = *(arg1 + 0xc) & rsi_1
    
    if (rcx_2 != 0)
        if (0f f== *r15)
            goto label_141af5899
        
        goto label_141af5780
    
    int32_t var_100
    
    if ((*(arg1 + 0x28) & rsi_1) == 0)
    label_141af5780:
        
        if (rcx_2 != 0)
            result.d = r15[-4].d f/ *r15
            *(r14 + r15 - 0x10) = result.d
            rax_2 = var_ac | rsi_1
            var_ac = rax_2
    else
    label_141af5899:
        
        if (*(arg1 + 0x3c) == 0)
            *(arg1 + 0x38) = 0
            int32_t r9_2 = 0
            *(arg1 + 0x3c) = 1
            int32_t r8_1 = -1
            void* rdx_1 = rdi[2]
            var_100 = 0xffffffff
            int32_t var_fc_1 = 0
            int64_t rbx_1
            
            if (rdx_1 == 0)
                rbx_1 = var_100.q
            else
                int64_t var_e8
                sub_140d3a3a0(&var_e8, rdx_1)
                rbx_1 = var_e8
                var_100.q = rbx_1
                r9_2 = var_fc_1
                r8_1 = var_100
            
            int64_t* r10_1 = *rdi
            int32_t* rdx_2 = r10_1[3]
            void* rax_11 = &rdx_2[sx.q(r10_1[4].d) * 5]
            int32_t rcx_13
            
            if (rdx_2 == rax_11)
            label_141af5930:
                int64_t result_1
                (*(*r10_1 + 0x28))(r10_1, &result_1, rdi[2], rdi[3], var_108, var_100)
                int32_t var_f0
                
                if (rdi[3] != 0)
                    void* rdi_1 = *rdi
                    int64_t r14_1 = sx.q(*(rdi_1 + 0x20))
                    int32_t rax_13 = (r14_1 + 1).d
                    *(rdi_1 + 0x20) = rax_13
                    
                    if (rax_13 s> *(rdi_1 + 0x24))
                        sub_1405c4d20(rdi_1 + 0x18)
                    
                    int64_t rcx_12 = *(rdi_1 + 0x18)
                    int64_t rdx_5 = r14_1 * 5
                    rdi = arg3
                    r14 = var_d8
                    *(rcx_12 + (rdx_5 << 2)) = rbx_1
                    *(rcx_12 + (rdx_5 << 2) + 8) = result_1
                    *(rcx_12 + (rdx_5 << 2) + 0x10) = var_f0
                
                result = zx.o(result_1)
                rcx_13 = var_f0
            else
                while (*rdx_2 != r8_1 || rdx_2[1] != r9_2)
                    rdx_2 = &rdx_2[5]
                    
                    if (rdx_2 == rax_11)
                        goto label_141af5930
                
                result = zx.o(*(rdx_2 + 8))
                rcx_13 = rdx_2[4]
            
            rbx = zx.q(var_108)
            arg2 = zx.q(var_68)
            int32_t var_8c_1 = 7
            int32_t var_90_1 = rcx_13
            *(arg1 + 0x2c) = result.q.o
        
        *(r14 + r15 - 0x10) = r15[7]
        rax_2 = var_ac | rsi_1
        var_ac = rax_2
    
    if ((*(arg1 + 0x28) & rsi_1) != 0)
        result = r15[3]
        
        if ((rax_2 & rsi_1) != 0)
            result.d = result.d f+ (&var_b8)[r12]
        
        (&var_b8)[r12] = result.d
        rax_2 = var_ac | rsi_1
        var_ac = rax_2
    
    if ((rax_2 & rsi_1) == 0)
        uint128_t var_78
        
        if (arg2.b == 0)
            int64_t* rcx_3 = *rdi
            var_68 = 1
            int64_t var_c8
            (*(*rcx_3 + 0x28))(rcx_3, &var_c8, rdi[2], rdi[3], var_108, var_100)
            arg2.b = 1
            int32_t var_7c_1 = 7
            int32_t var_c0
            int32_t var_80_1 = var_c0
            var_78 = var_c8.o
        
        (&var_b8)[r12] = *(&var_78 + (r12 << 2))
        rax_2 = var_ac | rsi_1
        var_ac = rax_2
    
    rbx.b += 1
    r12 += 1
    r15 = &r15[1]
    var_108 = rbx.b
while (rbx.b u< 3)

int32_t result_2
result = result_2
int32_t var_a0 = result.d
int32_t var_b4
*var_d0 = (_mm_unpacklo_ps(var_b8, var_b4)).q
var_d0[1].d = var_a0
__security_check_cookie(rax_1 ^ &var_128)
return result
