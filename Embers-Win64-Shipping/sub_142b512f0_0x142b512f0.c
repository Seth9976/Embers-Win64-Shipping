// 函数: sub_142b512f0
// 地址: 0x142b512f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg1 s> 0)
    return 

struct icu_64::TextTrieMap::VTable** rax_1 = j_sub_142a7dd00(0x38)

if (rax_1 == 0)
    rax_1 = nullptr
else
    rax_1[1].b = 1
    *rax_1 = &icu_64::TextTrieMap::`vftable'
    rax_1[6] = sub_142a47920
    __builtin_memset(&rax_1[2], 0, 0x18)
    rax_1[5].b = 1

data_144016be8 = rax_1

if (rax_1 == 0)
    *arg1 = 7
    return 

struct icu_64::StringEnumeration::icu_64::MetaZoneIDsEnumeration::VTable** rax_2 =
    sub_142b4d830(arg1)
struct icu_64::StringEnumeration::icu_64::MetaZoneIDsEnumeration::VTable** rdi_1 = rax_2
struct icu_64::StringEnumeration::icu_64::MetaZoneIDsEnumeration::VTable** arg_8 = rax_2

if (*arg1 s<= 0)
    struct icu_64::StringEnumeration::icu_64::MetaZoneIDsEnumeration::VTable* r8_1 = *rax_2
    rax_2 = r8_1->__offset(0x30).q(rax_2, arg1, r8_1)
    struct icu_64::StringEnumeration::icu_64::MetaZoneIDsEnumeration::VTable** r15_1 = rax_2
    
    if (rax_2 != 0)
        int64_t r14
        int64_t var_20_1 = r14
        
        while (*arg1 s<= 0)
            rax_2 = sub_142b4f210(r15_1, arg1)
            
            if (*arg1 s> 0)
                break
            
            if (rax_2 != 0)
                int64_t* rcx_3 = rax_2[1]
                int16_t* rsi_1 = nullptr
                int16_t* rdi_2
                
                if (rcx_3 == 0)
                    rdi_2 = nullptr
                else
                    rsi_1 = *rcx_3
                    rdi_2 = rcx_3[1]
                
                if (rsi_1 != 0 || rdi_2 != 0)
                    int64_t r13_1 = rax_2[2]
                    int32_t r12_1 = 0
                    
                    if (r13_1 != 0)
                        r12_1 = rax_2[3].d
                    
                    int32_t rax_3
                    
                    if (rsi_1 != 0 && rdi_2 != 0)
                        rax_3 = sub_142a8c280(rsi_1, rdi_2)
                    
                    if (rsi_1 == 0 || rdi_2 == 0 || rax_3 != 0)
                        r14.b = 0
                    else
                        r14.b = 1
                    
                    struct icu_64::StringEnumeration::icu_64::MetaZoneIDsEnumeration::VTable* 
                        rax_4 = sub_142acf590(r15_1)
                    
                    if (rsi_1 != 0)
                        rax_2 = sub_142a7dd00(0x20)
                        
                        if (rax_2 == 0)
                            *arg1 = 7
                            break
                            break
                        
                        void* rcx_6 = data_144016be8
                        *rax_2 = rax_4
                        rax_2[1].d = 0x10
                        *(rax_2 + 0xc) = r14.b
                        rax_2[2] = r13_1
                        rax_2[3].d = r12_1
                        sub_142b50890(rcx_6, rsi_1, rax_2, arg1)
                    
                    if (*arg1 s<= 0 && rdi_2 != 0)
                        rax_2 = sub_142a7dd00(0x20)
                        
                        if (rax_2 == 0)
                            *arg1 = 7
                            break
                        
                        void* rcx_7 = data_144016be8
                        *rax_2 = rax_4
                        rax_2[1].d = 0x20
                        *(rax_2 + 0xc) = r14.b
                        rax_2[2] = r13_1
                        rax_2[3].d = r12_1
                        sub_142b50890(rcx_7, rdi_2, rax_2, arg1)
            
            rax_2 = (*arg_8)->__offset(0x30).q(arg_8, arg1)
            r15_1 = rax_2
            
            if (rax_2 == 0)
                break
        
        rdi_1 = arg_8

if (rdi_1 != 0)
    (*rdi_1)->__offset(0x0).q(rdi_1, 1)

if (*arg1 s> 0)
    int64_t* rcx_10 = data_144016be8
    
    if (rcx_10 != 0)
        (**rcx_10)(rcx_10, 1)
    
    data_144016be8 = 0
    return 

sub_142aa75d0(0xe, sub_142b51570)
