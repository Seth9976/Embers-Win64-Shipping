// 函数: sub_142b63300
// 地址: 0x142b63300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_144016e50
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable*** rbx = nullptr
int32_t arg_10 = 0
char rax_1

if (rax != 2)
    rax_1 = sub_142a85f00(&data_144016e50)

int32_t rcx_1

if (rax == 2 || rax_1 == 0)
    int32_t rax_5 = data_144016e54
    rcx_1 = arg_10
    
    if (rax_5 s> 0)
        rcx_1 = rax_5
    
    arg_10 = rcx_1
else
    sub_142aa75d0(0x18, sub_142b63440)
    struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable*** rax_2 = j_sub_142a7dd00(0x18)
    
    if (rax_2 != 0)
        rbx = sub_142b63050(rax_2, &arg_10)
    
    int32_t rax_4 = arg_10
    data_144016e48 = rbx
    
    if (rbx == 0)
        rax_4 = 7
    
    arg_10 = rax_4
    data_144016e54 = rax_4
    sub_142a85e80(&data_144016e50)
    rcx_1 = arg_10

if (rcx_1 s> 0)
    return 0

if (arg1 - 1 u<= 0x19)
    switch (arg1)
        case 1, 2, 3, 0x19, 0x1a
            return *data_144016e48
        case 4, 5, 6, 7, 0xf, 0x10
            return *(data_144016e48 + 8)

return *(data_144016e48 + 0x10)
