// 函数: sub_141c56120
// 地址: 0x141c56120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
EnterCriticalSection(arg1 + 0x370)
int32_t rdx = *(arg1 + 0x80)
int32_t r9 = 0
int32_t* result
int64_t* rbx_1

if (rdx s<= 0)
label_141c56177:
    arg4 = zx.o(0)
    int64_t* rax_3 = arg3[1]
    
    if (rax_3 != 0)
        rax_3[1].d += 1
        arg4 = zx.o(0)
    
    int128_t zmm0 = (*arg3).o
    int64_t var_68_1
    var_68_1.o = arg4
    arg4 = _mm_bsrli_si128(arg4, 8)
    void* rcx_1 = arg4.q
    int128_t var_40_1 = zmm0
    
    if (rcx_1 != 0)
        int32_t rax_4 = *(rcx_1 + 8)
        *(rcx_1 + 8) -= 1
        
        if (rax_4 == 1)
            (**rax_3)(rax_3)
            int32_t rax_6 = *(rax_3 + 0xc)
            *(rax_3 + 0xc) -= 1
            
            if (rax_6 == 1)
                (*(*rax_3 + 8))(rax_3, 1)
    
    *(arg1 + 0x328) += 1
    int64_t rbp_1 = sx.q(*(arg1 + 0x80))
    int32_t rax_8 = (rbp_1 + 1).d
    *(arg1 + 0x80) = rax_8
    
    if (rax_8 s> *(arg1 + 0x84))
        sub_1405a4df0(arg1 + 0x78)
    
    int32_t* rdx_2 = *(arg1 + 0x78) + rbp_1 * 0x18
    void* rcx_7 = zmm0:8.q
    *rdx_2 = arg2
    result = zmm0.q
    *(rdx_2 + 8) = result
    *(rdx_2 + 0x10) = rcx_7
    
    if (rcx_7 != 0)
        *(rcx_7 + 8) += 1
        result = zx.q(*(rcx_7 + 8))
        *(rcx_7 + 8) -= 1
        
        if (result.d == 1)
            int64_t* rdi_3 = zmm0:8.q
            (**rdi_3)(rdi_3)
            result = zx.q(*(rdi_3 + 0xc))
            *(rdi_3 + 0xc) -= 1
            
            if (result.d == 1)
                int64_t* rcx_9 = zmm0:8.q
                result = (*(*rcx_9 + 8))(rcx_9, 1)
    
    if (arg1 != -0x370)
        result = LeaveCriticalSection(arg1 + 0x370)
    
    rbx_1 = arg3[1]
    
    if (rbx_1 != 0)
        goto label_141c562a3
else
    result = *(arg1 + 0x78)
    
    while (*result != arg2)
        r9 += 1
        result = &result[6]
        
        if (r9 s>= rdx)
            goto label_141c56177
    
    if (arg1 != -0x370)
        result = LeaveCriticalSection(arg1 + 0x370)
    
    rbx_1 = arg3[1]
    
    if (rbx_1 != 0)
    label_141c562a3:
        result = zx.q(rbx_1[1].d)
        rbx_1[1].d -= 1
        
        if (result.d == 1)
            result = (**rbx_1)(rbx_1, arg4)
            int32_t rsi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rsi_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, zx.q(rsi_1))
__security_check_cookie(rax_1 ^ &var_88)
return result
