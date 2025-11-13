// 函数: sub_14075b900
// 地址: 0x14075b900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
void* result = *arg3
int64_t** var_1f8
int32_t var_1ec
int64_t var_1e8
int64_t var_1d8
int64_t** var_1c8
int64_t** var_198
int64_t* var_188
void var_168
void var_158
int64_t var_148
void var_138
int64_t var_128
void var_98
int64_t** rcx_42

if (result != data_143cdfde0)
    if (result == data_143cdfde8)
        var_1e8 = 0
        int32_t var_1e0_2 = 0
        sub_1405947f0(&var_1e8, 0xd)
        int32_t rax_27 = var_1e0_2 + 0xd
        var_1e0_2 = rax_27
        
        if (rax_27 s> 0)
            sub_140594770(&var_1e8)
        
        UnDecorator::getReferenceType(var_1e8, u"FunctionName", 0x1a)
        int32_t* var_180_1 = sub_140b2f3e0(&var_158, sub_140596d10(&var_168, &arg3[1]))
        var_188 = &var_1e8
        var_1d8 = 0
        int32_t var_1d0_2 = 0
        sub_1405947f0(&var_1d8, 0xd)
        int32_t rax_30 = var_1d0_2 + 0xd
        var_1d0_2 = rax_30
        
        if (rax_30 s> 0)
            sub_140594770(&var_1d8)
        
        UnDecorator::getReferenceType(var_1d8, u"ChannelCount", 0x1a)
        int32_t r14_4 = (data_143cdfe08.q).d
        
        if (r14_4 s> 1)
            int32_t rax_31 = arg2[1].d
            int32_t r15_4 = rax_31 - 1
            
            if (rax_31 == 0)
                r15_4 = 0
            
            int32_t rsi_3
            
            if (r14_4 == 0)
                rsi_3 = r14_4 + 1
            
            if (r14_4 != 0 || r15_4 == 0)
                rsi_3 = 0
            
            var_1f8 = nullptr
            int32_t rax_32 = r15_4 + rsi_3
            int64_t rsi_4 = data_143cdfe00
            
            if (r14_4 != 0 || rax_32 != 0)
                sub_1405a4c70(&var_1f8, rax_32 + r14_4, 0)
                memcpy(var_1f8, rsi_4, r14_4 * 2)
            else
                var_1ec = 0
            
            sub_140a20ba0(&var_1f8, *arg2, r15_4)
            var_198 = var_1f8
            int32_t var_190_2 = r14_4
            int32_t var_18c_2 = var_1ec
            int32_t var_1f0_1
            var_1f0_1.q = 0
            var_1f8 = nullptr
        else
            sub_140596d10(&var_198, arg2)
        
        int32_t* var_170_1 = sub_140b2f3e0(&var_138, &var_198)
        int64_t* var_178_1 = &var_1d8
        var_1c8 = &var_188
        void* var_1c0_1 = &var_168
        var_1c8.o = var_1c8.o
        sub_140742130(&var_98, &var_1c8)
        
        if (var_128 != 0)
            sub_140a74f90(var_128)
        
        int64_t rcx_60 = var_1d8
        
        if (rcx_60 != 0)
            sub_140a74f90(rcx_60)
        
        if (var_148 != 0)
            sub_140a74f90(var_148)
        
        int64_t rcx_62 = var_1e8
        
        if (rcx_62 != 0)
            sub_140a74f90(rcx_62)
        
        int64_t* rax_37 = sub_140b3b600(&var_1c8, data_14396eb40, &var_98)
        int32_t rcx_64 = rax_37[1].d
        int32_t r8_15 = rcx_64 - 1
        
        if (rcx_64 == 0)
            r8_15 = 0
        
        sub_140a20ba0(arg4, *rax_37, r8_15)
        rcx_42 = var_1c8
        goto label_14075bdf0
    
    result.b = 0
