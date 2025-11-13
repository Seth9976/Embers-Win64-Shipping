// 函数: sub_1425ff970
// 地址: 0x1425ff970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    while (*(arg2 + 0x204) != 0)
        void* rax_1 = sub_1423dcff0(data_143f5b298)
        uint32_t rcx_1 = zx.d(*(arg2 + 0x169))
        void*** rbx_1 = nullptr
        
        if (arg3 == 0 || rcx_1 == 0)
            if (rcx_1 u> 7)
                return rbx_1
        else if (rcx_1 != 7)
            rcx_1 = 4
        
        switch (jump_table_1425ffe1c[sx.q(rcx_1)])
            case 0x25ffa04
                void* r8
                r8.b = 1
                (*(*arg1 + 0x40))(arg1, arg2, r8, 0, 0)
                continue
            case 0x25ffa1c
                int32_t rdx_1 = *(arg2 + 0x20c)
                
                if (rdx_1 != 0)
                    rbx_1 = sub_141e7ec90(rax_1, rdx_1)
                
                if (arg2[0x4f] == 0)
                    return rbx_1
                
                int64_t* rax_5 = sub_1423dcff0(data_143f5b298)
                
                if (rbx_1 != 0)
                    sub_141e7c490(rax_5, rbx_1)
                
                void*** rax_6 = j_sub_140a82f30(0xa8)
                void*** rbx_2 = rax_6
                
                if (rax_6 == 0)
                    rbx_2 = nullptr
                else
                    __builtin_memset(&rax_6[1], 0, 0x19)
                    rax_6[5] = arg1
                    *rbx_2 = &data_14344caf8
                    rbx_2[6].d = 2
                    __builtin_memset(&rbx_2[0x12], 0, 0x15)
                    rbx_2[0xa] = 0
                    rbx_2[0xb].d = 0
                    rbx_2[0xe] = 0
                    rbx_2[0xf].d = 0
                    rbx_2[0x10] = 0
                    rbx_2[0x11].d = 0
                
                rbx_2[0xa] = arg2[0x4f]
                rbx_2[0xb].d = *(arg2 + 0x274)
                uint8_t rax_9 = *(arg2 + 0x16d)
                arg2[0x4f] = 0
                rbx_2[7].w = 1
                *(rbx_2 + 0xa4) = rax_9 u>> 4 & 1
                *(rbx_2 + 0x3a) = *(arg2 + 0x204)
                int32_t rax_11 = (int.q(sub_142366f80(arg2))).d
                *(rbx_2 + 0x46) = 0x10
                *(rbx_2 + 0x3c) = rax_11
                int32_t rax_12 = *(arg2 + 0x204)
                *(rbx_2 + 0xc) = rax_12
                
                if (rbx_2[0xa] == 0 || rbx_2[0xb].d == 0)
                    *(rbx_2 + 0xc) = 0
                    rax_12 = 0
                
                rax_12.w *= 2
                *(rbx_2 + 0x44) = rax_12.w
                float zmm0_2 = sub_142366f80(arg2)
                int64_t rax_13 = sx.q(*(rbx_2 + 0xc))
                float zmm1_1 = float.s(rax_13 * 2)
                
                if (rax_13 * 2 s< 0)
                    zmm1_1 = zmm1_1 + 1.84467441e+19f
                
                rbx_2[8].d = (int.q(zmm0_2 * zmm1_1)).d
                sub_141e89a00(rax_5, arg2, rbx_2)
                return rbx_2
            case 0x25ffb92
                void*** rax_17 = j_sub_140a82f30(0xa8)
                void*** rbx_3 = rax_17
                
                if (rax_17 == 0)
                    rbx_3 = nullptr
                else
                    __builtin_memset(&rax_17[1], 0, 0x19)
                    rax_17[5] = arg1
                    *rbx_3 = &data_14344caf8
                    rbx_3[6].d = 3
                    __builtin_memset(&rbx_3[0x12], 0, 0x15)
                    rbx_3[0xe] = 0
                    rbx_3[0xf].d = 0
                    rbx_3[0x10] = 0
                    rbx_3[0x11].d = 0
                
                __builtin_memset(&rbx_3[0x12], 0, 0x15)
                rbx_3[7].w = 1
                rbx_3[0xa] = 0
                rbx_3[0xb].d = 0
                *(rbx_3 + 0x3a) = *(arg2 + 0x204)
                int32_t rax_19 = (int.q(sub_142366f80(arg2))).d
                *(rbx_3 + 0x46) = 0x10
                *(rbx_3 + 0x3c) = rax_19
                int32_t rax_20 = *(arg2 + 0x204)
                *(rbx_3 + 0xc) = rax_20
                rax_20.w *= 2
                *(rbx_3 + 0x44) = rax_20.w
                float zmm0_4 = sub_142366f80(arg2)
                int64_t rax_21 = sx.q(*(rbx_3 + 0xc))
                float zmm1_2 = float.s(rax_21 * 2)
                
                if (rax_21 * 2 s< 0)
                    zmm1_2 = zmm1_2 + 1.84467441e+19f
                
                rbx_3[1].d = 0
                rbx_3[8].d = (int.q(zmm0_4 * zmm1_2)).d
                *(arg2 + 0x20c) = 0
                return rbx_3
            case 0x25ffc8a
                return sub_1425fd950(arg1, arg2)
            case 0x25ffc9d
                int32_t rdx_5 = *(arg2 + 0x20c)
                void*** rax_24
                
                if (rdx_5 != 0)
                    rax_24 = sub_141e7ec90(rax_1, rdx_5)
                    rbx_1 = rax_24
                
                if (rdx_5 != 0 && rax_24 != 0)
                    return rbx_1
                
                void*** rax_25 = j_sub_140a82f30(0xa8)
                void*** rbx_5 = rax_25
                
                if (rax_25 == 0)
                    rbx_5 = nullptr
                else
                    __builtin_memset(&rax_25[1], 0, 0x19)
                    rax_25[5] = arg1
                    *rbx_5 = &data_14344caf8
                    rbx_5[6].d = 1
                    __builtin_memset(&rbx_5[0x12], 0, 0x15)
                    rbx_5[0xa] = 0
                    rbx_5[0xb].d = 0
                    rbx_5[0xe] = 0
                    rbx_5[0xf].d = 0
                    rbx_5[0x10] = 0
                    rbx_5[0x11].d = 0
                
                rbx_5[0xa] = arg2[0x4f]
                rbx_5[0xb].d = *(arg2 + 0x274)
                arg2[0x4f] = 0
                rbx_5[7].w = 1
                *(rbx_5 + 0x3a) = *(arg2 + 0x204)
                int32_t rax_29 = (int.q(sub_142366f80(arg2))).d
                *(rbx_5 + 0x46) = 0x10
                *(rbx_5 + 0x3c) = rax_29
                int32_t rax_30 = *(arg2 + 0x204)
                *(rbx_5 + 0xc) = rax_30
                
                if (rbx_5[0xa] == 0 || rbx_5[0xb].d == 0)
                    *(rbx_5 + 0xc) = 0
                    rax_30 = 0
                
                rax_30.w *= 2
                *(rbx_5 + 0x44) = rax_30.w
                float zmm0_6 = sub_142366f80(arg2)
                int64_t rax_31 = sx.q(*(rbx_5 + 0xc))
                float zmm1_3 = float.s(rax_31 * 2)
                
                if (rax_31 * 2 s< 0)
                    zmm1_3 = zmm1_3 + 1.84467441e+19f
                
                rbx_5[8].d = (int.q(zmm0_6 * zmm1_3)).d
                sub_141e89a00(sub_1423dcff0(data_143f5b298), arg2, rbx_5)
                sub_142372ee0(arg2)
                return rbx_5
            case 0x25ffdeb
                return sub_1425fe110(arg1, arg2)
            case 0x25ffdf9
                return rbx_1

return nullptr
