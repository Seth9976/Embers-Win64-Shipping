// 函数: sub_1423aa730
// 地址: 0x1423aa730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* rcx = *(arg1 + 0x108)
uint64_t rax_3

if ((*(*rcx + 8))(rcx, arg3, arg1 + 0x180, arg1 + 0x130).b != 0)
    rax_3 = zx.q(*(arg1 + 0x54))
else
    *(arg1 + 0x54) = 1
    rax_3.b = 1

int128_t* result
int64_t (* var_a8)(int64_t* arg1, void* arg2)
void*** var_98
void** const var_88
int64_t (* var_68)(int64_t* arg1, void* arg2, int512_t arg3 @ zmm1)
void*** var_58
void** const var_48
int32_t rax_4
void*** rax_9
void** const* rcx_11

if (rax_3.b != 0)
label_1423aa800:
    int64_t rdx = sx.q(*(arg2 + 0xc))
    
    if (rdx.d s< *(arg2 + 0x10))
        int64_t r8_1 = rdx
        int64_t r9_2 = rdx * 0x28
        
        do
            int64_t* rcx_4
            
            if (r8_1 s>= 0 && rdx.d s< *(arg1 + 0x3b8))
                rax_3 = *(arg1 + 0x3b0)
                rcx_4 = arg1 + 0x180
                
                if (rax_3 != 0)
                    rcx_4 = rax_3
            
            if (r8_1 s< 0 || rdx.d s>= *(arg1 + 0x3b8) || *(rcx_4 + r9_2) == 0)
                *(arg1 + 0x54) = 1
                rax_3.b = 1
            else
                rax_3 = zx.q(*(arg1 + 0x54))
            
            rdx = zx.q(rdx.d + 1)
            r8_1 += 1
            r9_2 += 0x28
        while (rdx.d s< *(arg2 + 0x10))
    
    void* rdx_1
    void* r8_2
    
    if (rax_3.b == 0)
        void* rax_5 = *(arg1 + 0x120)
        rdx_1 = arg1 + 0x110
        
        if (rax_5 != 0)
            rdx_1 = rax_5
        
        r8_2 = rdx_1 + (sx.q(*(arg1 + 0x128)) << 3)
    
    if (rax_3.b != 0 || rdx_1 == r8_2)
    label_1423aa8a9:
        *(arg1 + 0x54) = 1
        var_98 = nullptr
        var_88 = &data_142da2668
        void* var_80_1 = arg1
        var_a8 = sub_1423ab1c0
        var_68 = nullptr
        var_58 = nullptr
        rax_4 = sub_1423affe0(arg1)
        *(arg1 + 0x60) = 0
        goto label_1423aa8e9
    
    int32_t rsi_2
    
    while (true)
        void* rcx_5 = *rdx_1
        
        if (*(rcx_5 + 8) == 1)
            int32_t rcx_6 = *(rcx_5 + 0xc)
            
            if (rcx_6 == 0)
                rsi_2 = 2
                break
            
            if (rcx_6 == 1)
                rsi_2 = 1
                break
        
        rdx_1 += 8
        
        if (rdx_1 == r8_2)
            goto label_1423aa8a9
    
    void* var_40_2 = arg1
    var_48 = &data_142da2668
    void*** var_58_1 = nullptr
    var_68 = sub_1423ab1c0
    void*** var_98_1 = nullptr
    var_88 = &data_142da2668
    var_a8 = sub_1423ab260
    void* var_80_2 = arg1
    int32_t rax_11 = sub_1423affe0(arg1)
    *(arg1 + 0x60) = rsi_2
    sub_140a3c510(arg1 + 0x70, &var_a8)
    *(arg1 + 0xb0) = rax_11
    result = sub_140a3c510(arg1 + 0xc0, &var_68)
    
    if (var_a8 != 0)
        void** const* rcx_17 = &var_88
        
        if (var_98_1 != 0)
            rcx_17 = var_98_1
        
        result = (*rcx_17)[2](rcx_17)
    
    if (var_68 != 0)
        rax_9 = var_58_1
        rcx_11 = &var_48
        goto label_1423aa930
else
    void* rcx_1 = *(arg1 + 0x108)
    
    if (*(rcx_1 + 8) != 0)
        goto label_1423aa800
    
    int32_t rcx_2 = *(rcx_1 + 0xc)
    int32_t rsi_1
    
    if (rcx_2 != 0)
        if (rcx_2 != 1)
            goto label_1423aa800
        
        rsi_1 = rcx_2
        goto label_1423aa7b4
    
    rsi_1 = 2
label_1423aa7b4:
    void* var_80 = arg1
    var_98 = nullptr
    var_88 = &data_142da2668
    var_58 = nullptr
    var_a8 = sub_1423ab1c0
    var_48 = &data_142da2668
    var_68 = sub_1423ab510
    void* var_40_1 = arg1
    rax_4 = sub_1423affe0(arg1)
    *(arg1 + 0x60) = rsi_1
label_1423aa8e9:
    sub_140a3c510(arg1 + 0x70, &var_68)
    *(arg1 + 0xb0) = rax_4
    result = sub_140a3c510(arg1 + 0xc0, &var_a8)
    
    if (var_68 != 0)
        void** const* rcx_10 = &var_48
        
        if (var_58 != 0)
            rcx_10 = var_58
        
        result = (*rcx_10)[2](rcx_10)
    
    if (var_a8 != 0)
        rax_9 = var_98
        rcx_11 = &var_88
    label_1423aa930:
        
        if (rax_9 != 0)
            rcx_11 = rax_9
        
        result = (*rcx_11)[2](rcx_11)
__security_check_cookie(rax_1 ^ &var_c8)
return result
