// 函数: sub_141978ac0
// 地址: 0x141978ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi
rdi.b = 0
sub_140a464c0()
int16_t* const r15 = &data_142d40450
int16_t* const rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

int64_t* rax_1 = (*(data_14399ea08 + 0x18))(&data_14399ea08, rdx, 0)

if (rax_1 == 0)
    return nullptr

int64_t var_44_1 = 0
int64_t var_3c_1 = 0
int64_t var_58
sub_141963290(rax_1, &var_58, arg5)
(*(*rax_1 + 0x100))(rax_1, 0x11)
int32_t var_50
int32_t var_4c
char var_48
int64_t var_30

if (var_58 == 0x5049504543414348 && var_50 == 0x11 && var_4c == data_143f01cb0
        && zx.d(var_48) == *(arg1 + 0x10) && var_30 u< (*(*rax_1 + 0x28))(rax_1))
    (*(*rax_1 + 0x178))(rax_1, var_30)
    sub_141963e70(rax_1, arg6, arg5)
    rdi.b = not.b(*(rax_1 + 0x29))
    rdi.b &= 1

char rbp_1 = rdi.b

if ((*(*rax_1 + 0x1b8))(rax_1) == 0)
    rbp_1 = 0

(**rax_1)(rax_1, 1)

if (rbp_1 != 0)
    int64_t* rax_11 = __crt_deferred_errno_cache::get(&data_143db7b00)
    
    if (arg2[1].d != 0)
        r15 = *arg2
    
    int64_t rax_13 = (*(*rax_11 + 0x118))(rax_11, r15)
    void*** rax_14 = j_sub_140a82f30(0x18)
    void*** rbx_1 = rax_14
    
    if (rax_14 == 0)
        rbx_1 = nullptr
    else
        rax_14[1].d = 1
        *(rax_14 + 0xc) = 1
        *rbx_1 = &data_142d42ea8
        rbx_1[2] = rax_13
    
    int64_t var_68 = rax_13
    void*** var_60 = rbx_1
    
    if (arg4 != &var_68)
        *arg4 = rax_13
        var_68 = 0
        sub_1405aeff0(&arg4[1], &var_60)
        rbx_1 = var_60
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rdi_2 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*rbx_1)[1](rbx_1, zx.q(rdi_2))
    
    if (*arg4 == 0)
        int64_t* result
        result.b = 0
        return result
    
    *arg3 = var_44_1.o
    *(arg1 + 0x20) = var_30

return zx.q(rbp_1)
