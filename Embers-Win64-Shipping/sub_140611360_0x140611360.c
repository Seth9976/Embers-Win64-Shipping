// 函数: sub_140611360
// 地址: 0x140611360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0xc)
int32_t temp0 = *(arg2 + 0xc)

if (r8 != temp0)
    if (r8 s< temp0)
        return 0xffffffff
    
    return 1

int32_t r8_1 = **(arg1 + 0x10)
int32_t temp1 = **(arg2 + 0x10)

if (r8_1 != temp1)
    int32_t rcx = -1
    
    if (r8_1 s< temp1)
        rcx = 1
    
    return zx.q(rcx)

if (*(arg2 + 8) == 0x7f)
    int32_t rdi_1 = **(arg1 + 0x18)
    void var_48
    int64_t* rax_5 = sub_140592d30(&var_48, *(arg2 + 0x20))
    void var_28
    
    if (sub_140610db0(sub_140592d30(&var_28, *(arg1 + 0x20)), rax_5, 0, rdi_1) != 0)
        return 0

return 1
