// 函数: sub_142a2ddb0
// 地址: 0x142a2ddb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void* rdx = *(arg1 + 0x778)
void* rbp = arg1
int64_t result_1 = sx.q(*(arg1 + 0xba4))
int32_t i = 0
char* rsi = *(arg1 + 0xbf8)
int64_t result = result_1
int128_t* r10 = *(rdx + 0x38)
int64_t* r9 = *(rdx + 0x40)
void* r8 = *(rdx + 0x48)
int64_t* r11 = *(rbp + 0xaa8)
void* rdi = *(rbp + 0xab0)
int64_t* r14 = *(rbp + 0xab8)
int32_t rcx = *(arg1 + 0xbd0)
int32_t rbx = *(rbp + 0x2238)
int128_t* var_a0 = r10
int64_t* var_98 = r9
void* var_90 = r8
int64_t* var_88 = r11
void* var_68 = rdi
int64_t* var_78 = r14
void* var_80 = rdx
int32_t result_2 = result_1.d
char* var_58 = rsi
int32_t var_a8 = rcx
int32_t var_a4 = rbx
int32_t i_1 = 0

if (*(rbp + 0xbb4) s> 0)
    do
        int32_t j_1 = 0
        
        if (*(rbp + 0xbb8) s> 0)
            int32_t j
            
            do
                void var_40
                int32_t rax_2
                
                if (result != 1)
                    rax_2 = 0
                    
                    if (result_1.d == 0)
                        rax_2 = 4
                else
                    rax_2 = sub_142a2dbc0(rsi, &var_40)
                    rdx = var_80
                    r10 = var_a0
                    r9 = var_98
                    r8 = var_90
                    r11 = var_88
                    rcx = var_a8
                
                if (rax_2 == 0)
                    sub_1403adc70(r10, *(rdx + 0x10), r11, *(rbp + 0xa80))
                    sub_1403add80(var_98, *(var_80 + 0x24), rdi, *(rbp + 0xa94))
                    sub_1403add80(var_90, *(var_80 + 0x24), r14, *(rbp + 0xa94))
                    rbx = var_a4
                else if (rax_2 s>= 4)
                    sub_142a2d6b0(0x10, rcx, rbx, r10, r9, r8, *(rdx + 0x10), *(rdx + 0x24), r11, 
                        rdi, r14, *(rbp + 0xa80), *(rbp + 0xa94))
                else
                    int32_t k = 0
                    void* r12 = &var_40
                    
                    do
                        int32_t rbx_1 = 0
                        int64_t var_50_1 = 2
                        int64_t temp0_1
                        
                        do
                            if (*r12 == 0)
                                int32_t rdx_4 = *(rdx + 0x10)
                                int64_t rcx_5 = sx.q((*(rdx + 0x24) * k + rbx_1) << 2)
                                void* rsi_2 = rcx_5 + r8
                                void* r15_1 = rcx_5 + r9
                                int32_t r9_3 = *(rbp + 0xa80)
                                int64_t rax_27 = sx.q((k * *(rbp + 0xa94) + rbx_1) << 2)
                                void* rdi_2 = rdi + rax_27
                                int32_t* r14_2 = r14 + rax_27
                                sub_1403add80(sx.q((rdx_4 * k + rbx_1) << 3) + r10, rdx_4, 
                                    sx.q((r9_3 * k + rbx_1) << 3) + r11, r9_3)
                                rdx = var_80
                                *rdi_2 = *r15_1
                                *r14_2 = *rsi_2
                                int64_t rax_38 = sx.q(*(rbp + 0xa94))
                                int64_t rcx_8 = sx.q(*(rdx + 0x24))
                                void* rdi_3 = rdi_2 + rax_38
                                int32_t* r14_3 = r14_2 + rax_38
                                void* r15_2 = r15_1 + rcx_8
                                void* rsi_3 = rsi_2 + rcx_8
                                *rdi_3 = *r15_2
                                *r14_3 = *rsi_3
                                int64_t rax_41 = sx.q(*(rbp + 0xa94))
                                int64_t rcx_9 = sx.q(*(rdx + 0x24))
                                void* rdi_4 = rdi_3 + rax_41
                                int32_t* r14_4 = r14_3 + rax_41
                                void* r15_3 = r15_2 + rcx_9
                                void* rsi_4 = rsi_3 + rcx_9
                                *rdi_4 = *r15_3
                                *r14_4 = *rsi_4
                                int64_t rax_44 = sx.q(*(rdx + 0x24))
                                int64_t rcx_10 = sx.q(*(rbp + 0xa94))
                                *(rcx_10 + rdi_4) = *(rax_44 + r15_3)
                                *(r14_4 + rcx_10) = *(rsi_4 + rax_44)
                            else
                                int32_t rsi_1 = *(rdx + 0x24)
                                int32_t r14_1 = *(rbp + 0xa94)
                                int32_t r15 = *(rbp + 0xa80)
                                int32_t rbp_1 = *(rdx + 0x10)
                                int64_t rcx_2 = sx.q((r14_1 * k + rbx_1) << 2)
                                int64_t rdx_2 = sx.q((rsi_1 * k + rbx_1) << 2)
                                sub_142a2d6b0(8, var_a8, var_a4, 
                                    sx.q((rbp_1 * k + rbx_1) << 3) + var_a0, rdx_2 + r9, 
                                    r8 + rdx_2, rbp_1, rsi_1, 
                                    sx.q((r15 * k + rbx_1) << 3) + var_88, rdi + rcx_2, 
                                    var_78 + rcx_2, r15, r14_1)
                                rdx = var_80
                                rbp = arg1
                            
                            r10 = var_a0
                            rbx_1 += 1
                            r9 = var_98
                            r12 += 4
                            temp0_1 = var_50_1
                            var_50_1 -= 1
                            r8 = var_90
                            r11 = var_88
                            rdi = var_68
                            r14 = var_78
                        while (temp0_1 != 1)
                        k += 1
                    while (k s< 2)
                    
                    rsi = var_58
                    result_1 = zx.q(result_2)
                    rbx = var_a4
                
                rdi += 8
                j = j_1 + 1
                r10 = &var_a0[1]
                r9 = &var_98[1]
                r8 = var_90 + 8
                rdx = var_80
                r11 = &var_88[2]
                rcx = var_a8
                r14 = &r14[1]
                rsi = &rsi[0x4c]
                j_1 = j
                result = sx.q(result_1.d)
                var_a0 = r10
                var_98 = r9
                var_90 = r8
                var_88 = r11
                var_68 = rdi
                var_78 = r14
                var_58 = rsi
            while (j s< *(rbp + 0xbb8))
            i = i_1
        
        int32_t rcx_14 = *(rbp + 0xbb8)
        rsi = &rsi[0x4c]
        i += 1
        var_58 = rsi
        r10 += sx.q((*(rdx + 0x10) - rcx_14) << 4)
        i_1 = i
        var_a0 = r10
        int64_t rax_59 = sx.q((*(rdx + 0x24) - rcx_14) << 3)
        r9 += rax_59
        r8 += rax_59
        var_98 = r9
        r11 += sx.q((*(rbp + 0xa80) - rcx_14) << 4)
        var_90 = r8
        var_88 = r11
        rcx = var_a8
        int64_t rax_67 = sx.q((*(rbp + 0xa94) - rcx_14) << 3)
        rdi += rax_67
        r14 += rax_67
        var_68 = rdi
        var_78 = r14
        result = sx.q(result_1.d)
    while (i s< *(rbp + 0xbb4))

__security_check_cookie(rax_1 ^ &var_118)
return result
