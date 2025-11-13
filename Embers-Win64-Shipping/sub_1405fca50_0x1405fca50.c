// 函数: sub_1405fca50
// 地址: 0x1405fca50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
void var_68
int64_t rax_1 = __security_cookie ^ &var_68
sub_1405f5120(arg1 - 8)
uint128_t var_48 = zx.o(0)
void* rcx_2
uint128_t* rdi

if (sub_1405fcbb0(arg1 + 0x18, &var_48) == 0 || var_48.q == 0)
    rdi.b = 0
    rcx_2 = var_48:8.q
else
    uint128_t zmm1_1 = var_48
    uint128_t var_38 = zmm1_1
    rcx_2 = _mm_bsrli_si128(zmm1_1, 8).q
    
    if (rcx_2 != 0)
        *(rcx_2 + 8) += 1
        rcx_2 = var_48:8.q
        zmm1_1 = var_38
    
    if (&var_38 != arg2)
        uint128_t var_20_1 = zmm1_1
        var_38 = *arg2
        *arg2 = zmm1_1
    
    void* rdx_1 = var_38:8.q
    
    if (rdx_1 != 0)
        int32_t rax_3 = *(rdx_1 + 8)
        *(rdx_1 + 8) -= 1
        
        if (rax_3 == 1)
            int64_t* rbx_1 = var_38:8.q
            (**rbx_1)(rbx_1, rdx_1)
            int32_t rax_6 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_6 == 1)
                int64_t* rcx_4 = var_38:8.q
                (*(*rcx_4 + 8))(rcx_4, 1)
        
        rcx_2 = var_48:8.q
    
    rdi.b = 1

if (rcx_2 != 0)
    int32_t rax_9 = *(rcx_2 + 8)
    *(rcx_2 + 8) -= 1
    
    if (rax_9 == 1)
        int64_t* rbx_2 = var_48:8.q
        (**rbx_2)(rbx_2)
        int32_t rsi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t* rcx_6 = var_48:8.q
            int64_t r8_2 = *rcx_6
            (*(r8_2 + 8))(rcx_6, zx.q(rsi_1), r8_2)

__security_check_cookie(rax_1 ^ &var_68)
return zx.q(rdi.b)
