// 函数: sub_141f23700
// 地址: 0x141f23700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ef3930(arg1, arg2)

if (arg2[8].d s< 0x154)
    *(arg1 + 0x204) = *(arg1 + 0x200)

int32_t result = (*(*arg2 + 0x1d8))(arg2, &data_1439a9478)

if (arg2[8].d s>= 0x17a && (arg2[5].b & 1) != 0)
    int512_t zmm1_1
    uint128_t zmm6_1
    result, zmm1_1, zmm6_1 = sub_140b4e7c0(arg2, &data_1439a9478)
    
    if (result s< 9)
        uint128_t var_18_1 = zmm6_1
        int32_t* rax_3 = j_sub_140a82f30(0x70)
        int32_t* rbx_1 = rax_3
        
        if (rax_3 == 0)
            rbx_1 = nullptr
        else
            *rax_3 = 0xffffffff
            *(rax_3 + 0x10) = data_14399f6e0
            zmm1_1.o = data_14399f6f0
            *(rax_3 + 0x20) = zmm1_1.o
            *(rax_3 + 0x30) = data_14399f700
            zmm1_1.o = data_14399f710
            *(rax_3 + 0x40) = zmm1_1.o
            __builtin_memset(&rax_3[0x14], 0, 0x18)
        
        sub_1420f56e0(arg2, &rbx_1[4], zmm1_1)
        *rbx_1 = *(arg1 + 0x230)
        zmm6_1 = *(arg1 + 0x1f0)
        EnterCriticalSection(&data_143a2e698)
        int64_t r8_1 = zmm6_1.q
        data_143a2e6c8.o = zmm6_1
        data_143a2e6c0 = arg1
        int64_t rcx_3 = _mm_bsrli_si128(zmm6_1, 8).q
        data_143a2e6d8 = rbx_1
        
        if (((r8_1 u>> 0x20).d | (rcx_3 u>> 0x20).d | rcx_3.d | r8_1.d) != 0)
            if (data_143a2e650 == data_143a2e67c)
                sub_140d186f0(&data_143e1d990, &data_143a2e640)
            
            int64_t* var_38 = &data_143a2e6c0
            int64_t* var_30_1 = &data_143a2e6c8
            int32_t arg_8
            sub_141f00d90(&data_143a2e648, &arg_8, &var_38, nullptr)
        else
            sub_141f222b0(&data_143a2e640, arg1)
        
        result = LeaveCriticalSection(&data_143a2e698)

if (not(1f f!= *(arg1 + 0x238)))
    *(arg1 + 0x238) = 0

return result
