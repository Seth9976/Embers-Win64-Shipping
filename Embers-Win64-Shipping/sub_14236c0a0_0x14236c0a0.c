// 函数: sub_14236c0a0
// 地址: 0x14236c0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (data_14399fa10() == 0)
    result = sub_1408d4dd0(arg1 + 0x48)
    void* rdi_1 = nullptr
    int64_t* result_4 = result
    
    if (result == 0)
        result_4 = nullptr
    else
        void* rax_12 = sub_1425a4180()
        void* rdx_9 = result_4[2]
        result = sx.q(*(rax_12 + 0x38))
        
        if (result.d s> *(rdx_9 + 0x38))
            result_4 = nullptr
        else
            uint64_t result_2 = result
            result = *(rdx_9 + 0x30)
            
            if (*(result + (result_2 << 3)) != rax_12 + 0x30)
                result_4 = nullptr
    
    *(arg1 + 0x70) = result_4
    
    if (result_4 != 0)
        if (arg2 != 0)
            int32_t rax_13 = *(result_4 + 0xc)
            
            if (rax_13 s< data_143e1d9b4)
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_13)
                uint32_t rdx_11 = zx.d(temp0_1)
                int32_t rax_15 = temp1_1 + rdx_11
                rdi_1 = *(data_143e1d9a0 + (sx.q(rax_15 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_15.w) - rdx_11) * 0x18
            
            *(rdi_1 + 8) |= 0x40000000
            result_4 = *(arg1 + 0x70)
        
        return sub_140d18150(result_4, arg1, nullptr.b)
else
    void* r8_1
    result, r8_1 = sub_140d3c6e0(arg1 + 0x48)
    void* rdi = nullptr
    uint64_t result_3 = result
    
    if (result != 0)
    label_14236c13f:
        void* rax_3 = sub_1425a4180()
        void* rdx_1 = *(result_3 + 0x10)
        result = sx.q(*(rax_3 + 0x38))
        
        if (result.d s> *(rdx_1 + 0x38))
            result_3 = 0
        else
            uint64_t result_1 = result
            result = *(rdx_1 + 0x30)
            
            if (*(result + (result_1 << 3)) != rax_3 + 0x30)
                result_3 = 0
    else if (*(arg1 + 0x58) == 0)
        result_3 = 0
    else
        if (result.d == data_1439aaa30)
            data_1439aaa30 = 0
        else
            result = zx.q(data_1439aaa30)
        
        if (result.d != *(arg1 + 0x50) || *(arg1 + 0x48) != 0xffffffff)
            void* rax_1 = sub_140d2bce0(arg1 + 0x58)
            sub_140d3a3a0(arg1 + 0x48, rax_1)
            
            if (rax_1 != 0 || data_143e1d7b4 == 0)
                int32_t rax_2 = 0
                
                if (0 == data_1439aaa30)
                    data_1439aaa30 = 0
                else
                    rax_2 = data_1439aaa30
                
                *(arg1 + 0x50) = rax_2
            
            result, r8_1 = sub_140d3c6e0(arg1 + 0x48)
            result_3 = result
            
            if (result != 0)
                goto label_14236c13f
            
            result_3 = 0
        else
            result_3 = 0
    
    *(arg1 + 0x70) = result_3
    uint64_t result_5 = result_3
    
    if (result_3 != 0)
        result = zx.q(*(result_3 + 8) u>> 0xa)
        
        if ((result.b & 1) != 0)
            *(arg1 + 0x70) = 0
            result_5 = 0
    
    if (result_5 == 0)
        int64_t var_18
        result, r8_1 = sub_1415206f0(arg1 + 0x58, &var_18)
        int32_t var_10
        
        if (var_10 s> 1)
            *(arg1 + 0x78) |= 1
            int64_t var_28 = 0
            int32_t var_20_1 = 0
            void*** rax_5 = sub_1405978f0(0x28, &var_28)
            
            if (rax_5 != 0)
                *rax_5 = &data_143334550
                sub_140d3a3a0(&rax_5[1], arg1)
                rax_5[2] = sub_14236ccb0
                rax_5[3].b = arg2
                rax_5[4] = sub_140a387b0()
                *rax_5 = &data_1433345a8
            
            result, r8_1 = sub_140bcb5c0(&var_18, &var_28, 0, 0, 0xffffffff)
        
        int64_t rcx_7 = var_18
        
        if (rcx_7 != 0)
            result, r8_1 = sub_140a74f90(rcx_7)
    else if (arg2 != 0)
        result = zx.q(*(result_5 + 0xc))
        
        if (result.d s< data_143e1d9b4)
            int16_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(result.d)
            uint32_t rdx_7 = zx.d(temp2_1)
            int32_t rax_8 = temp3_1 + rdx_7
            result = data_143e1d9a0
            rdi = *(result + (sx.q(rax_8 s>> 0x10) << 3)) + sx.q(zx.d(rax_8.w) - rdx_7) * 0x18
        
        *(rdi + 8) |= 0x40000000
    
    int64_t* rcx_16 = *(arg1 + 0x70)
    
    if (rcx_16 != 0)
        r8_1.b = 1
        return sub_140d18150(rcx_16, arg1, r8_1.b)

return result
