// 函数: sub_140588190
// 地址: 0x140588190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
arg1[9].b = 0
int32_t rbp_1 = (arg5[1]).d - (*arg5).d
int128_t var_70
__builtin_memset(&var_70, 0, 0x2f)
char* i = nullptr
int128_t var_58
int32_t rsi

if (rbp_1 u< 0x10000000)
    uint8_t r9_1 = (rbp_1 u>> 0x15).b & 0x7f
    var_58.b = r9_1
    uint8_t rcx_3 = (rbp_1 u>> 0xe).b & 0x7f
    var_58:1.b = rcx_3
    uint8_t rdx_1 = (rbp_1 u>> 7).b & 0x7f
    var_58:2.b = rdx_1
    var_58:3.b = rbp_1.b & 0x7f
    int32_t rax_4 = 0
    int32_t rsi_1 = 1
    int32_t r8 = -1
    
    if (r9_1 != 0)
        var_58.b = r9_1 | 0x80
        r8 = 4
        rax_4 = 1
    
    if (rcx_3 == 0)
        rsi_1 = rax_4
    
    if (rcx_3 != 0 || rax_4 != 0)
        rcx_3 |= 0x80
        var_58:1.b = rcx_3
    
    if (r8 == 0xffffffff && rcx_3 u>= 0x80)
        r8 = 3
    
    uint8_t rax_5
    
    if (rdx_1 == 0)
        rax_5 = rdx_1
    
    if (rdx_1 != 0 || rsi_1 != 0)
        rax_5 = rdx_1 | 0x80
        var_58:2.b = rax_5
    
    if (r8 == 0xffffffff)
        r8 = sbb.d(r8, r8, rax_5 u< 0x80) + 2
    label_1405882cb:
        int64_t r9_2 = sx.q(r8)
        
        if (r8 s> 0)
            int64_t rdx_2 = 0
            
            do
                void* rcx_4 = &var_58 + rdx_2
                *rcx_4 = *(rcx_4 + 4 - r9_2)
                rdx_2 += 1
            while (rdx_2 s< r9_2)
    else if (r8 s< 4)
        goto label_1405882cb
    
    rsi = r8
else
    std::ostream::operator<<(
        sub_14058b120(std::cerr, "Error: Meta-message size too large to handle"), sub_14058b4b0)
    rsi = 1

if (rbp_1 + 2 != neg.d(rsi))
    sub_14058bd40(&var_70, sx.q(rbp_1 + 2 + rsi))

char* rdi = var_70.q
*rdi = 0xff
rdi[1] = arg4 & 0x7f
int64_t rsi_2 = sx.q(rsi)

if (rsi_2 s> 0)
    memcpy(&rdi[2], &var_58, rsi_2.d)

if (rbp_1 s> 0)
    do
        *(&i[rsi_2] + rdi + 2) = i[*arg5]
        i = &i[1]
    while (i s< sx.q(rbp_1))

int32_t* result = sub_140588090(arg1, arg2, arg3, &var_70)
void* rcx_8 = var_70.q

if (rcx_8 != 0)
    void* rax_11 = rcx_8
    int64_t var_60
    
    if (var_60 - rcx_8 u>= 0x1000)
        rcx_8 = *(rcx_8 - 8)
        
        if (rax_11 - rcx_8 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(rcx_8)

__security_check_cookie(rax_1 ^ &var_98)
return result
