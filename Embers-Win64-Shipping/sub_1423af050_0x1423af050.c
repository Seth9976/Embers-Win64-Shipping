// 函数: sub_1423af050
// 地址: 0x1423af050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* rcx = *(arg1 + 0x108)
char rax_3

if ((*(*rcx + 0x10))(rcx, arg3, arg1 + 0x130) != 0)
    rax_3 = *(arg1 + 0x54)
else
    *(arg1 + 0x54) = 1
    rax_3 = 1

int128_t* result
int64_t (* var_a8)(int64_t* arg1, void* arg2)
void*** var_98_1
void** const var_88
int64_t (* var_68)(int64_t* arg1, int64_t arg2, int512_t arg3 @ zmm1)
void*** var_58_1
void** const var_48
int32_t rax_4
void*** rax_11
void** const* rcx_13

if (rax_3 != 0)
label_1423af268:
    void* var_80_3 = arg1
    var_98_1 = nullptr
    var_88 = &data_142da2668
    var_68 = nullptr
    var_a8 = sub_1423ab1c0
    var_58_1 = nullptr
    rax_4 = sub_1423affe0(arg1)
    *(arg1 + 0x60) = 0
label_1423af2a3:
    sub_140a3c510(arg1 + 0x70, &var_68)
    *(arg1 + 0xb0) = rax_4
    result = sub_140a3c510(arg1 + 0xc0, &var_a8)
    
    if (var_68 != 0)
        void** const* rcx_17 = &var_48
        
        if (var_58_1 != 0)
            rcx_17 = var_58_1
        
        result = (*rcx_17)[2](rcx_17)
    
    if (var_a8 != 0)
        rax_11 = var_98_1
        rcx_13 = &var_88
    label_1423af2ea:
        
        if (rax_11 != 0)
            rcx_13 = rax_11
        
        result = (*rcx_13)[2](rcx_13)
else
    void* rcx_1 = *(arg1 + 0x108)
    
    if (*(rcx_1 + 8) == 1)
        int32_t rcx_2 = *(rcx_1 + 0xc)
        int32_t r14_1
        
        if (rcx_2 != 0)
            if (rcx_2 != 1)
                goto label_1423af123
            
            r14_1 = rcx_2
            goto label_1423af0d6
        
        r14_1 = 2
    label_1423af0d6:
        void* var_80_1 = arg1
        var_98_1 = nullptr
        var_88 = &data_142da2668
        var_58_1 = nullptr
        var_a8 = sub_1423ab1c0
        var_48 = &data_142da2668
        var_68 = sub_1423ab1d0
        void* var_40_1 = arg1
        rax_4 = sub_1423affe0(arg1)
        *(arg1 + 0x60) = r14_1
        goto label_1423af2a3
    
label_1423af123:
    
    if (rax_3 != 0)
        goto label_1423af268
    
    int64_t* rcx_4 = *(arg1 + 0x108)
    int32_t r14_2 = 1
    
    if (rcx_4 != 0)
        *(arg1 + 0x108) = 0
        (**rcx_4)(rcx_4, 1)
    
    *(arg1 + 0x3b8) = 0
    
    if (*(arg1 + 0x3bc) != 0)
        sub_1423b5010(arg1 + 0x180, 0)
    
    void* rdx
    void* r8_1
    
    if (*(arg1 + 0x54) == 0)
        void* rax_6 = *(arg1 + 0x120)
        rdx = arg1 + 0x110
        
        if (rax_6 != 0)
            rdx = rax_6
        
        r8_1 = rdx + (sx.q(*(arg1 + 0x128)) << 3)
    
    if (*(arg1 + 0x54) != 0 || rdx == r8_1)
    label_1423af1b7:
        result = sub_1423abd40(arg1, arg2)
    else
        while (true)
            void* rcx_6 = *rdx
            
            if (*(rcx_6 + 8) == 3)
                int32_t rcx_7 = *(rcx_6 + 0xc)
                
                if (rcx_7 == 0)
                    r14_2 = 2
                    break
                
                if (rcx_7 == 1)
                    break
            
            rdx += 8
            
            if (rdx == r8_1)
                goto label_1423af1b7
        
        void*** var_58_2 = nullptr
        var_48 = &data_142da2668
        void* var_40_2 = arg1
        var_68 = sub_1423ab1c0
        var_88 = &data_142da2668
        var_a8 = sub_1423ab2c0
        void*** var_98_2 = nullptr
        void* var_80_2 = arg1
        int32_t rax_8 = sub_1423affe0(arg1)
        *(arg1 + 0x60) = r14_2
        sub_140a3c510(arg1 + 0x70, &var_a8)
        *(arg1 + 0xb0) = rax_8
        result = sub_140a3c510(arg1 + 0xc0, &var_68)
        
        if (var_a8 != 0)
            void** const* rcx_12 = &var_88
            
            if (var_98_2 != 0)
                rcx_12 = var_98_2
            
            result = (*rcx_12)[2](rcx_12)
        
        if (var_68 != 0)
            rax_11 = var_58_2
            rcx_13 = &var_48
            goto label_1423af2ea
__security_check_cookie(rax_1 ^ &var_c8)
return result
