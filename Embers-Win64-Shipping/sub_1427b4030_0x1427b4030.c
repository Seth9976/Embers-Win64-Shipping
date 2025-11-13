// 函数: sub_1427b4030
// 地址: 0x1427b4030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_1427bb630()
void* rbp = rax[0x23]

if (rbp == 0)
    int64_t rdx = *rax
    (*(rdx + 0x390))(rax, rdx)
    rbp = rax[0x23]

void* rdx_2 = *(rbp + 0x40)

if (rdx_2 == 0)
    void* rax_1 = sub_140cde0b0()
    sub_140d19010(rax_1, 
        NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
    "class constructor) as it produces incon")
    int64_t arg_8 = 0
    void* rax_3 = sub_140d2dfc0(sub_1427bb630(), rax_1, 0, 0, 0, 0, 0, 0, 0)
    rdx_2 = rax_3
    *(rbp + 0x40) = rax_3

if (arg3 == 0)
    *(arg1 + 0x50) = *(rdx_2 + 0x50)
else
    *(rdx_2 + 0x50) = *(arg1 + 0x50)

if (arg3 == 0)
    *(arg1 + 0x54) = *(rdx_2 + 0x54)
else
    *(rdx_2 + 0x54) = *(arg1 + 0x54)

if (arg3 == 0)
    *(arg1 + 0x58) = *(rdx_2 + 0x58)
else
    *(rdx_2 + 0x58) = *(arg1 + 0x58)

if (arg3 == 0)
    *(arg1 + 0x60) = *(rdx_2 + 0x60)
else
    *(rdx_2 + 0x60) = *(arg1 + 0x60)

if (arg3 == 0)
    int32_t rax_12 = *(rdx_2 + 0x5c)
    *(arg1 + 0x5c) = rax_12
    return rax_12

int32_t rax_11 = *(arg1 + 0x5c)
*(rdx_2 + 0x5c) = rax_11
return rax_11
