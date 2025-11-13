// 函数: sub_14089fc00
// 地址: 0x14089fc00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg4
int32_t rdi = arg3
void arg_10

if (arg3 == 0)
    int64_t* rcx = *(arg1 + 0xb8)
    rdi = *(*(*rcx + 0x18))(rcx, &arg_10)

if (rbx == 0)
    int64_t* rcx_1 = *(arg1 + 0xb8)
    rbx = *((*(*rcx_1 + 0x18))(rcx_1, &arg_10) + 4)

int64_t* rcx_2 = *(arg2 + 0x38)
int32_t arg_28 = arg_28
int32_t arg_18 = rbx
int32_t arg_20 = rdi

if (rcx_2 != 0)
    return (*(*rcx_2 + 0x10))(rcx_2, &arg_20, &arg_18, &arg_28)

std::_Xbad_function_call()
noreturn
