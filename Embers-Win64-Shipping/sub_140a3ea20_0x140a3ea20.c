// 函数: sub_140a3ea20
// 地址: 0x140a3ea20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x30) == 0)
    return sub_140a3e8b0(arg1 + 0x48, u"PCallStack", &data_142d40450)

int32_t* var_48 = nullptr
int32_t var_40 = 0
sub_1405947f0(&var_48, 3)
int32_t rax_1 = var_40 + 3

if (rax_1 s> 0)
    sub_140594770(&var_48)

int32_t r14 = 0
int32_t* rcx_3 = var_48
int32_t i = 0
*rcx_3 = 0xa000d
rcx_3[1].w = 0

while (i s>= 0)
    if (i s>= *(arg1 + 0x30))
        break
    
    int32_t rdx_1 = *((sx.q(i) << 5) + *(arg1 + 0x28) + 8)
    int32_t rax_3 = rdx_1 - 1
    
    if (rdx_1 == 0)
        rax_3 = 0
    
    if (r14 s>= rax_3)
        rax_3 = r14
    
    i += 1
    r14 = rax_3

int32_t i_1 = 0
int16_t* rsi = &data_142d40450

for (; i_1 s>= 0; i_1 += 1)
    if (i_1 s>= *(arg1 + 0x30))
        break
    
    int64_t rax_4 = *(arg1 + 0x28)
    int64_t rcx_7 = sx.q(i_1) << 5
    int64_t* rdx_2 = rcx_7 + rax_4
    
    if (*(rcx_7 + rax_4 + 8) != 0)
        *rdx_2
    
    int64_t var_50_1 = *(rcx_7 + rax_4 + 0x18)
    int64_t var_58_1 = rdx_2[2]
    int64_t var_28
    sub_140a2e390(&var_28, u"%-*s 0x%016x + %-8x", zx.q(r14 + 1))
    int32_t var_20
    int32_t r8_2
    
    if (var_20 == 0)
        r8_2 = 0
    else
        r8_2 = var_20 - 1
    
    sub_140a20ba0(&var_48, var_28, r8_2)
    int64_t rcx_10 = var_28
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    sub_140a20ba0(&var_48, &data_142d6acb4, 2)

int16_t* rdx_4 = &data_142d40450
int16_t* var_38 = nullptr

if (rax_1 != 0)
    rdx_4 = var_48

int32_t var_30 = 0
sub_140a3f2f0(&var_38, rdx_4)

if (var_30 != 0)
    rsi = var_38

int64_t result = sub_140a3e8b0(arg1 + 0x48, u"PCallStack", rsi)
int16_t* rcx_14 = var_38

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

int32_t* rcx_15 = var_48

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
