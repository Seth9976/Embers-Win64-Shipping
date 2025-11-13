// 函数: sub_14231d4e0
// 地址: 0x14231d4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *(arg2 + 0x1a0)

if (*(arg1 + 0x11a) u> 0)
    *(arg3 + 0x28) = data_143dbb3b8
    
    if (0 u< *(arg1 + 0x11a))
        uint32_t r15_1 = zx.d(*(arg1 + 0x118))
        int64_t rbp_1 = *(arg3 + 0x10)
        void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_1 = &rcx_2[5]
        
        if (rax_1 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_1 = &rcx_2[5]
        
        *(arg2 + 0x30) = rax_1
        int64_t* rax_2 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_2 = rcx_2
        *(arg2 + 8) = &rcx_2[1]
        rcx_2[1] = 0
        *rcx_2 = &data_142d5a070
        rcx_2[2] = r12
        rcx_2[3].d = r15_1
        rcx_2[4] = rbp_1

if (*(arg1 + 0x11e) u> 0)
    int64_t* r15_2 = *(arg3 + 0x18)
    uint32_t rbp_2 = zx.d(*(arg1 + 0x11c))
    
    if ((*(*r15_2 + 8))(r15_2) == 0)
        void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_6 = &rcx_9[5]
        
        if (rax_6 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_6 = &rcx_9[5]
        
        *(arg2 + 0x30) = rax_6
        void**** rax_7 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_7 = rcx_9
        *(arg2 + 8) = &rcx_9[1]
        rcx_9[1] = 0
        *rcx_9 = &data_142d5a080
        rcx_9[2] = r12
        rcx_9[3].d = rbp_2
        rcx_9[4] = r15_2

uint128_t var_48
uint128_t var_38
int128_t* r9

if (*(arg3 + 0x44) == 0)
    r9 = &var_38
    var_38 = zx.o(0)
else
    r9 = &var_48
    var_48 = data_142d4cc00

int64_t arg_8 = *(arg2 + 0x1a0)
sub_1405d0e10(arg2, &arg_8, arg1 + 0x120, r9, 0)
uint128_t* r9_1

if (*(arg3 + 0x44) == 0)
    r9_1 = &var_48
    var_48 = data_142d3f660
else
    r9_1 = &var_38
    var_38 = data_142d4cc00

arg_8 = *(arg2 + 0x1a0)
return sub_1405d0e10(arg2, &arg_8, arg1 + 0x126, r9_1, 0)
