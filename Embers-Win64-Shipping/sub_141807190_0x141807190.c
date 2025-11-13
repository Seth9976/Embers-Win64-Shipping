// 函数: sub_141807190
// 地址: 0x141807190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
*(arg1 + 0x114) = 0
uint32_t count

if (*(arg1 + 0xa0) != 0)
    count = arg3 * arg4

uint64_t result

if (*(arg1 + 0xa0) == 0 || count - 1 u> 0x18fff)
    result = 0
else
    char* r14_1 = nullptr
    char* var_1d0 = nullptr
    int32_t var_1c4_1 = 0
    int32_t var_1c8_1 = count + 1
    
    if (count + 1 s> 0)
        sub_1405daba0(&var_1d0)
        r14_1 = var_1d0
    
    memcpy(r14_1, arg2, count)
    r14_1[sx.q(count)] = 0
    void var_178
    sub_1405eb940(&var_178, r14_1)
    int32_t rdx_3 = 0
    int32_t var_220_1 = 0
    int32_t rcx_3 = 0
    int32_t var_21c_1 = 0
    int64_t var_228 = 0
    int16_t* var_70
    
    if (var_70 != 0 && *var_70 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (var_70[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_228, rbx_1.d + 1)
            rcx_3 = var_21c_1
            rdx_3 = var_220_1
        
        int32_t rax_5 = rdx_3 + rbx_1.d + 1
        int32_t var_220_2 = rax_5
        
        if (rax_5 s> rcx_3)
            sub_140594770(&var_228)
        
        UnDecorator::getReferenceType(var_228, var_70, (rbx_1.d + 1) * 2)
    
    int64_t var_78
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    int16_t* const _String = &data_142d40450
    int64_t var_1a0
    int64_t* rax_6 = sub_140a300d0(&var_228, &var_1a0, &data_142d576a0, &data_142d40450, 1)
    
    if (&var_228 != rax_6)
        int64_t rcx_9 = var_228
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        var_228 = *rax_6
        *rax_6 = 0
        int32_t var_220_3 = rax_6[1].d
        int32_t var_21c_2 = *(rax_6 + 0xc)
        rax_6[1] = 0
    
    int64_t rcx_10 = var_1a0
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int64_t var_190
    int64_t* rax_10 = sub_140a300d0(&var_228, &var_190, &data_142e51e14, &data_142d40450, 1)
    
    if (&var_228 != rax_10)
        int64_t rcx_12 = var_228
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        var_228 = *rax_10
        *rax_10 = 0
        int32_t var_220_4 = rax_10[1].d
        int32_t var_21c_3 = *(rax_10 + 0xc)
        rax_10[1] = 0
    
    int64_t rcx_13 = var_190
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    int16_t* var_200
    __builtin_memset(&var_200, 0, 0x1c)
    int16_t* _String_1 = nullptr
    int64_t var_210_1 = 0
    int64_t var_1f0
    sub_1405947f0(&var_1f0, 2)
    int32_t var_1e8
    int32_t rax_14 = var_1e8 + 2
    var_1e8 = rax_14
    
    if (rax_14 s> 0)
        sub_140594770(&var_1f0)
    
    int64_t rbx_5 = var_1f0
    UnDecorator::getReferenceType(rbx_5, &data_142d84ee0, 4)
    char rax_15 = sub_14060a620(&var_228, &var_1f0, &var_200, &_String_1, 1, 0)
    
    if (rbx_5 != 0)
        sub_140a74f90(rbx_5)
    
    if (rax_15 == 0)
        int64_t var_208
        var_208.d = 0
        
        if (sub_142c520d0(*(arg1 + 0x58), 0x200002, &var_208) == 0)
            int32_t rax_25
            rax_25.b = var_208.d - 0x12c u<= 0x63
            *(arg1 + 0x90) = rax_25.b
    else
        sub_140a360c0(&_String_1)
        int64_t var_1f8
        int32_t rsi_2 = var_1f8.d
        
        if (rsi_2 s> 1 && var_210_1.d s> 1 && *(arg1 + 0x90) == 0)
            int16_t* rbx_6 = var_200
            int16_t* const rcx_20 = &data_142d40450
            
            if (rsi_2 != 0)
                rcx_20 = rbx_6
            
            if (sub_140a54510(rcx_20, u"Content-Length") == 0)
                if (var_210_1.d != 0)
                    _String = _String_1
                
                *(*(arg1 + 0xa0) + 0x94) = _wtoi(_String)
            
            int32_t rax_19 = var_210_1:4.d
            int16_t* _String_3 = _String_1
            int32_t r12_2 = var_1f8:4.d
            void* r15_1 = *(arg1 + 0xa0)
            int32_t var_1a4_1 = rax_19
            _String_1 = nullptr
            var_200 = nullptr
            int64_t var_1f8_1 = 0
            int32_t r13_1 = var_210_1.d
            int16_t* var_1c0_1 = rbx_6
            int32_t var_1b8_1 = rsi_2
            int32_t var_1b4_1 = r12_2
            int16_t* _String_4 = _String_3
            int32_t var_1a8_1 = r13_1
            int64_t var_210_2 = 0
            int64_t* rax_20 = j_sub_140a82f30(0x28)
            
            if (rax_20 == 0)
                if (_String_3 != 0)
                    sub_140a74f90(_String_3)
                
                if (rbx_6 != 0)
                    sub_140a74f90(rbx_6)
            else
                *rax_20 = 0
                rax_20[1] = rbx_6
                rax_20[2].d = rsi_2
                *(rax_20 + 0x14) = r12_2
                rax_20[3] = _String_3
                rax_20[4].d = r13_1
                *(rax_20 + 0x24) = rax_19
                int64_t** rax_22 = *(r15_1 + 0x80)
                int64_t var_1c0_2
                __builtin_memset(&var_1c0_2, 0, 0x20)
                *(r15_1 + 0x80) = rax_20
                r14_1 = var_1d0
                *rax_22 = rax_20
    
    int16_t* _String_2 = _String_1
    
    if (_String_2 != 0)
        sub_140a74f90(_String_2)
    
    int16_t* rcx_24 = var_200
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    int64_t rcx_25 = var_228
    
    if (rcx_25 != 0)
        sub_140a74f90(rcx_25)
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    result = zx.q(count)

__security_check_cookie(rax_1 ^ &var_258)
return result
