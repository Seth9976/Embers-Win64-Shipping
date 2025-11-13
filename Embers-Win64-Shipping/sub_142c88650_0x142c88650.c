// 函数: sub_142c88650
// 地址: 0x142c88650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3d8
int64_t rax_1 = __security_cookie ^ &var_3d8
char* var_318 = arg3
int32_t r12 = *(arg7 + 0x12c)
SOCKET r15 = arg7[sx.q(arg6) + 0x47]
void* rbx = *arg7
bool var_338 = r12 == 5
int64_t r14 = -1
int64_t* var_328 = arg2
int64_t r13 = -1
char* var_330 = arg1
void* var_300 = rbx

do
    r13 += 1
while (arg3[r13] != 0)

int32_t rdi = *(rbx + 0x2a4)

if (*(arg7 + 0x3f6) != 0)
    arg3, arg5 = sub_142c64850(rbx, "SOCKS5: connecting to HTTP proxy %s port %d\n", arg3, arg5)

if (r12 != 5 && r13 u> 0xff)
    arg3, arg5 = sub_142c64850(*arg7, 
        "SOCKS5: server resolving disabled for hostnames of length > 255 [actual len=%zu]\n", r13, 
        arg5)
    var_338 = true

arg3.b = 1
int64_t rax_3
int64_t r8_1
rax_3, r8_1 = sub_142c65dc0(rbx, nullptr, arg3.b, rbx)
int32_t result

