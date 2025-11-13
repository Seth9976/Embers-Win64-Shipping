// 函数: sub_142c80af0
// 地址: 0x142c80af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a38
int64_t rax_1 = __security_cookie ^ &var_a38
void* r14 = *arg1
int32_t rsi = arg2
void* var_9f8 = r14
SOCKET s = -1
void var_958
memset(&var_958, 0, 0x100)
char* string_4 = *(r14 + 0x680)
int64_t* var_9e8 = nullptr
char* rcx_1 = *(r14 + 0x680)
int16_t r12 = 0
int16_t hostshort_1 = 0
char* _Destination = nullptr
char var_a08 = 1

if (rcx_1 == 0)
    goto label_142c80d82

int64_t rax_2 = -1

do
    rax_2 += 1
while (rcx_1[rax_2] != 0)

if (rax_2 u<= 1)
    goto label_142c80d82

int64_t rax_3 = -1

do
    rax_3 += 1
while (string_4[rax_3] != 0)

int64_t rcx_2

if (rax_3 u>= 0x41)
    rcx_2 = -1
    
    do
        rcx_2 += 1
    while (string_4[rcx_2] != 0)
else
    rcx_2 = 0x41

char* _Destination_1 = data_143ccb8b8(rcx_2 + 1, 1)
_Destination = _Destination_1
uint64_t result