else
    var_1d8 = 0
    int32_t var_1d0_1 = 0
    sub_1405947f0(&var_1d8, 0xd)
    int32_t rax_2 = var_1d0_1 + 0xd
    var_1d0_1 = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_1d8)
    
    UnDecorator::getReferenceType(var_1d8, u"FunctionName", 0x1a)
    int32_t* var_d0_1 = sub_140b2f3e0(&var_138, sub_140596d10(&var_168, &arg3[1]))
    int64_t* var_d8 = &var_1d8
    var_1e8 = 0
    int32_t var_1e0_1 = 0
    sub_1405947f0(&var_1e8, 0xd)
    int32_t rax_5 = var_1e0_1 + 0xd
    var_1e0_1 = rax_5
    
    if (rax_5 s> 0)
        sub_140594770(&var_1e8)
    
    UnDecorator::getReferenceType(var_1e8, u"ChannelCount", 0x1a)
    int32_t r14_1 = (data_143cdfe08.q).d
    int32_t rsi_1 = 1
    int32_t var_1f0
    
    if (r14_1 s> 1)
        int32_t rax_6 = arg2[1].d
        int32_t r15_1 = rax_6 - 1
        
        if (rax_6 == 0)
            r15_1 = 0
        
        int32_t rax_7
        
        if (r14_1 == 0)
            rax_7 = 1
        
        if (r14_1 != 0 || r15_1 == 0)
            rax_7 = 0
        
        int64_t r12_1 = data_143cdfe00
        int32_t rcx_9 = r15_1 + rax_7
        var_1f8 = nullptr
        
        if (r14_1 != 0 || rcx_9 != 0)
            sub_1405a4c70(&var_1f8, rcx_9 + r14_1, 0)
            memcpy(var_1f8, r12_1, r14_1 * 2)
        else
            var_1ec = 0
        
        sub_140a20ba0(&var_1f8, *arg2, r15_1)
        var_188 = var_1f8
        int64_t var_180
        var_180.d = r14_1
        var_180:4.d = var_1ec
        var_1f0.q = 0
        var_1f8 = nullptr
    else
        sub_140596d10(&var_188, arg2)
    
    int32_t* var_c0_1 = sub_140b2f3e0(&var_158, &var_188)
    int64_t* var_c8_1 = &var_1e8
    int64_t var_1a8 = 0
    int32_t var_1a0_1 = 0
    sub_1405947f0(&var_1a8, 0x13)
    int32_t rax_12 = var_1a0_1 + 0x13
    var_1a0_1 = rax_12
    
    if (rax_12 s> 0)
        sub_140594770(&var_1a8)
    
    UnDecorator::getReferenceType(var_1a8, u"SpectrumResolution", 0x26)
    int32_t r14_2 = (data_143cdfe18.q).d
    
    if (r14_2 s> 1)
        int32_t rax_13 = arg2[1].d
        int32_t r15_2 = rax_13 - 1
        
        if (rax_13 == 0)
            r15_2 = 0
        
        int32_t rax_14
        
        if (r14_2 == 0)
            rax_14 = 1
        
        if (r14_2 != 0 || r15_2 == 0)
            rax_14 = 0
        
        int64_t r12_2 = data_143cdfe10
        int32_t rcx_18 = rax_14 + r15_2
        var_1f8 = nullptr
        
        if (r14_2 != 0 || rcx_18 != 0)
            sub_1405a4c70(&var_1f8, rcx_18 + r14_2, 0)
            memcpy(var_1f8, r12_2, r14_2 * 2)
        else
            var_1ec = 0
        
        sub_140a20ba0(&var_1f8, *arg2, r15_2)
        var_1c8 = var_1f8
        int64_t var_1c0
        var_1c0.d = r14_2
        var_1c0:4.d = var_1ec
        var_1f0.q = 0
        var_1f8 = nullptr
    else
        sub_140596d10(&var_1c8, arg2)
    
    void var_f8
    int32_t* var_b0_1 = sub_140b2f3e0(&var_f8, &var_1c8)
    int64_t* var_b8_1 = &var_1a8
    int64_t var_1b8 = 0
    int32_t var_1b0_1 = 0
    sub_1405947f0(&var_1b8, 0xf)
    int32_t rax_19 = var_1b0_1 + 0xf
    var_1b0_1 = rax_19
    
    if (rax_19 s> 0)
        sub_140594770(&var_1b8)
    
    UnDecorator::getReferenceType(var_1b8, u"SpectrumBuffer", 0x1e)
    int32_t r14_3 = (data_143cdfdf8.q).d
    
    if (r14_3 s> 1)
        int32_t rax_20 = arg2[1].d
        int32_t r15_3 = rax_20 - 1
        
        if (rax_20 == 0)
            r15_3 = 0
        
        if (r14_3 != 0 || r15_3 == 0)
            rsi_1 = 0
        
        var_1f8 = nullptr
        int32_t rax_21 = rsi_1 + r15_3
        int64_t rsi_2 = data_143cdfdf0
        
        if (r14_3 != 0 || rax_21 != 0)
            sub_1405a4c70(&var_1f8, r14_3 + rax_21, 0)
            memcpy(var_1f8, rsi_2, r14_3 * 2)
        else
            var_1ec = 0
        
        sub_140a20ba0(&var_1f8, *arg2, r15_3)
        var_198 = var_1f8
        int32_t var_190_1 = r14_3
        int32_t var_18c_1 = var_1ec
        var_1f0.q = 0
        var_1f8 = nullptr
    else
        sub_140596d10(&var_198, arg2)
    
    void var_118
    int32_t* var_a0_1 = sub_140b2f3e0(&var_118, &var_198)
    int64_t* var_a8_1 = &var_1b8
    var_1f8 = &var_d8
    var_1f0.q = &var_98
    var_1f8.o = var_1f8.o
    sub_140742130(&var_98, &var_1f8)
    int64_t var_108
    
    if (var_108 != 0)
        sub_140a74f90(var_108)
    
    int64_t rcx_33 = var_1b8
    
    if (rcx_33 != 0)
        sub_140a74f90(rcx_33)
    
    int64_t var_e8
    
    if (var_e8 != 0)
        sub_140a74f90(var_e8)
    
    int64_t rcx_35 = var_1a8
    
    if (rcx_35 != 0)
        sub_140a74f90(rcx_35)
    
    if (var_148 != 0)
        sub_140a74f90(var_148)
    
    int64_t rcx_37 = var_1e8
    
    if (rcx_37 != 0)
        sub_140a74f90(rcx_37)
    
    if (var_128 != 0)
        sub_140a74f90(var_128)
    
    int64_t rcx_39 = var_1d8
    
    if (rcx_39 != 0)
        sub_140a74f90(rcx_39)
    
    int64_t* rax_26 = sub_140b3b600(&var_1f8, data_14396eb38, &var_98)
    int32_t rdx_23 = rax_26[1].d
    int32_t r8_10 = rdx_23 - 1
    
    if (rdx_23 == 0)
        r8_10 = 0
    
    sub_140a20ba0(arg4, *rax_26, r8_10)
    rcx_42 = var_1f8
label_14075bdf0:
    
    if (rcx_42 != 0)
        sub_140a74f90(rcx_42)
    
    int32_t var_50_1 = 0
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    sub_1407464c0(&var_98)
    result.b = 1
__security_check_cookie(rax_1 ^ &var_218)
return result
