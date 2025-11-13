// 函数: sub_1424d6b70
// 地址: 0x1424d6b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_50
__builtin_memset(&var_50, 0, 0x18)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_50, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int64_t var_68
__builtin_memset(&var_68, 0, 0x18)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_68, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
int64_t var_38 = var_68
int128_t var_60
int64_t var_30 = var_60.q
void* rax_6 = var_60:8.q
*(arg2 + 0x20) = rdi + rax_3
void* var_28 = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

int64_t var_20 = var_50
int128_t var_48
int64_t var_18 = var_48.q
void* rax_9 = var_48:8.q
void* var_10 = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

char result = sub_1420bc970(&var_20, &var_38, arg4)
int64_t* rbx_1 = var_60:8.q
*arg3 = result

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = var_48:8.q

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
