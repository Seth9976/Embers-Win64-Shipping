// 函数: sub_140f551a0
// 地址: 0x140f551a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
void* rcx = *(arg1[0x75] + 0x4f8)

if (not(0.999899983f f> *(rcx + 0x2d4)) && *(rcx + 0x2dc) == 0)
    if (arg1[0x86].b == 1)
        goto label_140f552ad
    
    goto label_140f55219

char rax_3 = arg1[0x86].b

if (rax_3 != 2 || rax_3 == 1)
label_140f552ad:
    Dbg1::Reset(&arg1[0x7a])
    int128_t zmm6 = *(arg4 + 0x64)
    int64_t r15_1 = data_143e24388
    int64_t rcx_2
    int32_t rbx_1
    
    if (data_143de5480 == 0)
        rbx_1 = 0
        rcx_2 = 0
    else
        uint32_t rax_4
        rax_4, arg4 = GetCurrentThreadId()
        rbx_1 = 0
        rcx_2.b = rax_4 != data_143de5470
    
    arg4.b = 1
    int128_t zmm2
    zmm2.d = (*(r15_1 + (rcx_2 << 2))).d f* zmm6.d
    zmm2.d = zmm2.d f* arg1[0x99].d
    char var_1d8
    char var_118
    char* rdx_2
    int32_t rsi_1
    
    if (sub_140f5ca10(arg1, arg3, zmm2 ^ data_142d3f780, arg4.b, *(arg1 + 0x4cc) & 1) == 0)
        int32_t var_124
        int32_t var_124_1 = var_124 & 0xffffff00
        rdx_2 = &var_1d8
        int64_t var_1d0_1 = 0
        int64_t var_1c8_1 = 0
        int64_t var_1b0
        __builtin_memset(&var_1b0, 0, 0x88)
        rsi_1 = 0
        rbx_1 = 2
        var_1d8 = 0
        char var_1b8_1 = 0
        int32_t var_128_1 = 0x20702
    else
        if ((*(arg1 + 0x4cc) & 0x40) == 0)
            sub_140d96150(arg1 + 0x434, arg3)
            sub_140f2cf90(arg1)
        
        int32_t var_64
        int32_t var_64_1 = var_64 & 0xffffff00
        rdx_2 = &var_118
        var_118 = 1
        rsi_1 = 1
        int64_t var_110_1 = 0
        int64_t var_108_1 = 0
        char var_f8_1 = 0
        int64_t var_f0
        __builtin_memset(&var_f0, 0, 0x88)
        int32_t var_68_1 = 0x20702
    
    sub_140e51550(arg2, rdx_2)
    
    if (rbx_1 != 0)
        sub_140597700(&var_1d8)
    
    if (rsi_1 != 0)
        sub_140597700(&var_118)
else
label_140f55219:
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702

__security_check_cookie(rax_1 ^ &var_208)
return arg2
