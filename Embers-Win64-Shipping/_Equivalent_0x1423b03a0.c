// 函数: _Equivalent
// 地址: 0x1423b03a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* i_2 = *(arg1 + 0x120)
void* i = arg1 + 0x110

if (i_2 != 0)
    i = i_2

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
        *(arg1 + 0x104) =
            (*(*rcx + 0x10))(rcx, arg2, zx.q(*(arg1 + 0x104)), arg1 + 0x180, arg1 + 0x130)

char r9_2 = *(arg1 + 0x54)
int64_t (* var_b8)(int64_t* arg1, void* arg2)
void*** var_a8_1
void** const var_98
int64_t (* var_78)(int64_t* arg1, void* arg2)
int64_t* var_68_1
void** var_58
int32_t rax_8

if (r9_2 == 0)
    void* i_3 = *(arg1 + 0x120)
    void* i_1 = arg1 + 0x110
    
    if (i_3 != 0)
        i_1 = i_3
    
    for (void* r8_2 = i_1 + (sx.q(*(arg1 + 0x128)) << 3); i_1 != r8_2; i_1 += 8)
        void* rdx_1 = *i_1
        
        if (*(rdx_1 + 8) == 1)
            int32_t rdx_2 = *(rdx_1 + 0xc)
            int32_t rsi_1
            
            if (rdx_2 == 0)
                rsi_1 = 2
            label_1423b0561:
                void* var_90_2 = arg1
                var_a8_1 = nullptr
                var_98 = &data_142da2668
                var_68_1 = nullptr
                var_b8 = sub_1423ab1c0
                var_58 = &data_142da2668
                var_78 = sub_1423ab260
                void* var_50_1 = arg1
                rax_8 = sub_1423affe0(arg1)
                *(arg1 + 0x60) = rsi_1
                goto label_1423b04de
            
            if (rdx_2 == 1)
                rsi_1 = 1
                goto label_1423b0561

int128_t* result
void*** rax_11
void** const* rcx_5

if (*(arg1 + 0x104) == *(arg1 + 0x100))
    if (r9_2 != 0)
        goto label_1423b04a2
    
    void* rax_13 = *(arg1 + 0x120)
    void* rcx_9 = arg1 + 0x110
    
    if (rax_13 != 0)
        rcx_9 = rax_13
    
    void* r8_3 = rcx_9 + (sx.q(*(arg1 + 0x128)) << 3)
    
    if (rcx_9 == r8_3)
    label_1423b05f5:
        result = sub_1423b30d0(arg1, arg2, arg3)
    else
        int32_t rsi_2
        
        while (true)
            void* rdx_5 = *rcx_9
            
            if (*(rdx_5 + 8) == 2)
                int32_t rdx_6 = *(rdx_5 + 0xc)
                
                if (rdx_6 == 0)
                    rsi_2 = 2
                    break
                
                if (rdx_6 == 1)
                    rsi_2 = 1
                    break
            
            rcx_9 += 8
            
            if (rcx_9 == r8_3)
                goto label_1423b05f5
        
        *(arg1 + 0x3c0) = 1
        var_58 = &data_142da2668
        void*** var_68_2 = nullptr
        var_78 = sub_1423ab1c0
        void* var_50_2 = arg1
        var_98 = &data_142da2668
        var_b8 = sub_1423ab520
        void*** var_a8_2 = nullptr
        void* var_90_3 = arg1
        int32_t rax_15 = sub_1423affe0(arg1)
        *(arg1 + 0x60) = rsi_2
        sub_140a3c510(arg1 + 0x70, &var_b8)
        *(arg1 + 0xb0) = rax_15
        result = sub_140a3c510(arg1 + 0xc0, &var_78)
        
        if (var_b8 != 0)
            void** const* rcx_14 = &var_98
            
            if (var_a8_2 != 0)
                rcx_14 = var_a8_2
            
            result = (*rcx_14)[2](rcx_14)
        
        if (var_78 != 0)
            rax_11 = var_68_2
            rcx_5 = &var_58
            goto label_1423b0525
else
    *(arg1 + 0x54) = 1
label_1423b04a2:
    void* var_90_1 = arg1
    var_a8_1 = nullptr
    var_98 = &data_142da2668
    var_78 = nullptr
    var_b8 = sub_1423ab1c0
    var_68_1 = nullptr
    rax_8 = sub_1423affe0(arg1)
    *(arg1 + 0x60) = 0
label_1423b04de:
    sub_140a3c510(arg1 + 0x70, &var_78)
    *(arg1 + 0xb0) = rax_8
    result = sub_140a3c510(arg1 + 0xc0, &var_b8)
    
    if (var_78 != 0)
        int64_t* rcx_4 = &var_58
        
        if (var_68_1 != 0)
            rcx_4 = var_68_1
        
        result = (*(*rcx_4 + 0x10))(rcx_4)
    
    if (var_b8 != 0)
        rax_11 = var_a8_1
        rcx_5 = &var_98
    label_1423b0525:
        
        if (rax_11 != 0)
            rcx_5 = rax_11
        
        result = (*rcx_5)[2](rcx_5)
__security_check_cookie(rax_1 ^ &var_e8)
return result
