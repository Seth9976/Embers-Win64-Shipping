// 函数: sub_140f872f0
// 地址: 0x140f872f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int64_t* rcx = nullptr
char var_1a8
void var_e8
char* rax_5
int64_t* rbx_1
int32_t rdi

if (*(arg1 + 0x390) == 0)
label_140f87387:
    int32_t var_f4
    int32_t var_f4_1 = var_f4 & 0xffffff00
    rax_5 = &var_1a8
    rbx_1 = 0.q
    rdi = 4
    var_1a8 = 0
    int64_t var_1a0_1 = 0
    int64_t var_198_1 = 0
    char var_188_1 = 0
    int64_t var_180
    __builtin_memset(&var_180, 0, 0x88)
    int32_t var_f8_1 = 0x20702
else
    rbx_1 = *(arg1 + 0x398)
    
    if (rbx_1 == 0)
        goto label_140f87387
    
    int32_t rdx = rbx_1[1].d
    
    if (rdx s<= 0)
        goto label_140f87387
    
    int64_t* rax_2 = rbx_1
    
    if (rbx_1 != 0)
        if (rdx == 0)
            rbx_1 = nullptr
            rax_2 = nullptr
        else
            rbx_1[1].d = rdx + 1
            rax_2 = rbx_1
    
    if (rax_2 != 0)
        rcx = *(arg1 + 0x390)
    
    rax_5 = (*(*rcx + 0x140))(rcx, &var_e8, arg3)
    rdi = 3

sub_140e51550(arg2, rax_5)

if ((rdi.b & 4) != 0)
    rdi &= 0xfffffffb
    sub_140597700(&var_1a8)

if ((rdi.b & 2) != 0)
    rdi &= 0xfffffffd
    sub_140597700(&var_e8)

if ((rdi.b & 1) != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t rdx_3 = *rbx_1
        (*rdx_3)(rbx_1, rdx_3)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_2 = *rbx_1
            (*(r8_2 + 8))(rbx_1, 1, r8_2)

__security_check_cookie(rax_1 ^ &var_1d8)
return arg2
