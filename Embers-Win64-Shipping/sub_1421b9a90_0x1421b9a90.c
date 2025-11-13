// 函数: sub_1421b9a90
// 地址: 0x1421b9a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp1
int32_t temp2
temp1:temp2 = sx.q(data_143a2ee34)
int32_t temp3
int32_t temp4
temp3:temp4 = sx.q(data_143a2ee38)
int32_t r8_1 = ((temp1 & 3) + temp2) s>> 2
data_143f4d87c = r8_1
int32_t rax_5 = (temp4 + (temp3 & 3)) s>> 2
data_143f4d880 = rax_5
data_143f4d884 = rax_5 * r8_1
uint64_t result = j_sub_140a82f30(0xf8)
void*** result_1 = result

if (result == 0)
    result_1 = nullptr
else
    memset(result, 0, 0xf8)
    result_1[1].d = 0xffffffff
    *(result_1 + 0xc) = 4
    *result_1 = &data_1432ee818
    int32_t i = 0
    __builtin_memset(&result_1[2], 0, 0x20)
    result_1[8].d = 0xffffffff
    *(result_1 + 0x44) = 4
    result_1[7] = &data_1432ee818
    __builtin_memset(&result_1[9], 0, 0x20)
    result_1[0xf].d = 0xffffffff
    *(result_1 + 0x7c) = 4
    result_1[0xe] = &data_1432ee8b8
    result_1[0x10] = 0
    result_1[0x11] = 0
    result_1[0x13].d = 0xffffffff
    *(result_1 + 0x9c) = 4
    result_1[0x12] = &data_1432ee8b8
    __builtin_memset(&result_1[0x14], 0, 0x14)
    result_1[0x17] = 0
    result_1[0x18] = 0
    result_1[0x19].d = data_143f4d884
    InitializeCriticalSection(&result_1[0x1a])
    SetCriticalSectionSpinCount(&result_1[0x1a], 0xfa0)
    int32_t rcx_4 = data_143f4d884 + result_1[0x18].d
    result_1[0x18].d = rcx_4
    
    if (rcx_4 s> *(result_1 + 0xc4))
        sub_1405a4cf0(&result_1[0x17])
    
    result = zx.q(data_143f4d884)
    
    if (result.d s> 0)
        int64_t rdx_5 = 0
        
        do
            rdx_5 += 4
            int32_t rax_8 = result.d - i
            i += 1
            *(rdx_5 + result_1[0x17] - 4) = rax_8 - 1
            result = zx.q(data_143f4d884)
        while (i s< result.d)

*(arg1 + 0x80) = result_1

if (data_143a2ecfc != 0 && data_1439c7a6a != 0 && data_1439c7a18 != 0 && data_1439c88a8 != 0
        && data_1439c7a17 != 0 && data_1439c7a0c != 0)
    void*** result_2 = result_1
    
    if (sub_140a80f40() != 0)
        sub_1421ab900(&result_2, &data_143f02b98)
        return &data_142d549c8
    
    if (data_143f138f4 == 0)
        uint32_t rax_11
        
        if (data_143de5480 != 0)
            rax_11.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_11.b != 0)
            void*** result_3 = result_1
            sub_1421ab900(&result_3, &data_143f02b98)
            return &data_142d549c8
    
    void var_48
    void** rax_12 = sub_1421b1000(&var_48, nullptr, 0xff)
    *(*rax_12 + 0x10) = result_1
    void* rcx_11 = *rax_12
    int32_t r8_2 = rax_12[2].d
    int64_t* rdx_6 = rax_12[1]
    int64_t* rbx_1 = *(rcx_11 + 0x20)
    int64_t* arg_10 = rbx_1
    void* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_10
    
    result = sub_1407c9450(rcx_11, rdx_6, r8_2, 1)
    
    if (rbx_1 != 0)
        int32_t rbp_1 = *rdi_1
        *rdi_1 -= 1
        
        if (rbp_1 == 1)
            return sub_140a2f6e0(arg_10)

return result
