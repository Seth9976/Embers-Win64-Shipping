// 函数: sub_142b7dde0
// 地址: 0x142b7dde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2

if (*arg3 s> 0 || *(arg1 + 0x261) == 0)
    return 

int64_t* rcx = *(arg1 + 0x268)

if (rcx != 0)
    (**rcx)(rcx, 1)

struct icu_64::UObject::icu_64::CollationFastLatinBuilder::VTable** rax = j_sub_142a7dd00(0x1cd0)
struct icu_64::UObject::icu_64::CollationFastLatinBuilder::VTable** arg_18 = rax

if (rax != 0)
    rax = sub_142b8dc10(rax, arg3)

*(arg1 + 0x268) = rax

if (rax == 0)
    *arg3 = 7
    return 

if (sub_142b8e820(rax, arg2, arg3).b == 0)
    int64_t* rcx_5 = *(arg1 + 0x268)
    
    if (rcx_5 != 0)
        (**rcx_5)(rcx_5, 1)
    
    *(arg1 + 0x268) = 0
    return 

int64_t* rdi_1 = *(arg1 + 0x268)
char rax_2 = (rdi_1[0x392].w).b
void* buffer1

if ((rax_2 & 0x11) == 0)
    buffer1 = rdi_1 + 0x1c92
    
    if ((rax_2 & 2) == 0)
        buffer1 = rdi_1[0x394]
else
    buffer1 = nullptr

rax = zx.q(rdi_1[0x392].w)
int32_t rsi_2

if (rax.w s< 0)
    rsi_2 = *(rdi_1 + 0x1c94)
else
    rsi_2 = sx.d(rax.w) s>> 5

void* rdx_2 = *(arg1 + 0x10)

if (rdx_2 != 0 && rsi_2 == *(rdx_2 + 0x60)
        && memcmp(buffer1, *(rdx_2 + 0x58), sx.q(rsi_2 * 2)).d == 0)
    if (rdi_1 != 0)
        (**rdi_1)(rdi_1, 1)
    
    *(arg1 + 0x268) = 0
    buffer1 = (*(arg1 + 0x10))[0xb]

arg2[0xb] = buffer1
arg2[0xc].d = rsi_2
