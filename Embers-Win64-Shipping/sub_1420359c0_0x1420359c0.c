// 函数: sub_1420359c0
// 地址: 0x1420359c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdi = arg3

if (arg3 == 0)
    void* rdi_1 = *(arg1 + 0x30)
    
    if (rdi_1 == 0)
        rdi = nullptr
    else
        rdi = *(rdi_1 + 0x278)

if (rdi == 0)
    uint64_t result
    result.b = 0
    return result

sub_142430a60(rdi)
int64_t var_88
sub_1423fd810(&var_88, nullptr)
int64_t var_60

if (&var_60 != arg2)
    int32_t rbx_1 = arg2[1].d
    int64_t rsi_1 = *arg2
    int32_t var_58_1 = rbx_1
    int32_t var_54
    
    if (rbx_1 != 0 || var_54 != 0)
        sub_1405a4c70(&var_60, rbx_1, var_54)
        memcpy(var_60, rsi_1, rbx_1 * 2)
    else
        int32_t var_54_1 = 0

int64_t* i = *arg4
void* rsi_4

for (rsi_4 = &i[sx.q(arg4[1].d) * 2]; i != rsi_4; i = &i[2])
    wchar16* rdx_2
    
    if (i[1].d == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *i
    
    sub_142401e40(&var_88, rdx_2)

int32_t var_ac_1 = 0
void arg_18
int32_t rcx_6 = *sub_140b5e500(&arg_18, 0x11e)
int32_t var_b4_1 = 0
void var_98
int64_t r8_3 = (*sub_140b5e500(&var_98, 0x11e)).q

if (sub_1423d6c20(data_143f5b298, rdi, r8_3, rcx_6.q) != 0)
    int32_t var_b4_2 = 0
    int32_t rcx_11 = *sub_140b5e500(&arg_18, 0x11e)
    int64_t* rax_4 = sub_1423dcd80(data_143f5b298, rdi, rcx_11.q)
    int64_t* rbx_2 = rax_4
    void* rax_5
    void* rcx_13
    int64_t rdx_5
    
    if (rax_4 != 0)
        rax_5 = sub_14249b2a0()
        rcx_13 = rbx_2[2]
        rdx_5 = sx.q(*(rax_5 + 0x38))
    
    if (rax_4 == 0 || rdx_5.d s> *(rcx_13 + 0x38)
            || *(*(rcx_13 + 0x30) + (rdx_5 << 3)) != rax_5 + 0x30)
        rbx_2 = nullptr
    
    *(rdi + 0xf0) = rbx_2
    sub_14217ba70(rbx_2, rdi)
    int64_t var_a8 = 0
    int64_t* rcx_16 = *(rdi + 0xf0)
    
    if ((*(*rcx_16 + 0x278))(rcx_16, rdi + 0x28, &var_88, &var_a8, rcx_11, rcx_6, var_a8, 0) != 0)
        sub_140599090(&data_1439aa988)
        rsi_4.b = 1
    else
        sub_142430a60(rdi)
        rsi_4.b = 0
    
    int64_t rcx_18 = var_a8
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
else
    rsi_4.b = 0

int64_t var_30

if (var_30 != 0)
    sub_140a74f90(var_30)

int32_t i_3
int32_t i_2 = i_3
int64_t* var_40
int64_t* rbx_3 = var_40

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_20 = *rbx_3
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        rbx_3 = &rbx_3[2]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rbx_3 = var_40

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

int64_t var_50

if (var_50 != 0)
    sub_140a74f90(var_50)

int64_t rcx_23 = var_60

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t rcx_25 = var_88

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

return zx.q(rsi_4.b)
