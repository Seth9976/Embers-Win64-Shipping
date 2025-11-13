// 函数: sub_141c7a590
// 地址: 0x141c7a590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int128_t var_88
__builtin_memset(&var_88, 0, 0x24)
uint32_t r8_4 = (zx.d(*(arg3 + 0x3d)) << 8 | zx.d(*(arg3 + 0x3e))) << 8 | zx.d(*(arg3 + 0x3f))
int64_t rcx_5 =
    ((zx.q(*(arg3 + 0x3a)) << 8 | zx.q(*(arg3 + 0x3b))) << 8 | zx.q(*(arg3 + 0x3c))) + arg2

if (r8_4 != 0)
    var_88.q = rcx_5
    var_88:8.q = rcx_5
    int64_t var_78_1 = zx.q(r8_4) + rcx_5
    int64_t var_70
    var_70.d = r8_4

int32_t var_60 = 0
int64_t var_58
__builtin_memset(&var_58, 0, 0x11)
void* var_40 = nullptr
sub_141c7af20(&var_88, &var_60)
sub_141c7bfa0(arg1 + 0x120, ((zx.q(zx.d(*(arg3 + 0x40)) << 8) | zx.q(*(arg3 + 0x41))) * 3).d * 2)
int32_t i = 0
int64_t rbp = *(arg1 + 0x120)
int64_t var_38 = 0

if (*(arg1 + 0x128) u> 0)
    do
        uint32_t r8_5 = 0
        int32_t j = 0
        int64_t rsi_1 = 0
        
        do
            if ((j.b & 1) == 0)
                char* rdi_1 = &var_38 + (rsi_1 u>> 1)
                char rax_12 = sub_141c79cd0(&var_88, &var_60)
                *rdi_1 ^= rax_12
                r8_5 = zx.d(*rdi_1)
            else
                r8_5 u>>= 3
            
            char rax_13 = r8_5.b & 7
            char rdx_4 = 3 - rax_13
            
            if (rax_13 u> 3)
                rdx_4 = rax_13
            
            char r10_1 = (j.b + 1) * 3
            char r9_1 = r10_1 & 7
            uint64_t r11_2 = zx.q(r10_1) u>> 3
            *(r11_2 + rbp) |= rdx_4 << (8 - r9_1)
            
            if (r9_1 u< 3)
                *(r11_2 + rbp - 1) |= rdx_4 u>> r9_1
            
            r10_1 += ((j.b & 3) - (j u>> 2).b) * 9
            char r9_2 = r10_1 & 7
            uint64_t r11_4 = zx.q(r10_1) u>> 3
            *(r11_4 + rbp + 6) |= rdx_4 << (8 - r9_2)
            
            if (r9_2 u< 3)
                *(r11_4 + rbp + 5) |= rdx_4 u>> r9_2
            
            j += 1
            rsi_1 += 1
        while (j u< 0x10)
        
        i += 6
        rbp += 0xc
    while (i u< *(arg1 + 0x128))

if (var_40 != 0)
    int64_t rcx_18 = *(var_40 + 0xa8)
    
    if (rcx_18 != 0)
        sub_141c799d0(rcx_18 - 8)
    
    int64_t rcx_20 = *(var_40 + 0xb8)
    
    if (rcx_20 != 0)
        sub_141c799d0(rcx_20 - 8)
    
    sub_141c799d0(var_40)

int64_t rcx_23 = var_58

if (rcx_23 != 0)
    sub_141c799d0(rcx_23)

__security_check_cookie(rax_1 ^ &var_a8)
return 1
