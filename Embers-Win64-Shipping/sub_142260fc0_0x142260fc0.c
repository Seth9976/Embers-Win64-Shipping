// 函数: sub_142260fc0
// 地址: 0x142260fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x59].b == 0)
    return 

int32_t rax_1 = sub_141dcdc50(arg1)
int64_t r8_1 = *arg1

if (rax_1 != 3)
    int64_t rax_6 = (*(r8_1 + 0xc80))(arg1)
    
    if (rax_6 == 0)
    label_142261032:
        int32_t var_c
        int32_t var_c_1 = var_c & 0xfffffffe
        int32_t var_24_1 = 1.d
        int32_t var_28 = (zx.o(0)).d
        int32_t var_1c_1 = var_c_1
        int32_t var_20_1 = 0x40000000
        (*(*arg1 + 0xd10))(0x40000000, arg2, &var_28)
    else
        int32_t var_1c
        int32_t var_1c_2 = var_1c & 0xfffffffe
        char var_14
        var_14.d = 1
        int32_t var_18 = 0
        int32_t var_c_2 = var_1c_2
        int32_t var_10_1 = 0x40000000
        (*(*arg1 + 0xd10))(0x40000000, rax_6, &var_18)
else
    void* rax_2 = (*(r8_1 + 0x698))(arg1)
    
    if (rax_2 == 0)
        goto label_142261032
    
    void* rax_3 = sub_142486290()
    void* rcx_1 = *(rax_2 + 0x10)
    int64_t rdx = sx.q(*(rax_3 + 0x38))
    
    if (rdx.d s> *(rcx_1 + 0x38) || *(*(rcx_1 + 0x30) + (rdx << 3)) != rax_3 + 0x30)
        goto label_142261032
    
    if (sub_141ea17a0(rax_2) == 0xffffffff)
        goto label_142261032
