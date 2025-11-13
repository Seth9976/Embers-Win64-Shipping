// 函数: sub_142a46540
// 地址: 0x142a46540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
*(arg1 + 0xd8) = 0
int64_t rcx = *(arg1 + 0xd0)

if (rcx != *(arg1 + 0x28))
    sub_142a7dcd0(rcx)

int64_t rcx_1 = *(arg1 + 0x28)
*(arg1 + 0xd0) = 0

if (rcx_1 != arg1 + 0x30)
    sub_142a7dcd0(rcx_1)
    *(arg1 + 0x28) = arg1 + 0x30

char* rsi = nullptr
int32_t var_80 = 0
char* string_2
__builtin_memset(&string_2, 0, 0x28)
int32_t var_7c = 0
int64_t var_74 = 0
void* result
int32_t var_84

if (arg2 != 0)
    *(arg1 + 0x1a) = 0
    int32_t var_88
    int32_t* r9_1 = &var_88
    *(arg1 + 0x14) = 0
    *(arg1 + 8) = 0
    char* rdx_2 = *(arg1 + 0x28)
    var_88 = 0
    int32_t rax_3
    
    if (arg3 == 0)
        rax_3 = sub_142a4d590(arg2, rdx_2, 0x9d, r9_1)
    else
        rax_3 = sub_142a4cc30(arg2, rdx_2, 0x9d, r9_1)
    
    int32_t r13_1 = rax_3
    int32_t rax_4 = var_88
    
    if (rax_4 == 0xf || r13_1 s>= 0x9d)
        char* rax_5 = sub_142a7dd00(sx.q(r13_1 + 1))
        *(arg1 + 0x28) = rax_5
        
        if (rax_5 != 0)
            var_88 = 0
            int32_t* r9_2 = &var_88
            int32_t rax_6
            
            if (arg3 == 0)
                rax_6 = sub_142a4d590(arg2, rax_5, r13_1 + 1, r9_2)
            else
                rax_6 = sub_142a4cc30(arg2, rax_5, r13_1 + 1, r9_2)
            
            r13_1 = rax_6
            rax_4 = var_88
            goto label_142a466a2
        
        *(arg1 + 0x28) = arg1 + 0x30
        sub_142a46dc0(arg1)
    else
    label_142a466a2:
        
        if (rax_4 s> 0 || rax_4 == 0xffffff84)
            sub_142a46dc0(arg1)
        else
            char* string = *(arg1 + 0x28)
            int32_t r14_1 = 1
            *(arg1 + 0x20) = r13_1
            string_2 = string
            int32_t r12_1 = 1
            char* rax_7 = strchr(string, 0x40)
            char* rax_8 = strchr(string, 0x5f)
            char* rcx_8 = rax_8
            
            if (rax_8 != 0)
                int64_t i = 1
                int32_t* rbx_1 = &string_2
                int32_t r14_2 = 1
                int32_t* r12_2 = &var_80
                
                while (i s< 4)
                    if (rax_7 != 0 && rcx_8 u>= rax_7)
                        break
                    
                    int32_t rcx_9 = rcx_8.d - *rbx_1
                    r14_2 += 1
                    *(rbx_1 + 8) = &rcx_8[1]
                    i += 1
                    *r12_2 = rcx_9
                    rbx_1 = &rbx_1[2]
                    r12_2 = &r12_2[1]
                    char* rax_10 = strchr(*rbx_1, 0x5f)
                    rcx_8 = rax_10
                    
                    if (rax_10 == 0)
                        break
                
                char* var_60
                rsi = var_60
                var_84 = r14_2
                r14_1 = 1
                r12_1 = var_84
            
            int64_t r12_3 = sx.q(r12_1 - 1)
            char* string_1 = (&string_2)[r12_3]
            char* r15_3 = strchr(string_1, 0x40)
            char* rax_13 = strchr(string_1, 0x2e)
            
            if (r15_3 != 0)
                if (rax_13 == 0 || r15_3 u<= rax_13)
                    (&var_80)[r12_3] = r15_3.d - string_1.d
                else
                    (&var_80)[r12_3] = rax_13.d - string_1.d
            else if (rax_13 != 0)
                (&var_80)[r12_3] = rax_13.d - string_1.d
            else
                (&var_80)[r12_3] = *(arg1 + 0x28) - string_1.d + r13_1
            
            int64_t rax_17 = sx.q(var_80)
            
            if (rax_17.d s>= 0xc)
                sub_142a46dc0(arg1)
            else
                if (rax_17.d s> 0)
                    memcpy(arg1 + 8, *(arg1 + 0x28), rax_17.d)
                    *(rax_17 + arg1 + 8) = 0
                
                if (var_7c == 4)
                    char rcx_14 = *rsi
                    
                    if (rcx_14 - 0x61 u<= 0x19 || rcx_14 - 0x41 u<= 0x19)
                        char rcx_15 = rsi[1]
                        
                        if (rcx_15 - 0x61 u<= 0x19 || rcx_15 - 0x41 u<= 0x19)
                            char rcx_16 = rsi[2]
                            
                            if (rcx_16 - 0x61 u<= 0x19 || rcx_16 - 0x41 u<= 0x19)
                                char rcx_17 = rsi[3]
                                
                                if (rcx_17 - 0x61 u<= 0x19 || rcx_17 - 0x41 u<= 0x19)
                                    r14_1 = 2
                                    *(arg1 + 0x14) = *rsi
                                    *(arg1 + 0x18) = 0
                
                uint64_t rdx_5 = zx.q(r14_1)
                int64_t rcx_18 = sx.q((&var_80)[rdx_5])
                
                if ((rcx_18 - 2).d u<= 1)
                    memcpy(arg1 + 0x1a, (&string_2)[rdx_5], rcx_18.d)
                    *(rcx_18 + arg1 + 0x1a) = 0
                    r14_1 += 1
                else if (rcx_18.d == 0)
                    r14_1 += 1
                
                uint64_t rax_24 = zx.q(r14_1)
                
                if ((&var_80)[rax_24] s> 0)
                    *(arg1 + 0x20) = (&string_2)[rax_24].d - *(arg1 + 0x28)
                
                var_88 = 0
                sub_142a468d0(arg1, &var_88)
                
                if (var_88 s> 0)
                    sub_142a46dc0(arg1)
    
    result = arg1
else
    sub_142a46330()
    sub_142a860a0(&data_144015410)
    struct icu_64::UObject::icu_64::Locale::VTable** rsi_1 = data_144015408
    sub_142a860d0(&data_144015410)
    
    if (rsi_1 == 0)
        var_84 = 0
        rsi_1 = sub_142a469a0(nullptr, &var_84)
    
    result = sub_142a45c20(arg1, rsi_1)
__security_check_cookie(rax_1 ^ &var_a8)
return result
