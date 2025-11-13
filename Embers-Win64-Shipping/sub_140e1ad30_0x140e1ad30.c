// 函数: sub_140e1ad30
// 地址: 0x140e1ad30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2

if (arg3 == 0)
    *arg1 = arg2
    return arg1

int32_t rax_1 = 0
int16_t* rsi = nullptr
int32_t rdi = 0
int32_t var_3c = 0
int16_t* var_48 = nullptr
int32_t var_40 = 0

if (*arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_48, rbx_1.d + 1)
        rax_1 = var_3c
        rdi = var_40
        rsi = var_48
    
    rdi += rbx_1.d + 1
    
    if (rdi s> rax_1)
        sub_140594770(&var_48)
        rsi = var_48
    
    sub_1405a7220(rsi, rbx_1.d + 1, arg3, rbx_1.d + 1, 0x3f)

int64_t var_38
int64_t* rax_2 = sub_140b63b70(&arg_10, &var_38)
int16_t** rdx_4 = rax_2
int32_t rax_3 = rax_2[1].d
int16_t* rbx_3

if (rax_3 s> 1)
    int32_t rdi_1
    
    if (rdi == 0)
        rdi_1 = 0
    else
        rdi_1 = rdi - 1
    
    int32_t r8_1
    
    if (rax_3 == 0)
        r8_1 = rax_3 + 1
    
    if (rax_3 != 0 || rdi_1 == 0)
        r8_1 = 0
    
    int16_t* rax_4 = *rdx_4
    *rdx_4 = nullptr
    int32_t rcx_4 = *(rdx_4 + 0xc)
    var_48 = rax_4
    int32_t rax_5 = rdx_4[1].d
    rdx_4[1] = 0
    int32_t var_3c_1 = rcx_4
    int32_t rdx_6 = rax_5 + r8_1 + rdi_1
    
    if (rdx_6 s> rcx_4)
        sub_1405947f0(&var_48, rdx_6)
    
    sub_140a20ba0(&var_48, rsi, rdi_1)
    rbx_3 = var_48
    rdi = rax_5
    var_48 = nullptr
    int32_t var_40_2
    var_40_2.q = 0
else
    rbx_3 = rsi
    rsi = nullptr

int16_t* rdx_8 = &data_142d40450

if (rdi != 0)
    rdx_8 = rbx_3

sub_140b58260(arg1, rdx_8, 1)

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

int64_t rcx_9 = var_38

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

if (rsi != 0)
    sub_140a74f90(rsi)

return arg1
