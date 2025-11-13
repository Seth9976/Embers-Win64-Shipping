// 函数: sub_140ba2a90
// 地址: 0x140ba2a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = sx.q(arg2)
uint64_t* rdi_2 = (r13 << 7) + *(*(arg1 + 0x50) + 0x18)
uint64_t result = rdi_2[8]

if (result != 0)
    *(arg1 + 0xd8) = result
else
    if (*(rdi_2 + 0x51) != result.b)
        goto label_140ba2d27
    
    char arg_8 = result.b
    char* var_50_1 = &arg_8
    void*** (* var_58)() = sub_140884c50
    sub_140a756e0(&var_58, &data_14397f5f0)
    void* rcx_1 = *(arg1 + 0x50)
    
    if (*(rdi_2 + 0x51) != 0 || *(rdi_2 + 0x53) != 0
            || (*(rcx_1 + 0x1f0) != 0 && *(rdi_2 + 0x4e) != 0)
            || (*(rcx_1 + 0x1f1) != 0 && *(rdi_2 + 0x4d) != 0) || rdi_2[2].d == 0)
        goto label_140ba2d0f
    
    void* r15_1 = nullptr
    *(arg1 + 0xe0) = u"EventDrivenCreateExport"
    *(arg1 + 0xd8) = 0
    result = zx.q(*(rdi_2 + 0x52))
    void* rcx_16
    
    if (result.b == 1)
        uint64_t* rax_1 = sub_140cbbb90(rcx_1, &var_58, r13.d, 0, 0)
        uint64_t rbx_1
        
        if (rax_1[1].d == 0)
            rbx_1 = &data_142d40450
        else
            rbx_1 = *rax_1
        
        void* rax_3 = sub_140d1aab0(*sub_140b58260(&arg_8, rbx_1, 1), 0)
        void*** (* rcx_4)() = var_58
        rdi_2[8] = rax_3
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        void* rbx_2 = rdi_2[8]
        void* rax_4
        int64_t rax_5
        void* rdx_2
        
        if (rbx_2 != 0)
            rax_4 = sub_140bdf670()
            rdx_2 = *(rbx_2 + 0x10)
            rax_5 = sx.q(*(rax_4 + 0x38))
        
        void* const r8_4
        
        if (rbx_2 == 0 || rax_5.d s> *(rdx_2 + 0x38)
                || *(*(rdx_2 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
            r8_4 = nullptr
        else
            r8_4 = *(rbx_2 + 0x118)
        
        if (data_14399fa4c != 0 || data_143e1d99c != 0)
            int32_t rax_8 = *(rdi_2[8] + 0xc)
            void* const rax_15
            
            if (rax_8 s>= data_143e1d9b4)
                rax_15 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_8)
                uint32_t rdx_4 = zx.d(temp0_1)
                int32_t rax_10 = temp1_1 + rdx_4
                rax_15 = *(data_143e1d9a0 + (sx.q(rax_10 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_10.w) - rdx_4) * 0x18
            
            *(rax_15 + 8) |= 0x40000000
            
            if (r8_4 != 0)
                int32_t rax_16 = *(r8_4 + 0xc)
                
                if (rax_16 s< data_143e1d9b4)
                    int16_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(rax_16)
                    uint32_t rdx_7 = zx.d(temp2_1)
                    int32_t rax_18 = temp3_1 + rdx_7
                    r15_1 = *(data_143e1d9a0 + (sx.q(rax_18 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_18.w) - rdx_7) * 0x18
                
                *(r15_1 + 8) |= 0x40000000
                goto label_140ba2c94
        else
        label_140ba2c94:
            
            if (r8_4 != 0)
                sub_140b9aae0(arg1, r8_4)
        
        rcx_16 = rdi_2[8]
        goto label_140ba2cfb
    
    int32_t rdx_10 = *(rdi_2 + 0xc)
    int32_t r8_5
    
    if (result.b != 2)
        int64_t* result_2
        
        if (rdx_10 == 0)
            result = sub_140bdf2e0()
            result_2 = result
            
            if (result_2 == 0)
                goto label_140ba2fb7
            
            goto label_140ba2d81
        
        result = sub_140ba3170(arg1, rdx_10, 1, (r13 + 1).d)
        result_2 = result
        
        if (result == 0 || result_2 == 0)
            goto label_140ba2fb7
        
    label_140ba2d81:
        
        if (rdi_2[1].d == 0)
            if (*(rdi_2 + 0x4c) != 0)
                goto label_140ba2fb7
            
            result = *(arg1 + 0x58)
            goto label_140ba2da9
        
        result = sub_140ba3170(arg1, rdi_2[1].d, 0, (r13 + 1).d)
    label_140ba2da9:
        uint64_t result_1 = result
        
        if (result == 0)
            goto label_140ba2fb7
        
        int32_t var_80_1 = 0
        char var_88_1 = 0
        void* rax_23 = sub_140d3f470(nullptr, result, *rdi_2, 1, 0, 0, 0)
        
        if (rax_23 != 0 && *(rax_23 + 0x10) == result_2)
            rdi_2[8] = rax_23
        
        void* rcx_21 = rdi_2[8]
        
        if (rcx_21 != 0)
            if (*(rdi_2 + 0x4c) == 0)
                sub_140d3e8d0(rcx_21, *(arg1 + 0x50), r13.d, 1)
                void* r10_1 = rdi_2[8]
                int32_t rcx_22 = *(r10_1 + 8)
                
                if (((rcx_22 u>> 0x15).b & 1) == 0)
                    if (((rcx_22 u>> 0x1b).b & 1) == 0)
                        int64_t* rax_26 = sub_140d21830(r10_1, &var_58, 0, 0)
                        int16_t* const rbx_4
                        
                        if (rax_26[1].d == 0)
                            rbx_4 = &data_142d40450
                        else
                            rbx_4 = *rax_26
                        
                        sub_140af98a0("Unknown", 0xb5c, 
                            %s was found in memory and is an export but does not have all load flags.", 
                            rbx_4)
                        void*** (* rcx_25)() = var_58
                        
                        if (rcx_25 != 0)
                            sub_140a74f90(rcx_25)
                        
                        sub_140afbb40()
                        r10_1 = rdi_2[8]
                    
                    int32_t rcx_26 = *(r10_1 + 8)
                    
                    if (((rcx_26 u>> 4).b & 1) == 0)
                        *(r10_1 + 8) = rcx_26 | 0x83400
                        void* rax_30 = rdi_2[8]
                        *(rax_30 + 8) &= 0xf7ffffff
                    else
                        *(r10_1 + 8) = rcx_26 | 0x81400
                        void* rax_29 = rdi_2[8]
                        *(rax_29 + 8) &= 0xf7ffffff
            
            goto label_140ba2d0f
        
        if (rax_23 != 0)
            result = *(rax_23 + 0x10)
            int64_t rcx_29 = sx.q(result_2[7].d)
            
            if (rcx_29.d s> *(result + 0x38))
                goto label_140ba2fb7
            
            result = *(result + 0x30)
            
            if (*(result + (rcx_29 << 3)) != &result_2[6])
                goto label_140ba2fb7
            
            goto label_140ba2ef9
        
    label_140ba2ef9:
        result = sub_140ba3170(arg1, rdi_2[3].d, 1, (r13 + 1).d)
        
        if (result == 0)
            goto label_140ba2fb7
        
        sub_140cd8660(result, 0)
        int32_t rcx_33 = *(rdi_2 + 0x1c) | 0x83400
        uint64_t rbx_5 = *rdi_2
        arg_8.d = rcx_33
        void*** (* rcx_37)()
        void*** (* var_48)()
        
        if (((result_2[1].d u>> 0xa).b & 1) == 0)
            void* r12_1 = result_2[0x23]
            
            if (r12_1 == 0)
                (*(*result_2 + 0x390))(result_2)
                rcx_33 = arg_8.d
                r12_1 = result_2[0x23]
            
            int32_t rdx_25
            int16_t* const rbx_7
            wchar16* r8_9
            int16_t* const r14_1
            
            if (((*(r12_1 + 8) u>> 0xa).b & 1) == 0)
                if (((*(result + 8) u>> 0xa).b & 1) == 0)
                    var_80_1.q = result
                    void* rax_44 =
                        sub_140d2dfc0(result_2, result_1, rbx_5, rcx_33, 0, var_80_1, 0, 0, 1)
                    rdi_2[8] = rax_44
                    
                    if (data_14399fa4c != 0 || data_143e1d99c != 0)
                        int32_t rax_45 = *(rax_44 + 0xc)
                        
                        if (rax_45 s< data_143e1d9b4)
                            int16_t temp4_1
                            int32_t temp5_1
                            temp4_1:temp5_1 = sx.q(rax_45)
                            uint32_t rdx_30 = zx.d(temp4_1)
                            int32_t rax_47 = temp5_1 + rdx_30
                            r15_1 = *(data_143e1d9a0 + (sx.q(rax_47 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_47.w) - rdx_30) * 0x18
                        
                        *(r15_1 + 8) |= 0x40000000
                    
                    r8_5 = arg2
                    rcx_16 = rdi_2[8]
                    goto label_140ba2d0a
                
                int64_t* rax_42 = sub_140b63b70(rdi_2, &var_58)
                rbx_7 = &data_142d40450
                
                if (rax_42[1].d == 0)
                    r14_1 = &data_142d40450
                else
                    r14_1 = *rax_42
                
                int64_t* rax_43 = sub_140d21830(result, &var_48, 0, 0)
                
                if (rax_43[1].d != 0)
                    rbx_7 = *rax_43
                
                r8_9 = u"Template %s had RF_NeedLoad while creating %s"
                rdx_25 = 0xbc6
            else
                int64_t* rax_38 = sub_140b63b70(rdi_2, &var_58)
                rbx_7 = &data_142d40450
                
                if (rax_38[1].d == 0)
                    r14_1 = &data_142d40450
                else
                    r14_1 = *rax_38
                
                int64_t* rax_39 = sub_140d21830(r12_1, &var_48, 0, 0)
                
                if (rax_39[1].d != 0)
                    rbx_7 = *rax_39
                
                r8_9 = u"Class CDO %s had RF_NeedLoad while creating %s"
                rdx_25 = 0xbbf
            
            var_88_1.q = r14_1
            sub_140af98a0("Unknown", rdx_25, r8_9, rbx_7)
            void*** (* rcx_42)() = var_48
            
            if (rcx_42 != 0)
                sub_140a74f90(rcx_42)
            
            rcx_37 = var_58
        else
            int64_t* rax_33 = sub_140b63b70(rdi_2, &var_48)
            int16_t* const rbx_6 = &data_142d40450
            int16_t* const r15_2
            
            if (rax_33[1].d == 0)
                r15_2 = &data_142d40450
            else
                r15_2 = *rax_33
            
            int64_t* rax_34 = sub_140d21830(result_2, &var_58, 0, 0)
            
            if (rax_34[1].d != 0)
                rbx_6 = *rax_34
            
            var_88_1.q = r15_2
            sub_140af98a0("Unknown", 0xbb7, LoadClass %s had RF_NeedLoad while creating %s", rbx_6)
            void*** (* rcx_36)() = var_58
            
            if (rcx_36 != 0)
                sub_140a74f90(rcx_36)
            
            rcx_37 = var_48
        
        if (rcx_37 != 0)
            sub_140a74f90(rcx_37)
        
        result = sub_140afbb40()
    label_140ba2fb7:
        *(rdi_2 + 0x51) = 1
        void* rdx_22 = rdi_2[8]
        
        if (rdx_22 != 0)
            return sub_140b9aae0(arg1, rdx_22)
    else
        if (rdx_10 == 0)
            goto label_140ba2fb7
        
        result = sub_140ba3170(arg1, rdx_10, 1, (r13 + 1).d)
        
        if (result == 0)
            goto label_140ba2fb7
        
        rcx_16 = *(result + 0x118)
        
        if (rcx_16 == 0)
            int64_t rdx_11 = *result
            (*(rdx_11 + 0x390))(result, rdx_11)
            rcx_16 = *(result + 0x118)
        
        rdi_2[8] = rcx_16
    label_140ba2cfb:
        
        if (rcx_16 == 0)
            goto label_140ba2d0f
        
        r8_5 = r13.d
    label_140ba2d0a:
        sub_140d3e8d0(rcx_16, *(arg1 + 0x50), r8_5, 1)
    label_140ba2d0f:
        result = rdi_2[8]
        
        if (result == 0)
            *(rdi_2 + 0x51) = 1
            *(arg1 + 0xd8) = result
        else
            sub_140b9aae0(arg1, result)
            result = rdi_2[8]
        label_140ba2d27:
            
            if (result != 0)
                *(arg1 + 0xd8) = result
            else
                *(rdi_2 + 0x51) = 1
                *(arg1 + 0xd8) = result

return result
