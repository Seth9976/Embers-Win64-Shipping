// 函数: sub_1424d7790
// 地址: 0x1424d7790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_3e = 0
int32_t var_3c
__builtin_memset(&var_3c, 0, 0x2c)
int16_t var_40 = arg4 & 0xfe00
void** const var_48 = &data_142d7f6a8
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void*** rax_2 = *(arg2 + 0x38)
void** const* rcx_1 = &var_48

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
int32_t result = sub_1408e52d0(rcx_1)
int128_t var_28
int64_t* rbx_1 = var_28:8.q
*arg3 = result

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
