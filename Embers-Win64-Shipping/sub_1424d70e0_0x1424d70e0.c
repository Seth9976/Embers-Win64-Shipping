// 函数: sub_1424d70e0
// 地址: 0x1424d70e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_36 = 0
int32_t var_34
__builtin_memset(&var_34, 0, 0x2c)
int16_t var_38 = arg4 & 0xfe00
void** const var_40 = &data_142d7f6a8
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_40, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

void*** rax_2 = *(arg2 + 0x38)
void** const* rdx_2 = &var_40

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
void var_58
int64_t* result = sub_140647400(arg3, sub_1420c3620(&var_58, rdx_2))
int64_t* var_48

if (var_48 != 0)
    var_48[1].d -= 1
    
    if (var_48[1].d == 1)
        result = (**var_48)(var_48)
        int32_t temp2_1 = *(var_48 + 0xc)
        *(var_48 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*var_48 + 8))(var_48, 1)

int128_t var_20
int64_t* rbx_2 = var_20:8.q

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
