// 函数: sub_142c75fc0
// 地址: 0x142c75fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int64_t rdi = 0
int64_t r13 = 0
void* r8 = *(rbx + 0x250)
int32_t r15 = *(rbx + 0x804)
*arg2 = 1
*(r8 + 0x88) = *(rbx + 0x4e58)
*(r8 + 0x8c) = 0
__builtin_memset(&arg5, 0, 0x20)
*(rbx + 0x5e8) = 1

if (r15 - 1 u> 0xb)
    sub_142c64760(rbx, "Got invalid RTSP request", r8, arg3)
    return 0x2b

void* const rbp = &data_1434cce10

switch (r15)
    case 1
        rbp = "OPTIONS"
    case 2
        rbp = "DESCRIBE"
        *(rbx + 0x5e8) = 0
    case 3
        rbp = "ANNOUNCE"
    case 4
        rbp = "SETUP"
    case 5
        rbp = "PLAY"
    case 6
        rbp = "PAUSE"
    case 7
        rbp = "TEARDOWN"
    case 8
        rbp = "GET_PARAMETER"
        *(rbx + 0x5e8) = 0
    case 9
        rbp = "SET_PARAMETER"
    case 0xa
        rbp = "RECORD"
    case 0xb
        *(rbx + 0x5e8) = 0
    case 0xc
        sub_142c64760(rbx, "Got invalid RTSP request: RTSPREQ_LAST", r8, arg3)
        return 0x2b

if (r15 == 0xb)
    sub_142c68d40(arg1, 0, -1, 1, arg3, r8 + 0x28, 0xffffffff, nullptr)
    return 0

int64_t rax_5 = *(rbx + 0x798)

if (rax_5 == 0 && (r15 & 0xfffffff8) != 0)
    sub_142c64760(rbx, "Refusing to issue an RTSP request [%s] without a session ID.", rbp, arg3)
    return 0x2b

void* rax_7 = *(rbx + 0x7a0)
void* const r14 = &data_1434d2d58

if (rax_7 != 0)
    r14 = rax_7

void* const var_70 = r14
char* rax_8
int64_t r8_2
rax_8, r8_2 = sub_142c6c910(arg1, "Transport:")
char* r12 = rax_8

if (r15 == 4)
    if (rax_8 != 0)
        goto label_142c7628f
    
    if (*(rbx + 0x7a8) == 0)
        sub_142c64760(rbx, "Refusing to issue an RTSP SETUP without a Transport: header.", r8_2, 
            arg3)
        return 0x2b
    
    data_143ccb8a0(arg1[0x94])
    arg1[0x94] = 0
    char* rax_9
    rax_9, arg3 = sub_142c563e0("Transport: %s\r\n", *(rbx + 0x7a8), arg3)
    arg1[0x94] = rax_9
    r12 = rax_9
    
    if (rax_9 != 0)
        goto label_142c7628f
