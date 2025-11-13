// 函数: sub_14272bb30
// 地址: 0x14272bb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
uint64_t var_28 = __security_cookie ^ &var_68
int32_t i_1 = arg4
int64_t* r14 = arg2
uint64_t result

if (arg4 != 0)
    void* rdi_1 = arg3 + 0x20
    int32_t i
    
    do
        int64_t* rsi_1 = r14
        r14 = &r14[8]
        *rsi_1 = *(rdi_1 - 0x20)
        rsi_1[1] = *(rdi_1 - 0x18)
        rsi_1[2].d = *(rdi_1 - 0x10)
        rsi_1[3] = *(rdi_1 - 8)
        rsi_1[4].d ^= (rsi_1[4].d ^ *rdi_1) & 1
        int32_t rcx_3 = ((rsi_1[4].d ^ *rdi_1) & 2) ^ rsi_1[4].d
        rsi_1[4].d = rcx_3
        int32_t rax_10 = ((rcx_3 ^ *rdi_1) & 4) ^ rcx_3
        rsi_1[4].d = rax_10
        int32_t rcx_7 = ((rax_10 ^ *rdi_1) & 8) ^ rax_10
        rsi_1[4].d = rcx_7
        int32_t rax_14 = ((rcx_7 ^ *rdi_1) & 0x10) ^ rcx_7
        rsi_1[4].d = rax_14
        int32_t rcx_11 = ((rax_14 ^ *rdi_1) & 0x20) ^ rax_14
        rsi_1[4].d = rcx_11
        int32_t rdx_3 = ((rcx_11 ^ *rdi_1) & 0x40) ^ rcx_11
        rsi_1[4].d = rdx_3
        rsi_1[4].d = ((rdx_3 ^ *rdi_1) & 0x80) ^ rdx_3
        *(rsi_1 + 0x24) = *(rdi_1 + 4)
        int64_t* rcx_12 = *(rdi_1 + 0x10)
        int64_t var_48 = *(rdi_1 + 8)
        int64_t* var_40_1 = rcx_12
        
        if (rcx_12 != 0)
            rcx_12[1].d += 1
            rcx_12 = var_40_1
        
        if (&var_48 != &rsi_1[5])
            uint128_t zmm1 = var_48.o
            uint128_t var_38_1 = zmm1
            var_48.o = *(rsi_1 + 0x28)
            rcx_12 = var_40_1
            *(rsi_1 + 0x28) = zmm1
        
        if (rcx_12 != 0)
            rcx_12[1].d -= 1
            
            if (rcx_12[1].d == 1)
                (**var_40_1)(var_40_1)
                int32_t rax_23 = *(var_40_1 + 0xc)
                *(var_40_1 + 0xc) -= 1
                
                if (rax_23 == 1)
                    (*(*var_40_1 + 8))(var_40_1, 1)
        
        result = zx.q(*(rdi_1 + 0x18))
        rdi_1 += 0x40
        rsi_1[7].d = result.d
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
__security_check_cookie(var_28 ^ &var_68)
return result
