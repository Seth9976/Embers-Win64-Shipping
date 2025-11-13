// 函数: sub_141a69c60
// 地址: 0x141a69c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg1
int64_t var_18 = (*(r8 + 0x90)).q
int64_t rax_1 = (*(*arg2 + 0x90)).q
int64_t zmm0 = (*(r8 + 0x90)).q
int64_t arg_10 = rax_1
int64_t arg_8 = zmm0
int64_t* rdx

if (zmm0.b == 2)
    rdx = &arg_8
else if (rax_1.b != 2)
    uint32_t rax_2 = (rax_1 u>> 0x20).d
    uint32_t rdx_2 = (zmm0 u>> 0x20).d
    
    if (rdx_2 s< rax_2)
        rdx = &arg_8
    else if (rdx_2 s<= rax_2)
        rdx = &arg_8
        
        if (zmm0.b != 1)
            rdx = &arg_10
    else
        rdx = &arg_10
else
    rdx = &arg_10

char rcx_1 = *rdx
int64_t result

if (rcx_1 == var_18.b && (rcx_1 == 2 || *(rdx + 4) == (var_18 u>> 0x20).d))
    result.b = 1
    return result

result.b = 0
return result
