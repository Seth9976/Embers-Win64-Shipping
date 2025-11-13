// 函数: sub_1411f2ff0
// 地址: 0x1411f2ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg2 + 0x1a0)
int64_t arg_10 = rbp
sub_141080ac0(arg1, arg2, rbp, *(arg3 + 0x10))
int32_t var_98 = arg5
sub_1411b9cf0(arg1 + 0x118, arg2, rbp, data_1439b6298)
sub_1411b99b0(arg1 + 0x122, arg2, rbp, arg6)
float var_88[0x4] = data_142d3f660
float var_78[0x4][0x4]
sub_14148d370(arg4, &var_78, &var_88, nullptr)
sub_1405eb5d0(arg2, &arg_10, arg1 + 0x132, &var_78, 0)
sub_1405d0e10(arg2, &arg_10, arg1 + 0x138, &var_88, 0)
int32_t arg_8 = *(arg4 + 0x8f4)
sub_1405eb490(arg2, &arg_10, arg1 + 0x13e, &arg_8, 0)
int32_t zmm1 = *(arg4 + 0x3d4)
arg_8 = *(arg4 + 0x3d0)
int32_t arg_c = zmm1
sub_1405d0cd0(arg2, &arg_10, arg1 + 0x144, &arg_8, 0)
void** const result = *(arg4 + 0x38)
int64_t* r14 = data_14395fa10
int64_t r12 = result[2]

if (*(arg1 + 0x14c) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x14a))
    void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rcx_9[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rcx_9[5]
    
    *(arg2 + 0x30) = rax_1
    void**** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rcx_9
    *(arg2 + 8) = &rcx_9[1]
    rcx_9[1] = 0
    result = &data_142d5a070
    rcx_9[3].d = r15_1
    *rcx_9 = &data_142d5a070
    rcx_9[2] = rbp
    rcx_9[4] = r12

if (*(arg1 + 0x150) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x14e))
    result = (*(*r14 + 8))(r14)
    
    if (result.b == 0)
        void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_5 = &rcx_16[5]
        
        if (rax_5 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_5 = &rcx_16[5]
        
        *(arg2 + 0x30) = rax_5
        void** rax_6 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_6 = rcx_16
        *(arg2 + 8) = &rcx_16[1]
        rcx_16[1] = 0
        result = &data_142d5a080
        *rcx_16 = &data_142d5a080
        rcx_16[2] = rbp
        rcx_16[3].d = rsi_1
        rcx_16[4] = r14

return result
