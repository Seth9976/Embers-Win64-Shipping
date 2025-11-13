// 函数: sub_1407953c0
// 地址: 0x1407953c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
uint64_t result = *arg3
int32_t r11 = arg4
char var_110
int16_t* var_f8
int32_t var_e8
int16_t** var_e0
void var_d8
void var_d0
int64_t var_c0
int64_t var_b0
int64_t var_98
int64_t var_58_1
int64_t* rax_10
int32_t r8_6
bool cond:5_1

if (result == data_143ce0570)
    int32_t var_6c_1 = 0x80
    __builtin_memset(&var_98, 0, 0x2c)
    int32_t var_64_1 = 0
    var_58_1 = 0
    int32_t var_50_1 = 0
    int32_t var_68_1 = 0xffffffff
    sub_140b2f3e0(&var_d0, sub_140596d10(&var_b0, &arg3[1]))
    var_f8 = nullptr
    int64_t var_f0_1 = 0
    sub_1405947f0(&var_f8, 0xd)
    int32_t r13_1 = var_f0_1:4.d
    int32_t r12_1 = var_f0_1.d + 0xd
    var_f0_1.d = r12_1
    
    if (r12_1 s> r13_1)
        sub_140594770(&var_f8)
        r13_1 = var_f0_1:4.d
        r12_1 = var_f0_1.d
    
    int16_t* rbx_1 = var_f8
    UnDecorator::getReferenceType(rbx_1, u"FunctionName", 0x1a)
    sub_140783a30(&var_98, &var_e8)
    int64_t* r14_1 = var_e0
    *r14_1 = rbx_1
    r14_1[1].d = r12_1
    *(r14_1 + 0xc) = r13_1
    sub_140b2f340(&r14_1[2], &var_d0)
    r14_1[6].d = 0xffffffff
    int16_t* const r13_2 = &data_142d40450
    int32_t rcx_7 = r14_1[1].d
    int16_t* rdx_5
    
    if (rcx_7 == 0)
        rdx_5 = &data_142d40450
    else
        rdx_5 = *r14_1
    
    int32_t rcx_8
    
    if (rcx_7 == 0)
        rcx_8 = 0
    else
        rcx_8 = rcx_7 - 1
    
    var_110.q = 0
    sub_140754310(&var_98, &var_d8, sub_1405969c0(rcx_8, rdx_5), r14_1, var_e8, var_110)
    
    if (var_c0 != 0)
        sub_140a74f90(var_c0)
    
    int32_t rbx_2 = data_143ce0628
    
    if (rbx_2 s> 1)
        int32_t r12_2 = arg2[1].d
        int32_t r12_3
        
        if (r12_2 == 0)
            r12_3 = 0
        else
            r12_3 = r12_2 - 1
        
        int32_t r14_2
        
        if (rbx_2 == 0)
            r14_2 = rbx_2 + 1
        
        if (rbx_2 != 0 || r12_3 == 0)
            r14_2 = 0
        
        var_f8 = nullptr
        int32_t rax_4 = r12_3 + r14_2
        int64_t r14_3 = data_143ce0620
        var_f0_1.d = rbx_2
        
        if (rbx_2 != 0 || rax_4 != 0)
            sub_1405a4c70(&var_f8, rax_4 + rbx_2, 0)
            memcpy(var_f8, r14_3, rbx_2 * 2)
        else
            var_f0_1:4.d = 0
        
        sub_140a20ba0(&var_f8, *arg2, r12_3)
        var_e8.q = var_f8
        var_e0.d = var_f0_1.d
        var_e0:4.d = var_f0_1:4.d
        int64_t var_f0_2 = 0
        var_f8 = nullptr
    else
        sub_140596d10(&var_e8, arg2)
    
    sub_140b2f3e0(&var_d0, &var_e8)
    var_f8 = nullptr
    int16_t** var_f0_3 = nullptr
    sub_1405947f0(&var_f8, 0x18)
    int32_t r12_4 = var_f0_3:4.d
    int32_t r14_4 = var_f0_3.d + 0x18
    var_f0_3.d = r14_4
    
    if (r14_4 s> r12_4)
        sub_140594770(&var_f8)
        r12_4 = var_f0_3:4.d
        r14_4 = var_f0_3.d
    
    int16_t* rbx_3 = var_f8
    UnDecorator::getReferenceType(rbx_3, u"NumSpawnedParticlesName", 0x30)
    sub_140783a30(&var_98, &var_f8)
    *var_f0_3 = rbx_3
    var_f0_3[1].d = r14_4
    *(var_f0_3 + 0xc) = r12_4
    sub_140b2f340(&var_f0_3[2], &var_d0)
    var_f0_3[6].d = 0xffffffff
    int32_t rax_8 = var_f0_3[1].d
    
    if (rax_8 != 0)
        r13_2 = *var_f0_3
    
    int32_t rcx_22 = rax_8 - 1
    
    if (rax_8 == 0)
        rcx_22 = 0
    
    var_110.q = 0
    sub_140754310(&var_98, &var_d8, sub_1405969c0(rcx_22, r13_2), var_f0_3, var_f8.d, var_110)
    
    if (var_c0 != 0)
        sub_140a74f90(var_c0)
    
    rax_10 = sub_140b3b600(&var_b0, data_14396ec30, &var_98)
    int32_t rdx_18 = rax_10[1].d
    cond:5_1 = rdx_18 == 0
    r8_6 = rdx_18 - 1
    goto label_1407956f4

