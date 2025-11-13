// 函数: sub_142aa8860
// 地址: 0x142aa8860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_148 = -2
void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int64_t* rsi = arg4
int32_t* r14 = arg3
int64_t* r12 = arg2
int32_t* rdi = arg5
int32_t* var_158 = rdi
int32_t* var_160 = arg6

if (data_144015f50 != 2 && sub_142a85f00(&data_144015f50) != 0)
    sub_142aa99d0()
    sub_142a85e80(&data_144015f50)

int64_t** rax_4 = data_144015f48
int32_t r13 = 0
int32_t var_1d8 = 0
char var_f8[0x3]
sub_142a4d590(arg1, &var_f8, 0x9d, &var_1d8)
int32_t rax_5 = var_1d8

if (rax_5 s> 0 || rax_5 == 0xffffff84)
    *arg6 = 1

sub_142aa9740(&var_f8, r14, rdi)
*r12 = sub_142a7dd00(sx.q(*r14) * 0x18)
uint64_t result = sub_142a7dd00(sx.q(*rdi) * 0x18)
*rsi = result

if (*arg6 s<= 0)
    *r14 = 0
    *rdi = 0
    int32_t result_1 = 0
    int32_t result_2 = 0
    int64_t* rax_9 = sub_142a86f30(sub_142a86cb0, sub_142a86ad0, 0, &result_1)
    int64_t* rax_10 = sub_142a86f30(sub_142a86cb0, sub_142a86ad0, 0, &result_2)
    int32_t var_1cc_1 = 0
    
    while (true)
        var_1d8 = 0
        char** rax_11 = sub_142a641c0("icudt64l-curr", &var_f8, &var_1d8)
        char** rax_12 = sub_142a625a0(rax_11, "Currencies", nullptr, &var_1d8)
        char** rbx_1 = rax_12
        int32_t rax_13 = sub_142a63b10(rax_12)
        int32_t var_1d4 = rax_13
        
        if (rax_13 s> 0)
            do
                char** rax_14 = sub_142a620c0(rbx_1, r13, nullptr, &var_1d8)
                int32_t var_1b0
                var_1b0.q = rax_14
                int32_t var_1d0
                void* rax_15 = sub_142a63b20(rax_14, 0, &var_1d0, &var_1d8)
                char* rax_16 = sub_142a63790(rax_14)
                char* rdx_4 = rax_16
                int64_t* rcx_12 = rax_9
                
                if (var_1cc_1 == 0)
                    goto label_142aa8a8b
                
                if (sub_142a86c30(rcx_12, rdx_4) == 0)
                    rdx_4 = rax_16
                    rcx_12 = rax_9
                label_142aa8a8b:
                    sub_142a86f50(rcx_12, rdx_4, rax_16, &result_1)
                    *(*rsi + sx.q(*rdi) * 0x18) = rax_16
                    *(*rsi + sx.q(*rdi) * 0x18 + 8) = rax_15
                    *(*rsi + sx.q(*rdi) * 0x18 + 0x14) = 0
                    *(*rsi + sx.q(*rdi) * 0x18 + 0x10) = var_1d0
                    *rdi += 1
                    
                    if (rax_4 != 0)
                        int64_t rdx_5
                        rdx_5.b = 1
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_138
                        sub_142a47a60(&var_138, rdx_5.b, rax_15, var_1d0)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rbx_3 = &var_138
                        
                        while (true)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_26 =
                                sub_142a86c30(*rax_4, rbx_3)
                            rbx_3 = rax_26
                            
                            if (rax_26 == 0)
                                break
                            
                            char var_130
                            bool cond:2_1
                            
                            if ((rax_26[1].b & 1) == 0)
                                int16_t rax_28 = rax_26[1].w
                                int32_t r8_6
                                
                                if (rax_28 s< 0)
                                    r8_6 = *(rbx_3 + 0xc)
                                else
                                    r8_6 = sx.d(rax_28) s>> 5
                                
                                int16_t rcx_19 = var_130.w
                                int32_t rax_30
                                int32_t var_12c
                                
                                if (rcx_19 s< 0)
                                    rax_30 = var_12c
                                else
                                    rax_30 = sx.d(rcx_19) s>> 5
                                
                                if ((rcx_19.b & 1) == 0 && r8_6 == rax_30)
                                    cond:2_1 = sub_142a490e0(rbx_3, &var_138, r8_6) != 0
                                    goto label_142aa8b69
                            else
                                cond:2_1 = (var_130 & 1) != 0
                            label_142aa8b69:
                                
                                if (cond:2_1)
                                    break
                            *(*rsi + sx.q(*rdi) * 0x18) = rax_16
                            char rax_34 = (rbx_3[1].w).b
                            void* rdx_8
                            
                            if ((rax_34 & 0x11) == 0)
                                rdx_8 = rbx_3 + 0xa
                                
                                if ((rax_34 & 2) == 0)
                                    rdx_8 = rbx_3[3]
                            else
                                rdx_8 = nullptr
                            
                            *(*rsi + sx.q(*rdi) * 0x18 + 8) = rdx_8
                            *(*rsi + sx.q(*rdi) * 0x18 + 0x14) = 0
                            int16_t rax_39 = rbx_3[1].w
                            int32_t rdx_10
                            
                            if (rax_39 s< 0)
                                rdx_10 = *(rbx_3 + 0xc)
                            else
                                rdx_10 = sx.d(rax_39) s>> 5
                            
                            *(*rsi + sx.q(*rdi) * 0x18 + 0x10) = rdx_10
                            *rdi += 1
                        
                        sub_142a47ff0(&var_138)
                        r12 = arg2
                    
                    void* rax_42 = sub_142a63b20(var_1b0.q, 1, &var_1d0, &var_1d8)
                    *(*r12 + sx.q(*r14) * 0x18) = rax_16
                    *(*r12 + sx.q(*r14) * 0x18 + 8) = sub_142aaa180(rax_42, var_1d0, arg1)
                    *(*r12 + sx.q(*r14) * 0x18 + 0x14) = 1
                    *(*r12 + sx.q(*r14) * 0x18 + 0x10) = var_1d0
                    *r14 += 1
                    *(*rsi + sx.q(*rdi) * 0x18) = rax_16
                    *(*rsi + sx.q(*rdi) * 0x18 + 8) = sub_142a7dd00(6)
                    sub_142a8d750(rax_16, *(*rsi + sx.q(*rdi) * 0x18 + 8), 3)
                    *(*rsi + sx.q(*rdi) * 0x18 + 0x14) = 1
                    *(*rsi + sx.q(*rdi) * 0x18 + 0x10) = 3
                    *rdi += 1
                
                sub_142a5f860(var_1b0.q)
                r13 += 1
                rbx_1 = rax_12
            while (r13 s< var_1d4)
        
        int32_t var_1bc = 0
        char** rax_56 = sub_142a625a0(rax_11, "CurrencyPlurals", nullptr, &var_1bc)
        char** rbx_4 = rax_56
        int32_t rax_57 = sub_142a63b10(rax_56)
        int32_t r13_1 = 0
        var_1d4 = 0
        
        if (rax_57 s> 0)
            int32_t rdi_1 = rax_57
            
            do
                char** rax_58 = sub_142a620c0(rbx_4, r13_1, nullptr, &var_1bc)
                int64_t rax_59 = sub_142a63790(rax_58)
                int64_t rdx_19 = rax_59
                int64_t* rcx_47
                
                if (var_1cc_1 != 0)
                    if (sub_142a86c30(rax_10, rdx_19) == 0)
                        rdx_19 = rax_59
                        rcx_47 = rax_10
                        goto label_142aa8d90
                    
                    sub_142a5f860(rax_58)
                else
                    rcx_47 = rax_10
                label_142aa8d90:
                    sub_142a86f50(rcx_47, rdx_19, rax_59, &result_2)
                    int32_t rax_61 = sub_142a63b10(rax_58)
                    int32_t rbx_5 = 0
                    
                    if (rax_61 s> 0)
                        do
                            int32_t var_1b8
                            void* rax_62 = sub_142a63b20(rax_58, rbx_5, &var_1b8, &var_1bc)
                            *(*arg2 + sx.q(*arg3) * 0x18) = rax_59
                            *(*arg2 + sx.q(*arg3) * 0x18 + 8) = sub_142aaa180(rax_62, var_1b8, arg1)
                            *(*arg2 + sx.q(*arg3) * 0x18 + 0x14) = 1
                            *(*arg2 + sx.q(*arg3) * 0x18 + 0x10) = var_1b8
                            *arg3 += 1
                            rbx_5 += 1
                        while (rbx_5 s< rax_61)
                        
                        r13_1 = var_1d4
                        rdi_1 = rax_57
                    
                    sub_142a5f860(rax_58)
                    rbx_4 = rax_56
                r13_1 += 1
                var_1d4 = r13_1
            while (r13_1 s< rdi_1)
            
            rdi = var_158
            rsi = arg4
            r14 = arg3
            r12 = arg2
        
        sub_142a5f860(rbx_4)
        sub_142a5f860(rax_12)
        sub_142a5f860(rax_11)
        
        if (var_f8[0] == 0)
            break
        
        r13 = 0
        var_1d4 = 0
        int64_t rcx_63 = 0
        
        while (true)
            char rax_68 = var_f8[rcx_63]
            rcx_63 += 1
            
            if (rax_68 != *(rcx_63 + 0x14364308f))
                int64_t r8_12 = -1
                
                do
                    r8_12 += 1
                while (var_f8[r8_12] != 0)
                
                sub_142a4d5b0(&var_f8, &var_f8, r8_12.d, &var_1d4)
                break
            
            if (rcx_63 == 6)
                int32_t var_f5_1 = 0x313030
                break
        
        var_1cc_1 += 1
    
    sub_142a869e0(rax_9)
    sub_142a869e0(rax_10)
    qsort(*r12, sx.q(*r14), 0x18, sub_142aa9010)
    qsort(*rsi, sx.q(*rdi), 0x18, sub_142aa9010)
    result = zx.q(result_1)
    
    if (result.d s> 0)
        *var_160 = result.d
    else
        result = zx.q(result_2)
        
        if (result.d s> 0)
            *var_160 = result.d

__security_check_cookie(rax_1 ^ &var_1f8)
return result
