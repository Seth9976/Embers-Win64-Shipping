// 函数: sub_141829c50
// 地址: 0x141829c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t rcx = *(arg3 + 0x88)
int64_t rax_2 = rcx

if (rcx == 0)
    rax_2 = *(arg3 + 0x78)

int64_t var_58 = rax_2
int64_t* rax_3 = 0x90

if (rcx == 0)
    rax_3 = 0x80

void* rcx_1 = *(rax_3 + arg3)
void* var_50 = rcx_1

if (rcx_1 != 0)
    *(rcx_1 + 8) += 1

sub_14189da60(arg1, &var_58)
int64_t* rdi_1 = *(arg3 + 0x80)

if (rdi_1 != 0)
    rdi_1[1].d += 1

int64_t var_68 = *(arg3 + 0x78)
int64_t* rcx_3 = rdi_1
int64_t* var_60 = rcx_3

if (rdi_1 != 0)
    rdi_1[1].d += 1
    rcx_3 = var_60

if (&var_68 != arg1)
    int128_t zmm1 = var_68.o
    int128_t var_48_1 = zmm1
    var_68.o = *arg1
    rcx_3 = var_60
    *arg1 = zmm1

if (rcx_3 != 0)
    rcx_3[1].d -= 1
    
    if (rcx_3[1].d == 1)
        (**var_60)(var_60)
        int32_t rax_7 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*var_60 + 8))(var_60, 1)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rbp_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rbp_1 == 1)
            int64_t r8 = *rdi_1
            (*(r8 + 8))(rdi_1, zx.q(rbp_1), r8)

sub_140597970(&arg1[4], arg2 + 0x50)
arg1[6].d = *(arg2 + 0x68)
*(arg1 + 0x34) = *(arg2 + 0x60)
__security_check_cookie(rax_1 ^ &var_88)
return arg1