int16_t* rdx_54

if (result != data_143ce0578)
    if (result == data_143ce0580)
        int32_t var_6c_3 = 0x80
        __builtin_memset(&var_98, 0, 0x2c)
        int32_t var_64_3 = 0
        var_58_1 = 0
        int32_t var_50_4 = 0
        int32_t var_68_3 = 0xffffffff
        sub_140b2f3e0(&var_d0, sub_140596d10(&var_b0, &arg3[1]))
        var_f8 = nullptr
        int64_t var_f0_11 = 0
        sub_1405947f0(&var_f8, 0xd)
        int32_t rax_33 = var_f0_11.d + 0xd
        var_f0_11.d = rax_33
        
        if (rax_33 s> 0)
            sub_140594770(&var_f8)
        
        UnDecorator::getReferenceType(var_f8, u"FunctionName", 0x1a)
        sub_14077ad70(&var_98, &var_f8, &var_d0)
        int16_t* rcx_92 = var_f8
        
        if (rcx_92 != 0)
            sub_140a74f90(rcx_92)
        
        if (var_c0 != 0)
            sub_140a74f90(var_c0)
        
        int32_t r8_21 = data_143ce0648
        
        if (r8_21 s> 1)
            int32_t rax_34 = arg2[1].d
            int32_t rbx_10 = rax_34 - 1
            
            if (rax_34 == 0)
                rbx_10 = 0
            
            int32_t r14_7
            
            if (r8_21 == 0)
                r14_7 = r8_21 + 1
            
            if (r8_21 != 0 || rbx_10 == 0)
                r14_7 = 0
            
            int64_t rdx_60 = data_143ce0640
            var_f8 = nullptr
            sub_140596860(&var_f8, rdx_60, r8_21, 0, rbx_10 + r14_7)
            sub_140a20ba0(&var_f8, *arg2, rbx_10)
            var_e8.q = var_f8
            var_e0.d = var_f0_11.d
            var_e0:4.d = var_f0_11:4.d
            int64_t var_f0_12 = 0
            var_f8 = nullptr
        else
            sub_140596d10(&var_e8, arg2)
        
        sub_140b2f3e0(&var_d0, &var_e8)
        var_f8 = nullptr
        int32_t var_f0_13 = 0
        sub_1405947f0(&var_f8, 0x18)
        int32_t rax_39 = var_f0_13 + 0x18
        var_f0_13 = rax_39
        
        if (rax_39 s> 0)
            sub_140594770(&var_f8)
        
        UnDecorator::getReferenceType(var_f8, u"InstanceCountOffsetName", 0x30)
        sub_14077ad70(&var_98, &var_f8, &var_d0)
        int16_t* rcx_102 = var_f8
        
        if (rcx_102 != 0)
            sub_140a74f90(rcx_102)
        
        if (var_c0 != 0)
            sub_140a74f90(var_c0)
        
        rdx_54 = data_14396ec40
        goto label_140795cd5
    
    if (result == data_143ce0588)
        int32_t var_6c_4 = 0x80
        __builtin_memset(&var_98, 0, 0x2c)
        int32_t var_64_4 = 0
        var_58_1 = 0
        int32_t var_50_5 = 0
        int32_t var_68_4 = 0xffffffff
        sub_140b2f3e0(&var_d0, sub_140596d10(&var_b0, &arg3[1]))
        var_f8 = nullptr
        int64_t var_f0_14 = 0
        sub_1405947f0(&var_f8, 0xd)
        int32_t rax_41 = var_f0_14.d + 0xd
        var_f0_14.d = rax_41
        
        if (rax_41 s> 0)
            sub_140594770(&var_f8)
        
        UnDecorator::getReferenceType(var_f8, u"FunctionName", 0x1a)
        sub_14077ad70(&var_98, &var_f8, &var_d0)
        int16_t* rcx_110 = var_f8
        
        if (rcx_110 != 0)
            sub_140a74f90(rcx_110)
        
        if (var_c0 != 0)
            sub_140a74f90(var_c0)
        
        int32_t r8_25 = data_143ce0668
        int32_t r14_8 = 1
        
        if (r8_25 s> 1)
            int32_t rax_42 = arg2[1].d
            int32_t rbx_11 = rax_42 - 1
            
            if (rax_42 == 0)
                rbx_11 = 0
            
            int32_t rax_43
            
            if (r8_25 == 0)
                rax_43 = 1
            
            if (r8_25 != 0 || rbx_11 == 0)
                rax_43 = 0
            
            int64_t rdx_70 = data_143ce0660
            var_f8 = nullptr
            sub_140596860(&var_f8, rdx_70, r8_25, 0, rax_43 + rbx_11)
            sub_140a20ba0(&var_f8, *arg2, rbx_11)
            var_e8.q = var_f8
            var_e0.d = var_f0_14.d
            var_e0:4.d = var_f0_14:4.d
            int64_t var_f0_15 = 0
            var_f8 = nullptr
        else
            sub_140596d10(&var_e8, arg2)
        
        sub_140b2f3e0(&var_d0, &var_e8)
        var_f8 = nullptr
        int64_t var_f0_16 = 0
        sub_1405947f0(&var_f8, 0x13)
        int32_t rax_48 = var_f0_16.d + 0x13
        var_f0_16.d = rax_48
        
        if (rax_48 s> 0)
            sub_140594770(&var_f8)
        
        UnDecorator::getReferenceType(var_f8, u"IDToIndexTableName", 0x26)
        sub_14077ad70(&var_98, &var_f8, &var_d0)
        int16_t* rcx_120 = var_f8
        
        if (rcx_120 != 0)
            sub_140a74f90(rcx_120)
        
        if (var_c0 != 0)
            sub_140a74f90(var_c0)
        
        int32_t r8_28 = data_143ce0688
        
        if (r8_28 s> 1)
            int32_t rax_49 = arg2[1].d
            int32_t rbx_12 = rax_49 - 1
            
            if (rax_49 == 0)
                rbx_12 = 0
            
            int32_t rax_50
            
            if (r8_28 == 0)
                rax_50 = 1
            
            if (r8_28 != 0 || rbx_12 == 0)
                rax_50 = 0
            
            int64_t rdx_76 = data_143ce0680
            var_f8 = nullptr
            sub_140596860(&var_f8, rdx_76, r8_28, 0, rax_50 + rbx_12)
            sub_140a20ba0(&var_f8, *arg2, rbx_12)
            var_e8.q = var_f8
            var_e0.d = var_f0_16.d
            var_e0:4.d = var_f0_16:4.d
            int64_t var_f0_17 = 0
            var_f8 = nullptr
        else
            sub_140596d10(&var_e8, arg2)
        
        sub_140b2f3e0(&var_d0, &var_e8)
        var_f8 = nullptr
        int64_t var_f0_18 = 0
        sub_1405947f0(&var_f8, 0x13)
        int32_t rax_55 = var_f0_18.d + 0x13
        var_f0_18.d = rax_55
        
        if (rax_55 s> 0)
            sub_140594770(&var_f8)
        
        UnDecorator::getReferenceType(var_f8, u"InputIntBufferName", 0x26)
        sub_14077ad70(&var_98, &var_f8, &var_d0)
        int16_t* rcx_130 = var_f8
        
        if (rcx_130 != 0)
            sub_140a74f90(rcx_130)
        
        if (var_c0 != 0)
            sub_140a74f90(var_c0)
        
        int32_t r8_31 = data_143ce06c8
        
        if (r8_31 s> 1)
            int32_t rax_56 = arg2[1].d
            int32_t rbx_13 = rax_56 - 1
            
            if (rax_56 == 0)
                rbx_13 = 0
            
            int32_t rax_57
            
            if (r8_31 == 0)
                rax_57 = 1
            
            if (r8_31 != 0 || rbx_13 == 0)
                rax_57 = 0
            
            int64_t rdx_82 = data_143ce06c0
            var_f8 = nullptr
            sub_140596860(&var_f8, rdx_82, r8_31, 0, rax_57 + rbx_13)
            sub_140a20ba0(&var_f8, *arg2, rbx_13)
            var_e8.q = var_f8
            var_e0.d = var_f0_18.d
            var_e0:4.d = var_f0_18:4.d
            int64_t var_f0_19 = 0
            var_f8 = nullptr
        else
            sub_140596d10(&var_e8, arg2)
        
        sub_140b2f3e0(&var_d0, &var_e8)
        var_f8 = nullptr
        int64_t var_f0_20 = 0
        sub_1405947f0(&var_f8, 0x1c)
        int32_t rax_62 = var_f0_20.d + 0x1c
        var_f0_20.d = rax_62
        
        if (rax_62 s> 0)
            sub_140594770(&var_f8)
        
        UnDecorator::getReferenceType(var_f8, u"AcquireTagRegisterIndexName", 0x38)
        sub_14077ad70(&var_98, &var_f8, &var_d0)
        int16_t* rcx_140 = var_f8
        
        if (rcx_140 != 0)
            sub_140a74f90(rcx_140)
        
        if (var_c0 != 0)
            sub_140a74f90(var_c0)
        
        int32_t r8_34 = data_143ce06a8
        
        if (r8_34 s> 1)
            int32_t rax_63 = arg2[1].d
            int32_t rbx_14 = rax_63 - 1
            
            if (rax_63 == 0)
                rbx_14 = 0
            
            if (r8_34 != 0 || rbx_14 == 0)
                r14_8 = 0
            
            int64_t rdx_88 = data_143ce06a0
            var_f8 = nullptr
            sub_140596860(&var_f8, rdx_88, r8_34, 0, rbx_14 + r14_8)
            sub_140a20ba0(&var_f8, *arg2, rbx_14)
            var_e8.q = var_f8
            var_e0.d = var_f0_20.d
            var_e0:4.d = var_f0_20:4.d
            int64_t var_f0_21 = 0
            var_f8 = nullptr
        else
            sub_140596d10(&var_e8, arg2)
        
        sub_140b2f3e0(&var_d0, &var_e8)
        var_f8 = nullptr
        int32_t var_f0_22 = 0
        sub_1405947f0(&var_f8, 0x16)
        int32_t rax_68 = var_f0_22 + 0x16
        var_f0_22 = rax_68
        
        if (rax_68 s> 0)
            sub_140594770(&var_f8)
        
        UnDecorator::getReferenceType(var_f8, u"ParticleStrideIntName", 0x2c)
        sub_14077ad70(&var_98, &var_f8, &var_d0)
        int16_t* rcx_150 = var_f8
        
        if (rcx_150 != 0)
            sub_140a74f90(rcx_150)
        
        if (var_c0 != 0)
            sub_140a74f90(var_c0)
        
        rdx_54 = data_14396ec48
        goto label_140795cd5
    
    if (result == data_143ce0590)
        result = FindHandler<class __FrameHandler4>(arg2, arg3, r11, 1, 1, 0, arg5)
    else if (result == data_143ce0598)
        arg4.b = 2
        result = FindHandler<class __FrameHandler4>(arg2, arg3, r11, arg4.b, 1, 0, arg5)
    else if (result == data_143ce05a0)
        result = FindHandler<class __FrameHandler4>(arg2, arg3, r11, 0, 1, 0, arg5)
    else if (result == data_143ce05a8)
        result = FindHandler<class __FrameHandler4>(arg2, arg3, r11, 0, 2, 0, arg5)
    else if (result == data_143ce05b0)
        result = FindHandler<class __FrameHandler4>(arg2, arg3, r11, 0, 3, 0, arg5)
    else if (result == data_143ce05b8 || result == data_143ce05c0 || result == data_143ce05c8)
        result = FindHandler<class __FrameHandler4>(arg2, arg3, r11, 0, 4, 0, arg5)
    else if (result == data_143ce05d0)
        arg4.b = 3
        result = FindHandler<class __FrameHandler4>(arg2, arg3, r11, arg4.b, 1, 0, arg5)
    else if (result == data_143ce05d8)
        result = FindHandler<class __FrameHandler4>(arg2, arg3, r11, 1, 1, 1, arg5)
    else if (result == data_143ce05e0)
        arg4.b = 2
        result = FindHandler<class __FrameHandler4>(arg2, arg3, r11, arg4.b, 1, 1, arg5)
    else if (result == data_143ce05e8)
        result = FindHandler<class __FrameHandler4>(arg2, arg3, r11, 0, 1, 1, arg5)
    else if (result == data_143ce05f0)
        result = FindHandler<class __FrameHandler4>(arg2, arg3, r11, 0, 2, 1, arg5)
    else if (result == data_143ce05f8)
        result = FindHandler<class __FrameHandler4>(arg2, arg3, r11, 0, 3, 1, arg5)
    else if (result == data_143ce0600 || result == data_143ce0608 || result == data_143ce0610)
        result = FindHandler<class __FrameHandler4>(arg2, arg3, r11, 0, 4, 1, arg5)
    else if (result != data_143ce0618)
        result.b = 0
    else
        arg4.b = 3
        result = FindHandler<class __FrameHandler4>(arg2, arg3, r11, arg4.b, 1, 1, arg5)
