// 函数: sub_1426123c0
// 地址: 0x1426123c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
uint64_t var_78 = __security_cookie ^ &var_c8
int64_t r9 = 0
int64_t r14 = 0
void* rdi_2 = (sx.q(arg2) << 5) + *(arg1 + 0x10)
uint64_t rsi = zx.q(*(rdi_2 + 0x1e))
void var_c0

if (rsi u>= 4)
    int64_t r8 = *(arg1 + 0x18)
    void* rdx = &var_c0
    int64_t i_3 = ((rsi - 4) u>> 2) + 1
    void* rbp_1 = rdi_2 + 6
    r14 = i_3 << 2
    int64_t i
    
    do
        uint64_t rax_1 = zx.q(*(rbp_1 - 2))
        rdx += 0x30
        rbp_1 += 8
        uint64_t rcx = rax_1 * 3
        *(rdx - 0x38) = *(r8 + (rcx << 2))
        *(rdx - 0x34) = *(r8 + (rcx << 2) + 4)
        *(rdx - 0x30) = *(r8 + (rcx << 2) + 8)
        uint64_t rcx_1 = zx.q(*(rbp_1 - 8)) * 3
        *(rdx - 0x2c) = *(r8 + (rcx_1 << 2))
        *(rdx - 0x28) = *(r8 + (rcx_1 << 2) + 4)
        *(rdx - 0x24) = *(r8 + (rcx_1 << 2) + 8)
        uint64_t rcx_2 = zx.q(*(rbp_1 - 6)) * 3
        *(rdx - 0x20) = *(r8 + (rcx_2 << 2))
        *(rdx - 0x1c) = *(r8 + (rcx_2 << 2) + 4)
        *(rdx - 0x18) = *(r8 + (rcx_2 << 2) + 8)
        uint64_t rcx_3 = zx.q(*(rbp_1 - 4)) * 3
        *(rdx - 0x14) = *(r8 + (rcx_3 << 2))
        *(rdx - 0x10) = *(r8 + (rcx_3 << 2) + 4)
        *(rdx - 0xc) = *(r8 + (rcx_3 << 2) + 8)
        i = i_3
        i_3 -= 1
    while (i != 1)

if (r14 s< rsi)
    int64_t r8_1 = *(arg1 + 0x18)
    int64_t i_2 = rsi - r14
    void* rdx_1 = &var_c0 + r14 * 0xc
    void* r10_4 = rdi_2 + 4 + (r14 << 1)
    int64_t i_1
    
    do
        uint64_t rax_17 = zx.q(*r10_4)
        rdx_1 += 0xc
        r10_4 += 2
        uint64_t rcx_4 = rax_17 * 3
        *(rdx_1 - 0x14) = *(r8_1 + (rcx_4 << 2))
        *(rdx_1 - 0x10) = *(r8_1 + (rcx_4 << 2) + 4)
        *(rdx_1 - 0xc) = *(r8_1 + (rcx_4 << 2) + 8)
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

*arg5 = 0
int128_t zmm8
int128_t var_58 = zmm8
*arg6 = 0x3f800000
int128_t zmm9
int128_t var_68 = zmm9
int128_t zmm7
zmm7.d = (*arg4).d f- *arg3
int128_t zmm6
zmm6.d = (*(arg4 + 8)).d f- arg3[2]
uint64_t result

if (rsi.b == 0)
label_14261266c:
    result.b = 1
else
    result = rsi * 0xc + -0xfffffffffffffff4
    uint64_t result_1 = 0
    
    while (true)
        uint32_t zmm0[0x4] = *(&var_c8 + result)
        uint32_t zmm4[0x4] = *(&var_c8 + result_1)
        float zmm1 = *(&var_c0 + result)
        zmm4[0] = zmm4[0] f- zmm0[0]
        float zmm3 = *arg3 f- zmm0[0]
        zmm0 = arg3[2]
        float zmm2 = *(&var_c0 + result_1) - zmm1
        zmm0[0] = zmm0[0] f- zmm1
        zmm0[0] = zmm0[0] f* zmm4[0]
        zmm4[0] = zmm4[0] f* zmm6.d
        zmm3 = zmm3 * zmm2 f- zmm0[0]
        zmm4[0] = zmm4[0] f- zmm2 f* zmm7.d
        bool cond:1_1
        
        if (_mm_and_ps(zmm4, 0x7fffffff)[0] f>= 9.99999994e-09f)
            zmm3 = zmm3 f/ zmm4[0]
            
            if (zmm4[0] f>= 0f)
                if (not(zmm3 f>= *arg6))
                    *arg6 = zmm3
                    cond:1_1 = zmm3 f< *arg5
                    goto label_142612657
            else if (not(zmm3 f<= *arg5))
                *arg5 = zmm3
                
                if (not(zmm3 f<= *arg6))
                    result.b = 0
                    break
        else
            cond:1_1 = zmm3 < 0f
        label_142612657:
            
            if (cond:1_1)
                result.b = 0
                break
        result = result_1
        r9 += 1
        result_1 += 0xc
        
        if (r9 s>= rsi)
            goto label_14261266c

__security_check_cookie(var_78 ^ &var_c8)
return result
