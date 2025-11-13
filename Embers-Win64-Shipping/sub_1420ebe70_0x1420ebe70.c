// 函数: sub_1420ebe70
// 地址: 0x1420ebe70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = nullptr
int32_t arg_8 = 0
uint64_t result = zx.q(arg1[0x17].b)

if (result.b == 3)
    result.b = 1
else if (result.b == 2)
    result.b = 0
else
    char rax = sub_14243ade0(arg2)
    arg_8.b = rax
    uint64_t result_5
    int16_t* result_9
    int64_t var_60
    int64_t var_50
    
    if (rax == 0)
        result = *sub_1420e4d10(arg1, &result_9)
    else
        int64_t rcx_1 = sx.q(arg1[0x16].d)
        
        if (rcx_1.d s< 0 || rcx_1.d s>= arg1[0xc].d)
            if ((*(arg1 + 0xba) & 2) == 0)
                sub_140d30800(&arg1[7], &var_60)
                int16_t** rax_2 = sub_140baf760(&var_50, &var_60)
                int16_t* rdx_2
                
                if (rax_2[1].d == 0)
                    rdx_2 = &data_142d40450
                else
                    rdx_2 = *rax_2
                
                arg1[0x27] = *sub_140b58260(&result_5, rdx_2, 1)
                int64_t rcx_6 = var_50
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                int64_t rcx_7 = var_60
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                *(arg1 + 0xba) |= 2
            
            result = arg1[0x27]
        else
            result = *(arg1[0xb] + (rcx_1 << 3))
    
    char rdx_4 = *(arg1 + 0xba)
    uint64_t result_1 = result
    
    if ((rdx_4 & 4) == 0)
        void* rcx_9 = arg1[0x25]
        int64_t rcx_10
        
        if (rcx_9 == 0)
            result_5 = 0
            rcx_10 = 0
        else
            void* rax_5 = sub_140d21d80(rcx_9)
            rdx_4 = *(arg1 + 0xba)
            rcx_10 = *(rax_5 + 0x18)
            result = result_1
        
        arg1[0x28] = rcx_10
        *(arg1 + 0xba) = rdx_4 | 4
    
    int64_t rcx_11 = arg1[0x25]
    
    if (rcx_11 != 0 && arg1[0x28] == result)
        result.b = 1
    else if (arg1[0x26] != 0)
        result.b = 0
    else
        result = *(arg2 + 0xe0)
        
        if (result != 0)
            if (result != rcx_11)
                goto label_1420ec003
            
            result.b = 0
        else
            result = *(arg2 + 0xe8)
            
            if (result == 0 || result != rcx_11)
            label_1420ec003:
                int64_t* rbx_1 = *(arg2 + 0x98)
                void* r15_1 = &rbx_1[sx.q(*(arg2 + 0xa0))]
                
                if (rbx_1 == r15_1)
                label_1420ec063:
                    int32_t r12_1 = 0x20000
                    int32_t r13_1 = -1
                    int32_t var_98_1 = 0x20000000
                    char var_a8_1 = 0
                    uint64_t rax_9 = sub_140d2f0c0(sub_140cddea0(), 0, result_1, 0, 0, 0)
                    
                    if (rax_9 != 0)
                        uint64_t result_3 = sub_142435380(rax_9)
                        uint64_t result_2 = result_3
                        
                        if (result_3 == 0)
                            result = sub_142435740(rax_9, nullptr)
                            result_2 = result
                            
                            if (result == 0)
                                goto label_1420ec2a2
                            
                            sub_140d21d80(result)
                        
                        int32_t rax_16 = *(result_2 + 0xc)
                        
                        if (rax_16 s< data_143e1d9b4)
                            int16_t temp0_1
                            int32_t temp1_1
                            temp0_1:temp1_1 = sx.q(rax_16)
                            uint32_t rdx_11 = zx.d(temp0_1)
                            int32_t rax_18 = temp1_1 + rdx_11
                            r14 = *(data_143e1d9a0 + (sx.q(rax_18 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_18.w) - rdx_11) * 0x18
                        
                        if (((*(r14 + 8) u>> 0x1d).b & 1) != 0)
                            result.b = 0
                        else
                            void* rcx_38 = *(result_2 + 0x30)
                            
                            if (rcx_38 != arg1[0x25])
                                *(result_2 + 0x11a) = *(arg2 + 0x11a)
                                *(rcx_38 + 0xb8) = arg2
                                sub_1420ee280(arg1, *(result_2 + 0x30))
                                sub_1405a9f90(&arg1[0x1d], 0)
                            
                            result.b = 1
                    else
                        int16_t* result_6
                        int16_t* const result_11
                        
                        if (sub_14243ae30(arg2).b == 0)
                        label_1420ec2a2:
                            result_11 = &data_142d40450
                        label_1420ec2a9:
                            
                            if (arg3 == 0)
                                result.b = 1
                            else
                                int64_t rax_25
                                
                                if (arg_8.b != 0)
                                    rax_25 = sx.q(arg1[0x16].d)
                                
                                int64_t rdx_14
                                
                                if (arg_8.b == 0 || rax_25.d s< 0 || rax_25.d s>= arg1[0xc].d)
                                    rdx_14 = arg1[0xa]
                                else if (rax_25.d s< 0 || rax_25.d s>= arg1[0xe].d)
                                    arg_8.q = 0
                                    rdx_14 = 0
                                else
                                    rdx_14 = *(arg1[0xd] + (rax_25 << 3))
                                
                                arg_8.q = rdx_14
                                int64_t* rdx_15 = &var_50
                                int32_t rcx_42
                                rcx_42.b = sub_140b5b8a0(rdx_14.d, 0) == 0
                                int32_t* rcx_43 = &result_1
                                uint32_t r8_3 = arg5 != 0 | zx.d(rcx_42.b)
                                int32_t rbx_5 = (r8_3 ^ 1) + 1
                                char temp2_1 = r8_3.b
                                
                                if (temp2_1 != 0)
                                    rdx_15 = &var_60
                                
                                if (temp2_1 != 0)
                                    rcx_43 = &arg_8
                                
                                int16_t** rax_28 = sub_140b63b70(rcx_43, rdx_15)
                                result_9 = *rax_28
                                *rax_28 = nullptr
                                int32_t rcx_45 = rax_28[1].d
                                int32_t var_64_1 = *(rax_28 + 0xc)
                                rax_28[1] = 0
                                
                                if ((rbx_5.b & 2) != 0)
                                    int64_t rcx_47 = var_50
                                    rbx_5 &= 0xfffffffd
                                    
                                    if (rcx_47 != 0)
                                        sub_140a74f90(rcx_47)
                                
                                if ((rbx_5.b & 1) != 0)
                                    int64_t rcx_48 = var_60
                                    
                                    if (rcx_48 != 0)
                                        sub_140a74f90(rcx_48)
                                
                                if (sub_140ba1330(&result_9, 0, nullptr, 1).b != 0)
                                    arg1[0x17].b = 3
                                    *(arg2 + 0x56a) += 1
                                    sub_140d3a3a0(&result_5, arg2)
                                    sub_140dd27d0(&data_143a2e440, &result_1, &result_5)
                                    uint64_t result_4 = result_1
                                    uint32_t rbx_6 = zx.d(*(arg2 + 0x11a))
                                    result_5 = result_4
                                    int32_t r10_2 = sub_140b5ead0(result_4.d) + result_5:4.d
                                    uint32_t* rax_34
                                    
                                    if (data_143a305d8 == data_143a30604)
                                    labelid_18:
                                        rax_34 = sub_1420d76a0(&data_143a305d0, r10_2, &result_1)
                                    else
                                        void* rcx_52 = data_143a30610
                                        void* rax_32 = &data_143a30608
                                        
                                        if (rcx_52 != 0)
                                            rax_32 = rcx_52
                                        
                                        int32_t rax_33 = *(rax_32
                                            + (((sx.q(data_143a30618) - 1) & sx.q(r10_2)) << 2))
                                        
                                        if (rax_33 == 0xffffffff)
                                        label_1420ec451:
                                            rax_34 =
                                                sub_1420d76a0(&data_143a305d0, r10_2, &result_1)
                                        else
                                            int64_t r9_1 = data_143a305d0
                                            int64_t* r8_6
                                            
                                            while (true)
                                                r8_6 = sx.q(rax_33) * 0x14
                                                
                                                if (*(r8_6 + r9_1) == result_1)
                                                    break
                                                
                                                rax_33 = *(r8_6 + r9_1 + 0xc)
                                                
                                                if (rax_33 == 0xffffffff)
                                                    goto label_1420ec451_2
                                            
                                            if (rax_33 == 0xffffffff)
                                            label_1420ec451_1:
                                                rax_34 =
                                                    sub_1420d76a0(&data_143a305d0, r10_2, &result_1)
                                            else
                                                void* rax_39 = r8_6 + r9_1
                                                
                                                if (rax_39 == 0)
                                                label_1420ec451_2:
                                                    rax_34 = sub_1420d76a0(&data_143a305d0, r10_2, 
                                                        &result_1)
                                                else
                                                    rax_34 = rax_39 + 8
                                    
                                    *rax_34 = rbx_6
                                    int32_t rsi_1 = *(arg1 + 0xb4)
                                    result_5 = 0
                                    int32_t var_78_1 = 0
                                    void*** rax_35 = sub_1405978f0(0x28, &result_5)
                                    
                                    if (rax_35 != 0)
                                        *rax_35 = &data_1432c4cd0
                                        sub_140d3a3a0(&rax_35[1], arg1)
                                        rax_35[2] = sub_1420dddc0
                                        rax_35[4] = sub_140a387b0()
                                        *rax_35 = &data_1432c4d28
                                    
                                    if (rcx_45 != 0)
                                        result_11 = result_9
                                    
                                    var_a8_1.d = r12_1
                                    sub_140bcb500(sub_140b63b70(&result_1, &var_50), 0, result_11, 
                                        &result_5, var_a8_1, r13_1, rsi_1)
                                    int64_t rcx_57 = var_50
                                    
                                    if (rcx_57 != 0)
                                        sub_140a74f90(rcx_57)
                                    
                                    if (arg4 == 1)
                                        data_14399fa10()
                                        sub_140bc7700(0xffffffff)
                                    else if ((*(*arg1 + 0x278))(arg1).b != 0 && arg4 != 2)
                                        data_14399fa10()
                                        sub_140bc7700(0xffffffff)
                                    
                                    result_6 = result_9
                                    goto label_1420ec1a5
                                
                                int16_t* result_10 = result_9
                                arg1[0x17].b = 2
                                
                                if (result_10 == 0)
                                    result.b = 0
                                else
                                    sub_140a74f90(result_10)
                                    result.b = 0
                        else
                            r12_1 = 0x20000 + ((*(sub_140d21d80(arg2) + 0x50) u>> 0x14 & 1) << 0x14)
                            r13_1 = *(sub_140d21d80(arg2) + 0x58)
                            sub_142446be0(&result_5, sub_140b63b70(&result_1, &var_50), arg2 + 0xd0)
                            int64_t rcx_24 = var_50
                            
                            if (rcx_24 != 0)
                                sub_140a74f90(rcx_24)
                            
                            result_11 = &data_142d40450
                            int16_t* const result_8 = &data_142d40450
                            int32_t var_78
                            
                            if (var_78 != 0)
                                result_8 = result_5
                            
                            uint64_t rbx_2 = *sub_140b58260(&result_9, result_8, 1)
                            int32_t var_98_2 = 0
                            var_a8_1 = 0
                            result = sub_140d2f0c0(sub_140cddea0(), 0, rbx_2, 0, 0, 0)
                            
                            if (result == 0)
                            label_1420ec1d7:
                                uint64_t result_7 = result_5
                                
                                if (result_7 != 0)
                                    sub_140a74f90(result_7)
                                
                                goto label_1420ec2a9
                            
                            if (arg4 != 1 && (*(result + 0x28) & 1) == 0)
                                int64_t* rcx_27 = data_143f5b298
                                
                                if ((*(*rcx_27 + 0x318))(rcx_27).b != 0)
                                    goto label_1420ec1d7
                                
                                goto label_1420ec17d
                            
                        label_1420ec17d:
                            result = sub_142431fc0(&result_5, arg2)
                            
                            if (result == 0)
                                goto label_1420ec1d7
                            
                            sub_1420ee280(arg1, *(result + 0x30))
                            sub_1405a9f90(&arg1[0x1d], 0)
                            result_6 = result_5
                        label_1420ec1a5:
                            
                            if (result_6 == 0)
                                result.b = 1
                            else
                                sub_140a74f90(result_6)
                                result.b = 1
                else
                    while (true)
                        void* rcx_12 = *rbx_1
                        
                        if (rcx_12 != 0 && rcx_12 != arg1)
                            char rax_7 = *(rcx_12 + 0xb8)
                            
                            if ((rax_7 & 0xfd) != 0 && (rax_7 != 1 || *(rcx_12 + 0xb9) u>= 2)
                                    && sub_140d16af0(rcx_12 + 0x38, &arg1[7]).b != 0)
                                arg1[0x17].b = 2
                                break
                        
                        rbx_1 = &rbx_1[1]
                        
                        if (rbx_1 == r15_1)
                            goto label_1420ec063
                    
                    result.b = 0
            else
                result.b = 0

return result
