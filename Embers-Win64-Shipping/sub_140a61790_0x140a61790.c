// 函数: sub_140a61790
// 地址: 0x140a61790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
void*** rax_2 = j_sub_140a82f30(0x80)
void*** rbx = rax_2

if (rax_2 == 0)
    rbx = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx = &data_142e632e0
    rbx[2] = &data_142e61c58
    __builtin_memset(&rbx[3], 0, 0x11)
    rbx[6] = *arg3
    rbx[8] = arg3[2]
    arg3[2] = 0
    *(rbx + 0x50) = *(arg3 + 0x20)
    *(rbx + 0x60) = *(arg3 + 0x30)
    
    if (rbx[6] != 0)
        *arg3 = 0
    
    rbx[0xe] = sub_140a6e140(&rbx[2], arg2, arg4, arg5, arg6, 0)

*arg1 = &rbx[2]
arg1[1] = rbx

if (rbx != 0)
    rbx[1].d += 1
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t rax_11 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (rax_11 == 1)
                (*rbx)[1](rbx, 1)

void* rsi_1 = *arg1
int64_t* rcx_3 = arg1[1]
void* var_78 = rsi_1
int64_t* var_70 = rcx_3

if (rcx_3 != 0)
    rcx_3[1].d += 1
    rcx_3 = var_70

if (&var_78 != rsi_1 + 8)
    int128_t zmm1 = var_78.o
    int128_t var_58_1 = zmm1
    var_78.o = *(rsi_1 + 8)
    rcx_3 = var_70
    *(rsi_1 + 8) = zmm1

if (rcx_3 != 0)
    rcx_3[1].d -= 1
    
    if (rcx_3[1].d == 1)
        (**var_70)(var_70)
        int32_t rdi_1 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_1 = *var_70
            (*(r8_1 + 8))(var_70, 1, r8_1)

char temp0_5 = *(rsi_1 + 0x18)
*(rsi_1 + 0x18) = 1
int64_t rbp
rbp.b = temp0_5
__security_check_cookie(rax_1 ^ &var_a8)
return arg1