if (rax_3 s>= 0)
    sub_142c892b0(r15, 1)
    int32_t rax_4
    int64_t r8_3
    rax_4, r8_3 = sub_142c64080(-1, -1, r15, rax_3)
    
    if (rax_4 == 0xffffffff)
        sub_142c64760(*arg7, "SOCKS5: no connection here", r8_3, arg5)
        result = 7
    else if (rax_4 == 0)
        sub_142c64760(*arg7, "SOCKS5: connection timeout", r8_3, arg5)
        result = 0x1c
    else if ((rax_4.b & 4) == 0)
        if ((rdi & 0xfffffffa) != 0)
            arg5 = sub_142c64850(*arg7, 
                "warning: unsupported value passed to CURLOPT_SOCKS5_AUTH: %lu\n", zx.q(rdi), arg5)
        
        char var_2f8 = 5
        char* r12_2 = nullptr
        char var_2f6 = 0
        
        if ((rdi.b & 1) != 0)
            r12_2 = var_330
        
        uint64_t rdi_1 = 3
        char rax_5 = 3
        char var_2f5
        
        if (r12_2 != 0)
            var_2f5 = 2
            rax_5 = 4
        
        char var_2f7 = rax_5 - 2
        sub_142c892b0(r15, 0)
        int512_t zmm2 = sub_142c64850(rbx, "SOCKS5 communication to %s:%d\n", var_318, arg5)
        int64_t var_320
        int32_t rax_6
        rax_6, r8_3, arg5 = sub_142c64dd0(arg7, r15, &var_2f8, zx.d(var_2f7) + 2, zmm2, &var_320)
        char* rdx
        
        if (rax_6 != 0 || var_320 != zx.q(var_2f7) + 2)
            rdx = "Unable to send initial SOCKS5 request."
        label_142c88e85:
            sub_142c64760(rbx, rdx, r8_3, arg5)
            result = 7
        else
            sub_142c892b0(r15, 1)
            int32_t rax_9
            rax_9, r8_3 = sub_142c64080(r15, -1, -1, rax_3)
            
            if (rax_9 == 0xffffffff)
                sub_142c64760(*arg7, "SOCKS5 nothing to read", r8_3, arg5)
                result = 7
            else if (rax_9 == 0)
                sub_142c64760(*arg7, "SOCKS5 read timeout", r8_3, arg5)
                result = 0x1c
            else if ((rax_9.b & 4) == 0)
                sub_142c892b0(r15, 0)
                int32_t rax_10
                rax_10, r8_3 = sub_142c88ec0(arg7, r15, &var_2f8, 2, &var_330)
                
                if (rax_10 != 0 || var_330 != 2)
                    rdx = "Unable to receive initial SOCKS5 response."
                    goto label_142c88e85
                
                if (var_2f8 != 5)
                    rdx = "Received invalid version in initial SOCKS5 response."
                    goto label_142c88e85
                
                char rax_11 = var_2f7
                
                if (rax_11 == 0)
                label_142c88a75:
                    var_2f8.w = 0x105
                    var_2f6 = 0
                    char var_2f4
                    char var_2f3
                    char var_2f2
                    char var_2f1
                    
                    if (var_338 != 0)
                        int32_t rax_17
                        rax_17, arg5 = sub_142c5a570(arg7, var_318, arg4, &var_328, arg5)
                        
                        if (rax_17 == 0xffffffff)
                            result = 6
                        else
                            if (rax_17 == 1)
                                result, arg5 = sub_142c59970(arg7, &var_328, arg5)
                            
                            if (rax_17 != 1 || result == 0)
                                int64_t* r14_1 = var_328
                                
                                if (r14_1 == 0)
                                    sub_142c64760(rbx, 
                                        "Failed to resolve "%s" for SOCKS5 connect.", var_318, arg5)
                                    result = 6
                                else
                                    void* const r14_2 = *r14_1
                                    
                                    if (r14_2 == 0)
                                        sub_142c64760(rbx, 
                                            "Failed to resolve "%s" for SOCKS5 connect.", var_318, 
                                            arg5)
                                        result = 6
                                    else
                                        void var_98
                                        int512_t zmm2_1 = sub_142c5a530(r14_2, &var_98, 0x40, arg5)
                                        int32_t rax_18 = *(r14_2 + 4)
                                        
                                        if (rax_18 == 2)
                                            var_2f5 = 1
                                            void* rcx_26 = *(r14_2 + 0x20)
                                            rdi_1 = 8
                                            var_2f4 = *(rcx_26 + 4)
                                            var_2f3 = *(rcx_26 + 5)
                                            var_2f2 = *(rcx_26 + 6)
                                            var_2f1 = *(rcx_26 + 7)
                                            arg5 = sub_142c64850(rbx, 
                                                "SOCKS5 connect to IPv4 %s (locally resolved)\n", 
                                                &var_98, zmm2_1)
                                        else if (rax_18 != 0x17)
                                            r14_2 = nullptr
                                            arg5 = sub_142c64760(rbx, 
                                                "SOCKS5 connection to %s not supported\n", &var_98, 
                                                zmm2_1)
                                        else
                                            var_2f5 = 4
                                            rdi_1 = zx.q(rax_18 - 0x13)
                                            uint64_t i_1 = zx.q(rax_18 - 7)
                                            void* r8_18 = *(r14_2 + 0x20) - &var_2f4 + 8
                                            uint64_t i
                                            
                                            do
                                                (&var_2f8)[rdi_1] = *(&var_2f8 + r8_18 + rdi_1)
                                                rdi_1 += 1
                                                i = i_1
                                                i_1 -= 1
                                            while (i != 1)
                                            arg5 = sub_142c64850(rbx, 
                                                "SOCKS5 connect to IPv6 %s (locally resolved)\n", 
                                                &var_98, zmm2_1)
                                        
                                        sub_142c5a710(rbx, var_328)
                                        
                                        if (r14_2 != 0)
                                            goto label_142c88beb
                                        
                                        sub_142c64760(rbx, 
                                            "Failed to resolve "%s" for SOCKS5 connect.", var_318, 
                                            arg5)
                                        result = 6
                    else
                        var_2f5 = 3
                        var_2f4 = r13.b
                        memcpy(&var_2f3, var_318, r13.d)
                        rdi_1 = r13 + 5
                    label_142c88beb:
                        (&var_2f8)[rdi_1] = (arg4 s>> 8).b
                        (&var_2f7)[rdi_1] = arg4.b
                        int32_t rax_26
                        rax_26, r8_3, arg5 =
                            sub_142c64dd0(arg7, r15, &var_2f8, (rdi_1 + 2).d, arg5, &var_320)
                        
                        if (rax_26 != 0 || rdi_1 + 2 != var_320)
                            rdx = "Failed to send SOCKS5 connect request."
                            goto label_142c88e85
                        
                        void* rdi_3 = 0xa
                        int32_t rax_27
                        rax_27, r8_3 = sub_142c88ec0(arg7, r15, &var_2f8, 0xa, &var_330)
                        
                        if (rax_27 != 0 || var_330 != 0xa)
                        label_142c88d0e:
                            rdx = "Failed to receive SOCKS5 connect request ack."
                            goto label_142c88e85
                        
                        if (var_2f8 != 5)
                            rdx = "SOCKS5 reply has wrong version, version should be 5."
                            goto label_142c88e85
                        
                        char rax_28 = var_2f5
                        char var_2ee
                        uint64_t r8_23
                        
                        if (rax_28 == 3)
                            r8_23 = zx.q(var_2f4)
                            rdi_3 = r8_23 + 7
                            
                            if (rdi_3 u> 0xa)
                                goto label_142c88c9d
                        else if (rax_28 != 4)
                            r8_23 = zx.q(var_2f4)
                        else
                            rdi_3 = 0x16
                        label_142c88c9d:
                            int32_t rax_29
                            rax_29, r8_3 = sub_142c88ec0(arg7, r15, &var_2ee, rdi_3 - 0xa, &var_330)
                            
                            if (rax_29 != 0 || rdi_3 - 0xa != var_330)
                                goto label_142c88d0e
                            
                            rax_28 = var_2f5
                            r8_23 = zx.q(var_2f4)
                        
                        char rcx_36 = var_2f7
                        
                        if (rcx_36 == 0)
                            sub_142c64850(rbx, "SOCKS5 request granted.\n", r8_23, arg5)
                            sub_142c892b0(r15, 1)
                            result = 0
                        else
                            int64_t* var_3b8_6
                            char var_2f0
                            char var_2ef
                            
                            if (rax_28 == 1)
                                uint32_t var_3a0_1 = zx.d(rcx_36)
                                uint32_t var_3a8_1 = zx.d(var_2f0) << 8 | zx.d(var_2ef)
                                uint32_t var_3b0_1 = zx.d(var_2f1)
                                var_3b8_6.d = zx.d(var_2f2)
                                sub_142c64760(rbx, 
                                    "Can't complete SOCKS5 connection to %d.%d.%d.%d:%d. (%d)", 
                                    zx.q(r8_23.b), arg5)
                            else if (rax_28 == 3)
                                *(&var_300:6 + rdi_3)
                                
                                if (rdi_3 - 2 u>= 0x258)
                                    __report_rangecheckfailure()
                                    noreturn
                                
                                *(&var_2f8 + rdi_3 - 2) = 0
                                *(&var_300:7 + rdi_3)
                                var_3b8_6.d = zx.d(var_2f7)
                                sub_142c64760(rbx, 
                                    "Can't complete SOCKS5 connection to %s:%d. (%d)", &var_2f3, 
                                    arg5)
                            else if (rax_28 == 4)
                                uint32_t var_340_1 = zx.d(var_2f7)
                                char var_2e4
                                char var_2e3
                                uint32_t var_348_1 = zx.d(var_2e4) << 8 | zx.d(var_2e3)
                                char var_2e5
                                uint32_t var_350_1 = zx.d(var_2e5)
                                char var_2e6
                                uint32_t var_358_1 = zx.d(var_2e6)
                                char var_2e7
                                uint32_t var_360_1 = zx.d(var_2e7)
                                char var_2e8
                                uint32_t var_368_1 = zx.d(var_2e8)
                                char var_2e9
                                uint32_t var_370_1 = zx.d(var_2e9)
                                char var_2ea
                                uint32_t var_378_1 = zx.d(var_2ea)
                                char var_2eb
                                uint32_t var_380_1 = zx.d(var_2eb)
                                char var_2ec
                                uint32_t var_388_1 = zx.d(var_2ec)
                                char var_2ed
                                uint32_t var_390_1 = zx.d(var_2ed)
                                uint32_t var_398_1 = zx.d(var_2ee)
                                uint32_t var_3a0_2 = zx.d(var_2ef)
                                uint32_t var_3a8_2 = zx.d(var_2f0)
                                uint32_t var_3b0_2 = zx.d(var_2f1)
                                var_3b8_6.d = zx.d(var_2f2)
                                sub_142c64760(var_300, 
                                    "Can't complete SOCKS5 connection to %02x%02x:%02x%02x:%02x%02x:%02x"
                                ":%02x%02x:%02x%02x:%02x%02x:%02x%02x:%d. (%d)", 
                                    zx.q(var_2f4), arg5)
                            result = 7
                else
                    if (rax_11 != 2)
                        if (rax_11 == 1)
                            rdx = "SOCKS5 GSSAPI per-message authentication is not supported."
                        else if (rax_11 != 0xff)
                            rdx = "Undocumented SOCKS5 mode attempted to be used by server."
                        else
                            if (r12_2 != 0)
                                rdx = "No authentication method was acceptable."
                            
                            if (r12_2 == 0 || *r12_2 == 0)
                                rdx = "No authentication method was acceptable. (It is quite likely "
                                "that the SOCKS5 server wanted a username/password, since none was "
                                "supplied to the server on this connection.)"
                        
                        goto label_142c88e85
                    
                    int64_t* rax_12
                    
                    if (r12_2 != 0)
                        rax_12 = var_328
                    
                    int64_t r15_1
                    
                    if (r12_2 == 0 || rax_12 == 0)
                        r15_1 = 0
                        r14 = 0
                    else
                        r15_1 = -1
                        
                        do
                            r15_1 += 1
                        while (r12_2[r15_1] != 0)
                        
                        do
                            r14 += 1
                        while (*(rax_12 + r14) != 0)
                    
                    var_2f8 = 1
                    var_2f7 = r15_1.b
                    
                    if (r12_2 != 0 && r15_1 != 0)
                        memcpy(&var_2f6, r12_2, r15_1.d)
                    
                    int64_t* rax_13 = var_328
                    (&var_2f6)[r15_1] = r14.b
                    
                    if (rax_13 != 0 && r14 != 0)
                        memcpy(&(&var_2f8)[r15_1 + 3], rax_13, r14.d)
                    
                    int64_t r15_3 = r15_1 + 3 + r14
                    int32_t rax_14
                    rax_14, r8_3, arg5 = sub_142c64dd0(arg7, r15, &var_2f8, r15_3.d, arg5, &var_320)
                    
                    if (rax_14 != 0 || r15_3 != var_320)
                        rdx = "Failed to send SOCKS5 sub-negotiation request."
                        goto label_142c88e85
                    
                    int32_t rax_15
                    rax_15, r8_3 = sub_142c88ec0(arg7, r15, &var_2f8, 2, &var_330)
                    
                    if (rax_15 != 0 || var_330 != 2)
                        rdx = "Unable to receive SOCKS5 sub-negotiation response."
                        goto label_142c88e85
                    
                    if (var_2f7 == 0)
                        goto label_142c88a75
                    
                    sub_142c64760(rbx, "User was rejected by the SOCKS5 server (%d %d).", 
                        zx.q(var_2f8), arg5)
                    result = 7
            else
                sub_142c64760(*arg7, "SOCKS5 read error occurred", r8_3, arg5)
                result = 0x38
    else
        sub_142c64760(*arg7, "SOCKS5: error occurred during connection", r8_3, arg5)
        result = 7
else
    sub_142c64760(rbx, "Connection time-out", r8_1, arg5)
    result = 0x1c

__security_check_cookie(rax_1 ^ &var_3d8)
return result
