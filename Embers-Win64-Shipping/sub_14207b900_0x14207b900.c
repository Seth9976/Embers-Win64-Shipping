// 函数: sub_14207b900
// 地址: 0x14207b900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t rbx_1 = arg7

if (rbx_1 == data_143dbafb4)
    rbx_1 = data_14399f630

int32_t rax_1 = arg2[1].d
int32_t rdx = rax_1 - 1

if (rax_1 == 0)
    rdx = 0

if (rdx == 0)
    sub_1424c39f0(arg1, arg3)
    return 

void* rsi_1
int64_t rdi_1

if (arg8 != 0)
    rsi_1 = &arg1[0x50]
label_14207b9e4:
    rdi_1 = sx.q(*(rsi_1 + 8))
    int32_t var_50_1 = 0
    int32_t var_60_1 = 0
    int32_t rax_2 = (rdi_1 + 1).d
    bool cond:2_1 = rax_2 s<= *(rsi_1 + 0xc)
    *(rsi_1 + 8) = rax_2
    int128_t var_90
    __builtin_memset(&var_90, 0, 0x18)
    
    if (not(cond:2_1))
        sub_14090a6a0(rsi_1)
    
    int64_t* rcx_5 = rdi_1 * 0x60 + *rsi_1
    rcx_5[1] = 0
    rcx_5[2].d = 0
    *(rcx_5 + 0x14) = var_90:0xc.q
    *rcx_5 = 0
    __builtin_memset(rcx_5 + 0x1c, 0, 0x14)
    rcx_5[7].d = 0
    rcx_5[8] = 0
    rcx_5[0xb].d = 0x3f800000
    rcx_5[0xa] = 0
    rcx_5[9].d = 0
    *(rcx_5 + 0x3c) &= 0xfffffff8
    rcx_5[6] = 0
else
    int32_t r11_1 = arg1[0x51].d
    rdi_1 = 0xffffffff
    int32_t rdx_2 = 0
    
    if (r11_1 s> 0)
        rsi_1 = &arg1[0x50]
        int64_t r8_1 = 0
        
        do
            int32_t r9_1 = rdx_2
            
            if (rdi_1.d != 0xffffffff)
                goto label_14207ba73
            
            rdx_2 += 1
            int64_t* rcx_1 = *rsi_1 + r8_1
            rdi_1 = zx.q(r9_1)
            r8_1 += 0x60
            
            if (*rcx_1 != arg3)
                rdi_1 = 0xffffffff
        while (rdx_2 s< r11_1)
    
    if (r11_1 s<= 0 || rdi_1.d == 0xffffffff)
        rsi_1 = &arg1[0x50]
        goto label_14207b9e4

label_14207ba73:
int64_t rdi_3 = sx.q(rdi_1.d) * 0x60
*(rdi_3 + *rsi_1) = arg3
int64_t rcx_6 = *rsi_1
int32_t rax_6 = arg5[1].d
*(rcx_6 + rdi_3 + 8) = *arg5
*(rcx_6 + rdi_3 + 0x10) = rax_6
int64_t rcx_7 = *rsi_1
int32_t rax_8 = arg6[1].d
*(rcx_7 + rdi_3 + 0x14) = *arg6
*(rcx_7 + rdi_3 + 0x1c) = rax_8
sub_140597df0(*rsi_1 + 0x20 + rdi_3, arg2)
*(*rsi_1 + rdi_3 + 0x30) = arg4.d
*(*rsi_1 + rdi_3 + 0x34) = arg4.d
*(*rsi_1 + rdi_3 + 0x38) = rbx_1
int64_t rcx_11 = *rsi_1
*(rcx_11 + rdi_3 + 0x3c) &= 0xfffffffe
*(rcx_11 + rdi_3 + 0x3c) |= zx.d(arg9)
int64_t rcx_12 = *rsi_1
*(rcx_12 + rdi_3 + 0x3c) &= 0xfffffffd
*(rcx_12 + rdi_3 + 0x3c) |= zx.d(arg10) * 2
void* rax_15 = *(arg3 + 0x130)
int64_t var_a8
float var_a0_1

if (rax_15 == 0)
    var_a8 = data_143dbb1f8.q
    var_a0_1 = data_143dbb200
else
    float zmm1[0x4] = *(rax_15 + 0x1d0)
    var_a8.d = zmm1[0]
    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
    var_a0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
    var_a8:4.d = temp0_1[0]

int64_t rcx_13 = *rsi_1
*(rcx_13 + rdi_3 + 0x40) = var_a8
*(rcx_13 + rdi_3 + 0x48) = var_a0_1
*(*rsi_1 + rdi_3 + 0x50) = arg11
*(*rsi_1 + rdi_3 + 0x58) = arg12[0]
int64_t rcx_15 = *rsi_1
*(rcx_15 + rdi_3 + 0x3c) &= 0xfffffffb
*(rcx_15 + rdi_3 + 0x3c) |= zx.d(arg13) << 2
