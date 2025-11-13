// 函数: ?_RTC_AllocaFailure@@YAXPEAXPEAU_RTC_ALLOCA_NODE@@H@Z
// 地址: 0x14075b230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
void* result = *arg3
bool cond:0 = result != data_143cdfdb0
int64_t* r12 = arg4
int64_t* var_178 = r12
int64_t** var_1f8
int32_t var_1ec
int64_t var_1e8
int64_t var_1d8
int64_t** var_1c8
int64_t** var_1a8
int64_t* var_198
void var_170
void var_160
int64_t var_150
void var_140
int64_t var_130
void var_98
int64_t** rcx_37

if (cond:0)
    if (result == data_143cdfdb8)
        var_1e8 = 0
        int32_t var_1e0_2 = 0
        sub_1405947f0(&var_1e8, 0xd)
        int32_t rax_22 = var_1e0_2 + 0xd
        var_1e0_2 = rax_22
        
        if (rax_22 s> 0)
            sub_140594770(&var_1e8)
        
        UnDecorator::getReferenceType(var_1e8, u"FunctionName", 0x1a)
        int32_t* var_190_2 = sub_140b2f3e0(&var_160, sub_140596d10(&var_170, &arg3[1]))
        var_198 = &var_1e8
        var_1d8 = 0
        int32_t var_1d0_2 = 0
        sub_1405947f0(&var_1d8, 0xd)
        int32_t rax_25 = var_1d0_2 + 0xd
        var_1d0_2 = rax_25
        
        if (rax_25 s> 0)
            sub_140594770(&var_1d8)
        
        UnDecorator::getReferenceType(var_1d8, u"ChannelCount", 0x1a)
        int32_t rsi_3 = (data_143cdfdd8.q).d
        
        if (rsi_3 s> 1)
            int32_t rax_26 = arg2[1].d
            int32_t r15_3 = rax_26 - 1
            
            if (rax_26 == 0)
                r15_3 = 0
            
            int32_t r14_3
            
            if (rsi_3 == 0)
                r14_3 = rsi_3 + 1
            
            if (rsi_3 != 0 || r15_3 == 0)
                r14_3 = 0
            
            var_1f8 = nullptr
            int32_t rax_27 = r15_3 + r14_3
            int64_t r14_4 = data_143cdfdd0
            
            if (rsi_3 != 0 || rax_27 != 0)
                sub_1405a4c70(&var_1f8, rax_27 + rsi_3, 0)
                memcpy(var_1f8, r14_4, rsi_3 * 2)
            else
                var_1ec = 0
            
            sub_140a20ba0(&var_1f8, *arg2, r15_3)
            var_1a8 = var_1f8
            int32_t var_1a0_2 = rsi_3
            int32_t var_19c_2 = var_1ec
            int32_t var_1f0_1
            var_1f0_1.q = 0
            var_1f8 = nullptr
        else
            sub_140596d10(&var_1a8, arg2)
        
        int32_t* var_180_1 = sub_140b2f3e0(&var_140, &var_1a8)
        int64_t* var_188_1 = &var_1d8
        var_1c8 = &var_198
        int64_t** var_1c0_1 = &var_178
        var_1c8.o = var_1c8.o
        sub_140742130(&var_98, &var_1c8)
        
        if (var_130 != 0)
            sub_140a74f90(var_130)
        
        int64_t rcx_55 = var_1d8
        
        if (rcx_55 != 0)
            sub_140a74f90(rcx_55)
        
        if (var_150 != 0)
            sub_140a74f90(var_150)
        
        int64_t rcx_57 = var_1e8
        
        if (rcx_57 != 0)
            sub_140a74f90(rcx_57)
        
        int64_t* rax_32 = sub_140b3b600(&var_1c8, data_14396eb28, &var_98)
        int32_t rcx_59 = rax_32[1].d
        int32_t r8_12 = rcx_59 - 1
        
        if (rcx_59 == 0)
            r8_12 = 0
        
        sub_140a20ba0(r12, *rax_32, r8_12)
        rcx_37 = var_1c8
        goto label_14075b665
    
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
    int32_t* var_d0_1 = sub_140b2f3e0(&var_140, sub_140596d10(&var_170, &arg3[1]))
    int64_t* var_d8 = &var_1d8
    var_1e8 = 0
    int32_t var_1e0_1 = 0
    sub_1405947f0(&var_1e8, 0xd)
    int32_t rax_5 = var_1e0_1 + 0xd
    var_1e0_1 = rax_5
    
    if (rax_5 s> 0)
        sub_140594770(&var_1e8)
    
    UnDecorator::getReferenceType(var_1e8, u"ChannelCount", 0x1a)
    int32_t rsi_1 = (data_143cdfdd8.q).d
    int32_t r14_1 = 1
    int32_t var_1f0
    
    if (rsi_1 s> 1)
        int32_t rax_6 = arg2[1].d
        int32_t r15_1 = rax_6 - 1
        
        if (rax_6 == 0)
            r15_1 = 0
        
        int32_t rax_7
        
        if (rsi_1 == 0)
            rax_7 = 1
        
        if (rsi_1 != 0 || r15_1 == 0)
            rax_7 = 0
        
        int64_t r12_1 = data_143cdfdd0
        int32_t rcx_9 = rax_7 + r15_1
        var_1f8 = nullptr
        
        if (rsi_1 != 0 || rcx_9 != 0)
            sub_1405a4c70(&var_1f8, rcx_9 + rsi_1, 0)
            memcpy(var_1f8, r12_1, rsi_1 * 2)
        else
            var_1ec = 0
        
        sub_140a20ba0(&var_1f8, *arg2, r15_1)
        r12 = var_178
        var_1c8 = var_1f8
        int64_t var_1c0
        var_1c0.d = rsi_1
        var_1c0:4.d = var_1ec
        var_1f0.q = 0
        var_1f8 = nullptr
    else
        sub_140596d10(&var_1c8, arg2)
    
    int32_t* var_c0_1 = sub_140b2f3e0(&var_160, &var_1c8)
    int64_t* var_c8_1 = &var_1e8
    var_198 = nullptr
    int32_t var_190_1 = 0
    sub_1405947f0(&var_198, 0x16)
    int32_t rax_12 = var_190_1 + 0x16
    var_190_1 = rax_12
    
    if (rax_12 s> 0)
        sub_140594770(&var_198)
    
    UnDecorator::getReferenceType(var_198, u"AudioBufferNumSamples", 0x2c)
    void var_100
    int32_t* var_b0_1 = sub_140b2f3a0(&var_100, *(arg1 + 0x38))
    int64_t* var_b8_1 = &var_198
    int64_t var_1b8 = 0
    int32_t var_1b0_1 = 0
    sub_1405947f0(&var_1b8, 0xc)
    int32_t rax_14 = var_1b0_1 + 0xc
    var_1b0_1 = rax_14
    
    if (rax_14 s> 0)
        sub_140594770(&var_1b8)
    
    UnDecorator::getReferenceType(var_1b8, u"AudioBuffer", 0x18)
    int32_t rsi_2 = (data_143cdfdc8.q).d
    
    if (rsi_2 s> 1)
        int32_t rax_15 = arg2[1].d
        int32_t r15_2 = rax_15 - 1
        
        if (rax_15 == 0)
            r15_2 = 0
        
        if (rsi_2 != 0 || r15_2 == 0)
            r14_1 = 0
        
        var_1f8 = nullptr
        int32_t rax_16 = r14_1 + r15_2
        int64_t r14_2 = data_143cdfdc0
        
        if (rsi_2 != 0 || rax_16 != 0)
            sub_1405a4c70(&var_1f8, rax_16 + rsi_2, 0)
            memcpy(var_1f8, r14_2, rsi_2 * 2)
        else
            var_1ec = 0
        
        sub_140a20ba0(&var_1f8, *arg2, r15_2)
        var_1a8 = var_1f8
        int32_t var_1a0_1 = rsi_2
        int32_t var_19c_1 = var_1ec
        var_1f0.q = 0
        var_1f8 = nullptr
    else
        sub_140596d10(&var_1a8, arg2)
    
    void var_120
    int32_t* var_a0_1 = sub_140b2f3e0(&var_120, &var_1a8)
    int64_t* var_a8_1 = &var_1b8
    var_1f8 = &var_d8
    var_1f0.q = &var_98
    var_1f8.o = var_1f8.o
    sub_140742130(&var_98, &var_1f8)
    int64_t var_110
    
    if (var_110 != 0)
        sub_140a74f90(var_110)
    
    int64_t rcx_28 = var_1b8
    
    if (rcx_28 != 0)
        sub_140a74f90(rcx_28)
    
    int64_t var_f0
    
    if (var_f0 != 0)
        sub_140a74f90(var_f0)
    
    int64_t* rcx_30 = var_198
    
    if (rcx_30 != 0)
        sub_140a74f90(rcx_30)
    
    if (var_150 != 0)
        sub_140a74f90(var_150)
    
    int64_t rcx_32 = var_1e8
    
    if (rcx_32 != 0)
        sub_140a74f90(rcx_32)
    
    if (var_130 != 0)
        sub_140a74f90(var_130)
    
    int64_t rcx_34 = var_1d8
    
    if (rcx_34 != 0)
        sub_140a74f90(rcx_34)
    
    int64_t* rax_21 = sub_140b3b600(&var_1f8, data_14396eb20, &var_98)
    int32_t rdx_19 = rax_21[1].d
    int32_t r8_7 = rdx_19 - 1
    
    if (rdx_19 == 0)
        r8_7 = 0
    
    sub_140a20ba0(r12, *rax_21, r8_7)
    rcx_37 = var_1f8
label_14075b665:
    
    if (rcx_37 != 0)
        sub_140a74f90(rcx_37)
    
    int32_t var_50_1 = 0
    int64_t var_58
    
    if (var_58 != 0)
        sub_140a74f90(var_58)
    
    sub_1407464c0(&var_98)
    result.b = 1
__security_check_cookie(rax_1 ^ &var_218)
return result