else if (r15 != 2)
label_142c7628f:
    char* rax_14 = sub_142c6c910(arg1, "User-Agent:")
    int64_t rcx_12
    
    if (rax_14 != 0)
        rcx_12 = arg1[0x8d]
    
    if (rax_14 == 0 || rcx_12 == 0)
        if (sub_142c6c910(arg1, "User-Agent:") == 0 && *(rbx + 0x740) != 0)
            arg5 = arg1[0x8d]
    else
        data_143ccb8a0(rcx_12)
        arg1[0x8d] = 0
    
    int32_t rax_10
    int512_t zmm2
    rax_10, zmm2 = sub_142c6cf50(arg1, rbp, r14, 0, arg4, arg3)
    
    if (rax_10 != 0)
        return rax_10
    
    void* rax_17 = arg1[0x8c]
    void* rax_18 = arg1[0x8f]
    data_143ccb8a0(arg1[0x91])
    arg1[0x91] = 0
    char* rax_19
    
    if (*(rbx + 0x890) != 0)
        rax_19 = sub_142c6c910(arg1, "Referer:")
    
    if (*(rbx + 0x890) == 0 || rax_19 != 0)
        arg1[0x91] = 0
    else
        int64_t rax_20
        rax_20, zmm2 = sub_142c563e0("Referer: %s\r\n", *(rbx + 0x890), zmm2)
        arg1[0x91] = rax_20
    
    void* rax_21 = arg1[0x91]
    
    if (*(rbx + 0x4e41) != 0 && (r15.b & 0xf) != 0 && sub_142c6c910(arg1, "Range:") == 0
            && *(rbx + 0x4e48) != 0)
        data_143ccb8a0(arg1[0x90])
        arg1[0x90] = 0
        void* rax_23
        rax_23, zmm2 = sub_142c563e0("Range: %s\r\n", *(rbx + 0x4e48), zmm2)
        arg6 = rax_23
        arg1[0x90] = rax_23
    
    char* rax_24
    int64_t r8_4
    rax_24, r8_4 = sub_142c6c910(arg1, "CSeq:")
    
    if (rax_24 != 0)
        sub_142c64760(rbx, "CSeq cannot be set as a custom header.", r8_4, zmm2)
        return 0x55
    
    char* rax_25
    int64_t r8_5
    rax_25, r8_5 = sub_142c6c910(arg1, "Session:")
    
    if (rax_25 != 0)
        sub_142c64760(rbx, "Session ID cannot be set as a custom header.", r8_5, zmm2)
        return 0x2b
    
    int64_t* rax_26 = sub_142c6c210()
    
    if (rax_26 != 0)
        int64_t var_a8
        var_a8.d = *(r8 + 0x88)
        int512_t zmm2_1
        rax_10, zmm2_1 = sub_142c6c410(rax_26, "%s %s RTSP/1.0\r\nCSeq: %ld\r\n", rbp, zmm2)
        
        if (rax_10 == 0)
            if (rax_5 != 0)
                rax_10, zmm2_1 = sub_142c6c410(rax_26, "Session: %s\r\n", rax_5, zmm2_1)
            
            if (rax_5 == 0 || rax_10 == 0)
                void* const r11_1 = &data_1434cce10
                void* const r10_1 = &data_1434cce10
                
                if (rax_18 != 0)
                    r11_1 = rax_18
                
                void* const r8_8 = &data_1434cce10
                void* const rdx_5 = &data_1434cce10
                void* const var_80_1 = r11_1
                void* const rcx_25 = &data_1434cce10
                
                if (rax_17 != 0)
                    r10_1 = rax_17
                
                void* rax_31 = arg5
                void* const var_88_1 = r10_1
                
                if (rax_31 != 0)
                    r8_8 = rax_31
                
                void* const var_90_1 = r8_8
                
                if (rax_21 != 0)
                    rdx_5 = rax_21
                
                void* const var_98_1 = rdx_5
                
                if (arg6 != 0)
                    rcx_25 = arg6
                
                int32_t var_a0
                var_a0.q = rcx_25
                char* rbp_2 = &data_1434cce10
                
                if (r12 != 0)
                    rbp_2 = r12
                
                int32_t rax_34
                int512_t zmm2_2
                rax_34, zmm2_2 = sub_142c6c410(rax_26, "%s%s%s%s%s%s%s%s", rbp_2, zmm2_1)
                data_143ccb8a0(arg1[0x8f])
                arg1[0x8f] = 0
                
                if (rax_34 != 0)
                    return rax_34
                
                if (((r15 - 2) & 0xfffffffd) == 0)
                    rax_10, zmm2_2 = sub_142c6c700(rbx, rax_26, zmm2_2)
                
                if (((r15 - 2) & 0xfffffffd) != 0 || rax_10 == 0)
                    int512_t zmm2_3
                    rax_10, zmm2_3 = sub_142c6c490(arg1, 0, rax_26, zmm2_2)
                    
                    if (rax_10 == 0)
                        if (r15 != 3 && r15 - 8 u> 1)
                            goto label_142c766d4
                        
                        bool cond:9_1
                        
                        if (*(rbx + 0x5e9) == 0)
                            rdi = *(rbx + 0x4e68)
                            
                            if (rdi == -1)
                                char* rax_37 = *(rbx + 0x2b8)
                                
                                if (rax_37 == 0)
                                    rdi = 0
                                else
                                    do
                                        rdi += 1
                                    while (rax_37[rdi] != 0)
                            
                            *(rbx + 0x438) = 2
                            cond:9_1 = rdi s> 0
                        else
                            r13 = *(rbx + 0x4e68)
                            cond:9_1 = r13 s> 0
                            *(rbx + 0x438) = 4
                        
                        if (not(cond:9_1))
                            if (r15 == 8)
                                *(rbx + 0x438) = 5
                                *(rbx + 0x5e8) = 1
                            
                            goto label_142c766d4
                        
                        char* rax_38 = sub_142c6c910(arg1, "Content-Length:")
                        
                        if (rax_38 == 0)
                            int64_t r8_11 = rdi
                            
                            if (*(rbx + 0x5e9) != 0)
                                r8_11 = r13
                            
                            rax_10, zmm2_3 =
                                sub_142c6c410(rax_26, "Content-Length: %I64d\r\n", r8_11, zmm2_3)
                        
                        if (rax_38 != 0 || rax_10 == 0)
                            if (r15 - 8 u> 1)
                            label_142c7669a:
                                
                                if (r15 != 3)
                                label_142c766c7:
                                    *(rbx + 0x4e28) = 0
                                label_142c766d4:
                                    *(rbx + 0x24b) = 1
                                    int512_t zmm0_1
                                    rax_10, zmm0_1 = sub_142c6c0d0(rax_26, &data_1436b2f34, 2)
                                    
                                    if (rax_10 == 0)
                                        if (rdi s> 0)
                                            rax_10, zmm0_1 =
                                                sub_142c6c0d0(rax_26, *(rbx + 0x2b8), rdi)
                                        
                                        if (rdi s<= 0 || rax_10 == 0)
                                            int32_t rax_42
                                            int32_t rcx_39
                                            int64_t r8_16
                                            int512_t zmm2_4
                                            rax_42, rcx_39, r8_16, zmm2_4 = sub_142c6c220(rax_26, 
                                                arg1, rbx + 0x4f08, 0, zmm0_1, zmm2_3, 0)
                                            
                                            if (rax_42 == 0)
                                                int64_t* rdx_9 = r8 + 0x30
                                                
                                                if (r13 == 0)
                                                    rdx_9 = nullptr
                                                
                                                int512_t zmm2_5 = sub_142c68d40(arg1, 0, -1, 1, 
                                                    zmm2_4, r8 + 0x28, 
                                                    neg.d(sbb.d(rcx_39, rcx_39, r13 != 0)) - 1, 
                                                    rdx_9)
                                                *(rbx + 0x4e58) += 1
                                                int64_t rdx_10 = *(r8 + 0x30)
                                                
                                                if (rdx_10 != 0 && sub_142c6f450(arg1, 
                                                        sub_142c6f1b0(rbx, rdx_10), zmm2_5) != 0)
                                                    return 0x2a
                                            else
                                                sub_142c64760(rbx, "Failed sending RTSP request", 
                                                    r8_16, zmm2_4)
                                            
                                            return rax_42
                                else
                                    char* rax_41
                                    int64_t r8_13
                                    rax_41, r8_13 = sub_142c6c910(arg1, "Content-Type:")
                                    
                                    if (rax_41 != 0)
                                        goto label_142c766c7
                                    
                                    rax_10, zmm2_3 = sub_142c6c410(rax_26, 
                                        "Content-Type: application/sdp\r\n", r8_13, zmm2_3)
                                    
                                    if (rax_10 == 0)
                                        goto label_142c766c7
                            else
                                char* rax_40
                                int64_t r8_12
                                rax_40, r8_12 = sub_142c6c910(arg1, "Content-Type:")
                                
                                if (rax_40 != 0)
                                    goto label_142c7669a
                                
                                rax_10, zmm2_3 = sub_142c6c410(rax_26, 
                                    "Content-Type: text/parameters\r\n", r8_12, zmm2_3)
                                
                                if (rax_10 == 0)
                                    goto label_142c7669a
        
        return rax_10
else
    char const* const rcx_8 = "Accept: application/sdp\r\n"
    
    if (sub_142c6c910(arg1, "Accept:") != 0)
        rcx_8 = nullptr
    
    arg8 = rcx_8
    
    if (sub_142c6c910(arg1, "Accept-Encoding:") != 0 || *(rbx + 0x668) == 0)
        goto label_142c7628f
    
    data_143ccb8a0(arg1[0x8e])
    arg1[0x8e] = 0
    void* rax_13
    rax_13, arg3 = sub_142c563e0("Accept-Encoding: %s\r\n", *(rbx + 0x668), arg3)
    arg7 = rax_13
    arg1[0x8e] = rax_13
    
    if (rax_13 != 0)
        goto label_142c7628f

return 0x1b
