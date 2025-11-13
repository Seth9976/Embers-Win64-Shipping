// 函数: sub_140ca8c20
// 地址: 0x140ca8c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cebe30(arg1, arg2)
void* rbp = nullptr
void* var_28 = arg1
void* const i_1

if (arg1 == 0)
    i_1 = nullptr
else
    i_1 = *(arg1 + 0x50)

int32_t var_18 = 0xffffffff
int16_t var_14 = 0x100
char var_12 = 0
uint8_t result = sub_1406328d0(&var_28)
void* i_2

for (void* const i = i_1; i != 0; i = i_2)
    if (sub_140cc1840(i) == 0)
        *(i + 0x30) |= arg2
    
    i_2 = *(i + 0x20)
    result = sub_1406328d0(&var_28)

void* r8 = *(arg1 + 0x118)

if (r8 != 0)
    int32_t rax_1 = *(r8 + 0xc)
    
    if (rax_1 s< data_143e1d9b4)
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rbp = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
    
    result = (*(rbp + 8) u>> 0x1e).b
    
    if ((result & 1) == 0)
        *(r8 + 8) |= arg2
        int64_t* rcx_7 = *(arg1 + 0x118)
        return (*(*rcx_7 + 0x1a8))(rcx_7, zx.q(arg2))

return result
