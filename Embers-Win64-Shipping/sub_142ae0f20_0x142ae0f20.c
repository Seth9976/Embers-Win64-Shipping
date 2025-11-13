// 函数: sub_142ae0f20
// 地址: 0x142ae0f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t i = 0
void* r13 = nullptr
int16_t rcx = 0x46
int16_t rdi = 0x31
int16_t result

do
    void* rbx_2 = *(arg1 + 8) + 0x508 + r13
    result = *(rbx_2 + 8)
    
    if ((result & 0xffe0) == 0)
        int16_t var_88 = rcx
        int32_t r8_2
        
        if (result s< 0)
            r8_2 = *(rbx_2 + 0xc)
        else
            r8_2 = sx.d(result) s>> 5
        
        sub_142a49390(rbx_2, 0, r8_2, &var_88, 0, 1)
        int16_t* rdx_1 = &var_88
        void* rcx_2 = rbx_2
        int16_t rax_3
        
        if (i s>= 0xa)
            var_88 = rdi
            sub_142a48d70(rcx_2, rdx_1, 0, 1)
            rax_3 = i.w + 0x26
            rdx_1 = &var_88
            rcx_2 = rbx_2
        else
            rax_3 = i.w + 0x30
        
        var_88 = rax_3
        sub_142a48d70(rcx_2, rdx_1, 0, 1)
        result = sub_142a4a210(rbx_2)
    
    int32_t rdi_1 = 0
    void* rbx_3 = r13 + 0x40
    int64_t j_1 = 2
    int64_t j
    
    do
        void* rcx_4 = *(arg1 + 8)
        void* rbp_1 = rbx_3 + rcx_4
        
        if ((*(rbp_1 + 0x510) & 0xffe0) == 0)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
            sub_142a48050(rbp_1 + 0x508, sub_142ae2220(rcx_4, &var_78, i, rdi_1))
            result = sub_142a47ff0(&var_78)
        
        rdi_1 += 1
        rbx_3 += 0x40
        j = j_1
        j_1 -= 1
    while (j != 1)
    i += 1
    rcx = (j_1 + 0x46).w
    r13 += 0xc0
    rdi = (j_1 + 0x31).w
while (i s< 0x10)

__security_check_cookie(rax_1 ^ &var_b8)
return result
