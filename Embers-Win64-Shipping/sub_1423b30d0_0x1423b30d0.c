// 函数: sub_1423b30d0
// 地址: 0x1423b30d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* rax_2 = *(arg1 + 0x120)
void* rbx = arg1 + 0x110

if (rax_2 != 0)
    rbx = rax_2

void* rsi = rbx + (sx.q(*(arg1 + 0x128)) << 3)
char rdx_1

if (rbx != rsi)
    while (true)
        int64_t* rcx = *rbx
        int32_t rax_4 = *(rcx + 0xc)
        bool cond:1_1
        
        if (*(arg2 + 8) != 2)
            cond:1_1 = rax_4 == 1
        else
            cond:1_1 = rax_4 == 0
        
        rax_4.b = cond:1_1
        
        if (rax_4.b != 0 && (*(*rcx + 0x18))(rcx, arg1 + 0x130) == 0)
            *(arg1 + 0x54) = 1
            rdx_1 = 1
            break
        
        rbx += 8
        
        if (rbx == rsi)
            goto label_1423b3159
    
    goto label_1423b31a2

label_1423b3159:
rdx_1 = *(arg1 + 0x54)
int64_t (* var_b8)(int64_t* arg1, int64_t arg2, int512_t arg3 @ zmm1)
void*** var_a8_1
void** const var_98
int64_t (* var_78)(int64_t* arg1, void* arg2)
void*** var_68_1
void** const var_58
int32_t rax_9

if (rdx_1 == 0)
    void* rax_7 = *(arg1 + 0x120)
    void* rcx_1 = arg1 + 0x110
    
    if (rax_7 != 0)
        rcx_1 = rax_7
    
    void* r8_1 = rcx_1 + (sx.q(*(arg1 + 0x128)) << 3)
    
    if (rcx_1 == r8_1)
        goto label_1423b31a2
    
    while (true)
        void* rdx_2 = *rcx_1
        
        if (*(rdx_2 + 8) == 2)
            int32_t rdx_3 = *(rdx_2 + 0xc)
            int32_t rsi_2
            
            if (rdx_3 == 0)
                rsi_2 = 2
            label_1423b31ed:
                void* var_90_1 = arg1
                var_a8_1 = nullptr
                var_98 = &data_142da2668
                var_68_1 = nullptr
                var_b8 = sub_1423ab1c0
                var_58 = &data_142da2668
                var_78 = sub_1423ab520
                void* var_50_1 = arg1
                rax_9 = sub_1423affe0(arg1)
                *(arg1 + 0x60) = rsi_2
                break
            
            if (rdx_3 == 1)
                rsi_2 = 1
                goto label_1423b31ed
        
        rcx_1 += 8
        
        if (rcx_1 == r8_1)
            rdx_1 = *(arg1 + 0x54)
            goto label_1423b31a2
    
    goto label_1423b332e

label_1423b31a2:
*(arg1 + 0x3c0) = 0
int128_t* result
void*** rax_13
void** const* rcx_9

if (rdx_1 != 0)
    void* var_90_3 = arg1
    var_a8_1 = nullptr
    var_98 = &data_142da2668
    var_78 = nullptr
    var_b8 = sub_1423ab1c0
    var_68_1 = nullptr
    rax_9 = sub_1423affe0(arg1)
    *(arg1 + 0x60) = 0
label_1423b332e:
    sub_140a3c510(arg1 + 0x70, &var_78)
    *(arg1 + 0xb0) = rax_9
    result = sub_140a3c510(arg1 + 0xc0, &var_b8)
    
    if (var_78 != 0)
        void** const* rcx_14 = &var_58
        
        if (var_68_1 != 0)
            rcx_14 = var_68_1
        
        result = (*rcx_14)[2](rcx_14)
    
    if (var_b8 != 0)
        rax_13 = var_a8_1
        rcx_9 = &var_98
    label_1423b3375:
        
        if (rax_13 != 0)
            rcx_9 = rax_13
        
        result = (*rcx_9)[2](rcx_9)
else
    void* rcx_2 = *(arg1 + 0x108)
    
    if (*(rcx_2 + 8) != 1)
        result = sub_1423af050(arg1, arg2, arg3)
    else
        int32_t rcx_3 = *(rcx_2 + 0xc)
        int32_t rsi_1
        
        if (rcx_3 == 0)
            rsi_1 = 2
        label_1423b3245:
            void* var_50_2 = arg1
            var_58 = &data_142da2668
            void*** var_68_2 = nullptr
            var_78 = sub_1423ab1c0
            void*** var_a8_2 = nullptr
            var_98 = &data_142da2668
            var_b8 = sub_1423ab1d0
            void* var_90_2 = arg1
            int32_t rax_10 = sub_1423affe0(arg1)
            *(arg1 + 0x60) = rsi_1
            sub_140a3c510(arg1 + 0x70, &var_b8)
            *(arg1 + 0xb0) = rax_10
            result = sub_140a3c510(arg1 + 0xc0, &var_78)
            
            if (var_b8 != 0)
                void** const* rcx_8 = &var_98
                
                if (var_a8_2 != 0)
                    rcx_8 = var_a8_2
                
                result = (*rcx_8)[2](rcx_8)
            
            if (var_78 != 0)
                rax_13 = var_68_2
                rcx_9 = &var_58
                goto label_1423b3375
        else
            if (rcx_3 == 1)
                rsi_1 = rcx_3
                goto label_1423b3245
            
            result = sub_1423af050(arg1, arg2, arg3)
__security_check_cookie(rax_1 ^ &var_d8)
return result
