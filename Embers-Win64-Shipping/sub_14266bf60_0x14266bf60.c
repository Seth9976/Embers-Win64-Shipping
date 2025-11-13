// 函数: sub_14266bf60
// 地址: 0x14266bf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f71424 != 0)
    return 

int64_t rax = (*(*arg1 + 0x150))()

if (rax == 0)
    return 

void* rbx_1 = *(rax + 0x120)

if (rbx_1 == 0)
    return 

void* rax_2 = sub_14269bba0()
void* rdx = *(rbx_1 + 0x10)
rax = sx.q(*(rax_2 + 0x38))

if (rax.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax << 3)) != rax_2 + 0x30)
    return 

bool cond:1_1 = data_143b5150d == 0
void* var_18 = rbx_1 + 0x248
void* var_10_1 = rbx_1 + 0x350
void* rax_4

if (cond:1_1 || data_143f71424 != 0)
    rax_4.b = 0
else
    rax_4.b = 1

if (rax_4.b == 0)
    rax = sub_140d21950(arg1, sub_14254cd20())
    
    if (rax != 0)
        sub_14266ce10(&var_18, arg1, rax, 0)
else
    sub_14266bcf0(&var_18, arg1)

if (arg2 == 0)
    return 

uint64_t var_28 = 0
int32_t var_20_1 = 0
rax = sub_142656900(arg1, &var_28)
uint64_t rbx_2 = var_28

if (rax.d s> 0)
    int64_t rsi_1 = rbx_2 + (sx.q(var_20_1) << 3)
    
    if (rbx_2 != rsi_1)
        do
            sub_14266bcf0(&var_18, arg1)
            rbx_2 += 8
        while (rbx_2 != rsi_1)
        
        rbx_2 = var_28

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)
