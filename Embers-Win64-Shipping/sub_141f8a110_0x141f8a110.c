// 函数: sub_141f8a110
// 地址: 0x141f8a110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t* rsi = arg1 + 0x40
EnterCriticalSection(arg1 + 0x10)
int32_t rax_2 = rsi[1].d
int64_t* var_90 = arg3
void* var_88 = arg4
int64_t* var_c8 = rsi
uint128_t var_c0
void* rcx_7

if (rax_2 == *(rsi + 0x34))
label_141f8a1cc:
    var_c0 = zx.o(0)
label_141f8a1d6:
    int64_t* rax_8 = j_sub_140a82f30(0x28)
    int64_t* rdi_2
    
    if (rax_8 == 0)
        rdi_2 = nullptr
    else
        rdi_2 = sub_141f79950(rax_8, arg3, arg4)
    
    void*** rax_11 = j_sub_140a82f30(0x18)
    
    if (rax_11 != 0)
        rax_11[1].d = 1
        *rax_11 = &data_143287ee0
        *(rax_11 + 0xc) = 1
        rax_11[2] = rdi_2
    
    int64_t* var_a0 = rdi_2
    int64_t* var_80 = arg3
    int64_t* var_70 = &var_80
    void* var_78_1 = arg4
    int64_t** var_68_1 = &var_a0
    sub_141f77e40(rsi, &var_c8, &var_70, nullptr)
    int64_t rcx_9 = sx.q(var_c8.d) * 5
    int64_t rax_13 = *rsi
    int64_t* rax_15 = *(rax_13 + (rcx_9 << 3) + 0x18)
    
    if (rax_15 != 0)
        rax_15[1].d += 1
    
    uint128_t zmm0_1 = (*(rax_13 + (rcx_9 << 3) + 0x10)).o
    int64_t var_b0_1
    var_b0_1.o = var_c0
    void* rcx_10 = _mm_bsrli_si128(var_c0, 8).q
    uint128_t var_60_1 = zmm0_1
    var_c0 = zmm0_1
    
    if (rcx_10 != 0)
        int32_t rax_16 = *(rcx_10 + 8)
        *(rcx_10 + 8) -= 1
        
        if (rax_16 == 1)
            (**rax_15)(rax_15)
            int32_t rax_18 = *(rax_15 + 0xc)
            *(rax_15 + 0xc) -= 1
            
            if (rax_18 == 1)
                (*(*rax_15 + 8))(rax_15, 1)
    
    if (rax_11 != 0)
        rax_11[1].d -= 1
        
        if (rax_11[1].d == 1)
            (**rax_11)(rax_11)
            int32_t rax_22 = *(rax_11 + 0xc)
            *(rax_11 + 0xc) -= 1
            
            if (rax_22 == 1)
                (*rax_11)[1](rax_11, 1)
    
    rcx_7 = var_c0:8.q
else
    void* rdi_1 = rsi[8]
    void* rsi_1 = &rsi[7]
    int64_t rcx_2 = sx.q(sub_141f8bbb0(&var_90))
    
    if (rdi_1 != 0)
        rsi_1 = rdi_1
    
    int32_t rax_7 = *(rsi_1 + ((rcx_2 & (sx.q(var_c8[9].d) - 1)) << 2))
    rsi = var_c8
    
    if (rax_7 == 0xffffffff)
        goto label_141f8a1cc
    
    void* r8 = *rsi
    int64_t rdx_1
    
    while (true)
        int64_t rdx = sx.q(rax_7) * 5
        rdx_1 = rdx << 3
        
        if (*(r8 + (rdx << 3)) == arg3 && *(r8 + rdx_1 + 8) == arg4)
            break
        
        rax_7 = *(r8 + rdx_1 + 0x20)
        
        if (rax_7 == 0xffffffff)
            goto label_141f8a1cc
    
    if (rax_7 == 0xffffffff)
        goto label_141f8a1cc
    
    void* rcx_6 = r8 + rdx_1
    
    if (rcx_6 == 0)
        goto label_141f8a1cc
    
    int64_t rax_10 = *(rcx_6 + 0x10)
    rcx_7 = *(rcx_6 + 0x18)
    var_c0.q = rax_10
    var_c0:8.q = rcx_7
    
    if (rcx_7 != 0)
        *(rcx_7 + 8) += 1
        rcx_7 = var_c0:8.q
    
    if (rax_10 == 0)
        goto label_141f8a1d6

*arg2 = var_c0.q
arg2[1] = rcx_7

if (rcx_7 != 0)
    *(rcx_7 + 8) += 1
    int32_t rax_25 = *(rcx_7 + 8)
    *(rcx_7 + 8) -= 1
    
    if (rax_25 == 1)
        int64_t* rdi_5 = var_c0:8.q
        (**rdi_5)(rdi_5)
        int32_t r14_1 = *(rdi_5 + 0xc)
        *(rdi_5 + 0xc) -= 1
        
        if (r14_1 == 1)
            int64_t* rcx_16 = var_c0:8.q
            int64_t r8_4 = *rcx_16
            (*(r8_4 + 8))(rcx_16, zx.q(r14_1), r8_4)

if (arg1 != -0x10)
    LeaveCriticalSection(arg1 + 0x10)

__security_check_cookie(rax_1 ^ &var_e8)
return arg2
