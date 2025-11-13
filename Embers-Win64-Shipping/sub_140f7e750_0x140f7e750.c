// 函数: sub_140f7e750
// 地址: 0x140f7e750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_88
void var_48
char rax_4
char* rcx_2
int64_t* rbx_1
int32_t rdi

if (*(arg1 + 0x390) == 0)
label_140f7e7d6:
    rbx_1 = 0.q
    rcx_2 = &var_88
    var_88 = 0
    int32_t var_50_1 = 1
    int128_t var_80
    __builtin_memset(&var_80, 0, 0x30)
    rdi = 4
    rax_4 = 0
else
    rbx_1 = *(arg1 + 0x398)
    
    if (rbx_1 == 0)
        goto label_140f7e7d6
    
    int32_t rcx = rbx_1[1].d
    
    if (rcx s<= 0)
        goto label_140f7e7d6
    
    int64_t* rax = rbx_1
    
    if (rbx_1 != 0)
        if (rcx == 0)
            rbx_1 = nullptr
            rax = nullptr
        else
            rbx_1[1].d = rcx + 1
            rax = rbx_1
    
    int64_t* rcx_1 = nullptr
    
    if (rax != 0)
        rcx_1 = *(arg1 + 0x390)
    
    char* rax_3 = (*(*rcx_1 + 0x40))(rcx_1, &var_48)
    rcx_2 = rax_3
    rdi = 3
    rax_4 = *rax_3

*arg2 = rax_4
*(arg2 + 8) = *(rcx_2 + 8)
*(arg2 + 0x10) = *(rcx_2 + 0x10)
__builtin_memset(&rcx_2[8], 0, 0x30)
*(arg2 + 0x18) = *(rcx_2 + 0x18)
*(arg2 + 0x20) = *(rcx_2 + 0x20)
*(arg2 + 0x28) = *(rcx_2 + 0x28)
*(arg2 + 0x30) = *(rcx_2 + 0x30)
*(arg2 + 0x38) = *(rcx_2 + 0x38)

if ((rdi.b & 4) != 0)
    rdi &= 0xfffffffb
    sub_140ddf250(&var_88)

if ((rdi.b & 2) != 0)
    rdi &= 0xfffffffd
    sub_140ddf250(&var_48)

if ((rdi.b & 1) != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
