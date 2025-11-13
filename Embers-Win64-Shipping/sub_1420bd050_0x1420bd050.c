// 函数: sub_1420bd050
// 地址: 0x1420bd050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140d3c6e0(arg1 + 8) == 0)
    int64_t rcx_10 = *arg2
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int64_t rax
    rax.b = 0
    return rax

uint32_t count = arg2[1].d
int64_t rsi = *arg2
int64_t var_38 = 0
int64_t rsi_1

if (count != 0)
    sub_1405da9e0(&var_38, count, 0)
    rsi_1 = var_38
    memcpy(rsi_1, rsi, count)
else
    rsi_1 = 0

int64_t rax_1 = sub_140d3c6e0(arg1 + 8)
var_38 = 0
uint32_t count_1 = count
int96_t zmm0 = (*(arg1 + 0x10)).12

if (count != 0)
    sub_1405da9e0(&var_38, count, 0)
    memcpy(var_38, rsi_1, count)
else
    uint32_t count_2 = count

zmm0.q(sx.q(zmm0:8.d) + rax_1, &var_38)

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

int64_t rcx_9 = *arg2

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rax_2
rax_2.b = 1
return rax_2
