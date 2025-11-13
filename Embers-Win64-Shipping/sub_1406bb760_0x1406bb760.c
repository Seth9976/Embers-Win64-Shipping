// 函数: sub_1406bb760
// 地址: 0x1406bb760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
uint128_t var_98 = zx.o(0)
int64_t* rbx
uint128_t* rsi

if ((*(*(arg1 + 0x168) + 8))(arg1 + 0x168, &var_98) == 0)
    rsi.b = 0
    rbx = var_98:8.q
else
    int64_t* rcx_1 = var_98.q
    int64_t var_78
    (*(*rcx_1 + 0x40))(rcx_1, &var_78)
    int64_t* rcx_2 = var_98.q
    void var_50
    int64_t rcx_3 = *(*(*rcx_2 + 0x10))(rcx_2, &var_50)
    int64_t rax_7 = var_78
    char var_70 = 1
    int64_t var_68_1 = rax_7
    char var_60_1 = 0
    int64_t var_58_1 = rcx_3 + rax_7
    
    if (sub_1405da820(arg2, &var_70) != 0)
        if ((**(arg1 + 0x168))(arg1 + 0x168, &var_98) == 0)
            rsi.b = 0
            rbx = var_98:8.q
        else
            arg4 = var_98
            uint128_t var_88 = arg4
            rbx = _mm_bsrli_si128(arg4, 8).q
            
            if (rbx != 0)
                rbx[1].d += 1
                rbx = var_98:8.q
                arg4 = var_88
            
            if (&var_88 != arg3)
                uint128_t var_48_1 = arg4
                var_88 = *arg3
                *arg3 = arg4
            
            void* rcx_12 = var_88:8.q
            
            if (rcx_12 != 0)
                int32_t rax_14 = *(rcx_12 + 8)
                *(rcx_12 + 8) -= 1
                
                if (rax_14 == 1)
                    int64_t* rbx_1 = var_88:8.q
                    (**rbx_1)(rbx_1)
                    int32_t rax_16 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rax_16 == 1)
                        int64_t* rcx_14 = var_88:8.q
                        (*(*rcx_14 + 8))(rcx_14, 1)
                
                rbx = var_98:8.q
            
            rsi.b = 1
    else
        (*(*(arg1 + 0x160) + 0x10))(arg1 + 0x160)
        rsi.b = 0
        rbx = var_98:8.q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t r8 = *rbx
        (*r8)(rbx, arg4, r8)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_1 = *rbx
            (*(r8_1 + 8))(rbx, zx.q(rdi_1), r8_1)

__security_check_cookie(rax_1 ^ &var_b8)
return zx.q(rsi.b)
