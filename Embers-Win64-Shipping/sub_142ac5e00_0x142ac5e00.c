// 函数: sub_142ac5e00
// 地址: 0x142ac5e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::TimeZoneNames::icu_64::TimeZoneNamesDelegate::VTable** arg_8 = arg1
int64_t var_48 = -2
*arg1 = &icu_64::TimeZoneNamesDelegate::`vftable'{for `icu_64::TimeZoneNames'}
sub_142ac64e0()
void* arg_18 = &data_1440164c0
sub_142a860a0(&data_1440164c0)

if (data_144016520 != 0)
    goto label_142ac5ebb

int64_t* rax_1 = sub_142a86f30(sub_142a86cb0, sub_142a86ad0, 0, arg3)
data_144016518 = rax_1

if (*arg3 s<= 0)
    std::ios_base::precision(rax_1, sub_142a7dcd0)
    std::ios_base::width(data_144016518, sub_142ac6a80)
    data_144016520 = 1
    sub_142aa75d0(0x10, sub_142ac6ab0)
label_142ac5ebb:
    
    if (*arg3 s<= 0)
        char* rdi_1 = *(arg2 + 0x28)
        int64_t** rax_2 = sub_142a86c30(data_144016518, rdi_1)
        int64_t** rsi_1 = rax_2
        
        if (rax_2 != 0)
            rax_2[1].d += 1
            rsi_1[2] = sub_142a4bbc0()
        else
            int64_t rbp_1 = 0
            struct icu_64::TimeZoneNames::icu_64::TimeZoneNamesImpl::VTable** rax_3 =
                j_sub_142a7dd00(0x140)
            struct icu_64::TimeZoneNames::icu_64::TimeZoneNamesImpl::VTable** arg_20 = rax_3
            int64_t* r12_1
            
            if (rax_3 == 0)
                r12_1 = nullptr
            else
                r12_1 = sub_142b4d020(rax_3, arg2, arg3)
            
            if (r12_1 != 0)
                if (*arg3 s> 0)
                    goto label_142ac5fca
                
                int64_t rcx_4 = -1
                
                do
                    rcx_4 += 1
                while (rdi_1[rcx_4] != 0)
                
                int64_t rax_5 = sub_142a7dd00(rcx_4 + 1)
                rbp_1 = rax_5
                
                if (rax_5 != 0)
                    char* rcx_7 = rbp_1 - rdi_1
                    char i
                    
                    do
                        i = *rdi_1
                        *(rcx_7 + rdi_1) = i
                        rdi_1 = &rdi_1[1]
                    while (i != 0)
                    
                    if (*arg3 s> 0)
                        goto label_142ac5fca
                    
                    int64_t** rax_6 = sub_142a7dd00(0x18)
                    rsi_1 = rax_6
                    
                    if (rax_6 == 0)
                        *arg3 = 7
                        goto label_142ac5fca
                    
                    *rax_6 = r12_1
                    rax_6[1].d = 1
                    rsi_1[2] = sub_142a4bbc0()
                    sub_142a86f50(data_144016518, rbp_1, rsi_1, arg3)
                    
                    if (*arg3 s> 0)
                        goto label_142ac5fca
                else
                    *arg3 = 7
                label_142ac5fca:
                    (**r12_1)(r12_1, 1)
                    
                    if (rbp_1 != 0)
                        sub_142a7dcd0(rbp_1)
                    
                    if (rsi_1 != 0)
                        sub_142a7dcd0(rsi_1)
                    
                    rsi_1 = nullptr
            else
                *arg3 = 7
                rsi_1 = nullptr
        
        int32_t rax_9 = data_144016524 + 1
        data_144016524 = rax_9
        
        if (rax_9 s>= 0x64)
            sub_142ac69c0()
            data_144016524 = 0
        
        arg1[1] = rsi_1

sub_142a860d0(&data_1440164c0)
return arg1
