// 函数: sub_141c56440
// 地址: 0x141c56440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t* rax = sub_141c5eea0(arg1, &var_78, arg2)
void* var_88 = nullptr
int64_t* var_80
sub_141c4d620(&var_80, &rax[1])
int64_t* rbx = var_80

if (rbx != 0)
    var_88 = *rax
    *rax = 0

int64_t* var_70

if (var_70 != 0)
    int32_t rax_1 = *(var_70 + 0xc)
    *(var_70 + 0xc) -= 1
    
    if (rax_1 == 1 && var_70 != 0)
        (*(*var_70 + 8))(var_70, 1)
    
    rbx = var_80

int32_t r15 = *(var_88 + 0x328)

if (rbx != 0)
    rbx[1].d += 1
    rbx = var_80

void* rsi = arg4[1]
int64_t r12 = *arg4

if (rsi != 0)
    *(rsi + 8) += 1
    rbx = var_80

void*** rax_4 = sub_140a82f30(0x38, 8)
rax_4[1] = arg1
rax_4[2] = var_88
rax_4[3] = rbx
rax_4[4].d = arg3
rax_4[5] = r12
rax_4[6] = rsi
*rax_4 = &data_14320ae40
void*** var_58 = rax_4
int32_t* (* var_68)(void* arg1, uint128_t arg2 @ zmm1)
int32_t* (* rax_5)(void* arg1, uint128_t arg2 @ zmm1) = var_68

if (rax_4 != -8)
    rax_5 = sub_141c56ef0

var_68 = rax_5
sub_141c56850(arg1, &var_68, arg5)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        int64_t* rbx_1 = var_80
        (**rbx_1)(rbx_1)
        int32_t rax_8 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_8 == 1)
            int64_t* rcx_6 = var_80
            (*(*rcx_6 + 8))(rcx_6, 1)

int64_t* rbx_2 = arg4[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_2 = *rbx_2
            (*(r8_2 + 8))(rbx_2, zx.q(rdi_1), r8_2)

return zx.q(r15 + 1)
