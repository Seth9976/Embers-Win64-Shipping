// 函数: sub_140e33630
// 地址: 0x140e33630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x35e0)
int64_t var_35c0 = -2
void var_35f8
int64_t rax_1 = __security_cookie ^ &var_35f8
uint64_t result

if (arg3 u> 0xffffffff)
    result.b = 0
else
    void** const var_35d8 = &data_142ed6658
    int64_t var_35d0_1 = arg2
    int32_t var_35c8_1 = 0
    int32_t var_35c4_1 = arg3.d
    struct _SETJMP_FLOAT128 var_35b8[0x10]
    sub_140e309b0(&var_35b8, &var_35d8, arg4)
    int32_t var_38
    uint64_t rdi
    
    if (var_38 != 0)
        rdi.b = 0
    else
        rdi = zx.q(sub_140e33560(arg1, arg2, arg3))
        *(arg1 + 0x3b) = 8
        int32_t var_34b0
        *(arg1 + 0x3c) = var_34b0
        int32_t var_34ac
        arg1[8].d = var_34ac
        int32_t var_33ec
        
        if (var_33ec == 1)
            *(arg1 + 0x3a) = 2
        else if (var_33ec != 3)
            rdi.b = 0
        else
            *(arg1 + 0x3a) = 0
    
    int64_t var_34a8_1 = 0
    int64_t* i_2
    int64_t* i_1 = i_2
    
    if (i_1 != 0)
        int64_t* i
        
        do
            i = *i_1
            sub_140a74f90(i_1)
            i_1 = i
        while (i != 0)
    
    result = zx.q(rdi.b)

__security_check_cookie(rax_1 ^ &var_35f8)
return result
