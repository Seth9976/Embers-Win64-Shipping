// 函数: sub_142c88180
// 地址: 0x142c88180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_208[0x20]
int64_t rax_1 = __security_cookie ^ &var_208
uint64_t rbx = zx.q(arg3)
arg3.b = 1
void* rsi = *arg6
SOCKET r15 = arg6[sx.q(arg4) + 0x47]
int32_t r13 = *(arg6 + 0x12c)
int64_t rax_3
int64_t r8
rax_3, r8 = sub_142c65dc0(rsi, nullptr, arg3.b, rbx)
int64_t result

if (rax_3 s>= 0)
    int32_t var_1e8
    
    if (*(arg6 + 0x3f6) != 0)
        void* const r8_1 = &data_1434cce10
        var_1e8 = rbx.d
        
        if (r13 == 6)
            r8_1 = &data_1436b9f14
        
        arg5 = sub_142c64850(*arg6, "SOCKS4%s: connecting to HTTP proxy %s port %d\n", r8_1, arg5)
    
    sub_142c892b0(r15, 0)
    int512_t zmm2 = sub_142c64850(rsi, "SOCKS4 communication to %s:%d\n", arg2, arg5)
    int16_t var_1a8 = 0x104
    char var_1a6_1 = (rbx.d s>> 8).b
    char var_1a5_1 = rbx.b
    int64_t* var_1c8
    int32_t var_1a4
    
    if (r13 == 6)
    label_142c8834f:
        int64_t rbx_3 = -1
        char var_1a0 = 0
        
        if (arg1 == 0)
            goto label_142c8838f
        
        int64_t r8_6 = -1
        
        do
            r8_6 += 1
        while (arg1[r8_6] != 0)
        
        if (r8_6 u< 0xfe)
            memcpy(&var_1a0, arg1, r8_6.d + 1)
        label_142c8838f:
            int64_t rdi_1 = 0
            int64_t rdx_6 = -1
            
            do
                rdx_6 += 1
            while ((&var_1a0)[rdx_6] != 0)
            
            if (r13 == 6)
                var_1a4 = 0x1000000
                int64_t rdi_2 = -1
                
                do
                    rdi_2 += 1
                while (arg2[rdi_2] != 0)
                
                rdi_1 = rdi_2 + 1
                int64_t r8_8 = sx.q(rdx_6.d + 9)
                
                if (r8_8 + rdi_1 s> 0x106)
                    rdi_1 = 0
                else
                    char* rcx_14 = arg2
                    char i
                    
                    do
                        i = *rcx_14
                        *(&var_208 + r8_8 - arg2 + 0x60 + rcx_14) = i
                        rcx_14 = &rcx_14[1]
                    while (i != 0)
            
            int64_t r15_2 = sx.q(rdx_6.d + 9) + rdi_1
            var_1e8.q = &var_1c8
            int32_t rax_12
            rax_12, r8_6, zmm2 = sub_142c64dd0(arg6, r15, &var_1a8, r15_2.d, zmm2, var_1e8)
            
            if (rax_12 != 0 || var_1c8 != r15_2)
            label_142c8860f:
                sub_142c64760(rsi, "Failed to send SOCKS4 connect request.", r8_6, zmm2)
                result = 7
            else
                int32_t rax_13
                
                if (r13 == 6 && rdi_1 == 0)
                    do
                        rbx_3 += 1
                    while (arg2[rbx_3] != 0)
                    
                    var_1e8.q = &var_1c8
                    rax_13, r8_6, zmm2 =
                        sub_142c64dd0(arg6, r15, arg2, (rbx_3 + 1).d, zmm2, var_1e8)
                
                if (r13 == 6 && rdi_1 == 0 && (rax_13 != 0 || var_1c8 != rbx_3 + 1))
                    goto label_142c8860f
                
                int64_t var_1b8
                var_1e8.q = &var_1b8
                int32_t rax_14
                rax_14, r8_6 = sub_142c88ec0(arg6, r15, &var_1a8, 8, var_1e8)
                
                if (rax_14 != 0 || var_1b8 != 8)
                    sub_142c64760(rsi, "Failed to receive SOCKS4 connect request ack.", r8_6, zmm2)
                    result = 7
                else if (var_1a8.b == rax_14.b)
                    uint32_t r10_1 = zx.d(var_1a8:1.b)
                    
                    if (r10_1 == 0x5a)
                        void* const r8_15 = &data_1434cce10
                        
                        if (r13 == 6)
                            r8_15 = &data_1436b9f14
                        
                        sub_142c64850(rsi, "SOCKS4%s request granted.\n", r8_15, zmm2)
                        sub_142c892b0(r15, 1)
                        result = 0
                    else
                        uint32_t rdx_11 = zx.d(var_1a0)
                        char var_19f
                        uint32_t rax_15 = zx.d(var_19f)
                        uint64_t r8_14 = zx.q(var_1a4.b)
                        
                        if (r10_1 == 0x5b)
                            int32_t var_1d0_4 = 0x5b
                            uint32_t var_1d8_4 = rdx_11 << 8 | rax_15
                            uint32_t var_1e0_4 = zx.d(var_1a4:3.b)
                            uint32_t var_1e8_4 = zx.d(var_1a4:2.b)
                            sub_142c64760(rsi, 
                                "Can't complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request "
                            "rejected or failed.", 
                                r8_14, zmm2)
                        else if (r10_1 == 0x5c)
                            int32_t var_1d0_3 = 0x5c
                            uint32_t var_1d8_3 = rdx_11 << 8 | rax_15
                            uint32_t var_1e0_3 = zx.d(var_1a4:3.b)
                            uint32_t var_1e8_3 = zx.d(var_1a4:2.b)
                            sub_142c64760(rsi, 
                                "Can't complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request "
                            "rejected because SOCKS server cannot connect to identd on the "
                            "client.", 
                                r8_14, zmm2)
                        else
                            uint32_t rdx_13 = rdx_11 << 8 | rax_15
                            uint32_t rax_16 = zx.d(var_1a4:3.b)
                            uint32_t rcx_22 = zx.d(var_1a4:2.b)
                            
                            if (r10_1 == 0x5d)
                                int32_t var_1d0_2 = 0x5d
                                uint32_t var_1d8_2 = rdx_13
                                uint32_t var_1e0_2 = rax_16
                                uint32_t var_1e8_2 = rcx_22
                                sub_142c64760(rsi, 
                                    "Can't complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request "
                                "rejected because the client program and identd report different "
                                "user-ids.", 
                                    r8_14, zmm2)
                            else
                                uint32_t var_1d0_1 = r10_1
                                uint32_t var_1d8_1 = rdx_13
                                uint32_t var_1e0_1 = rax_16
                                uint32_t var_1e8_1 = rcx_22
                                sub_142c64760(rsi, 
                                    "Can't complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), Unknown.", 
                                    r8_14, zmm2)
                        
                        result = 7
                else
                    sub_142c64760(rsi, "SOCKS4 reply has wrong version, version should be 4.", 
                        r8_6, zmm2)
                    result = 7
        else
            sub_142c64760(rsi, "Too long SOCKS proxy name, can't use!\n", r8_6, zmm2)
            result = 7
    else
        int32_t rax_6
        rax_6, zmm2 = sub_142c5a570(arg6, arg2, rbx.d, &var_1c8, zmm2)
        
        if (rax_6 != 0xffffffff)
            if (rax_6 == 1)
                zmm2 = sub_142c59970(arg6, &var_1c8, zmm2)
            
            int64_t* rbx_1 = var_1c8
            
            if (rbx_1 == 0)
                sub_142c64760(rsi, "Failed to resolve "%s" for SOCKS4 connect.", arg2, zmm2)
                result = 6
            else
                void* const rbx_2 = *rbx_1
                
                if (rbx_2 == 0)
                    sub_142c64760(rsi, "Failed to resolve "%s" for SOCKS4 connect.", arg2, zmm2)
                    result = 6
                else
                    void var_98
                    int512_t zmm2_1 = sub_142c5a530(rbx_2, &var_98, 0x40, zmm2)
                    void* r8_4 = &var_98
                    
                    if (*(rbx_2 + 4) != 2)
                        rbx_2 = nullptr
                        zmm2 = sub_142c64760(rsi, "SOCKS4 connection to %s not supported\n", r8_4, 
                            zmm2_1)
                    else
                        void* rcx_8 = *(rbx_2 + 0x20)
                        var_1a4.b = *(rcx_8 + 4)
                        var_1a4:1.b = *(rcx_8 + 5)
                        var_1a4:2.b = *(rcx_8 + 6)
                        var_1a4:3.b = *(rcx_8 + 7)
                        zmm2 = sub_142c64850(rsi, "SOCKS4 connect to IPv4 %s (locally resolved)\n", 
                            r8_4, zmm2_1)
                    
                    sub_142c5a710(rsi, var_1c8)
                    
                    if (rbx_2 != 0)
                        goto label_142c8834f
                    
                    sub_142c64760(rsi, "Failed to resolve "%s" for SOCKS4 connect.", arg2, zmm2)
                    result = 6
        else
            result = 5
else
    sub_142c64760(rsi, "Connection time-out", r8, arg5)
    result = 0x1c

__security_check_cookie(rax_1 ^ &var_208)
return result
