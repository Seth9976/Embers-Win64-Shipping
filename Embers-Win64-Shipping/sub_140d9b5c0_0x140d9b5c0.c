// 函数: sub_140d9b5c0
// 地址: 0x140d9b5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x10)

for (void* rsi_2 = &i[sx.q(*(arg1 + 0x18)) * 4]; i != rsi_2; i = &i[4])
    void* rdi_1 = *i
    
    if (rdi_1 != 0)
        uint128_t zmm1 = data_143e20ef0
        int64_t* rcx = _mm_bsrli_si128(zmm1, 8).q
        
        if (rcx != 0)
            *(rcx + 0xc) += 1
        
        uint128_t var_38
        
        if (&var_38 != rdi_1 + 0x138)
            uint128_t zmm0 = *(rdi_1 + 0x138)
            *(rdi_1 + 0x138) = zmm1
            var_38 = zmm0
            rcx = var_38:8.q
        
        if (rcx != 0)
            int32_t temp0_2 = *(rcx + 0xc)
            *(rcx + 0xc) -= 1
            
            if (temp0_2 == 1)
                (*(*rcx + 8))(rcx, 1)
        
        if (arg2 != 0)
            int64_t var_40_1 = -1
            *(rdi_1 + 0x18) = 0.o

*(arg1 + 0x18) = 0

if (*(arg1 + 0x1c) != 0)
    sub_1405a51b0(arg1 + 0x10, 0)

*(arg1 + 0x1b8) = 0

if (*(arg1 + 0x1bc) != 0)
    sub_140dbd1e0(arg1 + 0x20, 0)

int64_t result = sub_140d9f3c0(*(arg1 + 0x360))
bool cond:0 = *(arg1 + 0x35c) == 0
*(arg1 + 0x358) = 0

if (cond:0)
    return result

return sub_140dbd1e0(arg1 + 0x1c0, 0) __tailcall
