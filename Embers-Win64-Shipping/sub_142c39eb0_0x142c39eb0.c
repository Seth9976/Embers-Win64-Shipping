// 函数: sub_142c39eb0
// 地址: 0x142c39eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t r12 = 0
uint64_t rbx = zx.q(arg4)

if (arg5 - arg4 u>= 2)
    sub_142bf5c70(arg3, rbx.d, arg5)

void* r10 = *(arg2 + 0x40)
uint64_t rdi = rbx * 0x14
int64_t rdx_1 = *(arg2 + 0x48)
uint64_t r8_1 = zx.q(*(rdi + *(arg3 + 0x70)))
int64_t var_78 = 0
int64_t var_70 = 0
uint64_t result

if ((*(r10 + 0x188))(arg2, rdx_1, r8_1, &var_78, *(r10 + 0x78)) != 0)
    void* r10_1 = *(arg2 + 0x40)
    var_78:4.d += *(rdi + *(arg3 + 0x80) + 0xc)
    var_78.d = 0
    int32_t rax_9 =
        (*(r10_1 + 0x148))(arg2, *(arg2 + 0x48), zx.q(*(rdi + *(arg3 + 0x70))), *(r10_1 + 0x38))
    int64_t rcx_6 = *(arg3 + 0x70)
    var_70.d = rax_9
    uint32_t r11_2 = zx.d(*(rcx_6 + rdi + 0xe)) u>> 5
    uint32_t var_a8_1 = r11_2
    char rax_10
    
    if ((*(rcx_6 + rdi + 0xc) & 4) != 0)
        rax_10 = *(rcx_6 + rdi + 0xe)
    
    int32_t rbp_2
    
    if ((*(rcx_6 + rdi + 0xc) & 4) == 0 || (rax_10 & 0x10) == 0)
        rbp_2 = 1
    else
        rbp_2 = zx.d(rax_10) & 0xf
    
    int32_t r14_1 = 0
    result = zx.q(*(arg3 + 0x38)) & 0xfffffffd
    int32_t r15_1 = 0
    
    if (result.d == 4)
        result = *(arg3 + 0x80)
        r14_1 = neg.d(*(rdi + result))
        r15_1 = neg.d(*(rdi + result + 4))
    
    int128_t zmm0 = var_78.o
    uint64_t r13_1 = zx.q((rbx + 1).d)
    int32_t i = arg5
    int32_t r10_2 = -1
    int32_t var_c4_1 = 0xffffffff
    uint32_t r9_3 = 0xff
    uint32_t var_c8_1 = 0xff
    int128_t zmm6 = zmm0
    int128_t var_88 = zmm0
    
    if (r13_1.d u< i)
        result = rcx_6 + 0x10
        uint64_t rdi_3 = r13_1 * 0x14
        uint64_t result_1 = result
        
        do
            uint32_t r8_4 = zx.d(*(rdi_3 + result))
            
            if ((1 << (r8_4.b & 0x1f) & 0x1c00) == 0 || r8_4 u>> 8 == 0)
                int64_t rax_35 = *(arg3 + 0x80)
                
                if ((*(arg3 + 0x38) & 0xfffffffd) != 4)
                    r14_1 += *(rdi_3 + rax_35)
                    r15_1 += *(rdi_3 + rax_35 + 4)
                else
                    r14_1 -= *(rdi_3 + rax_35)
                    r15_1 -= *(rdi_3 + rax_35 + 4)
            else
                if (rbp_2 u> 1)
                    uint32_t rax_13 = zx.d(*(rdi_3 + result_1 - 2))
                    int32_t rax_14
                    
                    if ((rax_13.b & 0x10) == 0)
                        rax_14 = rax_13 & 0xf
                    else
                        rax_14 = 0
                    
                    int32_t rbx_1 = rax_14 - 1
                    
                    if (r11_2 == 0 || r11_2 != rax_13 u>> 5 || rbx_1 s>= rbp_2)
                        rbx_1 = rbp_2 - 1
                    
                    if (r10_2 != rbx_1)
                        var_c4_1 = rbx_1
                        r9_3 = 0xff
                        var_c8_1 = 0xff
                        
                        if (r12 == 0)
                            r12 = *arg1
                            
                            if ((r12 & 0xfffffffe) != 4)
                                r9_3 = var_c8_1
                                r12 = sub_142bf7b30(arg1[1])
                        
                        int32_t rcx_13 = zmm0:8.d
                        int32_t rax_19
                        
                        if (r12 != 4)
                            rax_19 = (rbp_2 - rbx_1 - 1) * rcx_13
                        else
                            rax_19 = rcx_13 * rbx_1
                        
                        int128_t var_b8_1
                        var_b8_1.d = zmm0.d + divs.dp.d(sx.q(rax_19), rbp_2)
                        var_b8_1:8.d = divs.dp.d(sx.q(rcx_13), rbp_2)
                        zmm6 = var_b8_1
                    
                    i = arg5
                
                uint32_t r8_6 = zx.d(*(rdi_3 + result_1))
                uint32_t r8_7
                
                if ((1 << (r8_6.b & 0x1f) & 0x1c00) == 0)
                    r8_7 = 0
                else
                    r8_7 = r8_6 u>> 8
                
                if (r9_3 != r8_7)
                    var_c8_1 = r8_7
                    var_88 = zmm6
                
                int64_t var_d8
                var_d8.d = r13_1.d
                sub_142c3a350(arg1, arg2, arg3, &var_88, var_d8.d, r8_7)
                r9_3 = var_c8_1
                r10_2 = var_c4_1
                r11_2 = var_a8_1
                *(rdi_3 + *(arg3 + 0x80)) = 0
                *(rdi_3 + *(arg3 + 0x80) + 4) = 0
                int64_t rax_31 = *(arg3 + 0x80)
                *(rdi_3 + rax_31 + 8) += r14_1
                int64_t rax_32 = *(arg3 + 0x80)
                *(rdi_3 + rax_32 + 0xc) += r15_1
                zmm0 = var_78.o
            
            result = result_1
            r13_1 = zx.q(r13_1.d + 1)
            rdi_3 += 0x14
        while (r13_1.d u< i)
else
    result = sub_142c3a7b0(arg3, (rbx + 1).d, arg5, arg6)

__security_check_cookie(rax_1 ^ &var_f8)
return result
