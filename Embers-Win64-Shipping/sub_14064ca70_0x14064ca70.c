// 函数: sub_14064ca70
// 地址: 0x14064ca70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg2 + 0x20)
int64_t rax
rax.b = rcx != 0
*(arg2 + 0x20) = rax + rcx
sub_140af2b60()
int64_t rsi = 0
int32_t rdi = 0
int64_t var_18 = 0
int32_t rax_2 = 0
int64_t var_10 = 0

if (data_143dbb3f0 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while ((&data_143dbb3f0)[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_18, rbx_1.d + 1)
        rax_2 = var_10:4.d
        rdi = var_10.d
        rsi = var_18
    
    rdi += rbx_1.d + 1
    var_10.d = rdi
    
    if (rdi s> rax_2)
        sub_140594770(&var_18)
        rdi = var_10.d
        rsi = var_18
    
    UnDecorator::getReferenceType(rsi, &data_143dbb3f0, (rbx_1.d + 1) * 2)

int64_t* result = &var_18

if (arg3 != &var_18)
    int32_t r8_2 = *(arg3 + 0xc)
    arg3[1].d = rdi
    
    if (rdi != 0 || r8_2 != 0)
        sub_1405a4c70(arg3, rdi, r8_2)
        result = memcpy(*arg3, rsi, rdi * 2)
    else
        *(arg3 + 0xc) = rdi

if (rsi == 0)
    return result

return sub_140a74f90(rsi) __tailcall
