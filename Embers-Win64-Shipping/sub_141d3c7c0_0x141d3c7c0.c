// 函数: sub_141d3c7c0
// 地址: 0x141d3c7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0xe0) == 0)
    char rax
    
    if (sub_140b011d0() != 0)
        void** rax_1 = *(arg1 + 0x10)
        void** rcx = &data_143a21c00
        
        if (rax_1 != 0)
            rcx = rax_1
        
        rax = (*(*rcx + 8))(rcx)
    else
        rax = 2
    
    uint32_t rcx_1 = zx.d(rax)
    
    if (rax == 0)
        sub_141d41220(arg1)
    else if (rcx_1 == 1)
        void*** rax_5 = j_sub_140a82f30(0x70)
        
        if (rax_5 == 0)
            *(arg1 + 0x30) = 0
        else
            *(arg1 + 0x30) = sub_141d2c2b0(rax_5, arg1)
    else if (rcx_1 == 2)
        void*** rax_3 = j_sub_140a82f30(0x70)
        
        if (rax_3 == 0)
            *(arg1 + 0x30) = 0
        else
            *(arg1 + 0x30) = sub_141d2c370(rax_3, arg1)
    
    sub_1417b02f0()
    void*** rax_7 = sub_140a84c80(0, 0x30, 0)
    void*** rdi_1 = rax_7
    
    if (rax_7 != 0)
        *rax_7 = &data_142d3fe58
        rax_7[1] = arg1
        rdi_1[2] = sub_141d3d540
        rdi_1[4] = sub_140a387b0()
        *rdi_1 = &data_142d3feb0
    
    int64_t rbx_1 = 0
    int32_t r15_1 = 3
    void*** r14_1 = rdi_1
    int32_t rcx_6 = 3
    void*** rax_9 = rdi_1
    void arg_8
    
    if (rdi_1 != 0)
        sub_140599630(&data_143ef8298, 1)
        int64_t* rax_11 = (*rdi_1)[6](rdi_1, &arg_8)
        int64_t r14_2 = sx.q(data_143ef82a0)
        rbx_1 = *rax_11
        int32_t rax_12 = (r14_2 + 1).d
        data_143ef82a0 = rax_12
        
        if (rax_12 s> data_143ef82a4)
            sub_1405a4f90(&data_143ef8298)
        
        rcx_6 = 0
        r14_1 = nullptr
        void**** rax_15 = (r14_2 << 4) + data_143ef8298
        *rax_15 = rdi_1
        rdi_1 = nullptr
        rax_15[1].d = 3
        rax_9 = nullptr
    
    *(arg1 + 0xe8) = rbx_1
    
    if (rcx_6 == 0)
        goto label_141d3c96f
    
    void*** rcx_9
    
    if (r14_1 != 0)
        (*r14_1)[7](r14_1, 0)
        rcx_9 = r14_1
    label_141d3c96c:
        rdi_1 = sub_140a84c80(rcx_9, 0, 0)
    label_141d3c96f:
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
    else if (rax_9 != 0)
        (*rdi_1)[7](rdi_1, 0)
        rcx_9 = rdi_1
        goto label_141d3c96c
    void*** rax_19 = sub_140a84c80(0, 0x30, 0)
    void*** rdi_2 = rax_19
    
    if (rax_19 != 0)
        *rax_19 = &data_142d3fe58
        rax_19[1] = arg1
        rdi_2[2] = sub_141d3d850
        rdi_2[4] = sub_140a387b0()
        *rdi_2 = &data_142d3feb0
    
    int64_t rbx_2 = 0
    void*** r14_3 = rdi_2
    int32_t rcx_12 = 3
    void*** rax_21 = rdi_2
    
    if (rdi_2 != 0)
        sub_140599630(&data_143ef82b0, 1)
        int64_t* rax_23 = (*rdi_2)[6](rdi_2, &arg_8)
        int64_t r14_4 = sx.q(data_143ef82b8)
        rbx_2 = *rax_23
        int32_t rax_24 = (r14_4 + 1).d
        data_143ef82b8 = rax_24
        
        if (rax_24 s> data_143ef82bc)
            sub_1405a4f90(&data_143ef82b0)
        
        rcx_12 = 0
        r14_3 = nullptr
        void**** rax_27 = (r14_4 << 4) + data_143ef82b0
        *rax_27 = rdi_2
        rdi_2 = nullptr
        rax_27[1].d = 3
        rax_21 = nullptr
    
    *(arg1 + 0xf0) = rbx_2
    
    if (rcx_12 == 0)
        goto label_141d3ca5c
    
    void*** rcx_15
    
    if (r14_3 != 0)
        (*r14_3)[7](r14_3, 0)
        rcx_15 = r14_3
    label_141d3ca59:
        rdi_2 = sub_140a84c80(rcx_15, 0, 0)
    label_141d3ca5c:
        
        if (rdi_2 != 0)
            sub_140a74f90(rdi_2)
    else if (rax_21 != 0)
        (*rdi_2)[7](rdi_2, 0)
        rcx_15 = rdi_2
        goto label_141d3ca59
    void*** rax_31 = sub_140a84c80(0, 0x30, 0)
    void*** rdi_3 = rax_31
    
    if (rax_31 != 0)
        *rax_31 = &data_142d3fe58
        rax_31[1] = arg1
        rdi_3[2] = sub_141d3db90
        rdi_3[4] = sub_140a387b0()
        *rdi_3 = &data_142d3feb0
    
    int64_t rbx_3 = 0
    void*** r14_5 = rdi_3
    int32_t rcx_18 = 3
    void*** rax_33 = rdi_3
    
    if (rdi_3 != 0)
        sub_140599630(&data_143ef8280, 1)
        int64_t* rax_35 = (*rdi_3)[6](rdi_3, &arg_8)
        int64_t rbp_1 = sx.q(data_143ef8288)
        rbx_3 = *rax_35
        int32_t rax_36 = (rbp_1 + 1).d
        data_143ef8288 = rax_36
        
        if (rax_36 s> data_143ef828c)
            sub_1405a4f90(&data_143ef8280)
        
        r14_5 = nullptr
        rcx_18 = 0
        void**** rax_39 = (rbp_1 << 4) + data_143ef8280
        *rax_39 = rdi_3
        rdi_3 = nullptr
        rax_39[1].d = 3
        rax_33 = nullptr
    
    *(arg1 + 0xf8) = rbx_3
    
    if (rcx_18 == 0)
        goto label_141d3cb45
    
    void*** rcx_21
    
    if (r14_5 != 0)
        (*r14_5)[7](r14_5, 0)
        rcx_21 = r14_5
    label_141d3cb42:
        rdi_3 = sub_140a84c80(rcx_21, 0, 0)
    label_141d3cb45:
        
        if (rdi_3 != 0)
            sub_140a74f90(rdi_3)
    else if (rax_33 != 0)
        (*rdi_3)[7](rdi_3, 0)
        rcx_21 = rdi_3
        goto label_141d3cb42
    void*** rax_43 = sub_140a84c80(0, 0x30, 0)
    void*** rdi_4 = rax_43
    
    if (rax_43 != 0)
        *rax_43 = &data_142d3fe58
        rax_43[1] = arg1
        rdi_4[2] = sub_141d3d6c0
        rdi_4[4] = sub_140a387b0()
        *rdi_4 = &data_142d3feb0
    
    int64_t rbx_4 = 0
    void*** r14_6 = rdi_4
    int32_t rcx_24 = 3
    void*** rax_45 = rdi_4
    
    if (rdi_4 != 0)
        sub_140599630(&data_143ef82e0, 1)
        int64_t* rax_47 = (*rdi_4)[6](rdi_4, &arg_8)
        int64_t r14_7 = sx.q(data_143ef82e8)
        rbx_4 = *rax_47
        int32_t rax_48 = (r14_7 + 1).d
        data_143ef82e8 = rax_48
        
        if (rax_48 s> data_143ef82ec)
            sub_1405a4f90(&data_143ef82e0)
        
        rcx_24 = 0
        r14_6 = nullptr
        void**** rax_51 = (r14_7 << 4) + data_143ef82e0
        *rax_51 = rdi_4
        rdi_4 = nullptr
        rax_51[1].d = 3
        rax_45 = nullptr
    
    *(arg1 + 0x100) = rbx_4
    
    if (rcx_24 == 0)
        goto label_141d3cc39
    
    void*** rcx_27
    
    if (r14_6 != 0)
        (*r14_6)[7](r14_6, 0)
        rcx_27 = r14_6
    label_141d3cc36:
        rdi_4 = sub_140a84c80(rcx_27, 0, 0)
    label_141d3cc39:
        
        if (rdi_4 != 0)
            sub_140a74f90(rdi_4)
    else if (rax_45 != 0)
        (*rdi_4)[7](rdi_4, 0)
        rcx_27 = rdi_4
        goto label_141d3cc36
    void*** rax_55 = sub_140a84c80(0, 0x30, 0)
    void*** rdi_5 = rax_55
    
    if (rax_55 != 0)
        *rax_55 = &data_142d3fe58
        rax_55[1] = arg1
        rdi_5[2] = sub_141d3d950
        rdi_5[4] = sub_140a387b0()
        *rdi_5 = &data_142d3feb0
    
    int64_t rbx_5 = 0
    void*** r14_8 = rdi_5
    int32_t rcx_30 = 3
    void*** rax_57 = rdi_5
    
    if (rdi_5 != 0)
        sub_140599630(&data_143ef82f8, 1)
        int64_t* rax_59 = (*rdi_5)[6](rdi_5, &arg_8)
        int64_t r14_9 = sx.q(data_143ef8300)
        rbx_5 = *rax_59
        int32_t rax_60 = (r14_9 + 1).d
        data_143ef8300 = rax_60
        
        if (rax_60 s> data_143ef8304)
            sub_1405a4f90(&data_143ef82f8)
        
        rcx_30 = 0
        r14_8 = nullptr
        void**** rax_63 = (r14_9 << 4) + data_143ef82f8
        *rax_63 = rdi_5
        rdi_5 = nullptr
        rax_63[1].d = 3
        rax_57 = nullptr
    
    *(arg1 + 0x108) = rbx_5
    
    if (rcx_30 == 0)
        goto label_141d3cd2f
    
    void*** rcx_33
    
    if (r14_8 != 0)
        (*r14_8)[7](r14_8, 0)
        rcx_33 = r14_8
    label_141d3cd2c:
        rdi_5 = sub_140a84c80(rcx_33, 0, 0)
    label_141d3cd2f:
        
        if (rdi_5 != 0)
            sub_140a74f90(rdi_5)
    else if (rax_57 != 0)
        (*rdi_5)[7](rdi_5, 0)
        rcx_33 = rdi_5
        goto label_141d3cd2c
    void*** result_2 = sub_140a84c80(0, 0x30, 0)
    void* const* result_1 = result_2
    
    if (result_2 != 0)
        *result_2 = &data_142d3fe58
        result_2[1] = arg1
        result_1[2] = sub_141d3dd10
        result_1[4] = sub_140a387b0()
        *result_1 = &data_142d3feb0
    
    int64_t rbx_6 = 0
    void** result_4 = result_1
    result = result_1
    
    if (result_1 != 0)
        sub_140599630(&data_143ef82c8, 1)
        int64_t* rax_69 = (*(*result_1 + 0x30))(result_1, &arg_8)
        int64_t r14_10 = sx.q(data_143ef82d0)
        rbx_6 = *rax_69
        int32_t rax_70 = (r14_10 + 1).d
        data_143ef82d0 = rax_70
        
        if (rax_70 s> data_143ef82d4)
            sub_1405a4f90(&data_143ef82c8)
        
        result_4 = nullptr
        void*** rax_73 = (r14_10 << 4) + data_143ef82c8
        *rax_73 = result_1
        result_1 = nullptr
        rax_73[1].d = 3
        r15_1 = 0
        result = nullptr
    
    *(arg1 + 0x110) = rbx_6
    
    if (r15_1 == 0)
        goto label_141d3ce34
    
    void* const* result_3
    
    if (result_4 != 0)
        (*(*result_4 + 0x38))(result_4, 0)
        result_3 = result_4
    label_141d3ce2c:
        result = sub_140a84c80(result_3, 0, 0)
        result_1 = result
    label_141d3ce34:
        
        if (result_1 != 0)
            result = sub_140a74f90(result_1)
    else if (result != 0)
        (*(*result_1 + 0x38))(result_1, 0)
        result_3 = result_1
        goto label_141d3ce2c
    *(arg1 + 0xe0) = 1

return result
