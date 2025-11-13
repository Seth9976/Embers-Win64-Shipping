// 函数: sub_1407f1560
// 地址: 0x1407f1560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *arg3
int64_t* result_1
int64_t* result_7
int64_t* result_8
uint64_t result_2
int32_t var_3c

if (result == data_143ce2d40)
    int32_t rsi_1 = (data_143ce2d68.q).d
    int32_t r15_1 = 1
    int32_t r14_1 = arg2[1].d
    
    if (rsi_1 s> 1)
        int32_t r12_1 = r14_1 - 1
        
        if (r14_1 == 0)
            r12_1 = 0
        
        int32_t rax
        
        if (rsi_1 == 0)
            rax = 1
        
        if (rsi_1 != 0 || r12_1 == 0)
            rax = 0
        
        int64_t r14_2 = data_143ce2d60
        int32_t rcx_2 = r12_1 + rax
        result_2 = 0
        
        if (rsi_1 != 0 || rcx_2 != 0)
            sub_1405a4c70(&result_2, rsi_1 + rcx_2, 0)
            memcpy(result_2, r14_2, rsi_1 * 2)
        else
            var_3c = 0
        
        sub_140a20ba0(&result_2, *arg2, r12_1)
        r14_1 = rsi_1
        result_1 = result_2
    else
        int64_t rsi_2 = *arg2
        result_1 = nullptr
        result_8 = nullptr
        
        if (r14_1 != 0)
            sub_1405a4c70(&result_8, r14_1, 0)
            int64_t* result_6 = result_8
            result_1 = result_6
            memcpy(result_6, rsi_2, r14_1 * 2)
    
    int32_t r12_2 = (data_143ce2d78.q).d
    int32_t rsi_3 = arg2[1].d
    int64_t* result_14
    
    if (r12_2 s> 1)
        int32_t r13_1 = rsi_3 - 1
        
        if (rsi_3 == 0)
            r13_1 = 0
        
        int32_t rax_2
        
        if (r12_2 == 0)
            rax_2 = 1
        
        if (r12_2 != 0 || r13_1 == 0)
            rax_2 = 0
        
        int64_t rsi_4 = data_143ce2d70
        int32_t rcx_8 = rax_2 + r13_1
        result_2 = 0
        
        if (r12_2 != 0 || rcx_8 != 0)
            sub_1405a4c70(&result_2, rcx_8 + r12_2, 0)
            memcpy(result_2, rsi_4, r12_2 * 2)
        else
            var_3c = 0
        
        sub_140a20ba0(&result_2, *arg2, r13_1)
        result_14 = result_2
        rsi_3 = r12_2
    else
        int64_t rbx_1 = *arg2
        result_14 = nullptr
        result_8 = nullptr
        
        if (rsi_3 != 0)
            sub_1405a4c70(&result_8, rsi_3, 0)
            result_14 = result_8
            memcpy(result_14, rbx_1, rsi_3 * 2)
    
    int32_t rdx_10 = 0
    int64_t* result_24 = nullptr
    result_7 = nullptr
    int32_t var_60_1 = 0
    int32_t var_5c_1 = 0
    int32_t rax_4 = arg3[2].d
    int32_t rbx_2 = rax_4 - 1
    
    if (rax_4 == 0)
        rbx_2 = 0
    
    if (rbx_2 + 6 s> 0)
        sub_1405947f0(&result_7, rbx_2 + 6)
        rdx_10 = var_60_1
        result_24 = result_7
    
    int32_t rax_7 = rdx_10 + 6 + rbx_2
    
    if (rax_7 s> var_5c_1)
        sub_140594770(&result_7)
        result_24 = result_7
    
    *result_24 = 0x640069006f0076
    result_24[1].w = 0x20
    int64_t rbx_3 = sx.q(rbx_2)
    memcpy(result_24 + 0xa, arg3[1], rbx_3.d * 2)
    *(result_24 + (rbx_3 << 1) + 0xa) = 0
    int32_t rax_9
    rax_9.b = rax_7 == 0
    result_8 = result_24
    int32_t r8_12 = rax_7 + 0x2b + rax_9
    int32_t var_4c_1 = var_5c_1
    
    if (r8_12 s> var_5c_1)
        sub_1405947f0(&result_8, r8_12)
    
    sub_140a20ba0(&result_8, u"(in float2 In_UV, out float4 Out_Value) \n{\n", 0x2b)
    int64_t* result_22 = result_8
    result_8 = nullptr
    int32_t r8_13 = rax_7 - 1
    int32_t var_50_3
    var_50_3.q = 0
    
    if (rax_7 == 0)
        r8_13 = 0
    
    sub_140a20ba0(arg4, result_22, r8_13)
    
    if (result_22 != 0)
        sub_140a74f90(result_22)
    
    int32_t rbx_4 = r14_1 - 1
    
    if (r14_1 == 0)
        rbx_4 = 0
    
    result_7 = nullptr
    int32_t var_5c_2 = 0
    int32_t rdx_16 = 0
    int32_t var_60_3 = 0
    int128_t* result_27 = nullptr
    int32_t r13_2 = 0
    
    if (rbx_4 + 0xf s> 0)
        sub_1405947f0(&result_7, rbx_4 + 0xf)
        rdx_16 = var_60_3
        r13_2 = var_5c_2
        result_27 = result_7
    
    int32_t rax_13 = rbx_4 + 0xf + rdx_16
    
    if (rax_13 s> r13_2)
        sub_140594770(&result_7)
        r13_2 = var_5c_2
        result_27 = result_7
    
    int64_t* result_3 = result_1
    int64_t rbx_5 = sx.q(rbx_4)
    *result_27 = (*u"\t Out_Value = ")[0].o
    result_27[1].q = 0x2000650075006c
    *(result_27 + 0x18) = 0x20003d
    memcpy(result_27 + 0x1c, result_3, rbx_5.d * 2)
    *(result_27 + (rbx_5 << 1) + 0x1c) = 0
    result_8 = result_27
    int32_t rax_14
    rax_14.b = rax_13 == 0
    int32_t rdx_19 = rax_13 + 0xd + rax_14
    
    if (rdx_19 s> r13_2)
        sub_1405947f0(&result_8, rdx_19)
    
    sub_140a20ba0(&result_8, u".SampleLevel(", 0xd)
    int64_t* result_28 = result_8
    result_8 = nullptr
    int32_t var_50_4
    var_50_4.q = 0
    int32_t rcx_27
    int64_t* result_9
    
    if (rax_13 s> 1)
        int32_t rsi_5
        
        if (rsi_3 == 0)
            rsi_5 = 0
        else
            rsi_5 = rsi_3 - 1
        
        if (rax_13 != 0 || rsi_5 == 0)
            r15_1 = 0
        
        result_7 = result_28
        int32_t rdx_23 = rsi_5 + rax_13 + r15_1
        result_28 = nullptr
        
        if (rdx_23 s> r13_2)
            sub_1405947f0(&result_7, rdx_23)
        
        sub_140a20ba0(&result_7, result_14, rsi_5)
        rcx_27 = r13_2
        result_9 = result_7
        rsi_3 = rax_13
        int32_t var_60_5
        var_60_5.q = 0
        result_7 = nullptr
    else
        result_9 = nullptr
        result_2 = 0
        
        if (rsi_3 != 0)
            sub_1405a4c70(&result_2, rsi_3, 0)
            result_9 = result_2
            memcpy(result_9, result_14, rsi_3 * 2)
            rcx_27 = var_3c
        else
            rcx_27 = 0
    
    result_2 = result_9
    int32_t rax_16
    rax_16.b = rsi_3 == 0
    int32_t var_3c_1 = rcx_27
    int32_t rdx_26 = rax_16 + 0xd + rsi_3
    
    if (rdx_26 s> rcx_27)
        sub_1405947f0(&result_2, rdx_26)
    
    sub_140a20ba0(&result_2, u", In_UV, 0);\n", 0xd)
    uint64_t result_10 = result_2
    result_2 = 0
    int32_t var_40_4
    var_40_4.q = 0
    int32_t r8_18 = rsi_3 - 1
    
    if (rsi_3 == 0)
        r8_18 = 0
    
    sub_140a20ba0(arg4, result_10, r8_18)
    
    if (result_10 != 0)
        sub_140a74f90(result_10)
    
    if (result_28 != 0)
        sub_140a74f90(result_28)
    
    sub_140a20ba0(arg4, &data_142dce8f8, 3)
    
    if (result_14 != 0)
        sub_140a74f90(result_14)
    
    result = result_1
    
    if (result == 0)
        result.b = 1
    else
        sub_140a74f90(result)
        result.b = 1
