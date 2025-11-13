// 函数: sub_140cf9ce0
// 地址: 0x140cf9ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
int64_t* rbx = arg3
arg3.b = *(arg2 + 0xc) == 0

if ((arg3.b & sub_140b5b8a0(*(arg2 + 8), 0xe)) == 0)
    return 0

void var_48
sub_140a96170(&var_48)
int64_t* rcx_2 = *(*rbx + 8)
(*(*rcx_2 + 0x138))(rcx_2, &var_48)
int32_t rbx_2
uint64_t rbp_1
uint64_t rsi_1
uint64_t* r14_1
uint64_t var_78
uint64_t var_58

if (sub_140ab1d50(&var_48) == 0)
    rsi_1 = var_78
    rbp_1 = 0
    var_58 = 0
    rbx_2 = 2
    int64_t var_50_1 = 0
    r14_1 = &var_58
else
    int64_t* rax_4 = sub_140ab1d50(&var_48)
    rsi_1 = 0
    var_78 = 0
    int32_t rbx_1 = rax_4[1].d
    int64_t rdi_1 = *rax_4
    int32_t var_70_1 = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_78, rbx_1, 0)
        rsi_1 = var_78
        memcpy(rsi_1, rdi_1, rbx_1 * 2)
        rbp_1 = var_58
        r14_1 = &var_78
        rbx_2 = 1
    else
        rbp_1 = var_58
        rbx_2 = 1
        int32_t var_6c_1 = 0
        r14_1 = &var_78
int32_t rdi_2 = r14_1[1].d
uint64_t var_68 = 0
uint64_t r14_2

if (rdi_2 != 0)
    sub_1405a4c70(&var_68, rdi_2, 0)
    r14_2 = var_68
    memcpy(r14_2, *r14_1, rdi_2 * 2)
else
    r14_2 = 0

if ((rbx_2.b & 2) != 0)
    rbx_2 &= 0xfffffffd
    
    if (rbp_1 != 0)
        sub_140a74f90(rbp_1)

if ((rbx_2.b & 1) != 0 && rsi_1 != 0)
    sub_140a74f90(rsi_1)

int64_t* rbx_4 = sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4

if (rbx_4 != &var_68)
    int32_t r8_4 = *(rbx_4 + 0xc)
    rbx_4[1].d = rdi_2
    
    if (rdi_2 != 0 || r8_4 != 0)
        sub_1405a4c70(rbx_4, rdi_2, r8_4)
        memcpy(*rbx_4, r14_2, rdi_2 * 2)
    else
        *(rbx_4 + 0xc) = rdi_2

if (r14_2 != 0)
    sub_140a74f90(r14_2)

int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        (**var_40)(var_40)
        int32_t rdi_3 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (rdi_3 == 1)
            int64_t r8_8 = *var_40
            (*(r8_8 + 8))(var_40, zx.q(rdi_3), r8_8)

return 2
