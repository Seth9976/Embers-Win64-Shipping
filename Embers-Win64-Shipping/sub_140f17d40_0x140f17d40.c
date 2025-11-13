// 函数: sub_140f17d40
// 地址: 0x140f17d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x58) == 0)
    return 

uint64_t rax = *(arg1 - 0x50)

if (rax == 0 || *(rax + 8) s<= 0)
    return 

void var_58
int64_t* rax_1 = sub_140aae420(&var_58, arg2)
int64_t var_40 = *rax_1
int64_t* rcx_2 = rax_1[1]

if (rcx_2 != 0)
    rcx_2[1].d += 1

void* rcx_3 = nullptr
int64_t* rbx_1 = *(arg1 - 0x50)
int32_t var_30_1 = rax_1[2].d
char var_28_1 = 1
int64_t var_20 = 0
int32_t var_18_1 = 0

if (rbx_1 != 0)
    int32_t rax_3 = rbx_1[1].d
    
    if (rax_3 == 0)
        rbx_1 = nullptr
    else
        rbx_1[1].d = rax_3 + 1
        
        if (rbx_1 != 0)
            rcx_3 = *(arg1 - 0x58)
            rbx_1[1].d += 1

sub_140f8cfc0(*(rcx_3 + 0x2c0), &var_40)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)
    
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_140745b20(&var_20)

if (rcx_2 != 0)
    rcx_2[1].d -= 1
    
    if (rcx_2[1].d == 1)
        (**rcx_2)(rcx_2)
        rax = zx.q(*(rcx_2 + 0xc))
        *(rcx_2 + 0xc) -= 1
        
        if (rax.d == 1)
            (*(*rcx_2 + 8))(rcx_2, 1)

int64_t* var_50

if (var_50 == 0)
    return 

var_50[1].d -= 1

if (var_50[1].d != 1)
    return 

(**var_50)(var_50)
int32_t rdi_1 = *(var_50 + 0xc)
*(var_50 + 0xc) -= 1

if (rdi_1 == 1)
    (*(*var_50 + 8))(var_50, zx.q(rdi_1))
