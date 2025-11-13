// 函数: sub_141a68720
// 地址: 0x141a68720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
*(arg1 + 0x468) = arg2
int32_t rcx = 0
int64_t rax_2 = *(arg1 + 0x7d4)

if (arg3 s>= 0)
    rcx = arg3

*(arg1 + 0x46c) = rcx
int32_t var_28

if (rcx s<= 0)
    var_28 = arg2
    int32_t var_24_1 = 0
else
    var_28 = rcx - 1 + arg2
    float var_24 = __minss_xmmss_memss(0x3f7fffff, 0x3f7fffff)[0]

int64_t rcx_3 = var_28.q
int32_t var_24_2 = 0
int64_t var_20 = arg2.q
int32_t var_28_1
var_28_1.q = rax_2

if (rax_2.d s< arg2 || (rax_2.d == arg2 && var_24_2[0] f< var_20:4.d))
    int32_t var_24_3 = 0
    *(arg1 + 0x7d4) = arg2.q
label_141a687ff:
    
    if (*(arg1 + 0x7e4) != 0)
        *(arg1 + 0x7e4) = 0
    
    if (*(arg1 + 0x810) != 0)
        *(arg1 + 0x810) = 0
else
    var_28_1.q = rcx_3
    var_20 = rax_2
    
    if (rax_2.d s> rcx_3.d)
    label_141a687d9:
        *(arg1 + 0x7d4) = rcx_3
        goto label_141a687ff
    
    if (rax_2.d == rcx_3.d && not(var_20:4.d[0] f<= var_24_2))
        goto label_141a687d9

int64_t* rdi = *(arg1 + 0x848)

if (rdi != 0)
    var_20 = *(arg1 + 0x7d4)
    int64_t var_18_1 = *(arg1 + 0x7c0)
    
    if (rdi[3].b != 0)
        (*(*rdi + 0x18))(rdi, &var_20)
        char rcx_5 = rdi[3].b
        
        if (rcx_5 != 0)
            rdi[3].b = 0
            rcx_5 = 0
        
        if (&var_20 != &rdi[1])
            if (rcx_5 != 0)
                rdi[3].b = 0
            
            *(rdi + 8) = var_20.o
            rdi[3].b = 1
        
        (*(*rdi + 0x10))(rdi, &var_20)

int32_t result = sub_141a53830(arg1)

if (result.b != 0)
    *(arg1 + 0x828) = *(arg1 + 0x7d4)
    *(arg1 + 0x830) = *(arg1 + 0x458)
    result = *(arg1 + 0x470)
    *(arg1 + 0x834) = result

__security_check_cookie(rax_1 ^ &var_48)
return result
