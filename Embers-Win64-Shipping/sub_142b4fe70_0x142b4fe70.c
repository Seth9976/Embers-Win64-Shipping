// 函数: sub_142b4fe70
// 地址: 0x142b4fe70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_80 = -2
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char** i = sub_142a61e60(*(arg1[1] + 0xe8), &data_1434cce10, arg1, arg2)

if (*arg2 s<= 0)
    int32_t var_88 = 0xffffffff
    
    for (i = sub_142a86e70(arg1[2], &var_88); i != 0; i = sub_142a86e70(arg1[2], &var_88))
        void* rbx_1 = i[1]
        
        if (rbx_1 != "<dummy>")
            char* r8_1 = i[2]
            int64_t rax_2 = -1
            
            do
                rax_2 += 1
            while (r8_1[rax_2] != 0)
            
            char rax_4
            
            if (rax_2 u< 5 || *r8_1 != 0x6174656d || r8_1[4] != 0x3a)
                rax_4 = 0
            else
                rax_4 = 1
            
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rdx_1 = &var_78
            
            if (rax_4 == 0)
                sub_142b51140(arg1, rdx_1, r8_1)
                void* rax_6 = rbx_1 + 8
                int64_t j_3 = 7
                int64_t j
                
                do
                    if (*rax_6 == &data_14366f334)
                        *rax_6 = 0
                    
                    rax_6 += 8
                    j = j_3
                    j_3 -= 1
                while (j != 1)
                sub_142b4e530(*(arg1[1] + 0xf0), rbx_1 + 8, &var_78, arg2)
            else
                sub_142b507c0(arg1, rdx_1, r8_1)
                int128_t* rax_5 = rbx_1 + 8
                int64_t j_2 = 7
                int64_t j_1
                
                do
                    if (*rax_5 == &data_14366f334)
                        *rax_5 = 0
                    
                    rax_5 += 8
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
                sub_142b4e460(*(arg1[1] + 0xf8), rbx_1 + 8, &var_78, arg2)
            
            i = sub_142a47ff0(&var_78)
            
            if (*arg2 s> 0)
                break

__security_check_cookie(rax_1 ^ &var_a8)
return i
