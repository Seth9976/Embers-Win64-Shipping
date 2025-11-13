// 函数: sub_14104ce20
// 地址: 0x14104ce20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
void var_1d8
void* rsp_1 = &var_1d8
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int32_t i_4
int64_t rax_1 = __security_cookie ^ &i_4
int64_t rbx = arg3
int32_t i_3 = arg4 * arg5
void* r15 = *(arg1 + 8)
uint64_t i_1 = zx.q(i_3)
i_4 = i_3
int64_t rax_3 = i_1 * 0x2c
uint64_t i_2 = i_1
void* rsi
int512_t zmm0

if (rax_3 u>= 0x1000)
    void* rax_6
    rax_6, zmm0 = sub_140a82f30(rax_3, 0)
    rsi = rax_6
else if (rax_3 != 0)
    int64_t rcx = rax_3 + 0x1e
    
    if (rcx u<= rax_3 + 0xf)
        rcx = 0xffffffffffffff0
    
    int64_t rcx_1 = rcx & 0xfffffffffffffff0
    __chkstk(rcx_1)
    rsp_1 = &var_1d8 - rcx_1
    rsi = (rsp_1 + 0x5f) & 0xfffffffffffffff0
else
    rsi = nullptr

*(arg1 + 0x58)
void* r13_2 = (i_1 << 5) + rsi
int64_t var_100 = 0
void* r14_1 = (i_1 << 2) + r13_2
void* var_f8 = r14_1
int64_t* rax_7 = sub_141022ce0(r15)
*(rsp_1 + 0x40) = &var_100
int32_t i_5 = i_4
int64_t r10 = *rax_7
*(rsp_1 + 0x38) = r14_1
*(rsp_1 + 0x30) = r13_2
*(rsp_1 + 0x28) = rsi
*(rsp_1 + 0x20) = 0
(*(r10 + 0x130))(nop)
int32_t rdx_1 = var_100.d
void* var_178 = r15
zmm0.o = zx.o(0)
int32_t var_170 = 0
int64_t* var_168 = zmm0.q
int64_t var_158
__builtin_memset(&var_158, 0, 0x40)
int16_t var_118 = 0xff00
int64_t rax_8
int128_t zmm0_1
int512_t zmm1_1
rax_8, zmm0_1, zmm1_1 = sub_1410130c0(r15 + 0x7c0, rdx_1, 0x200, &var_178)
int64_t var_e0 = rax_8

if (i_5 != 0)
    void* r15_1 = rsi + 0x18
    uint64_t i
    
    do
        int64_t rsi_4 = *(r15_1 - 0x18) + rax_8
        uint64_t rax_9 = zx.q(*r14_1)
        int32_t j_2 = *(r15_1 - 4) * *r13_2
        uint64_t rdx_2 = zx.q(*r15_1)
        
        if (rax_9.d == rdx_2.d)
            int32_t count = rax_9.d * j_2
            zmm0_1 = memcpy(rsi_4, rbx, count)
            rbx += zx.q(count)
        else if (j_2 != 0)
            uint64_t j_1 = zx.q(j_2)
            uint64_t j
            
            do
                zmm0_1 = memcpy(rsi_4, rbx, rax_9.d)
                rbx += rax_9
                rsi_4 += rdx_2
                j = j_1
                j_1 -= 1
            while (j != 1)
            r14_1 = var_f8
            i_1 = i_2
        
        rax_8 = var_e0
        r14_1 += 8
        r13_2 += 4
        var_f8 = r14_1
        r15_1 += 0x20
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)
    i_5 = i_4

int32_t result_1
int64_t* var_158_1
int32_t result
int64_t* rcx_17
int64_t* r10_1

if (arg2 == 0 || data_143f01c92 == 0)
    int16_t var_50_1 = 0xff00
    int64_t var_c0_1 = 0
    void** const var_c8 = &data_142f01b18
    void* var_b8_1 = arg1
    zmm1_1.o = zx.o(0)
    void* var_b0 = var_178
    int32_t var_44_1 = arg6
    int32_t var_a8_1 = 0
    int64_t var_a0
    __builtin_memset(&var_a0, 0, 0x50)
    int32_t i_6 = i_5
    sub_141059a80(&var_b0, zx.o(0), zmm1_1)
    int32_t var_a8_2 = 0
    int64_t var_a0_1
    __builtin_memset(&var_a0_1, 0, 0x50)
    var_50_1:1.b = 0xff
    memmove(&var_b0, &var_178, 0x68)
    result_1 = 0
    int64_t var_148_1
    __builtin_memset(&var_148_1, 0, 0x2c)
    __builtin_memset(&var_168, 0, 0x1c)
    var_118:1.b = 0xff
    sub_141059a80(&var_b0, sub_14104b5f0(&var_c8))
    r10_1 = var_158_1
    rcx_17 = var_168
    result = result_1
else
    void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_10 = &rcx_11[0x11]
    
    if (rax_10 u> *(arg2 + 0x38))
        zmm0_1 = sub_140b0e3d0(arg2 + 0x30, 0x90)
        rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_10 = &rcx_11[0x11]
    
    *(arg2 + 0x30) = rax_10
    void**** rax_11 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_11 = rcx_11
    *(arg2 + 8) = &rcx_11[1]
    rcx_11[1] = 0
    *rcx_11 = &data_142f01b18
    rcx_11[2] = arg1
    rcx_11[3] = var_178
    rcx_11[4].d = 0
    __builtin_memset(&rcx_11[5], 0, 0x50)
    rcx_11[0xf].w = 0xff00
    *(rcx_11 + 0x84) = arg6
    rcx_11[0x10].d = i_5
    sub_141059a80(&rcx_11[3], zmm0_1)
    rcx_11[4].d = 0
    __builtin_memset(&rcx_11[5], 0, 0x50)
    *(rcx_11 + 0x79) = 0xff
    memmove(&rcx_11[3], &var_178, 0x68)
    result = 0
    rcx_17 = nullptr
    result_1 = 0
    __builtin_memset(&var_168, 0, 0x1c)
    r10_1 = nullptr
    int64_t var_148
    __builtin_memset(&var_148, 0, 0x2c)
    var_118:1.b = 0xff

if (rax_3 u>= 0x1000)
    sub_140a74f90(rsi)
    r10_1 = var_158_1
    rcx_17 = var_168
    result = result_1

if (result == 1)
label_14104d36d:
    
    if (*(rcx_17 + 0xfe) == 0)
    label_14104d39c:
        result = rcx_17[1].d
        rcx_17[1].d -= 1
        
        if (result == 1 && rcx_17 != 0)
            result = (**rcx_17)(rcx_17, 1)
    else
        result = sub_141049740(rcx_17)
else if (result == 2)
    int32_t var_150
    int32_t var_120
    
    if (var_118:1.b != 1)
        result = sub_14101be70(r10_1, &var_178)
    else
        result = sub_14101bf40(r10_1, rcx_17, var_150, var_120)
else if (result s> 4)
    if (result s<= 6)
        if (*(rcx_17 + 0xfe) == 0)
            goto label_14104d39c
        
        int32_t rax_19 = 0
        
        if (0 == rcx_17[1].d)
            rcx_17[1].d = 0
        else
            rax_19 = rcx_17[1].d
        
        rcx_17 = var_168
        
        if (rax_19 != 1)
            goto label_14104d39c
        
        result = sub_141049740(rcx_17)
    else if (result == 7)
        goto label_14104d36d

__security_check_cookie(rax_1 ^ &i_4)
return result
