// 函数: sub_142c586c0
// 地址: 0x142c586c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

FILE* _Stream = nullptr
char* _Buffer = nullptr
int64_t r12
r12.b = 1
int64_t* result

if (arg3 == 0)
    int64_t* result_1 = data_143ccb8b8(1, 0x20)
    result = result_1
    
    if (result_1 != 0)
        char const* const rcx = "none"
        
        if (arg2 != 0)
            rcx = arg2
        
        int64_t rax_1 = data_143ccb8b0(rcx)
        result[1] = rax_1
        
        if (rax_1 != 0)
            goto label_142c58730
        
    label_142c58798:
        data_143ccb8a0(_Buffer)
        
        if (arg3 == 0)
            data_143ccb8a0(result[1])
            sub_142c58460(*result)
            data_143ccb8a0(result)
        
        if (r12.b != 0 && _Stream != 0)
            fclose(_Stream)
    
    return nullptr

result = arg3
label_142c58730:
result[2].b = 0

if (arg2 != 0)
    if (*arg2 == 0x2d && arg2[1] == 0)
        r12.b = 0
        _Stream = __acrt_iob_func(0)
    else if (*arg2 != 0)
        _Stream = fopen(arg2, "rt")

result[3].b = arg4

if (_Stream == 0)
    result[2].b = 1
    return result

char* _Buffer_1 = data_143ccb898(0x1388)
_Buffer = _Buffer_1

if (_Buffer_1 == 0)
    goto label_142c58798

while (true)
    char* rbx
    rbx.b = 0
    char* rax_5 = fgets(_Buffer, 0x1388, _Stream)
    
    if (rax_5 == 0)
        break
    
    while (true)
        int64_t rcx_8 = -1
        
        do
            rcx_8 += 1
        while (rax_5[rcx_8] != 0)
        
        if (rcx_8 == 0 || rax_5[rcx_8 - 1] != 0xa)
            rbx.b = 1
        else
            if (rbx.b == 0)
                break
            
            rbx.b = 0
        
        rax_5 = fgets(_Buffer, 0x1388, _Stream)
        
        if (rax_5 == 0)
            goto label_142c5883c
    
    if (rax_5 == 0)
        break
    
    char r8_2
    char* _Buffer_2
    
    if (j_sub_142c704d0("Set-Cookie:", _Buffer, 0xb) == 0)
        _Buffer_2 = _Buffer
        r8_2 = 0
    else
        _Buffer_2 = &_Buffer[0xb]
        r8_2 = 1
    
    char i = *_Buffer_2
    
    if (i != 0)
        while (i == 0x20 || i == 9)
            i = _Buffer_2[1]
            _Buffer_2 = &_Buffer_2[1]
            
            if (i == 0)
                break
    
    arg5 = DBI1::OpenModW(arg1, result, r8_2, _Buffer_2, arg5, nullptr, nullptr)

label_142c5883c:
data_143ccb8a0(_Buffer)

if (r12.b != 0)
    fclose(_Stream)

result[2].b = 1
return result
