// 函数: sub_142877560
// 地址: 0x142877560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t* rdi = arg1
int64_t var_40 = sub_140687ad0(*(*(arg1 + 0xb0) + 0x120))
void* rax_4 = sub_142885850(&var_40)
int64_t result

if (rax_4 == 0)
label_142877783:
    result = 1
else
    while (true)
        void* rcx_2 = *(rax_4 + 8)
        int64_t var_38 = 0
        uint16_t rdx_3 = *(rcx_2 + 0x10) * 2 - (*(rcx_2 + 0x28)).w
        var_38:7.b = rdx_3.b
        var_38:6.b = (rdx_3 u>> 8).b
        int64_t* rax_6 = sub_1428856c0(*(*(rdi + 0xb0) + 0x120), &var_38)
        
        if (rax_6 == 0)
            sub_142856580(rdi, 0x50, 0x186, 0x44, "ssl\statem\statem_dtls.c", 0x45b)
        else
            char* r13_1 = rax_6[1]
            int64_t rbx_1 = 1
            
            if (*(r13_1 + 0x28) == 0)
                rbx_1 = 0xc
            
            memcpy(*(*(rdi + 0x88) + 8), *(r13_1 + 0x58), (*(r13_1 + 8)).d + rbx_1.d)
            void* r8_3 = *(rdi + 0xb0)
            *(rdi + 0x98) = *(r13_1 + 8) + rbx_1
            int16_t rdx_6 = *(r13_1 + 0x10)
            char rax_7 = *r13_1
            int64_t r9_1 = *(r13_1 + 0x20)
            *(r8_3 + 0x140) = *(r13_1 + 8)
            *(r8_3 + 0x138) = rax_7
            *(r8_3 + 0x148) = rdx_6
            *(r8_3 + 0x158) = r9_1
            *(r8_3 + 0x150) = 0
            int64_t r12_1 = *(rdi + 0x460)
            int64_t r15_1 = *(rdi + 0x478)
            int64_t r14_1 = *(rdi + 0x450)
            int16_t rsi_1 = *(*(rdi + 0x16b0) + 2)
            int64_t rbp_1 = *(rdi + 0x508)
            *(*(rdi + 0xb0) + 0x200) = 1
            *(rdi + 0x460) = *(r13_1 + 0x30)
            *(rdi + 0x478) = *(r13_1 + 0x38)
            *(rdi + 0x450) = *(r13_1 + 0x40)
            *(rdi + 0x508) = *(r13_1 + 0x48)
            sub_14286e200(&rdi[0x200], *(r13_1 + 0x50))
            int32_t rdx_8 = 0x16
            
            if (*(r13_1 + 0x28) != 0)
                rdx_8 = 0x14
            
            int32_t rax_14 = sub_142876640(arg1, rdx_8)
            *(arg1 + 0x460) = r12_1
            *(arg1 + 0x478) = r15_1
            *(arg1 + 0x450) = r14_1
            *(arg1 + 0x508) = rbp_1
            sub_14286e200(&rdi[0x200], rsi_1)
            rdi = arg1
            *(*(arg1 + 0xb0) + 0x200) = 0
            sub_142899cf0(*(arg1 + 0x18), 0xb, 0, 0)
            
            if (rax_14 s> 0)
                rax_4 = sub_142885850(&var_40)
                
                if (rax_4 == 0)
                    goto label_142877783
                
                continue
        
        result = 0xffffffff
        break

__security_check_cookie(rax_1 ^ &var_78)
return result
