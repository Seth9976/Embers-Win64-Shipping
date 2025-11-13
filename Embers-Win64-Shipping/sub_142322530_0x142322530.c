// 函数: sub_142322530
// 地址: 0x142322530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = j_sub_140a82f30(0x400)
void*** result = result_1

if (result_1 == 0)
    result = result_1
else
    sub_142048200(result_1, arg3, *(arg2 + 0x28))
    sub_142048030(&result[0x34])
    *result = &data_1432aa8e8
    sub_142048030(&result[0x58])
    __builtin_memset(&result[0x7c], 0, 0x20)

int64_t rbx_1 = sx.q(arg1[1].d)
int32_t rax = (rbx_1 + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

*(*arg1 + (rbx_1 << 3)) = result
double var_c0[0x2] = *arg2
double zmm0[0x2] = arg2[2]
uint128_t var_b0 = arg2[1]
double var_a0[0x2] = zmm0
uint128_t var_90 = result.o
uint128_t var_80 = var_c0
int64_t var_60 = (_mm_unpackhi_pd(zmm0, zmm0[0])).q
uint128_t var_70 = var_b0

if (sub_140a80f40() == 0)
    uint32_t rax_3
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_3.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_3.b == 0))
        void var_20
        void** rax_4 = sub_1423322e0(&var_20, nullptr, 0xff)
        void* rcx_7 = *rax_4
        *(rcx_7 + 0x10) = result.o
        *(rcx_7 + 0x20) = var_c0
        *(rcx_7 + 0x30) = var_b0
        *(rcx_7 + 0x40) = var_60
        void* rcx_8 = *rax_4
        int64_t* rsi_1 = *(rcx_8 + 0x50)
        
        if (rsi_1 != 0)
            rsi_1[9].d += 1
        
        sub_14080ccb0(rcx_8, rax_4[1], rax_4[2].d, 1)
        
        if (rsi_1 != 0)
            rsi_1[9].d -= 1
            
            if (rsi_1[9].d == 1)
                sub_140a2f6e0(rsi_1)
    else
        double var_58[0x2] = result.o
        uint64_t var_28_1 = var_60
        double var_48_1[0x2] = var_c0
        double var_38_1[0x2] = var_b0
        sub_14232c9e0(&var_58)
else
    sub_14232c9e0(&var_90)

return result
