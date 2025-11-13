// 函数: sub_141869ad0
// 地址: 0x141869ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const r14 = &data_142fe6b70
int64_t r8 = **arg1
int64_t var_70 = *(arg2 + 0x58)
void* var_58 = arg2
void** const var_40 = &data_142fe6b70
uint128_t* i_3
__builtin_memset(&i_3, 0, 0x14)
uint128_t var_50 = r8.o
int128_t* rbx = *(arg2 + 0x48)
void* rsi = rbx + sx.q(*(arg2 + 0x50)) * 0x18

while (rbx != rsi)
    int64_t rcx_1 = **arg1
    uint128_t var_68_1 = *rbx
    uint64_t var_70_1 = zx.q(*(rbx + 0x14))
    uint64_t arg_8 = rbx[1].q
    uint128_t* i_4 = j_sub_140a82f30(0x38)
    
    if (i_4 != 0)
        *i_4 = rcx_1.o
        i_4[1] = var_68_1
        i_4[2].q = arg_8
        *(i_4 + 0x28) = 0
        i_4[3].q = 0
        uint128_t* i_5
        
        if (i_5 == 0)
            i_3 = i_4
        else
            *(i_5 + 0x28) = i_4
            i_4[3].q = i_5
        
        i_5 = i_4
        int32_t var_28
        var_40[1](&var_40, zx.q(var_28 + 1))
    
    uint64_t rax_6 = zx.q(*(rbx + 0x14))
    rbx += 0x18
    int64_t* rcx_5 = *arg1
    *rcx_5 += rax_6

int64_t* rbx_1 = arg1[1]
int64_t* rax_7 = j_sub_140a82f30(0x48)

if (rax_7 != 0)
    int64_t* rax_8 = sub_141865850(rax_7, &var_58)
    
    if (rax_8 != 0)
        void* rcx_7 = rbx_1[2]
        
        if (rcx_7 == 0)
            rbx_1[1] = rax_8
        else
            *(rcx_7 + 0x38) = rax_8
            rax_8[8] = rbx_1[2]
        
        rbx_1[2] = rax_8
        (*(*rbx_1 + 8))(rbx_1, zx.q(rbx_1[3].d + 1))

uint128_t* i_2 = i_3
var_40 = &data_142fe6b70

if (i_2 != 0)
    uint128_t* i
    
    do
        i = *(i_2 + 0x28)
        j_sub_140a74f90(i_2)
        uint128_t* i_1 = i
        i_2 = i
    while (i != 0)
    r14 = var_40

int64_t var_30_1 = 0
int64_t var_38_1 = 0
return r14[1](&var_40, 0)
