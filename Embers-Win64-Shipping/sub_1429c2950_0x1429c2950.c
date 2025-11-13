// 函数: sub_1429c2950
// 地址: 0x1429c2950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
char temp0 = *(arg1 + 0xf9)
*(arg1 + 0xf9) = 1
int64_t rax
rax.b = temp0
int64_t i_2 = (*(arg1 + 0xe8) - *(arg1 + 0xe0)) s>> 3

if (i_2 != 0)
    int64_t i_1 = i_2
    int64_t i
    
    do
        sub_1429c3350(arg1 + 8)
        sub_1429c3430(arg1 + 0x80)
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t rbx_1 = 0

if (i_2 != 0)
    do
        int64_t* rcx_2 = *(*(arg1 + 0xe0) + (rbx_1 << 3))
        
        if (rcx_2 != 0)
            (**rcx_2)(rcx_2, 1)
        
        rbx_1 += 1
    while (rbx_1 != i_2)

int32_t code = _Mtx_lock(arg1 + 0x18)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

*(arg1 + 0xe8) = *(arg1 + 0xe0)
*(arg1 + 0x70) = *(arg1 + 0x68)
char temp0_1 = *(arg1 + 0xf9)
*(arg1 + 0xf9) = 0
int64_t rbp
rbp.b = temp0_1
int32_t code_1 = _Mtx_unlock(arg1 + 0x18)

if (code_1 == 0)
    return code_1

std::_Throw_C_error(code_1)
noreturn
