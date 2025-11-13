// 函数: sub_140a3a270
// 地址: 0x140a3a270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16 const* const rsi = u"false"

if (*arg3 != 0)
    rsi = u"true"

int16_t* rdi = nullptr
int32_t rax = 0
int16_t* var_28 = nullptr
int32_t var_1c = 0
int32_t rdx = 0
int32_t var_20 = 0
int32_t rbp_1
int16_t* const r8_2

if (*rsi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rsi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_28, rbx_1.d + 1)
        rax = var_1c
        rdx = var_20
        rdi = var_28
    
    rbp_1 = rbx_1.d + 1 + rdx
    
    if (rbp_1 s> rax)
        sub_140594770(&var_28)
        rdi = var_28
    
    memcpy(rdi, rsi, (rbx_1.d + 1) * 2)
    r8_2 = rdi

if (*rsi == 0 || rbp_1 == 0)
    r8_2 = &data_142d40450

int64_t result = sub_140a3e8b0(arg1, arg2, r8_2)

if (rdi == 0)
    return result

return sub_140a74f90(rdi) __tailcall
