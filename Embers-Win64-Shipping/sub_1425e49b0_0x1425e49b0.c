// 函数: sub_1425e49b0
// 地址: 0x1425e49b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
char r15 = 0

if (*(arg1 + 0xc0) == 0 || (*(arg1 + 0x6c) | *(arg1 + 0x68) | *(arg1 + 0x64) | *(arg1 + 0x60)) == 0)
    return 

int64_t* rax_4 = j_sub_140a82f30(0x20)
int64_t* r13_1 = rax_4
int64_t var_78

if (rax_4 == 0)
    r13_1 = nullptr
else
    int16_t* rax_5 = sub_140b73b20(0)
    var_78 = 0
    int64_t var_70_1 = 0
    int32_t rdi_1 = 0
    int32_t rax_6 = 0
    
    if (rax_5 != 0 && *rax_5 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rax_5[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_78, rbx_1.d + 1)
            rax_6 = var_70_1:4.d
            rdi_1 = var_70_1.d
        
        rdi_1 += rbx_1.d + 1
        var_70_1.d = rdi_1
        
        if (rdi_1 s> rax_6)
            sub_140594770(&var_78)
            rdi_1 = var_70_1.d
        
        UnDecorator::getReferenceType(var_78, rax_5, (rbx_1.d + 1) * 2)
    
    sub_140596d10(r13_1, arg2)
    r13_1[2] = 0
    r13_1[3].d = rdi_1
    
    if (rdi_1 != 0)
        sub_1405a4c70(&r13_1[2], rdi_1, 0)
        memcpy(r13_1[2], var_78, rdi_1 * 2)
        r15 = 1
    else
        *(r13_1 + 0x1c) = 0
        r15 = 1

void* r12_1 = *(arg1 + 0xc0)
int128_t* var_68 = nullptr
int32_t var_60_1 = 1
sub_1405a4f90(&var_68)
int128_t* rdi_2 = var_68
*rdi_2 = *(arg1 + 0x60)
uint64_t var_58 = 0
int64_t rbx_3 = sx.q(var_60_1)
int32_t var_50_1 = rbx_3.d
int32_t var_4c

if (rbx_3.d != 0)
    sub_1405a4be0(&var_58, rbx_3.d, 0)
    memcpy(var_58, rdi_2, (rbx_3 << 4).d)
else
    __builtin_memset(&var_4c, 0, 0x14)
int64_t arg_18 = 0
arg_8.q = 0x2bca2875f4373fff
int32_t* var_80_1 = &arg_8
int64_t* var_88_1 = &arg_18
int128_t var_48
sub_14200dcd0(r12_1, r13_1, sub_141cbc280(), 0, &var_48, &var_58)
int64_t* rbx_4 = var_48:8.q

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t r14_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (r14_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, zx.q(r14_1))
    
    rdi_2 = var_68

uint64_t rcx_12 = var_58

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

sub_140a74f90(rdi_2)

if ((r15 & 1) == 0)
    return 

int64_t rcx_14 = var_78

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)