else
    int32_t var_6c_2 = 0x80
    __builtin_memset(&var_98, 0, 0x2c)
    int32_t var_64_2 = 0
    var_58_1 = 0
    int32_t var_50_3 = 0
    int32_t var_68_2 = 0xffffffff
    sub_140b2f3e0(&var_d0, sub_140596d10(&var_b0, &arg3[1]))
    var_f8 = nullptr
    int64_t var_f0_4 = 0
    sub_1405947f0(&var_f8, 0xd)
    int32_t r13_3 = var_f0_4:4.d
    int32_t r12_5 = var_f0_4.d + 0xd
    var_f0_4.d = r12_5
    
    if (r12_5 s> r13_3)
        sub_140594770(&var_f8)
        r13_3 = var_f0_4:4.d
        r12_5 = var_f0_4.d
    
    int16_t* rbx_4 = var_f8
    UnDecorator::getReferenceType(rbx_4, u"FunctionName", 0x1a)
    sub_140783a30(&var_98, &var_e8)
    *var_e0 = rbx_4
    var_e0[1].d = r12_5
    *(var_e0 + 0xc) = r13_3
    sub_140b2f340(&var_e0[2], &var_d0)
    var_e0[6].d = 0xffffffff
    int32_t rcx_38 = var_e0[1].d
    int16_t* rdx_25
    
    if (rcx_38 == 0)
        rdx_25 = &data_142d40450
    else
        rdx_25 = *var_e0
    
    int32_t rcx_39
    
    if (rcx_38 == 0)
        rcx_39 = 0
    else
        rcx_39 = rcx_38 - 1
    
    var_110.q = 0
    sub_140754310(&var_98, &var_d8, sub_1405969c0(rcx_39, rdx_25), var_e0, var_e8, var_110)
    
    if (var_c0 != 0)
        sub_140a74f90(var_c0)
    
    int32_t rbx_5 = data_143ce0628
    int32_t r14_6 = 1
    
    if (rbx_5 s> 1)
        int32_t r12_6 = arg2[1].d
        int32_t r12_7
        
        if (r12_6 == 0)
            r12_7 = 0
        else
            r12_7 = r12_6 - 1
        
        int32_t rax_13
        
        if (rbx_5 == 0)
            rax_13 = 1
        
        if (rbx_5 != 0 || r12_7 == 0)
            rax_13 = 0
        
        int64_t r13_4 = data_143ce0620
        int32_t rcx_44 = r12_7 + rax_13
        var_f8 = nullptr
        var_f0_4.d = rbx_5
        
        if (rbx_5 != 0 || rcx_44 != 0)
            sub_1405a4c70(&var_f8, rcx_44 + rbx_5, 0)
            memcpy(var_f8, r13_4, rbx_5 * 2)
        else
            var_f0_4:4.d = 0
        
        sub_140a20ba0(&var_f8, *arg2, r12_7)
        var_e8.q = var_f8
        var_e0.d = var_f0_4.d
        var_e0:4.d = var_f0_4:4.d
        int64_t var_f0_5 = 0
        var_f8 = nullptr
    else
        sub_140596d10(&var_e8, arg2)
    
    sub_140b2f3e0(&var_d0, &var_e8)
    var_f8 = nullptr
    int64_t var_f0_6 = 0
    sub_1405947f0(&var_f8, 0x18)
    int32_t r12_8 = var_f0_6.d + 0x18
    var_f0_6.d = r12_8
    
    if (r12_8 s> 0)
        sub_140594770(&var_f8)
        r12_8 = var_f0_6.d
    
    int16_t* rbx_6 = var_f8
    UnDecorator::getReferenceType(rbx_6, u"NumSpawnedParticlesName", 0x30)
    sub_140783a30(&var_98, &var_b0)
    int16_t** var_a8
    *var_a8 = rbx_6
    var_a8[1].d = r12_8
    *(var_a8 + 0xc) = var_f0_6:4.d
    sub_140b2f340(&var_a8[2], &var_d0)
    var_a8[6].d = 0xffffffff
    int32_t rcx_54 = var_a8[1].d
    int16_t* rdx_35
    
    if (rcx_54 == 0)
        rdx_35 = &data_142d40450
    else
        rdx_35 = *var_a8
    
    int32_t rcx_55
    
    if (rcx_54 == 0)
        rcx_55 = 0
    else
        rcx_55 = rcx_54 - 1
    
    var_110.q = 0
    sub_140754310(&var_98, &var_d8, sub_1405969c0(rcx_55, rdx_35), var_a8, var_b0.d, var_110)
    
    if (var_c0 != 0)
        sub_140a74f90(var_c0)
    
    int32_t rbx_7 = data_143ce0638
    
    if (rbx_7 s> 1)
        int32_t r12_9 = arg2[1].d
        int32_t r12_10
        
        if (r12_9 == 0)
            r12_10 = 0
        else
            r12_10 = r12_9 - 1
        
        int32_t rax_19
        
        if (rbx_7 == 0)
            rax_19 = 1
        
        if (rbx_7 != 0 || r12_10 == 0)
            rax_19 = 0
        
        int64_t r13_6 = data_143ce0630
        int32_t rcx_60 = rax_19 + r12_10
        var_f8 = nullptr
        var_f0_6.d = rbx_7
        
        if (rbx_7 != 0 || rcx_60 != 0)
            sub_1405a4c70(&var_f8, rcx_60 + rbx_7, 0)
            memcpy(var_f8, r13_6, rbx_7 * 2)
        else
            var_f0_6:4.d = 0
        
        sub_140a20ba0(&var_f8, *arg2, r12_10)
        var_e8.q = var_f8
        var_e0.d = var_f0_6.d
        var_e0:4.d = var_f0_6:4.d
        int64_t var_f0_7 = 0
        var_f8 = nullptr
    else
        sub_140596d10(&var_e8, arg2)
    
    sub_140b2f3e0(&var_d0, &var_e8)
    var_f8 = nullptr
    int64_t var_f0_8 = 0
    sub_1405947f0(&var_f8, 0x1f)
    int32_t r13_7 = var_f0_8.d + 0x1f
    var_f0_8.d = r13_7
    
    if (r13_7 s> 0)
        sub_140594770(&var_f8)
        r13_7 = var_f0_8.d
    
    int16_t* rbx_8 = var_f8
    UnDecorator::getReferenceType(rbx_8, u"SpawnedParticlesAcquireTagName", 0x3e)
    sub_140783a30(&var_98, &var_b0)
    *var_a8 = rbx_8
    var_a8[1].d = r13_7
    *(var_a8 + 0xc) = var_f0_8:4.d
    sub_140b2f340(&var_a8[2], &var_d0)
    var_a8[6].d = 0xffffffff
    int32_t rdx_45 = var_a8[1].d
    int16_t* rax_24
    
    if (rdx_45 == 0)
        rax_24 = &data_142d40450
    else
        rax_24 = *var_a8
    
    int32_t rcx_70 = rdx_45 - 1
    
    if (rdx_45 == 0)
        rcx_70 = 0
    
    var_110.q = 0
    sub_140754310(&var_98, &var_d8, sub_1405969c0(rcx_70, rax_24), var_a8, var_b0.d, var_110)
    
    if (var_c0 != 0)
        sub_140a74f90(var_c0)
    
    int32_t r8_16 = data_143ce0658
    
    if (r8_16 s> 1)
        int32_t rax_26 = arg2[1].d
        int32_t rbx_9 = rax_26 - 1
        
        if (rax_26 == 0)
            rbx_9 = 0
        
        if (r8_16 != 0 || rbx_9 == 0)
            r14_6 = 0
        
        int64_t rdx_49 = data_143ce0650
        var_f8 = nullptr
        sub_140596860(&var_f8, rdx_49, r8_16, 0, r14_6 + rbx_9)
        sub_140a20ba0(&var_f8, *arg2, rbx_9)
        var_e8.q = var_f8
        var_e0.d = var_f0_8.d
        var_e0:4.d = var_f0_8:4.d
        int64_t var_f0_9 = 0
        var_f8 = nullptr
    else
        sub_140596d10(&var_e8, arg2)
    
    sub_140b2f3e0(&var_d0, &var_e8)
    var_f8 = nullptr
    int32_t var_f0_10 = 0
    sub_1405947f0(&var_f8, 0x15)
    int32_t rax_31 = var_f0_10 + 0x15
    var_f0_10 = rax_31
    
    if (rax_31 s> 0)
        sub_140594770(&var_f8)
    
    UnDecorator::getReferenceType(var_f8, u"SpawnedIDsBufferName", 0x2a)
    sub_14077ad70(&var_98, &var_f8, &var_d0)
    int16_t* rcx_82 = var_f8
    
    if (rcx_82 != 0)
        sub_140a74f90(rcx_82)
    
    if (var_c0 != 0)
        sub_140a74f90(var_c0)
    
    rdx_54 = data_14396ec38
label_140795cd5:
    rax_10 = sub_140b3b600(&var_b0, rdx_54, &var_98)
    int32_t rcx_85 = rax_10[1].d
    cond:5_1 = rcx_85 == 0
    r8_6 = rcx_85 - 1
label_1407956f4:
    
    if (cond:5_1)
        r8_6 = 0
    
    sub_140a20ba0(arg5, *rax_10, r8_6)
    int64_t rcx_28 = var_b0
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)
    
    int32_t var_50_2 = 0
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    sub_1407464c0(&var_98)
    result.b = 1
__security_check_cookie(rax_1 ^ &var_138)
return result
