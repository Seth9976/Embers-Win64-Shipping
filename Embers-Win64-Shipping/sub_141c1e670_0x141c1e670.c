// 函数: sub_141c1e670
// 地址: 0x141c1e670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_8e = 0
int32_t var_8c
__builtin_memset(&var_8c, 0, 0x30)
int16_t var_90 = arg4 & 0xfe00
void** const var_98 = &data_142ecfd58
int64_t var_58 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_98, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

void*** rax_2 = *(arg2 + 0x38)
void** const* rdx_2 = &var_98

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
void** var_40
void*** rax_4 = sub_140e50dd0(&var_40, rdx_2)
*(arg3 + 8) = rax_4[1].w
*(arg3 + 0xa) = *(rax_4 + 0xa)
*(arg3 + 0xc) = *(rax_4 + 0xc)
*(arg3 + 0x10) = rax_4[2]
sub_140647400(arg3 + 0x18, &rax_4[3])
*(arg3 + 0x30) = rax_4[6].d
int32_t result = *(rax_4 + 0x34)
*(arg3 + 0x34) = result
int64_t* var_18

if (var_18 != 0)
    var_18[1].d -= 1
    
    if (var_18[1].d == 1)
        result = (**var_18)(var_18)
        int32_t temp2_1 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*var_18 + 8))(var_18, 1)

int128_t var_78
int64_t* rbx_3 = var_78:8.q

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
