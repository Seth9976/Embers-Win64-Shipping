// 函数: sub_1422ca850
// 地址: 0x1422ca850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg5[1].d = 0

if (*(arg5 + 0xc) != 1)
    sub_1405947f0(arg5, 1)

if (*(arg1 + 0x30) != 0)
    int64_t var_d8 = arg3
    void* var_c0_1 = arg1 + 0x38
    void* var_b8_1 = arg1 + 0x48
    int32_t var_d0_1 = 0
    int32_t var_ac_1 = 0
    int64_t var_a8_1 = 1
    int32_t var_80_1 = 0xffffffff
    int64_t* var_c8
    
    if (*(arg4 + 8) != 0)
        int64_t rcx_2 = *(arg1 + 0x60)
        int32_t rdx_1 = *(arg1 + 0x40)
        int64_t* var_68 = &var_d8
        int32_t var_50_1 = *(arg1 + 0x50)
        void* var_78
        var_c8 = &var_78
        void* var_60_1 = arg1 + 0x38
        void* var_58_1 = arg1 + 0x48
        int32_t var_40_1 = rdx_1 - 1
        int64_t var_28_1 = rcx_2
        var_78 = arg4
        int32_t var_70_1 = 0
        int32_t var_a0_2 = rdx_1 - 1
        int64_t var_88_2 = rcx_2
        int32_t var_b0_2 = *(arg1 + 0x50)
        int32_t var_4c_1 = 0
        int64_t var_48_1 = 1
        int32_t var_20_1 = 0xffffffff
        sub_1422ca9c0(arg1, &var_68, &var_c8, arg2, arg5)
    else
        var_c8 = &var_d8
        int32_t var_b0_1 = *(arg1 + 0x50)
        int32_t var_a0_1 = *(arg1 + 0x40) - 1
        int64_t var_88_1 = *(arg1 + 0x60)
        sub_1422cc4a0(arg1, &var_c8, arg2, arg5)

int64_t rbx_1 = sx.q(arg5[1].d)
int32_t rax_7 = (rbx_1 + 1).d
arg5[1].d = rax_7

if (rax_7 s> *(arg5 + 0xc))
    sub_140594770(arg5)

uint64_t result = *arg5
*(result + (rbx_1 << 1)) = 0
return result
