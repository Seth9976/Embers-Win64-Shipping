// 函数: sub_140d163b0
// 地址: 0x140d163b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = &data_142ea3a50
*arg1 = &data_142ea3a50

if (data_143e1d834 != 0 && arg1[2] != 0 && data_143de542b == 0)
    int64_t rbp_1 = sx.q(*(arg1 + 0xc))
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbp_1.d)
    uint32_t rdx_2 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_2
    void* const rsi_1 = nullptr
    int64_t r14_1 = sx.q(rax_2 s>> 0x10) << 3
    int64_t r15_1 = sx.q(zx.d(rax_2.w) - rdx_2) * 0x18
    int64_t rcx_4 = *(r14_1 + data_143e1d9a0)
    void*** rax_7 = arg1
    
    if (rax_7 == *(r15_1 + rcx_4))
        *(r15_1 + rcx_4) = 0
    else
        rax_7 = *(r15_1 + rcx_4)
    
    if (rax_7 == 0)
        int64_t entry_r9
        sub_140af98a0("Unknown", 0x10d, u"Unexpected concurency while adding new object", entry_r9)
        sub_140afbb40()
    
    EnterCriticalSection(&data_143e1da90)
    int32_t rax_8 = data_143e1da88
    int64_t rbx_1 = sx.q(rax_8 - 1)
    
    if (rax_8 - 1 s>= 0)
        int64_t temp3_1
        
        do
            int64_t* rcx_5 = *(data_143e1da80 + (rbx_1 << 3))
            (*(*rcx_5 + 8))(rcx_5, arg1, zx.q(rbp_1.d))
            temp3_1 = rbx_1
            rbx_1 -= 1
        while (temp3_1 - 1 s>= 0)
    
    LeaveCriticalSection(&data_143e1da90)
    
    if (rbp_1.d s>= data_143e1d9b4)
        result = nullptr
    else
        result = *(r14_1 + data_143e1d9a0) + r15_1
    
    result[1] = 0
    result[2].d = 0
    
    if (rbp_1.d s> data_143e1d994 && data_143de5444 == 0)
        int32_t rax_14 = sub_140a20af0()
        
        if (rax_14 != 0)
            rsi_1 =
                *(&data_143cf0bf8 + (zx.q(rax_14) u>> 0xe << 3)) + (zx.q(rax_14) & 0x3fff) * 0x18
        
        *(rsi_1 + 8) = rbp_1
        return sub_1405a42f0(&data_143e1d9e8, rax_14)

return result