else
    int32_t var_40
    int64_t* result_17
    
    if (result == data_143ce2d50)
        int32_t rsi_6 = (data_143ce2d68.q).d
        int32_t r15_2 = 1
        int32_t r14_3 = arg2[1].d
        
        if (rsi_6 s> 1)
            int32_t r12_3 = r14_3 - 1
            
            if (r14_3 == 0)
                r12_3 = 0
            
            int32_t rax_18
            
            if (rsi_6 == 0)
                rax_18 = 1
            
            if (rsi_6 != 0 || r12_3 == 0)
                rax_18 = 0
            
            int64_t r14_4 = data_143ce2d60
            int32_t rcx_42 = r12_3 + rax_18
            result_2 = 0
            var_40 = rsi_6
            
            if (rsi_6 != 0 || rcx_42 != 0)
                sub_1405a4c70(&result_2, rcx_42 + rsi_6, 0)
                memcpy(result_2, r14_4, rsi_6 * 2)
            else
                var_3c = 0
            
            sub_140a20ba0(&result_2, *arg2, r12_3)
            r14_3 = var_40
            result_7 = result_2
        else
            int64_t rsi_7 = *arg2
            result_7 = nullptr
            result_8 = nullptr
            
            if (r14_3 != 0)
                sub_1405a4c70(&result_8, r14_3, 0)
                int64_t* result_25 = result_8
                result_7 = result_25
                memcpy(result_25, rsi_7, r14_3 * 2)
        
        int32_t r12_4 = (data_143ce2d78.q).d
        int32_t rsi_8 = arg2[1].d
        int64_t* result_15
        
        if (r12_4 s> 1)
            int32_t r13_3 = rsi_8 - 1
            
            if (rsi_8 == 0)
                r13_3 = 0
            
            int32_t rax_20
            
            if (r12_4 == 0)
                rax_20 = 1
            
            if (r12_4 != 0 || r13_3 == 0)
                rax_20 = 0
            
            int64_t rsi_9 = data_143ce2d70
            int32_t rcx_48 = rax_20 + r13_3
            result_2 = 0
            var_40 = r12_4
            
            if (r12_4 != 0 || rcx_48 != 0)
                sub_1405a4c70(&result_2, rcx_48 + r12_4, 0)
                memcpy(result_2, rsi_9, r12_4 * 2)
            else
                var_3c = 0
            
            sub_140a20ba0(&result_2, *arg2, r13_3)
            result_15 = result_2
            rsi_8 = var_40
        else
            int64_t rbx_6 = *arg2
            result_15 = nullptr
            result_8 = nullptr
            
            if (rsi_8 != 0)
                sub_1405a4c70(&result_8, rsi_8, 0)
                result_15 = result_8
                memcpy(result_15, rbx_6, rsi_8 * 2)
        
        int32_t rdx_38 = 0
        result_8 = nullptr
        int32_t r13_4 = 0
        int32_t var_50_7 = 0
        int32_t var_4c_3 = 0
        int32_t rax_22 = arg3[2].d
        int32_t rbx_7 = rax_22 - 1
        
        if (rax_22 == 0)
            rbx_7 = 0
        
        if (rbx_7 + 6 s> 0)
            sub_1405947f0(&result_8, rbx_7 + 6)
            rdx_38 = var_50_7
            r13_4 = var_4c_3
        
        int32_t rax_25 = rbx_7 + 6 + rdx_38
        result_1.d = rax_25
        
        if (rax_25 s> r13_4)
            sub_140594770(&result_8)
            r13_4 = var_4c_3
            result_1.d = rax_25
        
        int64_t* result_19 = result_8
        int64_t rbx_8 = sx.q(rbx_7)
        *result_19 = 0x640069006f0076
        result_19[1].w = 0x20
        int32_t r8_30 = memcpy(result_19 + 0xa, arg3[1], rbx_8.d * 2)
        int64_t* result_18 = result_8
        result_8 = result_18
        int32_t var_4c_4 = r13_4
        *(result_18 + (rbx_8 << 1) + 0xa) = 0
        int32_t rax_28 = result_1.d
        int32_t var_50_9 = rax_28
        sub_140596690(&result_2, &result_8, sbb.d(r8_30, r8_30, rax_28 != 0) + 0xb0)
        sub_140a20ba0(&result_2, 
            (in float3 In_UVW, in float2 In_XYNumFrames, in float In_TotalNumFrames, in int In_MipMode, "
        "in float In_MipLevel, in float2 In_DDX, in float2 In_DDY, out float4 Out_Value) \n{\n", 
            0xaf)
        bool cond:11_1 = var_40 == 0
        uint64_t result_11 = result_2
        result_2 = 0
        int32_t r8_33 = var_40 - 1
        var_40.q = 0
        
        if (cond:11_1)
            r8_33 = 0
        
        sub_140a20ba0(arg4, result_11, r8_33)
        
        if (result_11 != 0)
            sub_140a74f90(result_11)
        
        int64_t* result_20 = result_8
        
        if (result_20 != 0)
            sub_140a74f90(result_20)
        
        int32_t r14_5
        
        if (r14_3 == 0)
            r14_5 = 0
        else
            r14_5 = r14_3 - 1
        
        result_8 = nullptr
        int32_t rdx_43 = 0
        int32_t rax_31 = 0
        int32_t var_50_10 = 0
        int64_t* result_26 = nullptr
        int32_t var_4c_5 = 0
        
        if (r14_5 + 0x23 s> 0)
            sub_1405947f0(&result_8, r14_5 + 0x23)
            rdx_43 = var_50_10
            rax_31 = var_4c_5
            result_26 = result_8
        
        int32_t rcx_62 = rdx_43 + 0x23 + r14_5
        int64_t* arg_18
        arg_18.d = rcx_62
        
        if (rcx_62 s> rax_31)
            sub_140594770(&result_8)
            result_26 = result_8
            arg_18.d = rcx_62
        
        int64_t rbx_9 = sx.q(r14_5)
        int64_t* result_29 = result_7
        __builtin_memcpy(result_26, u"\t Out_Value = PseudoVolumeTexture(", 0x44)
        int32_t r8_35 = memcpy(result_26 + 0x44, result_29, rbx_9.d * 2)
        int32_t rcx_65 = arg_18.d
        int32_t var_30_1 = rcx_65
        *(result_26 + (rbx_9 << 1) + 0x44) = 0
        result_17 = result_26
        int32_t var_2c_1 = var_4c_5
        sub_140596690(&result_2, &result_17, sbb.d(r8_35, r8_35, rcx_65 != 0) + 3)
        int32_t r8_38 = sub_140a20ba0(&result_2, &data_142d8adc4, 2)
        int32_t rcx_68 = var_40
        int64_t* result_4 = result_2
        result_1 = result_4
        result_2 = 0
        int32_t var_6c_1 = var_3c
        var_40.q = 0
        
        if (rcx_68 s> 1)
            int32_t rsi_10
            
            if (rsi_8 == 0)
                rsi_10 = 0
            else
                rsi_10 = rsi_8 - 1
            
            if (rcx_68 != 0 || rsi_10 == 0)
                r15_2 = 0
            
            sub_140596690(&result_7, &result_1, r15_2 + rsi_10)
            r8_38 = sub_140a20ba0(&result_7, result_15, rsi_10)
            int32_t var_60
            rsi_8 = var_60
            result_4 = result_1
            result_8 = result_7
            int32_t var_5c
            int32_t var_4c_7 = var_5c
            var_60.q = 0
            result_7 = nullptr
            int32_t var_50_13 = rsi_8
        else
            result_8 = nullptr
            
            if (rsi_8 != 0)
                sub_1405a4c70(&result_8, rsi_8, 0)
                r8_38 = memcpy(result_8, result_15, rsi_8 * 2)
            else
                int32_t var_4c_6 = 0
        
        sub_140596690(&result_1, &result_8, sbb.d(r8_38, r8_38, rsi_8 != 0) + 0x60)
        sub_140a20ba0(&result_1, 
            , In_UVW, In_XYNumFrames, In_TotalNumFrames, (uint) In_MipMode, In_MipLevel, In_DDX, "
        "In_DDY); \n", 0x5f)
        int64_t* result_5 = result_1
        result_1 = nullptr
        int32_t var_70_1
        var_70_1.q = 0
        int32_t r8_45 = rcx_68 - 1
        
        if (rcx_68 == 0)
            r8_45 = 0
        
        sub_140a20ba0(arg4, result_5, r8_45)
        
        if (result_5 != 0)
            sub_140a74f90(result_5)
        
        int64_t* result_21 = result_8
        
        if (result_21 != 0)
            sub_140a74f90(result_21)
        
        if (result_4 != 0)
            sub_140a74f90(result_4)
        
        int64_t* result_31 = result_17
        
        if (result_31 != 0)
            sub_140a74f90(result_31)
        
        sub_140a20ba0(arg4, &data_142dce8f8, 3)
        
        if (result_15 != 0)
            sub_140a74f90(result_15)
        
        if (result_29 == 0)
            result.b = 1
        else
            sub_140a74f90(result_29)
            result.b = 1
    else if (result != data_143ce2d58)
        result.b = 0
    else
        int32_t rcx_81 = (data_143ce2d88.q).d
        int64_t* result_16
        int32_t r13_5
        
        if (rcx_81 s> 1)
            int32_t rax_38 = arg2[1].d
            int32_t rsi_12 = rax_38 - 1
            
            if (rax_38 == 0)
                rsi_12 = 0
            
            int32_t r15_3
            
            if (rcx_81 == 0)
                r15_3 = rcx_81 + 1
            
            if (rcx_81 != 0 || rsi_12 == 0)
                r15_3 = 0
            
            int64_t rdx_53 = data_143ce2d80
            result_17 = nullptr
            sub_140596860(&result_17, rdx_53, rcx_81, 0, rsi_12 + r15_3)
            sub_140a20ba0(&result_17, *arg2, rsi_12)
            result_16 = result_17
            int32_t var_30
            r13_5 = var_30
        else
            sub_140596d10(&result_2, arg2)
            r13_5 = var_40
            result_16 = result_2
        
        int32_t rax_40 = arg3[2].d
        int32_t rdx_55 = 0
        result_8 = nullptr
        int64_t* result_30 = nullptr
        int32_t var_50_14 = 0
        int32_t rsi_13 = 0
        int32_t var_4c_8 = 0
        int32_t rbx_10 = rax_40 - 1
        
        if (rax_40 == 0)
            rbx_10 = 0
        
        if (rbx_10 + 6 s> 0)
            sub_1405947f0(&result_8, rbx_10 + 6)
            rdx_55 = var_50_14
            rsi_13 = var_4c_8
            result_30 = result_8
        
        int32_t r15_5 = rbx_10 + 6 + rdx_55
        
        if (r15_5 s> rsi_13)
            sub_140594770(&result_8)
            rsi_13 = var_4c_8
            result_30 = result_8
        
        *result_30 = 0x640069006f0076
        result_30[1].w = 0x20
        int64_t rbx_11 = sx.q(rbx_10)
        int32_t r8_49 = memcpy(result_30 + 0xa, arg3[1], rbx_11.d * 2)
        int32_t var_30_2 = r15_5
        *(result_30 + (rbx_11 << 1) + 0xa) = 0
        result_17 = result_30
        int32_t var_2c_2 = rsi_13
        sub_140596690(&result_2, &result_17, sbb.d(r8_49, r8_49, r15_5 != 0) + 0x1b)
        sub_140a20ba0(&result_2, u"(out float2 Out_Value) \n{\n", 0x1a)
        bool cond:9_1 = var_40 == 0
        uint64_t result_12 = result_2
        result_2 = 0
        int32_t r8_52 = var_40 - 1
        var_40.q = 0
        
        if (cond:9_1)
            r8_52 = 0
        
        sub_140a20ba0(arg4, result_12, r8_52)
        
        if (result_12 != 0)
            sub_140a74f90(result_12)
        
        int64_t* result_32 = result_17
        
        if (result_32 != 0)
            sub_140a74f90(result_32)
        
        int32_t rbx_12 = r13_5 - 1
        
        if (r13_5 == 0)
            rbx_12 = 0
        
        result_8 = nullptr
        int32_t var_4c_9 = 0
        int32_t rdx_60 = 0
        int32_t var_50_16 = 0
        int64_t* result_23 = nullptr
        int32_t r14_6 = 0
        
        if (rbx_12 + 0xf s> 0)
            sub_1405947f0(&result_8, rbx_12 + 0xf)
            rdx_60 = var_50_16
            r14_6 = var_4c_9
            result_23 = result_8
        
        int32_t r15_8 = rbx_12 + 0xf + rdx_60
        
        if (r15_8 s> r14_6)
            sub_140594770(&result_8)
            r14_6 = var_4c_9
            result_23 = result_8
        
        int64_t rbx_13 = sx.q(rbx_12)
        *result_23 = (*u"\t Out_Value = ")[0].o
        result_23[2] = 0x2000650075006c
        result_23[3].d = 0x20003d
        int32_t r8_54 = memcpy(result_23 + 0x1c, result_16, rbx_13.d * 2)
        int32_t var_30_3 = r15_8
        *(result_23 + (rbx_13 << 1) + 0x1c) = 0
        result_17 = result_23
        int32_t var_2c_3 = r14_6
        sub_140596690(&result_2, &result_17, sbb.d(r8_54, r8_54, r15_8 != 0) + 3)
        sub_140a20ba0(&result_2, &data_142db0644, 2)
        int32_t rax_45 = var_40
        uint64_t result_13 = result_2
        result_2 = 0
        var_40.q = 0
        int32_t r8_57 = rax_45 - 1
        
        if (rax_45 == 0)
            r8_57 = 0
        
        sub_140a20ba0(arg4, result_13, r8_57)
        
        if (result_13 != 0)
            sub_140a74f90(result_13)
        
        int64_t* result_33 = result_17
        
        if (result_33 != 0)
            sub_140a74f90(result_33)
        
        sub_140a20ba0(arg4, &data_142dce8f8, 3)
        
        if (result_16 != 0)
            sub_140a74f90(result_16)
        
        result.b = 1
return result
