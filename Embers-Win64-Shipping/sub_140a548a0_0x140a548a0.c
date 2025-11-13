// 函数: sub_140a548a0
// 地址: 0x140a548a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_678
uint64_t var_48 = __security_cookie ^ &var_678
uint64_t result

if (arg2 == 0 || arg3 == 0)
    result.b = 0
else
    char _Source[0x400]
    memset(&_Source, 0, 0x400)
    char* rax_1 = strrchr(arg1, 0x5c)
    char* rax_2 = strrchr(arg1, 0x2f)
    
    if (rax_1 u>= rax_2)
        rax_2 = rax_1
    
    void* _Source_4 = &rax_2[1]
    
    if (rax_2 == 0)
        _Source_4 = arg1
    
    char _Source_1[0x100]
    memset(&_Source_1, 0, 0x100)
    sub_140a54040(&_Source_1, 0x100, "0x%016llx ", *(arg1 + 0xc10))
    int64_t rdi_1 = -1
    int64_t rcx_5 = -1
    
    do
        rcx_5 += 1
    while (_Source[rcx_5] != 0)
    
    void* _Destination_4 = &_Source[sx.q(rcx_5.d)]
    
    if (0x400 - rcx_5.d s> 0)
        int64_t _Count = sx.q(0x400 - rcx_5.d)
        strncpy(_Destination_4, &_Source_1, _Count)
        *(_Count + _Destination_4 - 1) = 0
    
    char* rax_5 = -ffffffffffffffff
    
    do
        rax_5 = &rax_5[1]
    while (*(rax_5 + _Source_4) != 0)
    
    if (rax_5.d s> 0)
        int64_t rcx_7 = -1
        
        do
            rcx_7 += 1
        while (_Source[rcx_7] != 0)
        
        _Destination_4 = &_Source[sx.q(rcx_7.d)]
        
        if (0x400 - rcx_7.d s> 0)
            int64_t _Count_1 = sx.q(0x400 - rcx_7.d)
            strncpy(_Destination_4, _Source_4, _Count_1)
            *(_Count_1 + _Destination_4 - 1) = 0
        
        int64_t rcx_9 = -1
        
        do
            rcx_9 += 1
        while (_Source[rcx_9] != 0)
        
        void* _Destination = &_Source[sx.q(rcx_9.d)]
        
        if (0x400 - rcx_9.d s> 0)
            int64_t _Count_2 = sx.q(0x400 - rcx_9.d)
            strncpy(_Destination, U"!", _Count_2)
            *(_Count_2 + _Destination - 1) = 0
    
    void* _Source_2 = &arg1[0x400]
    int64_t rax_10 = -1
    
    do
        rax_10 += 1
    while (*(_Source_2 + rax_10) != 0)
    
    int64_t rcx_11 = -1
    _Destination_4.b = rax_10.d s> 0
    
    do
        rcx_11 += 1
    while (_Source[rcx_11] != 0)
    
    int64_t rax_11 = sx.q(rcx_11.d)
    int32_t _Count_6
    char* _Destination_1
    
    if (rax_10.d s<= 0)
        _Destination_1 = &_Source[rax_11]
        _Count_6 = 0x400 - rcx_11.d
        
        if (_Count_6 s> 0)
            _Source_2 = "UnknownFunction"
        label_140a54aa5:
            uint64_t _Count_3 = sx.q(_Count_6)
            strncpy(_Destination_1, _Source_2, _Count_3)
            _Destination_1[_Count_3 - 1] = 0
    else
        _Destination_1 = &_Source[rax_11]
        _Count_6 = 0x400 - rcx_11.d
        
        if (_Count_6 s> 0)
            goto label_140a54aa5
    int64_t rax_12 = -1
    
    do
        rax_12 += 1
    while (arg1[rax_12 + 0x800] != 0)
    
    int32_t rbp_1
    
    if (rax_12.d s> 0)
        rbp_1 = *(arg1 + 0xc00)
    
    char* _Source_3
    void* _Destination_2
    int32_t _Count_7
    
    if (rax_12.d s<= 0 || rbp_1 s<= 0)
        int64_t rcx_16 = -1
        
        do
            rcx_16 += 1
        while (_Source[rcx_16] != 0)
        
        _Destination_2 = &_Source[sx.q(rcx_16.d)]
        _Count_7 = 0x400 - rcx_16.d
        
        if (_Count_7 s> 0)
            _Source_3 = &data_142e5e894
        label_140a54b71:
            uint64_t _Count_4 = sx.q(_Count_7)
            strncpy(_Destination_2, _Source_3, _Count_4)
            *(_Count_4 + _Destination_2 - 1) = 0
    else
        char var_148[0x100]
        memset(&var_148, 0, 0x100)
        int32_t var_658_1 = rbp_1
        sub_140a54040(&var_148, 0x100, " [%s:%i]", &arg1[0x800])
        int64_t rcx_15 = -1
        
        do
            rcx_15 += 1
        while (_Source[rcx_15] != 0)
        
        _Destination_2 = &_Source[sx.q(rcx_15.d)]
        _Count_7 = 0x400 - rcx_15.d
        
        if (_Count_7 s> 0)
            _Source_3 = &var_148
            goto label_140a54b71
    
    do
        rdi_1 += 1
    while (arg2[rdi_1] != 0)
    
    int32_t _Count_8 = arg3.d - rdi_1.d
    void* _Destination_3 = &arg2[sx.q(rdi_1.d)]
    
    if (_Count_8 s> 0)
        int64_t _Count_5 = sx.q(_Count_8)
        strncpy(_Destination_3, &_Source, _Count_5)
        *(_Count_5 + _Destination_3 - 1) = 0
    
    result = zx.q(_Destination_4.b)

__security_check_cookie(var_48 ^ &var_678)
return result
