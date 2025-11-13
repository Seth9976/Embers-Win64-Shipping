// 函数: sub_1423abd40
// 地址: 0x1423abd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* i_1 = *(arg1 + 0x120)
void* i = arg1 + 0x110

if (i_1 != 0)
    i = i_1

for (void* rsi = i + (sx.q(*(arg1 + 0x128)) << 3); i != rsi; i += 8)
    int64_t* rcx = *i
    int32_t rax_3 = *(rcx + 0xc)
    bool cond:1_1
    
    if (*(arg2 + 8) != 2)
        cond:1_1 = rax_3 == 1
    else
        cond:1_1 = rax_3 == 0
    
    rax_3.b = cond:1_1
    
    if (rax_3.b != 0)
        (*(*rcx + 0x28))(rcx, arg1 + 0x130)

void* rcx_1
void* r8_1

if (*(arg1 + 0x54) == 0)
    void* rax_5 = *(arg1 + 0x120)
    rcx_1 = arg1 + 0x110
    
    if (rax_5 != 0)
        rcx_1 = rax_5
    
    r8_1 = rcx_1 + (sx.q(*(arg1 + 0x128)) << 3)

int128_t* result

if (*(arg1 + 0x54) != 0 || rcx_1 == r8_1)
label_1423abe04:
    result = sub_1423aecc0(arg1 + 0x110, 0)
else
    while (true)
        void* rdx_1 = *rcx_1
        
        if (*(rdx_1 + 8) == 3)
            int32_t rdx_2 = *(rdx_1 + 0xc)
            int32_t rsi_1
            
            if (rdx_2 == 0)
                rsi_1 = 2
            label_1423abe3f:
                void* var_40_1 = arg1
                void*** var_58_1 = nullptr
                void** const var_48 = &data_142da2668
                int64_t (* var_68)(int64_t* arg1, void* arg2) = sub_1423ab1c0
                void** const var_88 = &data_142da2668
                void*** var_98_1 = nullptr
                int64_t (* var_a8)(int64_t* arg1, int64_t arg2) = sub_1423ab2c0
                void* var_80_1 = arg1
                int32_t rax_7 = sub_1423affe0(arg1)
                *(arg1 + 0x60) = rsi_1
                sub_140a3c510(arg1 + 0x70, &var_a8)
                *(arg1 + 0xb0) = rax_7
                result = sub_140a3c510(arg1 + 0xc0, &var_68)
                
                if (var_a8 != 0)
                    void** const* rcx_8 = &var_88
                    
                    if (var_98_1 != 0)
                        rcx_8 = var_98_1
                    
                    result = (*rcx_8)[2](rcx_8)
                
                if (var_68 != 0)
                    void** const* rcx_9 = &var_48
                    
                    if (var_58_1 != 0)
                        rcx_9 = var_58_1
                    
                    result = (*rcx_9)[2](rcx_9)
                
                break
            
            if (rdx_2 == 1)
                rsi_1 = 1
                goto label_1423abe3f
        
        rcx_1 += 8
        
        if (rcx_1 == r8_1)
            goto label_1423abe04

__security_check_cookie(rax_1 ^ &var_c8)
return result
