// 函数: sub_1407f37a0
// 地址: 0x1407f37a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *arg3
int64_t* var_60
int64_t* var_50
uint64_t var_40

if (result == data_143ce2e28)
    int32_t rsi_1 = (data_143ce2e40.q).d
    int32_t r12_1 = 1
    int32_t r14_1 = arg2[1].d
    int64_t* var_68_1
    int32_t var_34
    
    if (rsi_1 s> 1)
        int32_t r15_1 = r14_1 - 1
        
        if (r14_1 == 0)
            r15_1 = 0
        
        int32_t rax
        
        if (rsi_1 == 0)
            rax = 1
        
        if (rsi_1 != 0 || r15_1 == 0)
            rax = 0
        
        int64_t r14_2 = data_143ce2e38
        int32_t rcx_2 = r15_1 + rax
        var_40 = 0
        
        if (rsi_1 != 0 || rcx_2 != 0)
            sub_1405a4c70(&var_40, rcx_2 + rsi_1, 0)
            memcpy(var_40, r14_2, rsi_1 * 2)
        else
            var_34 = 0
        
        sub_140a20ba0(&var_40, *arg2, r15_1)
        r14_1 = rsi_1
        var_68_1 = var_40
    else
        int64_t rsi_2 = *arg2
        var_68_1 = nullptr
        var_50 = nullptr
        
        if (r14_1 != 0)
            sub_1405a4c70(&var_50, r14_1, 0)
            int64_t* r13_1 = var_50
            var_68_1 = r13_1
            memcpy(r13_1, rsi_2, r14_1 * 2)
    
    int32_t r15_2 = (data_143ce2e50.q).d
    int32_t rsi_3 = arg2[1].d
    int64_t* r15_3
    
    if (r15_2 s> 1)
        int32_t r13_2 = rsi_3 - 1
        
        if (rsi_3 == 0)
            r13_2 = 0
        
        int32_t rax_2
        
        if (r15_2 == 0)
            rax_2 = 1
        
        if (r15_2 != 0 || r13_2 == 0)
            rax_2 = 0
        
        int64_t rsi_4 = data_143ce2e48
        int32_t rcx_8 = rax_2 + r13_2
        var_40 = 0
        
        if (r15_2 != 0 || rcx_8 != 0)
            sub_1405a4c70(&var_40, r15_2 + rcx_8, 0)
            memcpy(var_40, rsi_4, r15_2 * 2)
        else
            var_34 = 0
        
        sub_140a20ba0(&var_40, *arg2, r13_2)
        r15_3 = var_40
        rsi_3 = r15_2
    else
        int64_t rbx_1 = *arg2
        r15_3 = nullptr
        var_50 = nullptr
        
        if (rsi_3 != 0)
            sub_1405a4c70(&var_50, rsi_3, 0)
            r15_3 = var_50
            memcpy(r15_3, rbx_1, rsi_3 * 2)
    
    int32_t rdx_10 = 0
    int64_t* r13_3 = nullptr
    var_60 = nullptr
    int32_t var_58_1 = 0
    int32_t var_54_1 = 0
    int32_t rax_4 = arg3[2].d
    int32_t rbx_2 = rax_4 - 1
    
    if (rax_4 == 0)
        rbx_2 = 0
    
    if (rbx_2 + 6 s> 0)
        sub_1405947f0(&var_60, rbx_2 + 6)
        rdx_10 = var_58_1
        r13_3 = var_60
    
    int32_t rax_7 = rbx_2 + 6 + rdx_10
    
    if (rax_7 s> var_54_1)
        sub_140594770(&var_60)
        r13_3 = var_60
    
    *r13_3 = 0x640069006f0076
    r13_3[1].w = 0x20
    int64_t rbx_3 = sx.q(rbx_2)
    memcpy(r13_3 + 0xa, arg3[1], rbx_3.d * 2)
    *(r13_3 + (rbx_3 << 1) + 0xa) = 0
    int32_t rax_9
    rax_9.b = rax_7 == 0
    var_50 = r13_3
    int32_t r8_12 = rax_7 + 0x3e + rax_9
    int32_t var_44_1 = var_54_1
    
    if (r8_12 s> var_54_1)
        sub_1405947f0(&var_50, r8_12)
    
    sub_140a20ba0(&var_50, (in float3 In_UV, in float MipLevel, out float4 Out_Value) \n{\n", 0x3e)
    int64_t* rbx_4 = var_50
    var_50 = nullptr
    int32_t r8_13 = rax_7 - 1
    int32_t var_48_3
    var_48_3.q = 0
    
    if (rax_7 == 0)
        r8_13 = 0
    
    sub_140a20ba0(arg4, rbx_4, r8_13)
    
    if (rbx_4 != 0)
        sub_140a74f90(rbx_4)
    
    int32_t rbx_5 = r14_1 - 1
    
    if (r14_1 == 0)
        rbx_5 = 0
    
    var_60 = nullptr
    int32_t var_54_2 = 0
    int32_t rdx_16 = 0
    int32_t var_58_3 = 0
    int64_t* r14_3 = nullptr
    int32_t r13_4 = 0
    
    if (rbx_5 + 0xf s> 0)
        sub_1405947f0(&var_60, rbx_5 + 0xf)
        rdx_16 = var_58_3
        r13_4 = var_54_2
        r14_3 = var_60
    
    int32_t rax_13 = rbx_5 + 0xf + rdx_16
    
    if (rax_13 s> r13_4)
        sub_140594770(&var_60)
        r13_4 = var_54_2
        r14_3 = var_60
    
    int64_t rbx_6 = sx.q(rbx_5)
    __builtin_memcpy(r14_3, u"\t Out_Value = ", 0x1c)
    memcpy(r14_3 + 0x1c, var_68_1, rbx_6.d * 2)
    *(r14_3 + (rbx_6 << 1) + 0x1c) = 0
    var_60 = r14_3
    int32_t rax_14
    rax_14.b = rax_13 == 0
    int32_t rdx_20 = rax_13 + 0xd + rax_14
    
    if (rdx_20 s> r13_4)
        sub_1405947f0(&var_60, rdx_20)
    
    sub_140a20ba0(&var_60, u".SampleLevel(", 0xd)
    int64_t* r14_4 = var_60
    var_60 = nullptr
    int32_t var_58_5
    var_58_5.q = 0
    int32_t rcx_27
    int64_t* rbx_7
    
    if (rax_13 s> 1)
        int32_t rsi_5
        
        if (rsi_3 == 0)
            rsi_5 = 0
        else
            rsi_5 = rsi_3 - 1
        
        if (rax_13 != 0 || rsi_5 == 0)
            r12_1 = 0
        
        var_50 = r14_4
        int32_t rdx_24 = rax_13 + rsi_5 + r12_1
        r14_4 = nullptr
        
        if (rdx_24 s> r13_4)
            sub_1405947f0(&var_50, rdx_24)
        
        sub_140a20ba0(&var_50, r15_3, rsi_5)
        rcx_27 = r13_4
        rbx_7 = var_50
        rsi_3 = rax_13
        int32_t var_48_4
        var_48_4.q = 0
        var_50 = nullptr
    else
        rbx_7 = nullptr
        var_40 = 0
        
        if (rsi_3 != 0)
            sub_1405a4c70(&var_40, rsi_3, 0)
            rbx_7 = var_40
            memcpy(rbx_7, r15_3, rsi_3 * 2)
            rcx_27 = var_34
        else
            rcx_27 = 0
    
    var_40 = rbx_7
    int32_t rax_16
    rax_16.b = rsi_3 == 0
    int32_t var_34_1 = rcx_27
    int32_t rdx_27 = rsi_3 + 0x14 + rax_16
    
    if (rdx_27 s> rcx_27)
        sub_1405947f0(&var_40, rdx_27)
    
    sub_140a20ba0(&var_40, u", In_UV, MipLevel);\n", 0x14)
    uint64_t rbx_8 = var_40
    var_40 = 0
    int32_t var_38_4
    var_38_4.q = 0
    int32_t r8_18 = rsi_3 - 1
    
    if (rsi_3 == 0)
        r8_18 = 0
    
    sub_140a20ba0(arg4, rbx_8, r8_18)
    
    if (rbx_8 != 0)
        sub_140a74f90(rbx_8)
    
    if (r14_4 != 0)
        sub_140a74f90(r14_4)
    
    sub_140a20ba0(arg4, &data_142dce8f8, 3)
    
    if (r15_3 != 0)
        sub_140a74f90(r15_3)
    
    if (var_68_1 == 0)
        result.b = 1
    else
        sub_140a74f90(var_68_1)
        result.b = 1
else if (result != data_143ce2e30)
    result.b = 0
else
    int32_t r14_5 = (data_143ce2e60.q).d
    int32_t rsi_6 = arg2[1].d
    int64_t* r14_6
    
    if (r14_5 s> 1)
        int32_t r15_4 = rsi_6 - 1
        
        if (rsi_6 == 0)
            r15_4 = 0
        
        int32_t r12_2
        
        if (r14_5 == 0)
            r12_2 = r14_5 + 1
        
        if (r14_5 != 0 || r15_4 == 0)
            r12_2 = 0
        
        int64_t rsi_7 = data_143ce2e58
        int32_t rax_18 = r12_2 + r15_4
        var_40 = 0
        
        if (r14_5 != 0 || rax_18 != 0)
            sub_1405a4c70(&var_40, r14_5 + rax_18, 0)
            memcpy(var_40, rsi_7, r14_5 * 2)
        else
            int32_t var_34_2 = 0
        
        sub_140a20ba0(&var_40, *arg2, r15_4)
        r14_6 = var_40
        rsi_6 = r14_5
    else
        int64_t rbx_9 = *arg2
        r14_6 = nullptr
        var_50 = nullptr
        
        if (rsi_6 != 0)
            sub_1405a4c70(&var_50, rsi_6, 0)
            r14_6 = var_50
            memcpy(r14_6, rbx_9, rsi_6 * 2)
    
    int32_t rax_19 = arg3[2].d
    int32_t rdx_34 = 0
    var_60 = nullptr
    int64_t* r15_5 = nullptr
    int32_t var_58_6 = 0
    int32_t r13_5 = 0
    int32_t var_54_4 = 0
    int32_t rbx_10 = rax_19 - 1
    
    if (rax_19 == 0)
        rbx_10 = 0
    
    if (rbx_10 + 6 s> 0)
        sub_1405947f0(&var_60, rbx_10 + 6)
        rdx_34 = var_58_6
        r13_5 = var_54_4
        r15_5 = var_60
    
    int32_t r12_5 = rbx_10 + 6 + rdx_34
    
    if (r12_5 s> r13_5)
        sub_140594770(&var_60)
        r13_5 = var_54_4
        r15_5 = var_60
    
    *r15_5 = 0x640069006f0076
    r15_5[1].w = 0x20
    int64_t rbx_11 = sx.q(rbx_10)
    memcpy(r15_5 + 0xa, arg3[1], rbx_11.d * 2)
    *(r15_5 + (rbx_11 << 1) + 0xa) = 0
    var_40 = r15_5
    int32_t rax_22
    rax_22.b = r12_5 == 0
    int32_t var_34_3 = r13_5
    int32_t rdx_38 = rax_22 + 0x1a + r12_5
    
    if (rdx_38 s> r13_5)
        sub_1405947f0(&var_40, rdx_38)
    
    sub_140a20ba0(&var_40, u"(out float3 Out_Value) \n{\n", 0x1a)
    uint64_t rbx_12 = var_40
    var_40 = 0
    int32_t r8_25 = r12_5 - 1
    int32_t var_38_6
    var_38_6.q = 0
    
    if (r12_5 == 0)
        r8_25 = 0
    
    sub_140a20ba0(arg4, rbx_12, r8_25)
    
    if (rbx_12 != 0)
        sub_140a74f90(rbx_12)
    
    int32_t rbx_13 = rsi_6 - 1
    
    if (rsi_6 == 0)
        rbx_13 = 0
    
    var_60 = nullptr
    int32_t var_54_5 = 0
    int32_t rdx_40 = 0
    int32_t var_58_8 = 0
    int64_t* r15_6 = nullptr
    int32_t rsi_8 = 0
    
    if (rbx_13 + 0xf s> 0)
        sub_1405947f0(&var_60, rbx_13 + 0xf)
        rdx_40 = var_58_8
        rsi_8 = var_54_5
        r15_6 = var_60
    
    int32_t r12_7 = rbx_13 + 0xf + rdx_40
    
    if (r12_7 s> rsi_8)
        sub_140594770(&var_60)
        rsi_8 = var_54_5
        r15_6 = var_60
    
    int64_t rbx_14 = sx.q(rbx_13)
    __builtin_memcpy(r15_6, u"\t Out_Value = ", 0x1c)
    int32_t r8_27 = memcpy(r15_6 + 0x1c, r14_6, rbx_14.d * 2)
    int32_t var_48_6 = r12_7
    *(r15_6 + (rbx_14 << 1) + 0x1c) = 0
    var_50 = r15_6
    int32_t var_44_3 = rsi_8
    sub_140596690(&var_40, &var_50, sbb.d(r8_27, r8_27, r12_7 != 0) + 3)
    sub_140a20ba0(&var_40, &data_142db0644, 2)
    int32_t rax_25 = var_38_6
    uint64_t rbx_15 = var_40
    var_40 = 0
    var_38_6.q = 0
    int32_t r8_30 = rax_25 - 1
    
    if (rax_25 == 0)
        r8_30 = 0
    
    sub_140a20ba0(arg4, rbx_15, r8_30)
    
    if (rbx_15 != 0)
        sub_140a74f90(rbx_15)
    
    int64_t* rcx_59 = var_50
    
    if (rcx_59 != 0)
        sub_140a74f90(rcx_59)
    
    sub_140a20ba0(arg4, &data_142dce8f8, 3)
    
    if (r14_6 != 0)
        sub_140a74f90(r14_6)
    
    result.b = 1
return result
