// 函数: sub_142b369a0
// 地址: 0x142b369a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t result = __security_cookie ^ &var_b8
int64_t result_1 = result
uint64_t rbx = 0
int64_t var_98 = arg3

if (*(arg1 + 0x48) u> 0)
    do
        void* rcx = *(arg1 + 0x40)
        
        if (rcx != 0)
            rcx = *(rcx + (rbx << 3))
        
        result = sub_142b353a0(rcx, arg2, arg3)
        arg3 = var_98
        rbx = zx.q(rbx.d + 1)
    while (rbx.d u< *(arg1 + 0x48))

void* r14 = arg1 + 0x58
int64_t i_3 = 3
int64_t i

do
    if (*r14 != 0)
        uint64_t rbp_1 = 0
        
        if (*(arg1 + 0x90) u> 0)
            do
                int64_t rax_1 = *(arg1 + 0x88)
                int64_t* rbx_1
                
                if (rax_1 == 0)
                    rbx_1 = nullptr
                else
                    rbx_1 = *(rax_1 + (rbp_1 << 3))
                
                int64_t* rcx_1 = *r14
                result = *rbx_1
                
                if (*rcx_1 == result)
                    int16_t rsi_1
                    int16_t rdi_1
                    
                    if (rcx_1 != 0)
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
                        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_3 =
                            sub_142aaf870(sub_142aaf0c0(*(arg1 + 0x80)), &var_88, 0)
                        int16_t rdx_2 = rax_3[1].w
                        int32_t rcx_5
                        
                        if (rdx_2 s< 0)
                            rcx_5 = *(rax_3 + 0xc)
                        else
                            rcx_5 = sx.d(rdx_2) s>> 5
                        
                        if (rcx_5 == 0)
                            rsi_1 = -1
                        else if ((rdx_2.b & 2) == 0)
                            rsi_1 = rax_3[3]->__offset(0x0).q
                        else
                            rsi_1 = *(rax_3 + 0xa)
                        
                        rdi_1 = *(rbx_1 + 0xe)
                        result = sub_142a47ff0(&var_88)
                    
                    if (rcx_1 == 0 || rsi_1 == rdi_1)
                        *r14 = rbx_1
                
                rbp_1 = zx.q(rbp_1.d + 1)
            while (rbp_1.d u< *(arg1 + 0x90))
    
    r14 += 8
    i = i_3
    i_3 -= 1
while (i != 1)
uint64_t i_2 = zx.q((i_3 + 6).d)
void* r15_1 = arg1 + 0x50
uint64_t i_1

do
    void* rcx_7 = *r15_1
    
    if (rcx_7 != 0)
        result = sub_142b353a0(rcx_7, arg2, var_98)
    
    r15_1 += 8
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
__security_check_cookie(result_1 ^ &var_b8)
return result
