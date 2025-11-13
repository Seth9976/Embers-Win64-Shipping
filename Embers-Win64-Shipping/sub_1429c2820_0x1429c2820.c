// 函数: sub_1429c2820
// 地址: 0x1429c2820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t var_28 = -2

if (*(arg1 + 0xf8) == 0)
    int64_t* rbx_1 = arg_10
    (*(*rbx_1 + 8))(rbx_1)
    int32_t* rcx_8 = *rbx_1[1]
    int32_t rax_5 = *rcx_8
    *rcx_8 -= 1
    
    if (rax_5 == 1)
        sub_1429c3350(&rcx_8[2])
    
    jump(**arg_10)

void* var_20 = arg1 + 0x18
int32_t code = _Mtx_lock(arg1 + 0x18)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_18 = 1
int64_t* rdx = *(arg1 + 0x70)

if (*(arg1 + 0x78) == rdx)
    sub_1427c6dc0(arg1 + 0x68, rdx, &arg_10)
else
    *rdx = arg_10
    *(arg1 + 0x70) += 8

int32_t code_1 = _Mtx_unlock(arg1 + 0x18)

if (code_1 == 0)
    return sub_1429c3350(arg1 + 8) __tailcall

std::_Throw_C_error(code_1)
noreturn
