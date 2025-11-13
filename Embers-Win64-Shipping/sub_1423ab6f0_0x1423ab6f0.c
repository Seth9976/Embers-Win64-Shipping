// 函数: sub_1423ab6f0
// 地址: 0x1423ab6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t r14 = 0
void* rcx = arg1 + 0x110
void* rsi = rcx
int32_t r15 = 1
void* rax_2 = *(rcx + 0x10)

if (rax_2 != 0)
    rsi = rax_2

void* r12 = rsi + (sx.q(*(rcx + 0x18)) << 3)

if (rsi == r12)
    goto label_1423ab808

do
    int64_t* rcx_1 = *rsi
    int32_t rbx_1 = *(arg2 + 8)
    int32_t rax_5 = (*(*rcx_1 + 0x38))(rcx_1)
    bool cond:0_1
    
    if (rbx_1 != 2)
        cond:0_1 = rax_5 == 1
    else
        cond:0_1 = rax_5 == 0
    
    rax_5.b = cond:0_1
    
    if (rax_5.b != 0)
        int64_t* rcx_2 = *rsi
        (*(*rcx_2 + 0x30))(rcx_2, arg1 + 0x130)
    
    int64_t* rcx_3 = *rsi
    int32_t rax_8 = (*(*rcx_3 + 0x38))(rcx_3)
    
    if (rax_8 == 0)
        r14 = 2
    else if (rax_8 == 1)
        r14 = 1
    
    rsi += 8
while (rsi != r12)

int64_t (* var_b8)(int64_t* arg1, void* arg2)
void*** var_a8_1
void** const var_98
int64_t var_78
void* var_68_1

if (r14 != 0)
    void* var_90_1 = arg1
    var_a8_1 = nullptr
    var_98 = &data_142da2668
    var_78 = 0
    var_68_1 = nullptr
    *(arg1 + 0x60) = 0
    var_b8 = sub_1423ab1c0
    sub_140a3c510(arg1 + 0x70, &var_78)
    *(arg1 + 0xb0) = r14
    goto label_1423ab8fd

rcx = arg1 + 0x110
label_1423ab808:
int32_t result = sub_1423aecc0(rcx, 0)
int64_t* rcx_5 = *(arg1 + 0x108)

if (rcx_5 != 0)
    int32_t rbx_2 = *(arg2 + 8)
    int32_t rax_10 = (*(*rcx_5 + 0x20))(rcx_5)
    bool cond:1_1
    
    if (rbx_2 != 2)
        cond:1_1 = rax_10 == 1
    else
        cond:1_1 = rax_10 == 0
    
    rax_10.b = cond:1_1
    
    if (rax_10.b != 0)
        int64_t* rcx_6 = *(arg1 + 0x108)
        (*(*rcx_6 + 0x18))(rcx_6, arg1 + 0x130)
    
    int64_t* rcx_7 = *(arg1 + 0x108)
    result = (*(*rcx_7 + 0x20))(rcx_7)
    
    if (result == 0)
        r15 = 2
    label_1423ab8b5:
        void* var_90_2 = arg1
        var_a8_1 = nullptr
        var_98 = &data_142da2668
        var_78 = 0
        var_68_1 = nullptr
        *(arg1 + 0x60) = 0
        var_b8 = sub_1423ab1c0
        sub_140a3c510(arg1 + 0x70, &var_78)
        *(arg1 + 0xb0) = r15
    label_1423ab8fd:
        result = sub_140a3c510(arg1 + 0xc0, &var_b8)
        
        if (var_78 != 0)
            void var_58
            void* rcx_12 = &var_58
            
            if (var_68_1 != 0)
                rcx_12 = var_68_1
            
            result = (*(*rcx_12 + 0x10))(rcx_12)
        
        if (var_b8 != 0)
            void** const* rcx_13 = &var_98
            
            if (var_a8_1 != 0)
                rcx_13 = var_a8_1
            
            result = (*rcx_13)[2](rcx_13)
    else
        if (result == 1)
            goto label_1423ab8b5
        
        int64_t* rcx_8 = *(arg1 + 0x108)
        
        if (rcx_8 != 0)
            *(arg1 + 0x108) = 0
            result = (**rcx_8)(rcx_8, 1)
        
        bool cond:2_1 = *(arg1 + 0x3bc) == 0
        *(arg1 + 0x3b8) = 0
        
        if (not(cond:2_1))
            result = sub_1423b5010(arg1 + 0x180, 0)

__security_check_cookie(rax_1 ^ &var_d8)
return result
