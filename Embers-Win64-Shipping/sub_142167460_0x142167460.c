// 函数: sub_142167460
// 地址: 0x142167460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    int32_t rax_1 = *(arg2 + 0xc)
    void* const rax_7
    
    if (rax_1 s>= data_143e1d9b4)
        rax_7 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rax_7 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
    
    if (((*(rax_7 + 8) u>> 0x1d).b & 1) == 0 && (*(arg2 + 0x5c) & 8) == 0)
        int32_t arg_10
        sub_141fb31d0(arg1, &arg_10, arg2)
        int64_t rax_10 = sx.q(arg_10)
        int64_t* result
        
        if (rax_10.d == 0xffffffff)
            result = nullptr
        label_142167525:
            
            if (arg3 != 0 && (*(*arg3 + 0x3e0))(arg3, arg2) != 0)
                void** rax_15 = j_sub_140a82f30(0xd8)
                void** rbx_1 = rax_15
                
                if (rax_15 == 0)
                    rbx_1 = nullptr
                else
                    *rax_15 = arg2
                    sub_140d3a3a0(&rax_15[1], arg2)
                    __builtin_memset(&rbx_1[2], 0, 0x30)
                    int64_t* rcx_7 = &rbx_1[8]
                    rcx_7[2] = 0
                    rcx_7[3].d = 0
                    *(rcx_7 + 0x1c) = 0x80
                    int64_t* rax_16 = rcx_7[2]
                    
                    if (rax_16 != 0)
                        rcx_7 = rax_16
                    
                    *rcx_7 = 0
                    rcx_7[1] = 0
                    void* rcx_8 = &rbx_1[0x12]
                    rbx_1[0xc].d = 0xffffffff
                    *(rbx_1 + 0x64) = 0
                    rbx_1[0xe] = 0
                    rbx_1[0xf].d = 0
                    rbx_1[0x10] = 0
                    rbx_1[0x11] = 0
                    *(rcx_8 + 0x10) = 0
                    *(rcx_8 + 0x18) = 0
                    *(rcx_8 + 0x1c) = 0x80
                    void* rax_17 = *(rcx_8 + 0x10)
                    
                    if (rax_17 != 0)
                        rcx_8 = rax_17
                    
                    *rcx_8 = 0
                    *(rcx_8 + 8) = 0
                    rbx_1[0x16].d = 0xffffffff
                    *(rbx_1 + 0xb4) = 0
                    rbx_1[0x18] = 0
                    rbx_1[0x19].d = 0
                    rbx_1[0x1a].b &= 0xf0
                    *(rbx_1 + 0xd4) = 0
                
                int32_t var_28
                sub_140598750(arg1, &var_28)
                int64_t* var_20
                *var_20 = rbx_1
                void*** rax_18 = j_sub_140a82f30(0x18)
                
                if (rax_18 == 0)
                    rax_18 = nullptr
                else
                    rax_18[1].d = 1
                    *rax_18 = &data_1432e2a40
                    *(rax_18 + 0xc) = 1
                    rax_18[2] = rbx_1
                
                var_20[1] = rax_18
                var_20[2].d = 0xffffffff
                uint32_t rcx_12 = (**var_20 u>> 4).d
                int32_t rdx_10 = (0x9e3779b9 - rcx_12) ^ rcx_12 << 8
                int32_t r8_5 = neg.d(rdx_10 + rcx_12) ^ rdx_10 u>> 0xd
                int32_t rcx_15 = (rcx_12 - rdx_10 - r8_5) ^ r8_5 u>> 0xc
                int32_t rdx_13 = (rdx_10 - rcx_15 - r8_5) ^ rcx_15 << 0x10
                int32_t r8_8 = (r8_5 - rdx_13 - rcx_15) ^ rdx_13 u>> 5
                int32_t rcx_18 = (rcx_15 - rdx_13 - r8_8) ^ r8_8 u>> 3
                int32_t rdx_16 = (rdx_13 - rcx_18 - r8_8) ^ rcx_18 << 0xa
                sub_142165b40(arg1, &arg_10, (r8_8 - rdx_16 - rcx_18) ^ rdx_16 u>> 0xf, var_20, 
                    var_28, nullptr)
                result = *arg1 + sx.q(arg_10) * 0x18
                sub_1421599e0(&arg1[0xa], &arg_10, result, nullptr)
                
                if (arg4 != 0)
                    *arg4 = 1
        else
            result = *arg1 + rax_10 * 0x18
            
            if (result == 0)
                goto label_142167525
            
            if (arg4 != 0)
                *arg4 = 0
        
        return result

return nullptr
