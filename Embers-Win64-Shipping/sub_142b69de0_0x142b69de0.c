// 函数: sub_142b69de0
// 地址: 0x142b69de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_144016ed0
int16_t rbx = 0
int32_t arg_10 = 0
int64_t rsi = sx.q(arg1)
char rax_1

if (rax != 2)
    rax_1 = sub_142a85f00(&data_144016ed0)

int32_t rdi_1

if (rax == 2 || rax_1 == 0)
    int32_t rax_4 = data_144016ed4
    rdi_1 = arg_10
    
    if (rax_4 s> 0)
        rdi_1 = rax_4
else
    struct icu_64::UObject::icu_64::Normalizer2Impl::VTable** rax_2 = j_sub_142a7dd00(0x50)
    int64_t** rax_3
    
    if (rax_2 == 0)
        rdi_1 = 7
        rax_3 = nullptr
    else
        rax_2[4] = 0
        *rax_2 = &icu_64::Normalizer2Impl::`vftable'{for `icu_64::UObject'}
        rax_2[9] = 0
        rax_2[8].d = 0
        sub_142b1e930(rax_2, &data_143671e50, &data_143676920, &data_143676950, &data_14367a5b0)
        rax_3 = sub_142b68980(rax_2, &arg_10)
        rdi_1 = arg_10
    
    data_144016ec8 = rax_3
    sub_142a7db20(0xb, sub_142b69f30)
    data_144016ed4 = rdi_1
    sub_142a85e80(&data_144016ed0)

int64_t* r8 = data_144016ec8
void* const r8_1

if (r8 == 0)
    r8_1 = nullptr
else
    r8_1 = *r8

if (rdi_1 s<= 0 && rsi.d s>= zx.d(*(r8_1 + 8)))
    if (rsi.d s> 0xffff)
        rbx = sub_142b1def0(r8_1, rsi.d)
    else
        uint8_t rdx_2 = *((rsi s>> 8) + *(r8_1 + 0x38))
        
        if (rdx_2 != 0 && (rdx_2 u>> ((rsi.d s>> 5).b & 7) & 1) != 0)
            rbx = sub_142b1def0(r8_1, rsi.d)

return zx.q(rbx)
