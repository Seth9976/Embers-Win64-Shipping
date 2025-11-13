// 函数: sub_142aa9740
// 地址: 0x142aa9740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_130 = -2
void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t rbx = 0
*arg2 = 0
*arg3 = 0
char var_e8[0x3]
void* rdx = &var_e8 - arg1
char i

do
    i = *arg1
    *(rdx + arg1) = i
    arg1 = &arg1[1]
while (i != 0)

if (data_144015f50 != 2 && sub_142a85f00(&data_144015f50) != 0)
    sub_142aa99d0()
    sub_142a85e80(&data_144015f50)

int64_t* rax_4 = data_144015f48
int64_t result

while (true)
    int32_t var_158 = 0
    char** rax_5 = sub_142a641c0("icudt64l-curr", &var_e8, &var_158)
    char** r12_1 = rax_5
    char** var_150 = rax_5
    char** rax_6 = sub_142a625a0(rax_5, "Currencies", nullptr, &var_158)
    int32_t rax_7 = sub_142a63b10(rax_6)
    
    if (rax_7 s> 0)
        do
            char** rax_8 = sub_142a620c0(rax_6, rbx, nullptr, &var_158)
            int32_t var_148
            void* rax_9 = sub_142a63b20(rax_8, 0, &var_148, &var_158)
            *arg3 += 1
            
            if (rax_4 != 0)
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_128
                int32_t rax_11 = sub_142aa8f70(rax_4, sub_142a47a60(&var_128, 1, rax_9, var_148))
                *arg3 += rax_11
                sub_142a47ff0(&var_128)
            
            *arg3 += 1
            *arg2 += 1
            sub_142a5f860(rax_8)
            rbx += 1
        while (rbx s< rax_7)
        
        r12_1 = var_150
    
    rbx = 0
    int32_t var_154 = 0
    char** rax_12 = sub_142a625a0(r12_1, "CurrencyPlurals", nullptr, &var_154)
    int32_t rax_13 = sub_142a63b10(rax_12)
    int32_t rsi_2 = 0
    
    if (rax_13 s> 0)
        do
            char** rax_14 = sub_142a620c0(rax_12, rsi_2, nullptr, &var_154)
            int32_t rax_15 = sub_142a63b10(rax_14)
            *arg2 += rax_15
            sub_142a5f860(rax_14)
            rsi_2 += 1
        while (rsi_2 s< rax_13)
        
        rbx = 0
    
    sub_142a5f860(rax_12)
    sub_142a5f860(rax_6)
    result = sub_142a5f860(var_150)
    
    if (var_e8[0] == 0)
        break
    
    var_150.d = 0
    int64_t rax_16 = 0
    
    while (true)
        char rcx_16 = var_e8[rax_16]
        rax_16 += 1
        
        if (rcx_16 != *(rax_16 + 0x14364308f))
            int64_t r8_3 = -1
            
            do
                r8_3 += 1
            while (var_e8[r8_3] != 0)
            
            sub_142a4d5b0(&var_e8, &var_e8, r8_3.d, &var_150)
            break
        
        if (rax_16 == 6)
            int32_t var_e5_1 = 0x313030
            break

__security_check_cookie(rax_1 ^ &var_178)
return result
