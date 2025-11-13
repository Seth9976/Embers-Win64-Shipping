// 函数: sub_141489bc0
// 地址: 0x141489bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_8e8
int64_t rax_1 = __security_cookie ^ &var_8e8
int64_t* var_8b8
int64_t* var_8b0
void* var_8a8
int32_t* var_8a0

if (*(arg1 + 0x610) s> 0 || *(arg1 + 0x620) s> 0 || *(arg1 + 0x630) s> 0)
    sub_14148d860(*(arg1 + 0x10) + 0x280, arg1 + 0x60)
    **arg4 = *(arg1 + 0x10)
    
    if ((*(arg1 + 0x570) & 0x800) != 0 && data_143ed8ff4 != 0)
        *(*(arg1 + 0x10) + 0xae8) = 1
    
    if (*(arg1 + 0x530) != 0)
        void* rax_4 = *(arg1 + 0x10)
        *(rax_4 + 0xae8) |= 2
    
    char rax_5 = (*(arg1 + 0x570)).b
    
    if ((rax_5 & 0x40) == 0 || *(arg1 + 0x534) s< 0 || (rax_5 & 0x10) == 0)
        rax_5 = 0
    else
        rax_5 = 1
    
    void* rcx_3 = *(arg1 + 0x10)
    int32_t* var_8a0_1 = arg1 + 0x668
    int64_t* var_8b8_1 = arg1 + 0x608
    int32_t var_8c0
    var_8c0.q = arg7
    int32_t var_8c8
    var_8c8.q = arg6
    void* r13_1
    
    if (rax_5 == 0)
        r13_1 = arg1 + 0x170
        *(rcx_3 + 0x40) = *(arg1 + 0x54)
        *(rcx_3 + 0x48) = *(arg1 + 0x5c)
        *(*(arg1 + 0x10) + 0x38) = r13_1
        sub_141489f50(arg1, *(arg1 + 0x10), arg2, arg5, var_8c8, var_8c0, var_8b8_1, arg4, 
            arg1 + 0x638, var_8a0_1)
    else
        int32_t var_888_1 = 0
        *(rcx_3 + 0x40) = _mm_unpacklo_ps(zx.o(0), 0)
        *(rcx_3 + 0x48) = 0
        *(*(arg1 + 0x10) + 0x38) = arg1 + 0x3f0
        sub_141489f50(arg1, *(arg1 + 0x10), arg2, arg5, var_8c8, var_8c0, var_8b8_1, arg4, 
            arg1 + 0x638, var_8a0_1)
        void* rcx_6 = *(arg1 + 0x10)
        r13_1 = arg1 + 0x170
        *(rcx_6 + 0x40) = *(arg1 + 0x54)
        *(rcx_6 + 0x48) = *(arg1 + 0x5c)
    
    void* rax_10 = *(arg1 + 0x10)
    int32_t var_898
    var_8a0 = &var_898
    var_898 = 0
    *(rax_10 + 0xae8) = 0
    *(*(arg1 + 0x10) + 0x38) = r13_1
    var_8a8 = arg1 + 0x648
    var_8b0 = arg4
    var_8b8 = arg1 + 0x628
    var_8c0.q = arg7
    var_8c8.q = arg6
    sub_141489f50(arg1, *(arg1 + 0x10), arg2, arg5, var_8c8, var_8c0, var_8b8, var_8b0, var_8a8, 
        var_8a0)
    sub_1422f00e0(arg2 + 0xb0)

int64_t r8_4

if (*(arg2 + 0x3b0) s< 3)
    int64_t* rcx_16 = data_143f0f180
    int32_t var_8c0_2 = 0
    int128_t var_868
    __builtin_memset(&var_868, 0, 0x60)
    int128_t var_788_1 = data_142d3f660
    void* var_870
    (*(*rcx_16 + 0xf8))(rcx_16, &var_870, &var_868, &data_143ed9170, 2, var_8c0_2, var_8b8, 
        var_8b0, var_8a8, var_8a0)
    void* rax_16 = var_870
    void* var_890 = rax_16
    
    if (rax_16 != 0)
        *(rax_16 + 8) += 1
    
    sub_1405d1550(&var_870)
    sub_1405d1600(arg1 + 0x20, &var_890)
    sub_1405d1550(&var_890)
    r8_4 = *(arg1 + 0x20)
else
    void var_5e8
    sub_141475ea0(&var_5e8)
    int64_t* rcx_12 = data_143f0f180
    void* var_880
    (*(*rcx_12 + 0xf8))(rcx_12, &var_880, &var_5e8, &data_143ed90c0, 2, 0, var_8b8, var_8b0, 
        var_8a8, var_8a0)
    void* rax_14 = var_880
    void* var_878 = rax_14
    
    if (rax_14 != 0)
        *(rax_14 + 8) += 1
    
    sub_1405d1550(&var_880)
    sub_1405d1600(arg1 + 0x18, &var_878)
    sub_1405d1550(&var_878)
    r8_4 = *(arg1 + 0x18)

sub_1414a0040(arg1, arg2, r8_4)
uint64_t result = sub_14149fa60(arg1, arg2)
__security_check_cookie(rax_1 ^ &var_8e8)
return result
