// 函数: sub_14262b2b0
// 地址: 0x14262b2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t* r15 = arg10
int64_t r12 = arg8
void* rax_3 = *arg6
int64_t rsi = sx.q(arg3)
int64_t var_78 = r12
int64_t* var_98 = r15
uint32_t r14 = zx.d(*(rax_3 + 0x30))
uint32_t rax_4 = zx.d(*(rax_3 + 0x32))
char rcx = *(rsi + arg6[3])
sub_142616290(r15, 0)
sub_142616290(r15, r15[1].d + 1)
*(*r15 + (sx.q(r15[1].d) << 2) - 4) = arg1
sub_142616290(r15, r15[1].d + 1)
*(*r15 + (sx.q(r15[1].d) << 2) - 4) = arg2
sub_142616290(r15, r15[1].d + 1)
int64_t rdi_1 = rsi
*(*r15 + (sx.q(r15[1].d) << 2) - 4) = rsi.d
*(r12 + (rsi << 1)) = arg5
*(arg9 + (rsi << 1)) = 0
int16_t rax_11 = arg4 - 2
int32_t i = r15[1].d

if (arg4 u< 2)
    rax_11 = 0

int32_t result = 0
int32_t result_1 = 0

if (i s> 0)
    int128_t var_50
    __builtin_memcpy(&var_50, 
        "\xff\xff\xff\xff\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x"
    "00\x00\x00\x00\x00\xff\xff\xff\xff", 
        0x20)
    
    do
        int64_t rdx_6 = *r15
        int32_t rcx_8 = i - 1
        r15[1].d = rcx_8
        int32_t rax_13 = *(rdx_6 + (sx.q(rcx_8) << 2))
        
        if (rcx_8 s> 0)
            rcx_8 -= 1
            r15[1].d = rcx_8
        
        int32_t rax_15 = *(rdx_6 + (sx.q(rcx_8) << 2))
        
        if (rcx_8 s> 0)
            rcx_8 -= 1
            r15[1].d = rcx_8
        
        int32_t r11_1 = 2
        int64_t r15_1 = 0
        int32_t var_b4_1 = 2
        int32_t rbp_1 = 1
        int64_t var_70 = 2
        int32_t rsi_1 = *(rdx_6 + (sx.q(rcx_8) << 2))
        int16_t rax_17 = 0
        int64_t r10_1 = 2
        int32_t var_ac_1 = rsi_1
        int128_t var_60
        uint32_t rdx_10
        int32_t rbx_2
        char r8_10
        int16_t r9_4
        
        while (true)
            uint64_t rdx_7 = (zx.q(r15_1.d) & 3) << 2
            int32_t r9 = *(&var_50 + rdx_7)
            int128_t var_40
            int32_t r8_1 = rax_15 + *(&var_40 + rdx_7)
            int32_t r9_1 = r9 + rsi_1
            char rsi_2
            
            if (r9 + rsi_1 s< 0 || r9_1 s>= r14 || r8_1 s< 0 || r8_1 s>= rax_4)
                rsi_2 = rcx
            else
                int64_t rbx_1 = arg6[4]
                rsi_2 = rcx
                
                if ((*(rdi_1 + rbx_1) & rbp_1.b) != 0)
                    char* rdi_2 = arg6[3]
                    int64_t r10_2 = sx.q(r8_1 * r14 + r9_1)
                    
                    if (rdi_2[r10_2] != rsi_2)
                        r10_1 = var_70
                    else
                        int16_t rcx_14 = *(r12 + (r10_2 << 1))
                        
                        if (rcx_14 != 0 && rcx_14 != arg5)
                            rax_17 = rcx_14
                        
                        uint64_t rcx_16 = zx.q(r11_1 - 1) & 3
                        var_60 = data_142fc59d0
                        int32_t r11_2 = *(&var_60 + (rcx_16 << 2))
                        var_60 = data_14344e350
                        int32_t r8_2 = r8_1 + *(&var_60 + (rcx_16 << 2))
                        int32_t r11_3 = r11_2 + r9_1
                        
                        if (r11_2 + r9_1 s< 0 || r11_3 s>= r14 || r8_2 s< 0 || r8_2 s>= rax_4)
                            r11_1 = var_b4_1
                            rsi_2 = rcx
                            r10_1 = var_70
                        else
                            rsi_2 = rcx
                            int64_t rcx_18
                            
                            if ((*(r10_2 + rbx_1) & (1 << rcx_16.b).b) != 0)
                                rcx_18 = sx.q(r8_2 * r14 + r11_3)
                            
                            if ((*(r10_2 + rbx_1) & (1 << rcx_16.b).b) == 0
                                    || rdi_2[rcx_18] != rsi_2)
                                r11_1 = var_b4_1
                                r10_1 = var_70
                            else
                                int16_t rcx_19 = *(r12 + (rcx_18 << 1))
                                r11_1 = var_b4_1
                                r10_1 = var_70
                                
                                if (rcx_19 != 0 && rcx_19 != arg5)
                                    rax_17 = rcx_19
            
            rbx_2 = var_ac_1
            uint64_t rdx_9 = (zx.q(r15_1.d + 1) & 3) << 2
            int32_t r9_2 = *(&var_50 + rdx_9)
            int32_t r8_6 = rax_15 + *(&var_40 + rdx_9)
            int32_t r9_3 = r9_2 + rbx_2
            rdx_10 = rax_4
            
            if (r9_2 + rbx_2 s< 0 || r9_3 s>= r14 || r8_6 s< 0 || r8_6 s>= rdx_10)
                r8_10 = rcx
                r9_4 = arg5
            else
                int64_t rdi_3 = arg6[4]
                
                if ((*(rsi + rdi_3) & (rol.d(rbp_1, 1)).b) == 0)
                    goto label_14262b6f7
                
                int64_t rbx_3 = arg6[3]
                int64_t r10_3 = sx.q(r8_6 * r14 + r9_3)
                
                if (*(r10_3 + rbx_3) != rsi_2)
                    goto label_14262b6ee
                
                int16_t rcx_27 = *(r12 + (r10_3 << 1))
                
                if (rcx_27 != 0 && rcx_27 != arg5)
                    rax_17 = rcx_27
                
                rdx_10 = rax_4
                uint64_t rcx_29 = zx.q(r11_1) & 3
                var_60 = data_142fc59d0
                int32_t r11_4 = *(&var_60 + (rcx_29 << 2))
                var_60 = data_14344e350
                int32_t r8_7 = r8_6 + *(&var_60 + (rcx_29 << 2))
                int32_t r11_5 = r11_4 + r9_3
                
                if (r11_4 + r9_3 s< 0 || r11_5 s>= r14 || r8_7 s< 0 || r8_7 s>= rdx_10)
                    r11_1 = var_b4_1
                    r10_1 = var_70
                    rbx_2 = var_ac_1
                    r8_10 = rcx
                    r9_4 = arg5
                else if ((*(r10_3 + rdi_3) & (1 << rcx_29.b).b) == 0)
                    r11_1 = var_b4_1
                label_14262b6ee:
                    r10_1 = var_70
                    rbx_2 = var_ac_1
                label_14262b6f7:
                    rdx_10 = rax_4
                    r8_10 = rcx
                    r9_4 = arg5
                else
                    r9_4 = arg5
                    rdx_10 = rax_4
                    r10_1 = var_70
                    r11_1 = var_b4_1
                    int64_t rcx_31 = sx.q(r8_7 * r14 + r11_5)
                    r8_10 = rcx
                    rbx_2 = var_ac_1
                    
                    if (*(rbx_3 + rcx_31) == r8_10)
                        int16_t rcx_32 = *(r12 + (rcx_31 << 1))
                        
                        if (rcx_32 != 0 && rcx_32 != r9_4)
                            rax_17 = rcx_32
            
            r11_1 += 2
            rbp_1 = rol.d(rbp_1, 2)
            r15_1 += 2
            var_b4_1 = r11_1
            int64_t temp2_1 = r10_1
            r10_1 -= 1
            var_70 = r10_1
            
            if (temp2_1 == 1)
                break
            
            rsi_1 = var_ac_1
            rdi_1 = rsi
        
        if (rax_17 == 0)
            result_1 += 1
            int32_t rdi_4 = 1
            int64_t r15_2 = 0
            int64_t j_1 = 4
            __builtin_memcpy(&var_70, 
                "\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff\xff\xff\xff\xff\x00\x"
            "00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00", 
                0x20)
            int64_t j
            
            do
                uint64_t rcx_33 = (zx.q(r15_2.d) & 3) << 2
                int32_t rsi_6 = rax_15 + *(&var_70 + rcx_33)
                int32_t rbp_3 = *(&var_60 + rcx_33) + rbx_2
                int32_t rbx_6 = rsi_6 * r14 + rbp_3
                
                if (rbp_3 s>= 0 && rbp_3 s< r14 && rsi_6 s>= 0 && rsi_6 s< rdx_10
                        && (*(rsi + arg6[4]) & rdi_4.b) != 0)
                    int64_t rcx_35 = sx.q(rbx_6)
                    
                    if (*(rcx_35 + arg6[3]) == r8_10 && *(*(arg7 + 8) + (rcx_35 << 1)) u>= rax_11
                            && *(var_78 + (rcx_35 << 1)) == 0)
                        *(var_78 + (rcx_35 << 1)) = r9_4
                        *(arg9 + (rcx_35 << 1)) = 0
                        sub_142616290(var_98, var_98[1].d + 1)
                        *(*var_98 + (sx.q(var_98[1].d) << 2) - 4) = rbp_3
                        sub_142616290(var_98, var_98[1].d + 1)
                        *(*var_98 + (sx.q(var_98[1].d) << 2) - 4) = rsi_6
                        sub_142616290(var_98, var_98[1].d + 1)
                        *(*var_98 + (sx.q(var_98[1].d) << 2) - 4) = rbx_6
                
                rdx_10 = rax_4
                r15_2 += 1
                r8_10 = rcx
                r9_4 = arg5
                rbx_2 = var_ac_1
                rdi_4 = rol.d(rdi_4, 1)
                j = j_1
                j_1 -= 1
            while (j != 1)
            r12 = var_78
        else
            *(r12 + (sx.q(rax_13) << 1)) = 0
        
        r15 = var_98
        rdi_1 = rsi
        i = r15[1].d
    while (i s> 0)
    
    result = result_1

result.b = result s> 0
__security_check_cookie(rax_1 ^ &var_d8)
return result
