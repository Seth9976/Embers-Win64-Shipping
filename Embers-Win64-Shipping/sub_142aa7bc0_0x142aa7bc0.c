// 函数: sub_142aa7bc0
// 地址: 0x142aa7bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
uint64_t i_1 = zx.q(arg2)
int64_t rbx = sx.q(arg2)
int64_t* rax

if (arg2 != 0)
    int64_t rax_1 = 0x70 * rbx
    
    if (mulu.dp.q(0x70, rbx) u>> 0x40 != zx.o(0))
        rax_1 = -1
    
    uint64_t rax_2 = rax_1 + 8
    
    if (rax_1 u>= -8)
        rax_2 = -1
    
    rax = j_sub_142a7dd00(rax_2)
else
    rax = j_sub_140a82f30(zx.q(arg2 + 8))

int64_t* arg_18 = rax
void (* result)()

if (rax == 0)
    result = nullptr
else
    *rax = rbx
    result = &rax[1]
    int64_t (* var_28_1)(struct icu_64::UObject::icu_64::Formattable::VTable** arg1) = sub_142aa7840
    `eh vector constructor iterator'(result, 0x70, rbx)

if (result != 0 && i_1.d s> 0)
    void* result_1 = result
    uint64_t i
    
    do
        sub_142aa7870(result_1, arg1 - result + result_1)
        result_1 += 0x70
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
