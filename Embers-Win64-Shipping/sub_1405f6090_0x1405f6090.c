// 函数: sub_1405f6090
// 地址: 0x1405f6090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_40 = -2
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
uint128_t var_88 = zx.o(0)
int64_t* rbx_1
uint128_t* rdi

if ((*(*(arg1 + 0x28) + 8))(arg1 + 0x28, &var_88) == 0)
    rdi.b = 0
    rbx_1 = var_88:8.q
else
    int64_t* rcx_1 = var_88.q
    int64_t var_68
    (*(*rcx_1 + 0x30))(rcx_1, &var_68)
    int64_t* rcx_2 = var_88.q
    void var_38
    int64_t rdx_3 = *(*(*rcx_2 + 0x10))(rcx_2, &var_38)
    int64_t rax_7 = var_68
    char var_60 = 1
    int64_t var_58_1 = rax_7
    char var_50_1 = 0
    int64_t var_48_1 = rdx_3 + rax_7
    
    if (sub_1405da820(arg2, &var_60) == 0)
        rdi.b = 0
        rbx_1 = var_88:8.q
    else if ((**(arg1 + 0x28))(arg1 + 0x28, &var_88) == 0)
        rdi.b = 0
        rbx_1 = var_88:8.q
    else
        arg4 = var_88
        uint128_t var_78 = arg4
        rbx_1 = _mm_bsrli_si128(arg4, 8).q
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
            rbx_1 = var_88:8.q
            arg4 = var_78
        
        if (&var_78 != arg3)
            uint128_t var_30_1 = arg4
            var_78 = *arg3
            *arg3 = arg4
        
        void* rcx_5 = var_78:8.q
        
        if (rcx_5 != 0)
            int32_t rax_11 = *(rcx_5 + 8)
            *(rcx_5 + 8) -= 1
            
            if (rax_11 == 1)
                int64_t* rbx_2 = var_78:8.q
                (**rbx_2)(rbx_2)
                int32_t rax_14 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_14 == 1)
                    int64_t* rcx_7 = var_78:8.q
                    (*(*rcx_7 + 8))(rcx_7, 1)
            
            rbx_1 = var_88:8.q
        
        rdi.b = 1

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t r8 = *rbx_1
        (*r8)(rbx_1, arg4, r8)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_1 = *rbx_1
            (*(r8_1 + 8))(rbx_1, zx.q(rsi_1), r8_1)

__security_check_cookie(rax_1 ^ &var_a8)
return zx.q(rdi.b)