if (_Destination_1 != 0)
    char rax_4 = *string_4
    char* string_1
    
    if (rax_4 == 0x5b)
        char* string_2 = strchr(string_4, 0x5d)
        string_1 = string_2
        
        if (string_2 != 0)
            strncpy(_Destination, &string_4[1], string_2 - &string_4[1])
        
        goto label_142c80c8e
    
    int16_t name
    int16_t rax_6
    int16_t rbx
    
    if (rax_4 != 0x3a)
        char* string_3 = strchr(string_4, 0x3a)
        string_1 = string_3
        
        if (string_3 == 0)
            char* rcx_10 = _Destination - string_4
            char i
            
            do
                i = *string_4
                *(rcx_10 + string_4) = i
                string_4 = &string_4[1]
            while (i != 0)
            goto label_142c80c8e
        
        if (sub_142c70d80(0x17, string_4, &name) != 1)
            strncpy(_Destination, string_4, string_1 - string_4)
            goto label_142c80c8e
        
        char* rcx_8 = _Destination - string_4
        char i_1
        
        do
            i_1 = *string_4
            *(rcx_8 + string_4) = i_1
            string_4 = &string_4[1]
        while (i_1 != 0)
        rax_6 = 0
        rbx = 0
    else
        string_1 = string_4
    label_142c80c8e:
        rax_6 = 0
        rbx = 0
        
        if (string_1 != 0)
            char* string = strchr(string_1, 0x3a)
            rax_6 = 0
            
            if (string != 0)
                rbx = sub_142c56210(strtoul(&string[1], nullptr, 0xa))
                char* rax_9 = strchr(string, 0x2d)
                
                if (rax_9 == 0)
                    rax_6 = rbx
                else
                    rax_6 = sub_142c56210(strtoul(&rax_9[1], nullptr, 0xa))
    
    r12 = 0
    
    if (rbx u<= rax_6)
        r12 = rax_6
    
    int32_t r14_2 = 0
    
    if (rbx u<= rax_6)
        r14_2.w = rbx
    
    hostshort_1.d = r14_2
    int32_t namelen
    void var_858
    void* rcx_21
    char* rdx_6
    char* _Destination_3
    char* _Destination_2
    int512_t zmm2
    
    if (*_Destination == 0)
        hostshort_1.d = r14_2
    label_142c80d7d:
        r14 = var_9f8
    label_142c80d82:
        SOCKET s_1 = arg1[0x47]
        namelen = 0x80
        
        if (getsockname(s_1, &name, &namelen) == 0)
            int16_t name_1 = name
            uint32_t name_3
            char* rdx_7
            
            if (name_1 == 0x17)
                void var_9d0
                rdx_7 = &var_9d0
                name_3 = 0x17
            else
                name_3 = zx.d(name_1)
                void var_9d4
                rdx_7 = &var_9d4
            
            arg3 = sub_142c71770(name_3, rdx_7, &var_858, 0x401, arg3)
            _Destination_2 = &var_858
            var_a08 = 0
            goto label_142c80e12
        
        char* _Destination_4
        _Destination_4, zmm2 = sub_142c55790(arg1, WSAGetLastError(), arg3)
        _Destination_3 = _Destination_4
        rdx_6 = "getsockname() failed: %s"
        rcx_21 = r14
    label_142c812be:
        sub_142c64760(rcx_21, rdx_6, _Destination_3, zmm2)
        data_143ccb8a0(_Destination)
    label_142c812cc:
        result = 0x1e
    else
        sub_142c89220(*(arg1[0xe] + 0x20))
        arg1[0x17].d
        int32_t var_a10_1 = 0x401
        void* var_a18 = &var_858
        *(arg1[0xe] + 4)
        _Destination_2 = _Destination
        
        if (_Destination_2 == 0)
            goto label_142c80d7d
        
    label_142c80e12:
        int32_t rax_15
        rax_15, zmm2 = sub_142c5a570(arg1, _Destination_2, 0, &var_9e8, arg3)
        
        if (rax_15 == 1)
            zmm2 = sub_142c59970(arg1, &var_9e8, zmm2)
        
        int64_t* rdx_10 = var_9e8
        void* r14_3
        
        if (rdx_10 != 0)
            r14_3 = *rdx_10
            sub_142c5a710(var_9f8, rdx_10)
        
        if (rdx_10 == 0 || r14_3 == 0)
            rcx_21 = var_9f8
            rdx_6 = "failed to resolve the address provided to PORT: %s"
            _Destination_3 = _Destination_2
            goto label_142c812be
        
        data_143ccb8a0(_Destination)
        enum WSA_ERROR rbx_1 = WSA_WAIT_EVENT_0
        s = -1
        
        while (true)
            int32_t result_2 = sub_142c65c50(arg1, r14_3, nullptr, &s)
            int32_t result_1 = result_2
            
            if (result_2 != 0)
                enum WSA_ERROR rax_16 = WSAGetLastError()
                r14_3 = *(r14_3 + 0x28)
                rbx_1 = rax_16
                
                if (r14_3 != 0)
                    continue
            else if (r14_3 != 0)
                int64_t r8_11 = memcpy(&name, *(r14_3 + 0x20), *(r14_3 + 0x10))
                uint16_t hostshort = hostshort_1
                namelen = *(r14_3 + 0x10)
                
                if (hostshort_1 u<= r12)
                    while (true)
                        uint16_t netshort = htons(hostshort)
                        int32_t rax_19
                        rax_19, r8_11 = bind(s, &name, namelen)
                        char* rax_24
                        void* rcx_37
                        char* rdx_19
                        int512_t zmm2_3
                        
                        if (rax_19 == 0)
                            if (hostshort u> r12)
                                break
                            
                            SOCKET s_3 = s
                            namelen = 0x80
                            
                            if (getsockname(s_3, &name, &namelen) == 0)
                                if (listen(s, 1) == 0)
                                    int512_t zmm2_5 = sub_142c5a530(r14_3, &var_958, 0x100, zmm2)
                                    
                                    if (*(arg1 + 0x405) == 0 && *(arg1 + 0x3fb) != 0)
                                        *(arg1 + 0x405) = 1
                                    
                                    void* rbx_3
                                    
                                    if (rsi == 2)
                                    label_142c81114:
                                        rbx_3 = &arg1[0xd3]
                                    else
                                        int16_t name_2 = name
                                        
                                        while (true)
                                            if ((*(arg1 + 0x405) != 0 || rsi != 0)
                                                    && (rsi != 1 || name_2 == 2))
                                                uint32_t name_4 = zx.d(name_2)
                                                
                                                if (name_4 == 2 || name_4 == 0x17)
                                                    uint16_t rax_30 = ntohs(netshort)
                                                    
                                                    if (rsi == 0)
                                                        rbx_3 = &arg1[0xd3]
                                                        uint32_t var_a10_2 = zx.d(rax_30)
                                                        int32_t r9_7
                                                        r9_7.b = name != 2
                                                        void* var_a18_1 = &var_958
                                                        int32_t result_4
                                                        int512_t zmm2_8
                                                        result_4, zmm2_8 = gzprintf(rbx_3, 
                                                            "%s |%d|%s|%hu|", "EPRT", zmm2_5)
                                                        result_1 = result_4
                                                        
                                                        if (result_4 == 0)
                                                            break
                                                        
                                                        sub_142c64760(var_9f8, 
                                                            "Failure sending EPRT command: %s", 
                                                            sub_142c558d0(result_4), zmm2_8)
                                                        sub_142c65200(arg1, s)
                                                        *(rbx_3 + 0xac) = 1
                                                        result = zx.q(result_1)
                                                        arg1[0xea].d = 0
                                                        goto label_142c812db
                                                    
                                                    if (rsi == 1)
                                                        void var_448
                                                        char* r10_1 = &var_448
                                                        void* i_3 = &var_958
                                                        void* i_2
                                                        
                                                        do
                                                            char rcx_48 = *i_3
                                                            
                                                            if (rcx_48 == 0)
                                                                break
                                                            
                                                            char rax_32 = rcx_48
                                                            
                                                            if (rcx_48 == 0x2e)
                                                                rax_32 = 0x2c
                                                            
                                                            *r10_1 = rax_32
                                                            r10_1 = &r10_1[1]
                                                            i_2 = i_3
                                                            i_3 += 1
                                                        while (i_2 != -1)
                                                        uint32_t r9_5 = zx.d(rax_30)
                                                        var_a18.d = zx.d(r9_5.b)
                                                        *r10_1 = 0
                                                        rbx_3 = &arg1[0xd3]
                                                        int32_t result_3
                                                        int512_t zmm2_7
                                                        result_3, zmm2_7 = gzprintf(rbx_3, "%s %s", 
                                                            "PORT", 
                                                            sub_142c564b0(r10_1, 0x14, ",%d,%d", 
                                                                zx.q(r9_5 u>> 8), zmm2_5))
                                                        result_1 = result_3
                                                        
                                                        if (result_3 == 0)
                                                            break
                                                        
                                                        sub_142c64760(var_9f8, 
                                                            "Failure sending PORT command: %s", 
                                                            sub_142c558d0(result_3), zmm2_7)
                                                        sub_142c65200(arg1, s)
                                                        result = zx.q(result_1)
                                                        arg1[0xea].d = 0
                                                        goto label_142c812db
                                                    
                                                    name_2 = name
                                            
                                            rsi += 1
                                            
                                            if (rsi == 2)
                                                goto label_142c81114
                                    
                                    *(rbx_3 + 0xac) = rsi
                                    SOCKET rdx_27 = arg1[0x48]
                                    
                                    if (rdx_27 != -1)
                                        sub_142c65200(arg1, rdx_27)
                                        arg1[0x48] = -1
                                    
                                    arg1[0x48] = s
                                    result = zx.q(result_1)
                                    *(arg1 + 0x3fe) = 1
                                    arg1[0xea].d = 0x1c
                                    goto label_142c812db
                                
                                rax_24, zmm2_3 = sub_142c55790(arg1, WSAGetLastError(), zmm2)
                                rcx_37 = var_9f8
                                rdx_19 = "socket failure: %s"
                            else
                                rax_24, zmm2_3 = sub_142c55790(arg1, WSAGetLastError(), zmm2)
                                rcx_37 = var_9f8
                                rdx_19 = "getsockname() failed: %s"
                        else
                            enum WSA_ERROR rax_20
                            rax_20, r8_11 = WSAGetLastError()
                            
                            if (var_a08 == 0 || rax_20 != WSAEADDRNOTAVAIL)
                                if (rax_20 == WSAEADDRINUSE || rax_20 == 0xd)
                                    hostshort += 1
                                    goto label_142c80f83
                                
                                char* rax_25
                                int512_t zmm2_4
                                rax_25, zmm2_4 = sub_142c55790(arg1, rax_20, zmm2)
                                sub_142c64760(var_9f8, "bind(port=%hu) failed: %s", 
                                    zx.q(hostshort), zmm2_4)
                                sub_142c65200(arg1, s)
                                goto label_142c812cc_1
                            
                            char* rax_21
                            int512_t zmm2_2
                            rax_21, zmm2_2 = sub_142c55790(arg1, rax_20, zmm2)
                            zmm2 = sub_142c64850(var_9f8, 
                                "bind(port=%hu) on non-local address failed: %s\n", 
                                zx.q(hostshort), zmm2_2)
                            SOCKET s_2 = arg1[0x47]
                            namelen = 0x80
                            int32_t rax_22
                            rax_22, r8_11 = getsockname(s_2, &name, &namelen)
                            
                            if (rax_22 == 0)
                                hostshort = hostshort_1
                                var_a08 = rax_22.b
                            label_142c80f83:
                                
                                if (hostshort u> r12)
                                    break
                                
                                continue
                            
                            rax_24, zmm2_3 = sub_142c55790(arg1, WSAGetLastError(), zmm2)
                            rcx_37 = var_9f8
                            rdx_19 = "getsockname() failed: %s"
                        
                        sub_142c64760(rcx_37, rdx_19, rax_24, zmm2_3)
                        sub_142c65200(arg1, s)
                        goto label_142c812cc_1
                
                sub_142c64760(var_9f8, "bind() failed, we ran out of ports!", r8_11, zmm2)
                sub_142c65200(arg1, s)
                break
            
            char* rax_17
            int512_t zmm2_1
            rax_17, zmm2_1 = sub_142c55790(arg1, rbx_1, zmm2)
            sub_142c64760(var_9f8, "socket failure: %s", rax_17, zmm2_1)
            break
        
    label_142c812cc_1:
        result = 0x1e
else
    result = zx.q((&_Destination[0x1b]).d)

label_142c812db:
__security_check_cookie(rax_1 ^ &var_a38)
return result
