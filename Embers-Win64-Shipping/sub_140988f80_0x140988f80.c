// 函数: sub_140988f80
// 地址: 0x140988f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = 0
int64_t var_60 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int128_t var_48
__builtin_memset(&var_48, 0, 0x40)
void** const var_50 = &data_142e259e0
int32_t var_58 = 0xffffffff

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_58, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rbx
rbx.b = rax_3 != 0
*(arg2 + 0x20) = rbx + rax_3

if ((*(*arg1 + 0x670))(arg1, &var_68, &var_58) != 0)
    (*(*arg1 + 0x678))(arg1, &var_68, &var_58)
else
    sub_140be4120(u"ServerRemoveMemberFromReservationRequest_Validate")

int64_t var_18
sub_14094b070(&var_18)
int64_t var_28
int64_t result = sub_14094b070(&var_28)
void** const var_50_1 = &data_142e259e0
int64_t var_38

if (var_38 != 0)
    result = sub_140a74f90(var_38)

int64_t* rbx_2 = var_48:8.q

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

int64_t rcx_9 = var_68

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
