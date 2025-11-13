// 函数: sub_142b69c00
// 地址: 0x142b69c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_144016ed0
int32_t arg_10 = 0
char rax_1

if (rax != 2)
    rax_1 = sub_142a85f00(&data_144016ed0)

int32_t rbx_1

if (rax == 2 || rax_1 == 0)
    int32_t rax_4 = data_144016ed4
    rbx_1 = arg_10
    
    if (rax_4 s> 0)
        rbx_1 = rax_4
else
    struct icu_64::UObject::icu_64::Normalizer2Impl::VTable** rax_2 = j_sub_142a7dd00(0x50)
    int64_t** rax_3
    
    if (rax_2 == 0)
        rbx_1 = 7
        rax_3 = nullptr
    else
        rax_2[4] = 0
        *rax_2 = &icu_64::Normalizer2Impl::`vftable'{for `icu_64::UObject'}
        rax_2[9] = 0
        rax_2[8].d = 0
        sub_142b1e930(rax_2, &data_143671e50, &data_143676920, &data_143676950, &data_14367a5b0)
        rax_3 = sub_142b68980(rax_2, &arg_10)
        rbx_1 = arg_10
    
    data_144016ec8 = rax_3
    sub_142a7db20(0xb, sub_142b69f30)
    data_144016ed4 = rbx_1
    sub_142a85e80(&data_144016ed0)

void* result = data_144016ec8
int64_t* rcx_2 = result + 0x20

if (result == 0)
    rcx_2 = nullptr

if (rbx_1 s<= 0)
    jump(*(*rcx_2 + 0x48))

result.b = 0
return result
