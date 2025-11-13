// 函数: sub_1428d3cf0
// 地址: 0x1428d3cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t i = arg5
int64_t* rdi = arg4
int64_t* rsi = arg3
int64_t result

if (i u>= 0x10)
    int64_t r8 = arg1[1]
    int128_t var_58 = *arg2
    arg1[3](&var_58, &var_58, r8)
    
    if (arg6 == 0 && (i.b & 0xf) != 0)
        i -= 0x10
    
    int64_t r9 = var_58:8.q
    int64_t r8_1 = var_58.q
    int64_t var_68
    
    while (i u>= 0x10)
        int64_t r8_2 = *arg1
        var_68 = *rsi ^ r8_1
        int64_t rax_5 = rsi[1] ^ r9
        arg1[2](&var_68, &var_68, r8_2)
        rsi = &rsi[2]
        int64_t rdx_2 = var_58.q
        int64_t r9_1 = var_58:8.q
        int64_t rax_7 = var_68 ^ rdx_2
        *rdi = rax_7
        var_68 = rax_7
        int64_t rax_9 = rax_5 ^ r9_1
        rdi[1] = rax_9
        rdi = &rdi[2]
        int64_t var_60_2 = rax_9
        int64_t i_1 = i
        i -= 0x10
        
        if (i_1 == 0x10)
            goto label_1428d3f34
        
        r8_1 = (zx.q(var_58:0xc.d s>> 0x1f) & 0x87) ^ (rdx_2 * 2)
        r9 = (r9_1 * 2) | rdx_2 u>> 0x3f
        var_58.q = r8_1
        var_58:8.q = r9
    
    if (arg6 == 0)
        int64_t rdx_8 = (zx.q(var_58:0xc.d s>> 0x1f) & 0x87) ^ (r8_1 * 2)
        int64_t rcx_7 = (r9 * 2) | r8_1 u>> 0x3f
        int64_t r8_9 = *arg1
        int64_t rax_14 = rsi[1] ^ rcx_7
        var_68 = rdx_8 ^ *rsi
        int64_t var_40_1 = rcx_7
        arg1[2](&var_68, &var_68, r8_9)
        int32_t rax_15 = 0
        int128_t zmm1 = rdx_8.o ^ var_68.o
        var_68.o = zmm1
        
        if (i != 0)
            uint64_t r9_3 = 0
            
            do
                char* rcx_9 = zx.q(rax_15 + 0x10)
                rax_15 += 1
                char rcx_10 = *(&var_68 + r9_3)
                *(&var_68 + r9_3) = *(rcx_9 + rsi)
                r9_3 = zx.q(rax_15)
                *(zx.q(rcx_9.d) + rdi) = rcx_10
            while (r9_3 u< i)
            
            zmm1 = var_68.o
        
        var_68.o = var_58 ^ zmm1
        arg1[2](&var_68, &var_68, *arg1)
        *rdi = var_58.q ^ var_68
        rdi[1] = var_58:8.q ^ rax_14
    else
        int32_t rax_11 = 0
        
        if (i != 0)
            char* r8_6 = nullptr
            
            do
                char rdx_3 = *(r8_6 + rsi)
                rax_11 += 1
                *(r8_6 + rdi) = *(&var_68 + r8_6)
                *(&var_68 + r8_6) = rdx_3
                r8_6 = zx.q(rax_11)
            while (r8_6 u< i)
        
        var_68.o ^= var_58
        arg1[2](&var_68, &var_68, *arg1)
        *(rdi - 0x10) = var_58 ^ var_68.o
    
label_1428d3f34:
    result = 0
else
    result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_88)
return result
