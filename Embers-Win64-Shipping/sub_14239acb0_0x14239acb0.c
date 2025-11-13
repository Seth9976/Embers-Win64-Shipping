// 函数: sub_14239acb0
// 地址: 0x14239acb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int64_t rax_2 = arg1[0xe]
int32_t rdi = 0
int32_t rsi = arg1[0xc].d
int64_t var_68 = rax_2
void* var_58 = nullptr

if (rax_2 != 0)
    void* rax_3 = arg1[0x10]
    void* rcx = &arg1[0x12]
    
    if (rax_3 != 0)
        rcx = rax_3
    
    (**rcx)(rcx, &var_58)

void* rbp = arg1[9]

if (*(arg1 + 0x54) != 0 || rbp == 0)
    rsi = arg1[0x16].d
    sub_140a3c510(&var_68, &arg1[0x18])

void var_48

if (rsi != 0)
    int32_t rax_5 = 0
    
    if (0 == arg1[0xa].d)
        arg1[0xa].d = 0
    else
        rax_5 = arg1[0xa].d
    
    if (rax_5 s> 0)
        rdi = 1
    else if (arg3 != 0 && data_143f597dc s> 0)
        rdi = 1
    else if (*(arg1 + 0x55) != 0)
        *(arg1 + 0x55) = 0
        rdi = 1
    else if (rsi == arg2)
        _atoldbl_l(arg1)
        void* var_88 = rbp
        int32_t var_78_1 = arg2
        int64_t var_80_1 = *(rbp + 0x50)
        (*(*arg1 + 0x38))(arg1, &var_88)
        void* rax_9 = var_58
        void* rcx_5 = &var_48
        
        if (rax_9 != 0)
            rcx_5 = rax_9
        
        var_68((*(*rcx_5 + 8))(rcx_5), &var_88)
        rdi = 3
    else if (rsi != 3)
        if (rsi != 1)
            if (rsi != 2 || arg1[8].d != 0)
                rdi = 2
            else
                sub_142396e90(arg1)
                rdi = rsi + 1
        else if (*(arg1 + 0x3c) != 0 || data_143f138f4 == 0)
            rdi = 2
        else
            sub_1423970f0(arg1)
            rdi = rsi + 2
    else if (arg1[7].d != 0)
        rdi = 2
    else
        sub_142396ef0(arg1)
        rdi = rsi
else
    _atoldbl_l(arg1)

if (var_68 != 0)
    void* rdx_4 = var_58
    void* rcx_10 = &var_48
    
    if (rdx_4 != 0)
        rcx_10 = rdx_4
    
    int64_t rdx_5 = *rcx_10
    (*(rdx_5 + 0x10))(rcx_10, rdx_5)

__security_check_cookie(rax_1 ^ &var_a8)
return zx.q(rdi)
