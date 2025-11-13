// 函数: sub_1405ea450
// 地址: 0x1405ea450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a0 = -2
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t* var_98 = arg1
int64_t* var_90 = arg2
int64_t* var_88 = arg3
int32_t var_c8 = 0
int32_t var_60 = 4
int64_t rax_2 = *arg3
void* rax_3 = arg3[1]

if (rax_3 != 0)
    *(rax_3 + 8) += 1

int32_t rax_4 = arg3[2].d
char var_38 = 1
int32_t* var_c0 = nullptr
int32_t var_b8 = 1
sub_1405a4b40(&var_c0, 1, 0)
int32_t* rcx_1 = var_c0
*rcx_1 = var_60
int64_t var_58
*(rcx_1 + 8) = var_58
*(rcx_1 + 8) = var_58
rcx_1[2] = var_58.d
*(rcx_1 + 8) = var_58
rcx_1[0xa].b = 0

if (var_38 != 0)
    *(rcx_1 + 0x10) = rax_2
    *(rcx_1 + 0x18) = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    rcx_1[8] = rax_4
    rcx_1[0xa].b = 1

int64_t var_b0 = *arg2
void* rax_12 = arg2[1]
void* var_a8 = rax_12

if (rax_12 != 0)
    *(rax_12 + 8) += 1

void var_78
int64_t* rax_13 = sub_140aac870(&var_78, &var_b0, &var_c0)
*arg1 = *rax_13
void* rax_15 = rax_13[1]
arg1[1] = rax_15

if (rax_15 != 0)
    *(rax_15 + 8) += 1

arg1[2].d = rax_13[2].d
int32_t var_c8_1 = 1
int64_t* var_70

if (var_70 != 0)
    var_70[1].d -= 1
    
    if (var_70[1].d == 1)
        (**var_70)(var_70)
        int32_t rax_19 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (rax_19 == 1)
            (*(*var_70 + 8))(var_70, 1)

sub_140596f50(&var_c0)
`eh vector vbase constructor iterator'(&var_60, 0x30, 1)
int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rax_23 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_23 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg3[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_2 = *rbx_2
            (*(r8_2 + 8))(rbx_2, zx.q(rdi_1), r8_2)

__security_check_cookie(rax_1 ^ &var_e8)
return arg1
