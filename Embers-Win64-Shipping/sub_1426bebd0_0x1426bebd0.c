// 函数: sub_1426bebd0
// 地址: 0x1426bebd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_1426b2ca0(arg1)

if (result != 0)
    void var_28
    int64_t* rax = sub_140596d10(&var_28, arg3)
    void var_18
    result = sub_1426a57b0(result, sub_1426b21d0(result, arg2 + 0x10), sub_140596d10(&var_18, rax))
    int64_t rcx_4 = *rax
    
    if (rcx_4 != 0)
        result = sub_140a74f90(rcx_4)

int64_t rcx_5 = *arg3

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5) __tailcall
