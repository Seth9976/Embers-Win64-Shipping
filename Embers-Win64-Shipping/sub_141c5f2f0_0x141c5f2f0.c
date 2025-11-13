// 函数: sub_141c5f2f0
// 地址: 0x141c5f2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0 && *(arg2 + 0x204) != 0)
    int64_t* rax = sub_1423dcff0(data_143f5b298)
    uint32_t rcx_1 = zx.d(*(arg2 + 0x169))
    void*** result = nullptr
    
    if (arg3 == 0 || rcx_1 == 0)
        if (rcx_1 u> 7)
            return result
    else if (rcx_1 != 7)
        rcx_1 = 4
    
    switch (jump_table_141c5f654[sx.q(rcx_1)])
        case 0x1c5f376
            (*(*arg1 + 0x40))(arg1, arg2, 1, 0, 0)
            char r14
            return sub_141c5f2f0(arg1, arg2, zx.q(r14))
        case 0x1c5f3a3
            int32_t rdx_2 = *(arg2 + 0x20c)
            
            if (rdx_2 != 0)
                result = sub_141e7ec90(rax, rdx_2)
            
            if (arg2[0x4f] != 0)
                if (result != 0)
                    sub_141e7c490(rax, result)
                
                void*** rax_5 = j_sub_140a82f30(0x68)
                
                if (rax_5 == 0)
                    result = nullptr
                else
                    result = sub_141c4d7a0(rax_5, arg1, arg2, 1)
                
                result[0xc].b = *(arg2 + 0x16d) u>> 4 & 1
                sub_141e89a00(rax, arg2, result)
            
            return result
        case 0x1c5f422
            void*** result_1 = j_sub_140a82f30(0x68)
            result = result_1
            
            if (result_1 == 0)
                result = nullptr
                *8 = 0
                *(arg2 + 0x20c) = 0
            else
                __builtin_memset(&result_1[1], 0, 0x19)
                result_1[5] = arg1
                *result = &data_143209958
                result[6] = 0
                result[7] = 0
                result[8].d = 2
                float zmm0_1 = sub_142366f80(arg2)
                result[9].d = 0
                result[0xa] = 0
                result[0xb].d = 0
                *(result + 0x44) = int.d(zmm0_1)
                *(result + 0x4c) = 0x10
                *(result + 0x5c) = 0
                result[0xc].b = 0
                *(result + 0xc) = *(arg2 + 0x204)
                result[1].d = 0
                *(arg2 + 0x20c) = 0
            
            return result
        case 0x1c5f4b9
            return sub_141c5a2b0(arg1, arg2)
        case 0x1c5f4cc
            int32_t rdx_7 = *(arg2 + 0x20c)
            void*** result_2
            
            if (rdx_7 != 0)
                result_2 = sub_141e7ec90(rax, rdx_7)
                result = result_2
            
            if (rdx_7 == 0 || result_2 == 0)
                void*** rax_11 = j_sub_140a82f30(0x68)
                
                if (rax_11 == 0)
                    result = nullptr
                else
                    result = sub_141c4d7a0(rax_11, arg1, arg2, 0)
                
                sub_141e89a00(rax, arg2, result)
                sub_142372ee0(arg2)
            
            return result
        case 0x1c5f52d
            void*** rax_13 = j_sub_140a82f30(0x68)
            
            if (rax_13 != 0)
                result = sub_141c4d7a0(rax_13, arg1, arg2, 3)
            
            int64_t var_30_1 = 0
            int64_t var_48
            __builtin_memset(&var_48, 0, 0x14)
            int64_t var_28_1 = 0
            int64_t* rax_16 = (*(*arg1 + 0xa0))(arg1, arg2)
            result[7] = rax_16
            rax_16[1] = arg2
            
            if ((*(*rax_16 + 0x58))(rax_16, arg2, &var_48) == 0)
                if (sub_14236bfa0(arg2) == 0)
                    *(arg2 + 0x169) = 1
                    *(arg2 + 0x204) = 0
                    sub_142372ee0(arg2)
                
                (**result)(result, 1)
                result = nullptr
            else
                *(arg2 + 0x16e) &= 0xfb
                *(arg2 + 0x16e) |= 8
                int64_t var_40
                arg2[0x41].d = var_40.d
                *(arg2 + 0x204) = var_48:4.d
                int32_t rax_21 = var_40:4.d
                
                if (rax_21 != 0)
                    *(arg2 + 0x274) = rax_21
                
                int32_t var_38
                
                if (not(var_38 f== (zx.o(0)).d))
                    arg2[0x1f].d = var_38
            
            if (var_30_1 != 0)
                sub_140a74f90(var_30_1)
            
            return result
        case 0x1c5f623
            return result

return 0
