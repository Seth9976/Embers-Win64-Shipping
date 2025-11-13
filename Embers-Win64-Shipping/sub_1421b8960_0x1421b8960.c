// 函数: sub_1421b8960
// 地址: 0x1421b8960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbp = *(arg2 + 0xa0)
int32_t i = 0

if (rbp == 0)
    rbp = nullptr
else
    void* rax_1 = sub_1424a23e0()
    void* rdx = *(rbp + 0x10)
    int64_t rax = sx.q(*(rax_1 + 0x38))
    
    if (rax.d s> *(rdx + 0x38))
        rbp = nullptr
    else if (*(*(rdx + 0x30) + (rax << 3)) != rax_1 + 0x30)
        rbp = nullptr

if (arg3[1].d s<= 0)
    return 

int64_t rbx_1 = 0

do
    int64_t rsi_1 = *arg3
    int32_t zmm0 = *(rbx_1 + rsi_1 + 0xc)
    int64_t var_38 = *(rbx_1 + rsi_1 + 4)
    int32_t var_2c_1 = *(rbx_1 + rsi_1 + 0x38)
    int32_t var_30_1 = zmm0
    sub_1405a9f90(arg2 + 0x460, &var_38)
    
    if (rbp != 0)
        zmm0 = *(rbx_1 + rsi_1 + 0xc)
        int64_t var_28 = *(rbx_1 + rsi_1 + 4)
        int32_t var_1c_1 = *(rbx_1 + rsi_1 + 0x38)
        int32_t var_20_1 = zmm0
        sub_1405a9f90(rbp + 0x240, &var_28)
    
    i += 1
    rbx_1 += 0x40
while (i s< arg3[1].d)
