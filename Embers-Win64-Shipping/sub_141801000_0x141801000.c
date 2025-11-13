// 函数: sub_141801000
// 地址: 0x141801000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
int16_t* var_48 = nullptr
int32_t var_40 = 0
sub_1405947f0(&var_48, 2)
int32_t rbx = var_40 + 2

if (rbx s> 0)
    sub_140594770(&var_48)

int16_t* r15 = var_48
sub_1405a7220(r15, 2, &(*U""\tv 0")[3], 2, 0x3f)
int16_t* const rdx_1 = &data_142d40450
char rsi = 1

if (rbx != 0)
    rdx_1 = r15

int16_t* rbx_1
char r14

if (sub_140a23cf0(arg2, rdx_1, 1, 0, 0xffffffff) != 0xffffffff)
    rbx_1 = var_48
    r14 = 1
else
    var_48 = nullptr
    int32_t var_40_1 = 0
    sub_1405947f0(&var_48, 2)
    int32_t rsi_1 = var_40_1 + 2
    
    if (rsi_1 s> 0)
        sub_140594770(&var_48)
    
    rbx_1 = var_48
    sub_1405a7220(rbx_1, 2, &data_142d63b88, 2, 0x3f)
    rsi = 3
    int16_t* const rdx_3 = &data_142d40450
    
    if (rsi_1 != 0)
        rdx_3 = rbx_1
    
    if (sub_140a23cf0(arg2, rdx_3, 1, 0, 0xffffffff) != 0xffffffff)
        r14 = 1
    else
        r14 = 0

if ((rsi & 2) != 0 && rbx_1 != 0)
    sub_140a74f90(rbx_1)

if (r15 != 0)
    sub_140a74f90(r15)

if (r14 == 0)
    sub_140596d10(arg1, arg2)
else
    int32_t r14_1 = 0
    int32_t r15_1 = 0
    int64_t* rax_2 = sub_140a300d0(arg2, &var_48, &data_142d404d4, &data_142d40450, 1)
    int64_t rsi_2 = 0
    void var_38
    
    if (&var_38 != rax_2)
        rsi_2 = *rax_2
        *rax_2 = 0
        r14_1 = rax_2[1].d
        r15_1 = *(rax_2 + 0xc)
        rax_2[1] = 0
    
    int16_t* rcx_11 = var_48
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int64_t* rax_3 = sub_140a300d0(arg2, &var_48, &data_142d5a024, &data_142e5c1c0, 1)
    
    if (&var_38 != rax_3)
        if (rsi_2 != 0)
            sub_140a74f90(rsi_2)
        
        rsi_2 = *rax_3
        *rax_3 = 0
        r14_1 = rax_3[1].d
        r15_1 = *(rax_3 + 0xc)
        rax_3[1] = 0
    
    int16_t* rcx_14 = var_48
    
    if (rcx_14 != 0)
        sub_140a74f90(rcx_14)
    
    *arg1 = rsi_2
    arg1[1].d = r14_1
    *(arg1 + 0xc) = r15_1

return arg1
