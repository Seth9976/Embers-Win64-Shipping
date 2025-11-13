// 函数: sub_142431b50
// 地址: 0x142431b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void* rax_2

if (arg1 != 0)
    rax_2 = sub_140d21d80(arg1)

void* result

if (arg1 == 0 || rax_2 == 0)
    result = nullptr
else
    void performanceCount
    QueryPerformanceCounter(&performanceCount)
    void* rdi_1 = *(arg1 + 0x20)
    void* rax_3 = sub_140d21d80(arg1)
    int64_t var_108 = *(rax_3 + 0x18)
    int64_t var_d8
    sub_140b63b70(&var_108, &var_d8)
    int16_t* var_f8
    sub_14242f630(&var_f8, &var_d8, arg2)
    int16_t* const rdx_2 = &data_142d40450
    int32_t var_f0
    
    if (var_f0 != 0)
        rdx_2 = var_f8
    
    void* rax_4 = sub_140d1dfb0(nullptr, rdx_2)
    *(rax_4 + 0x50) |= 0x100000
    *(rax_4 + 0x58) = arg2
    *(rax_4 + 0x5c) = *(rax_3 + 0x5c)
    int128_t zmm0_1 = *(rax_3 + 0x30)
    int64_t rcx_6 = *(rax_4 + 0x18)
    *(rax_4 + 0x28) |= 2
    *(rax_4 + 0x30) = zmm0_1
    sub_140d18050(rcx_6)
    void var_118
    sub_1423cf340(&var_118, arg2)
    int32_t i = 0
    void* rax_5 = sub_1420187f0(rax_4, *(rdi_1 + 0x18), 0, 0, 0, 0)
    *(rax_5 + 8) |= 8
    *(rax_5 + 0x11a) = 1
    *(rax_5 + 0x118) = 4
    sub_140d3a3a0(&performanceCount, rdi_1)
    int64_t rcx_10 = *(rax_4 + 0x18)
    int64_t var_100
    int64_t* var_e8 = &var_100
    var_100 = rcx_10
    void* var_e0_1 = &performanceCount
    sub_140b92920(&data_143a2e440, &var_108, &var_e8, nullptr)
    void var_c8
    sub_140d15830(&var_c8, arg1, rax_5)
    int64_t var_b8_1 = *(arg1 + 0x18)
    int64_t var_98_1 = *(arg1 + 0x10)
    int32_t var_b0_1 = 0xfffffff
    int32_t var_ac_1 = 0x7f800000
    int32_t var_a0_1 = 0x400000
    int32_t var_9c_1 = 2
    void* result_1 = sub_140d2e350(&var_c8)
    sub_140943590(&data_143a2e440, *(rax_4 + 0x18))
    void* rcx_13 = *(result_1 + 0xc0)
    
    if (rcx_13 != 0 && rcx_13 == *(arg1 + 0xc0) && *(result_1 + 0xd0) == *(arg1 + 0xd0))
        sub_14213f790(rcx_13)
        
        if (*(result_1 + 0xd0) s> 0)
            int64_t* rbx_3 = nullptr
            
            do
                sub_141f0da30(*(rbx_3 + *(result_1 + 0xc8)), *(rbx_3 + *(arg1 + 0xc8)))
                i += 1
                rbx_3 = &rbx_3[1]
            while (i s< *(result_1 + 0xd0))
    
    QueryPerformanceCounter(&performanceCount)
    void var_90
    sub_1405ae080(&var_90)
    sub_1423d0040(&var_118)
    int16_t* rcx_19 = var_f8
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    int64_t rcx_20 = var_d8
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_148)
return result
