// 函数: sub_141421690
// 地址: 0x141421690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = arg1 + 0x30
void* r10 = *(r11 + 0xf0)

if (r10 != 0)
    r11 = r10

void* rbx_2 = sx.q(mods.dp.d(sx.q(*(arg1 + 0x19c)), arg4)) * 0x50 + r11
int32_t arg_20
sub_14141ea70(rbx_2, &arg_20, arg3)
int64_t rax_3 = sx.q(arg_20)
void* const result

if (rax_3.d == 0xffffffff)
    result = nullptr
else
    result = rax_3 * 0x30 + *rbx_2

int64_t arg_8 = 0
int64_t* rdx_3 = result + 0x18

if (result == 0)
    rdx_3 = nullptr

int64_t r9
r9.b = data_1439c7a38 == 1

if (rdx_3 != 0)
    int64_t* rcx_1 = data_143f0f180
    
    if ((*(*rcx_1 + 0x328))(rcx_1, *rdx_3, &arg_8, r9, 0xffffffff).b != 0)
        result.b = arg_8 == 0
        return result

result.b = 0
return result
