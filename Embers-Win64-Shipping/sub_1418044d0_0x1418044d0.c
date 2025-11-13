// 函数: sub_1418044d0
// 地址: 0x1418044d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t* r13 = arg3
int32_t rbx = 0
arg3.b = 1
int32_t arg_20 = 0
char rax
int64_t r8
rax, r8 = sub_140b0f6c0(&arg_10, u"TEST")
int64_t* rcx_1 = &arg_10
int64_t var_58
uint64_t _String_1

if (rax == 0)
    r8.b = 1
    char rax_7
    int64_t r8_6
    rax_7, r8_6 = sub_140b0f6c0(rcx_1, u"DUMPREQ")
    
    if (rax_7 == 0)
        r8_6.b = 1
        
        if (sub_140b0f6c0(&arg_10, u"FLUSH") != 0)
            sub_141802210(*(arg1 + 0x10), 0)
    else
        void* rbx_1 = *(arg1 + 0x10)
        EnterCriticalSection(&data_143ef9d10)
        sub_140b1f700(r13, u"------- (%d) Http Requests", zx.q(*(rbx_1 + 0x20)))
        int64_t* i = *(rbx_1 + 0x18)
        
        for (void* r12_4 = &i[sx.q(*(rbx_1 + 0x20)) * 2]; i != r12_4; i = &i[2])
            int64_t* r15_1 = *i
            int32_t rax_9 = (*(*r15_1 + 0xb8))(r15_1)
            int16_t* const rbx_2
            
            if (rax_9 == 0)
                rbx_2 = u"NotStarted"
            else if (rax_9 == 1)
                rbx_2 = u"Processing"
            else if (rax_9 == 2)
                rbx_2 = u"Failed"
            else if (rax_9 == 3)
                rbx_2 = u"ConnectionError"
            else if (rax_9 == 4)
                rbx_2 = u"Succeeded"
            else
                rbx_2 = &data_142d40450
            
            int64_t* rax_14 = (**r15_1)(r15_1, &var_58)
            
            if (rax_14[1].d != 0)
                *rax_14
            
            int64_t* rax_16 = (*(*r15_1 + 0x40))(r15_1, &_String_1)
            int16_t* const r8_8
            
            if (rax_16[1].d == 0)
                r8_8 = &data_142d40450
            else
                r8_8 = *rax_16
            
            int16_t* const var_78_1 = rbx_2
            sub_140b1f700(r13, u"\tverb=[%s] url=[%s] status=%s", r8_8)
            uint64_t _String_3 = _String_1
            
            if (_String_3 != 0)
                sub_140a74f90(_String_3)
            
            int64_t rcx_23 = var_58
            
            if (rcx_23 != 0)
                sub_140a74f90(rcx_23)
        
        LeaveCriticalSection(&data_143ef9d10)
else
    int32_t r13_1 = 1
    _String_1 = 0
    int32_t var_40_1 = 0
    sub_140b295a0(rcx_1, &_String_1, 1)
    
    if (var_40_1 s> 1)
        int16_t* const _String = &data_142d40450
        
        if (var_40_1 != 0)
            _String = _String_1
        
        r13_1 = _wtoi(_String)
    
    void* var_68 = nullptr
    int64_t var_60_1 = 0
    sub_140b295a0(&arg_10, &var_68, 1)
    
    if (var_60_1.d s<= 1 && var_68 != u"http://www.google.com")
        int32_t rcx_3 = var_60_1:4.d
        int32_t rdx_2 = 0
        var_60_1.d = 0
        
        if (rcx_3 != 0x16)
            sub_1405947f0(&var_68, 0x16)
            rcx_3 = var_60_1:4.d
            rdx_2 = var_60_1.d
        
        var_60_1.d = rdx_2 + 0x16
        
        if (rdx_2 + 0x16 s> rcx_3)
            sub_140594770(&var_68)
        
        void* rcx_6 = var_68
        __builtin_memcpy(rcx_6, u"http://www.googl", 0x20)
        *(rcx_6 + 0x20) = 0x6f0063002e0065
        *(rcx_6 + 0x28) = 0x6d
    
    int64_t* rax_4 = j_sub_140a82f30(0x38)
    int64_t* rdi_1 = rax_4
    int64_t r14_1
    uint64_t _String_4
    
    if (rax_4 == 0)
        _String_4 = _String_1
        rdi_1 = nullptr
        r14_1 = var_58
    else
        var_58 = 0
        int32_t var_50_1 = 0
        _String_4 = 0
        sub_1405947f0(&var_58, 4)
        int32_t rsi_1 = var_50_1 + 4
        
        if (rsi_1 s> 0)
            sub_140594770(&var_58)
        
        r14_1 = var_58
        UnDecorator::getReferenceType(r14_1, &data_142d85f90, 8)
        *rdi_1 = 0
        rdi_1[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(rdi_1, rsi_1, 0)
            memcpy(*rdi_1, r14_1, rsi_1 * 2)
        else
            __builtin_memset(rdi_1 + 0xc, 0, 0x1c)
        
        int32_t r12_1 = var_60_1.d
        arg_20.q = var_68
        rdi_1[5].d = r12_1
        
        if (r12_1 != 0)
            sub_1405a4c70(&rdi_1[4], r12_1, 0)
            memcpy(rdi_1[4], arg_20.q, r12_1 * 2)
            rdi_1[6].d = r13_1
            rbx = 3
        else
            *(rdi_1 + 0x2c) = 0
            rbx = r12_1 + 3
            rdi_1[6].d = r13_1
    
    if ((rbx.b & 2) != 0)
        rbx &= 0xfffffffd
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
    
    if ((rbx.b & 1) != 0 && _String_4 != 0)
        sub_140a74f90(_String_4)
    
    sub_141807860(rdi_1)
    void* rcx_17 = var_68
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    uint64_t _String_2 = _String_1
    
    if (_String_2 != 0)
        sub_140a74f90(_String_2)
return 1
