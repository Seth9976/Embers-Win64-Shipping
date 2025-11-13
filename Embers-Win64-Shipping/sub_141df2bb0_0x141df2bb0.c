// 函数: sub_141df2bb0
// 地址: 0x141df2bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_38
sub_141df26b0(&var_38, arg1)
void* var_28
int32_t i_1

for (int32_t i = i_1; i s< *(var_28 + 0x10); i = i_1)
    void* rdx_1 = var_38
    void* rax_1 = *(rdx_1 + 0x100)
    
    if (rax_1 != 0)
        rdx_1 = rax_1
    
    int64_t rcx_1 = *(rdx_1 + (sx.q(i) << 6) + 0x28)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    int32_t var_2c
    int32_t var_20 = var_20 & not.d(var_2c)
    void var_30
    sub_140b4fe60(&var_30)

bool cond:0 = *(arg1 + 0x10c) == 0
*(arg1 + 0x108) = 0

if (not(cond:0))
    sub_141e0be30(arg1, 0)

*(arg1 + 0x128) = 0xffffffff
*(arg1 + 0x12c) = 0
void* result = sub_141df7e10(arg1 + 0x110, 0)
int64_t rcx_5 = *(arg1 + 0x118)

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = *(arg1 + 0x100)

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6) __tailcall
