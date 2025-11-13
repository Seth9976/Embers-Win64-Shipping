// 函数: sub_1405f49c0
// 地址: 0x1405f49c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
sub_1405f5120(arg1 - 8)
uint128_t var_58 = zx.o(0)
void* rcx_3
void* rdi

if (sub_1405fcbb0(arg1 + 0x18, &var_58) == 0 || var_58.q == 0)
    rdi.b = 0
    rcx_3 = var_58:8.q
else
    sub_1405fcef0(arg1 + 0x18)
    *(arg1 + 8) -= 1
    uint128_t zmm1_1 = var_58
    uint128_t var_48 = zmm1_1
    rcx_3 = _mm_bsrli_si128(zmm1_1, 8).q
    
    if (rcx_3 != 0)
        *(rcx_3 + 8) += 1
        rcx_3 = var_58:8.q
        zmm1_1 = var_48
    
    if (&var_48 != arg2)
        uint128_t var_30_1 = zmm1_1
        var_48 = *arg2
        *arg2 = zmm1_1
    
    void* rdx_1 = var_48:8.q
    
    if (rdx_1 != 0)
        int32_t rax_3 = *(rdx_1 + 8)
        *(rdx_1 + 8) -= 1
        
        if (rax_3 == 1)
            int64_t* rbx_1 = var_48:8.q
            (**rbx_1)(rbx_1, rdx_1)
            int32_t rax_6 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_6 == 1)
                int64_t* rcx_5 = var_48:8.q
                (*(*rcx_5 + 8))(rcx_5, 1)
        
        rcx_3 = var_58:8.q
    
    rdi.b = 1

if (rcx_3 != 0)
    int32_t rax_9 = *(rcx_3 + 8)
    *(rcx_3 + 8) -= 1
    
    if (rax_9 == 1)
        int64_t* rbx_2 = var_58:8.q
        (**rbx_2)(rbx_2)
        int32_t rsi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t* rcx_7 = var_58:8.q
            int64_t r8_2 = *rcx_7
            (*(r8_2 + 8))(rcx_7, zx.q(rsi_1), r8_2)

__security_check_cookie(rax_1 ^ &var_78)
return zx.q(rdi.b)
