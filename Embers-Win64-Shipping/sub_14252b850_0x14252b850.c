// 函数: sub_14252b850
// 地址: 0x14252b850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58
sub_140a96170(&var_58)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

void* var_78 = nullptr
int32_t var_70 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_78, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t rax_3 = *(arg2 + 0x20)
void* rdx_4 = var_78
int64_t rcx_3
rcx_3.b = rax_3 != 0
int64_t var_68 = 0
*(arg2 + 0x20) = rcx_3 + rax_3
sub_1425282b0(&var_68, rdx_4, var_70, 0, 0)
int64_t var_40 = var_58
int64_t* var_50
int64_t* var_38 = var_50

if (var_50 != 0)
    var_50[1].d += 1

int32_t var_48
int32_t var_30 = var_48
void var_28
int64_t* rax_7 = sub_1420bf5d0(&var_28, &var_40, &var_68)
int64_t rdx_6 = *arg3
*arg3 = *rax_7
*rax_7 = rdx_6
int64_t rdx_7 = arg3[1]
arg3[1] = rax_7[1]
rax_7[1] = rdx_7
arg3[2].d = rax_7[2].d
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rax_11 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rax_11 == 1)
            (*(*var_20 + 8))(var_20, 1)

int32_t result = sub_140a98040(&var_78)

if (var_50 != 0)
    result = var_50[1].d
    var_50[1].d -= 1
    
    if (result == 1)
        result = (**var_50)(var_50)
        int32_t rdi_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_50 + 8))(var_50, zx.q(rdi_1))

return result
