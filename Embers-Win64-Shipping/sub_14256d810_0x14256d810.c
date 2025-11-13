// 函数: sub_14256d810
// 地址: 0x14256d810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const var_58 = &data_142e259e0
int128_t var_50
__builtin_memset(&var_50, 0, 0x20)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rcx_1
rcx_1.b = rax_2 != 0
int64_t var_28 = var_50.q
void* rax_4 = var_50:8.q
*(arg2 + 0x20) = rcx_1 + rax_2
void* var_20 = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

int64_t rax_5 = *arg1
void** const var_30 = &data_142e259e0
int64_t var_18 = 0
int64_t var_10 = 0
int64_t result = (*(rax_5 + 0x9a0))(arg1, &var_30)
var_58 = &data_142e259e0
int64_t var_40

if (var_40 != 0)
    result = sub_140a74f90(var_40)

int64_t* rbx_1 = var_50:8.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
