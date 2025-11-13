// 函数: sub_142c660e0
// 地址: 0x142c660e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
void* r14 = *arg1
int32_t namelen_1 = 0
int64_t* var_1e8 = nullptr
int32_t namelen = arg4
char* _Str2 = *(r14 + 0x660)
uint16_t rbx = *(r14 + 0x2d0)
int32_t r15 = *(r14 + 0x2d4)
int64_t result

if (_Str2 != 0 || rbx != 0)
    SOCKADDR name
    memset(&name, 0, 0x80)
    int64_t rax_2
    int64_t rdi_1
    
    if (_Str2 != 0)
        rdi_1 = -1
        rax_2 = -1
        
        do
            rax_2 += 1
        while (_Str2[rax_2] != 0)
    
    void var_158
    int64_t* rdi_2
    
    if (_Str2 == 0 || rax_2 u>= 0xff)
        uint16_t rax_17
        
        if (arg3 != 0x17)
            if (arg3 != 2)
                goto label_142c66483
            
            name.sa_family = arg3.w
            rax_17 = htons(rbx)
            namelen_1 = 0x10
            goto label_142c6647e
        
        name.sa_family = arg3.w
        rax_17 = htons(rbx)
        namelen_1 = arg3 + 5
    label_142c6647e:
        name.sa_data[0] = rax_17.b
        name.sa_data[1] = rax_17:1.b
    label_142c66483:
        rdi_2 = arg1
    label_142c66498:
        
        if (bind(arg2, &name, namelen_1) s>= 0)
        label_142c664e9:
            namelen = 0x80
            memset(&var_158, 0, 0x80)
            
            if (getsockname(arg2, &var_158, &namelen) s>= 0)
                sub_142c64850(r14, "Local port: %hu\n", zx.q(rbx), arg5)
                result = 0
                *(rdi_2 + 0x40b) = 1
            else
                enum WSA_ERROR rax_23 = WSAGetLastError()
                *(r14 + 0x4b14) = rax_23
                char* rax_24
                int512_t zmm2_1
                rax_24, zmm2_1 = sub_142c55790(rdi_2, rax_23, arg5)
                sub_142c64760(r14, "getsockname() failed with errno %d: %s", zx.q(rax_23), zmm2_1)
                result = 0x2d
        else
            while (true)
                r15 -= 1
                
                if (r15 s<= 0)
                    enum WSA_ERROR rax_25 = WSAGetLastError()
                    *(r14 + 0x4b14) = rax_25
                    char* rax_26
                    int512_t zmm2_2
                    rax_26, zmm2_2 = sub_142c55790(rdi_2, rax_25, arg5)
                    sub_142c64760(r14, "bind failed with errno %d: %s", zx.q(rax_25), zmm2_2)
                    result = 0x2d
                    break
                
                arg5 = sub_142c64850(r14, "Bind to local port %hu failed, trying next\n", 
                    zx.q(rbx), arg5)
                rbx += 1
                uint16_t rax_20 = ntohs(rbx)
                name.sa_data[0] = rax_20.b
                name.sa_data[1] = rax_20:1.b
                
                if (bind(arg2, &name, namelen_1) s>= 0)
                    goto label_142c664e9
    else
        memset(&var_158, 0, 0x100)
        void* _Str1 = data_143ccb938
        uint64_t _MaxCount = -1
        char var_1f8_1 = 0
        
        do
            _MaxCount += 1
        while (*(_Str1 + _MaxCount) != 0)
        
        if (strncmp(_Str1, _Str2, _MaxCount) == 0)
            do
                rdi_1 += 1
            while (*(data_143ccb938 + rdi_1) != 0)
            
            _Str2 = &_Str2[rdi_1]
            var_1f8_1 = 1
            goto label_142c661e7
        
        char* _Str1_1 = data_143ccb940
        uint64_t _MaxCount_1 = -1
        
        do
            _MaxCount_1 += 1
        while (_Str1_1[_MaxCount_1] != 0)
        
        if (strncmp(_Str1_1, _Str2, _MaxCount_1) == 0)
            do
                rdi_1 += 1
            while ((*data_143ccb940)[rdi_1] != 0)
            
            _Str2 = &_Str2[rdi_1]
            rdi_2 = arg1
            goto label_142c6623a
        
    label_142c661e7:
        rdi_2 = arg1
        int32_t var_200_1 = 0x100
        void* var_208_1 = &var_158
        rdi_2[0x17].d
        
        if (var_1f8_1 == 0)
        label_142c6623a:
            namelen = rdi_2[0x89].d
            
            if (arg3 == 2)
                rdi_2[0x89].d = 1
            else if (arg3 == 0x17)
                rdi_2[0x89].d = 2
            
            int32_t rax_8
            rax_8, arg5 = sub_142c5a570(rdi_2, _Str2, 0, &var_1e8, arg5)
            
            if (rax_8 == 1)
                arg5 = sub_142c59970(rdi_2, &var_1e8, arg5)
            
            int64_t* rcx_7 = var_1e8
            rdi_2[0x89].d = namelen
            
            if (rcx_7 != 0)
                int512_t zmm2 = sub_142c5a530(*rcx_7, &var_158, 0x100, arg5)
                int32_t var_200_2 = *(*var_1e8 + 4)
                void* var_208_2 = &var_158
                arg5 = sub_142c64850(r14, "Name '%s' family %i resolved to '%s' family %i\n", 
                    _Str2, zmm2)
                sub_142c5a710(r14, var_1e8)
                
                if (arg3 != 0x17)
                    var_1d4
                    
                    if (arg3 == 2 && sub_142c70d80(arg3, &var_158, &var_1d4) s> 0)
                        name.sa_family = arg3.w
                        uint16_t rax_16 = htons(rbx)
                        name.sa_data[0] = rax_16.b
                        name.sa_data[1] = rax_16:1.b
                        namelen_1 = arg3 + 0xe
                    
                    goto label_142c66498
                
                char* _String_1 = strchr(&var_158, arg3 + 0xe)
                char* _String = _String_1
                
                if (_String_1 != 0)
                    *_String_1 = 0
                    _String = &_String[1]
                
                var_1d0
                
                if (sub_142c70d80(0x17, &var_158, &var_1d0) s> 0)
                    name.sa_family = 0x17
                    uint16_t rax_13 = htons(rbx)
                    name.sa_data[0] = rax_13.b
                    name.sa_data[1] = rax_13:1.b
                    
                    if (_String != 0)
                        int32_t var_1c0_1 = atoi(_String)
                
                namelen_1 = 0x1c
                goto label_142c66483
            
            sub_142c64760(r14, "Couldn't bind to '%s'", _Str2, arg5)
            result = 0x2d
        else
            sub_142c64760(r14, "Couldn't bind to interface '%s'", _Str2, arg5)
            result = 0x2d
else
    result = 0

__security_check_cookie(rax_1 ^ &var_228)
return result
