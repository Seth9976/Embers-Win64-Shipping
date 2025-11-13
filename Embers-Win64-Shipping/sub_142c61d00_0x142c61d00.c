// 函数: sub_142c61d00
// 地址: 0x142c61d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
char var_48
int32_t rax_2 = sub_1425f29b0(*(arg2 + 0xd0), "[%*45[0123456789abcdefABCDEF:.]%c", &var_48)
char* rsi_1

if (rax_2 == 1 && var_48 == 0x5d)
    *(arg2 + 0xd0) += 1
    char* string = *(arg2 + 0xd0)
    *(arg2 + 0x3fa) = rax_2.b
    char* rax_3 = strchr(string, rax_2 + 0x5c)
    rsi_1 = rax_3
    
    if (rax_3 != 0)
        rsi_1 = &rsi_1[1]
        *rax_3 = 0
        
        if (*rsi_1 != 0x3a)
            rsi_1 = nullptr
    
    goto label_142c61dc0

void var_40
int32_t rax_4
int64_t r8_2
rax_4, r8_2 = sub_142c70d80(0x17, *(arg2 + 0xd0), &var_40)
uint64_t result

if (rax_4 s<= 0)
    rsi_1 = strchr(*(arg2 + 0xd0), 0x3a)
label_142c61dc0:
    char* _EndPtr
    
    if (*(arg1 + 0x298) != 0 && *(arg1 + 0x4b18) != 0)
        *(arg2 + 0x17c) = zx.d(*(arg1 + 0x298))
        
        if (rsi_1 != 0)
            *rsi_1 = 0
        
        if (*(arg2 + 0x3f6) == 0)
            goto label_142c61f2a
        
        _EndPtr.b = 0
        _EndPtr = 0
        int16_t var_27_1 = 0
        char var_25_1 = 0
        
        if (*(arg2 + 0x40c) != 0)
            int64_t r9_1
            
            if (*(arg1 + 0x5db) == 0)
                r9_1 = 0x49
                
                if (*(arg1 + 0x5dd) != 0)
                    r9_1 = 0x44
            else
                r9_1 = 0x41
            
            arg3 = sub_142c564b0(&_EndPtr, 0xc, ";type=%c", r9_1, arg3)
        
        void* const r9_2 = &data_1434cce10
        
        if (*(arg1 + 0x4e40) != 0)
            r9_2 = &data_14363dfe8
        
        void* const rcx_4 = &data_1434cce10
        char** var_58_1 = &_EndPtr
        
        if (*(arg2 + 0x3fa) != 0)
            rcx_4 = &data_1436b32bc
        
        int64_t var_60_1 = *(arg1 + 0x4e38)
        void* const var_68_1 = r9_2
        *(arg2 + 0xd0)
        int32_t var_70_1 = *(arg2 + 0x17c)
        void* const var_78_1 = rcx_4
        int64_t rax_10 = sub_142c563e0("%s://%s%s%s:%hu%s%s%s", **(arg2 + 0x440), arg3)
        
        if (rax_10 != 0)
            if (*(arg1 + 0x888) != 0)
                data_143ccb8a0(*(arg1 + 0x880))
                *(arg1 + 0x880) = 0
                *(arg1 + 0x888) = 0
            
            *(arg1 + 0x880) = rax_10
            *(arg1 + 0x888) = 1
            goto label_142c61f2a
        
        result = zx.q((rax_10 + 0x1b).d)
    else if (rsi_1 == 0)
    label_142c61f2a:
        
        if (*(arg2 + 0x17c) s< 0)
            *(arg2 + 0x17c) = zx.d(*(*(arg2 + 0x440) + 0x78))
        
        result = 0
    else
        int32_t rax_12
        int64_t r8_4
        rax_12, r8_4 = strtol(&rsi_1[1], &_EndPtr, 0xa)
        
        if (rax_12 u> 0xffff)
            sub_142c64760(arg1, "Port number out of range", r8_4, arg3)
            result = 3
        else
            char* _EndPtr_1 = _EndPtr
            char rdx_5 = *_EndPtr_1
            
            if (rdx_5 == 0)
                *rsi_1 = 0
                
                if (_EndPtr_1 != &rsi_1[1])
                    *(arg2 + 0x17c) = zx.d(sub_142c56210(rax_12.w))
                
                goto label_142c61f2a
            
            sub_142c64760(arg1, "Port number ended with '%c'", zx.q(sx.d(rdx_5)), arg3)
            result = 3
else
    sub_142c64760(arg1, "IPv6 numerical address used in URL without brackets", r8_2, arg3)
    result = 3

__security_check_cookie(rax_1 ^ &var_98)
return result
