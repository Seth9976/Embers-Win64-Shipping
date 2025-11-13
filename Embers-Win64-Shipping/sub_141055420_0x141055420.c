// 函数: sub_141055420
// 地址: 0x141055420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *(arg3 + 0xc8)
void* i = arg3
uint8_t rdx_1 = (*(arg3 + 0x20) u>> 5).b & 1
int32_t var_34 = 0
int32_t var_54 = 1
int32_t rcx_1 = (&data_1439c85fc)[zx.q(arg4) * 0xa]
int32_t var_58

if (rcx_1 == 0x1b)
    var_58 = 0x1c
else
    int32_t rax_1 = 0x57
    
    if (rcx_1 != 0x5a)
        rax_1 = rcx_1
    
    var_58 = rax_1

int64_t r8 = *(arg3 + 0xc0)
int32_t var_38 = 0
int64_t var_40 = 0
int32_t var_44 = 0

if (rdx_1 == 0)
    int64_t rcx_2 = sx.q((&data_1439c85f4)[zx.q(arg4) * 0xa])
    uint32_t var_48_1 = (divu.dp.q(0:r10, rcx_2)).d
    uint64_t var_50_1 = divu.dp.q(0:r8, rcx_2)
else
    uint64_t var_50 = r8 u>> 2
    int32_t var_38_1 = 1
    var_58 = 0x27
    uint32_t var_48 = (r10 u>> 2).d

void*** rbp = nullptr
void*** rsi = nullptr

do
    void* rbx_1 = *(i + 0x30)
    void*** rax_6 = j_sub_140a82f30(0xa8)
    void*** rbx_2
    
    if (rax_6 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = sub_14103ff30(rax_6, rbx_1, &var_58, i + 0x70, nullptr)
    
    if (rsi != 0)
        sub_14081d930(&rsi[0x11], rbx_2)
        
        if (rbx_2 != 0)
            rbx_2[0x12].b = 0
    else
        rbp = rbx_2
    
    i = *(i + 0xe0)
    rsi = rbx_2
while (i != 0)

*arg2 = rbp

if (rbp != 0)
    rbp[1].d += 1

return arg2
