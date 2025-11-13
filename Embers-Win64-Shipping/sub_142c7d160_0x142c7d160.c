// 函数: sub_142c7d160
// 地址: 0x142c7d160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg1
int32_t rsi = 0
int64_t r13 = sx.q(arg2)
int64_t* r15 = *(rbp + 0x250)
char* arg_20 = nullptr
char* rbx = *(rbp + 0x4e38)

if (r15 != 0)
    if (r13.d u> 0x4e)
    label_142c7d1d5:
        *(arg1 + 0x729) = 0
        arg1[0xe6].b = 1
        sub_142c65340(arg1, 1)
        rsi = r13.d
    else
        switch (r13)
            case 0, 9, 0xa, 0xc, 0xd, 0x11, 0x12, 0x13, 0x17, 0x19, 0x1e, 0x24, 0x3f, 0x4e
                if (arg3 != 0)
                    goto label_142c7d1d5
            case 1, 2, 3, 4, 5, 6, 7, 8, 0xb, 0xe, 0xf, 0x10, 0x14, 0x15, 0x16, 0x18, 0x1a, 0x1b, 
                    0x1c, 0x1d, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 
                    0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
                    0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 
                    0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d
                goto label_142c7d1d5
    
    data_143ccb8a0(arg1[0xe7])
    
    if (*(rbp + 0x80c) != 0)
        int64_t rax_2 = *(rbp + 0x818)
        
        if (rax_2 != 0 && arg1[0xe4] != 0)
            rax_2(*(rbp + 0x4ee8))
        
        arg1[0xed] = -1
    
    if (rsi != 0)
    label_142c7d31f:
        *(arg1 + 0x729) = 0
        sub_142c65340(arg1, 1)
        arg1[0xe7] = 0
    else
        int32_t rax_3 = sub_142c51e30(rbp, rbx, 0, &arg_20, nullptr, rsi.b)
        rsi = rax_3
        
        if (rax_3 != 0)
            goto label_142c7d31f
        
        char* rcx_6 = arg1[0xe4]
        int64_t rax_4
        
        if (rcx_6 == 0)
            rax_4 = 0
        else
            rax_4 = -1
            
            do
                rax_4 += 1
            while (rcx_6[rax_4] != 0)
        
        char* rdx_1 = arg_20
        int64_t rcx_7 = -1
        
        do
            rcx_7 += 1
        while (rdx_1[rcx_7] != 0)
        
        char* rcx_8 = rcx_7 - rax_4
        
        if (arg1[0xe6].b != 0)
            arg1[0xe7] = 0
            data_143ccb8a0(rdx_1)
        else
            if (rcx_8 == 0 || *(rbp + 0x5c0) == 2)
                int64_t rax_5 = data_143ccb8b0(&data_1434cce10)
                char* rcx_9 = arg_20
                arg1[0xe7] = rax_5
                data_143ccb8a0(rcx_9)
            else
                arg1[0xe7] = rdx_1
                
                if (rax_4 != 0)
                    *(rcx_8 + rdx_1) = 0
            
            int64_t r8 = arg1[0xe7]
            
            if (r8 != 0)
                arg4 = sub_142c64850(rbp, "Remembering we are in dir "%s"\n", r8, arg4)
    
    uint64_t r8_1 = sub_142c7e3d0(&arg1[0xd3])
    
    if (arg1[0x48] != -1)
        if (rsi == 0 && arg1[0xe5].b != rsi.b && *(rbp + 0xe8) s> 0)
            int32_t rax_6
            rax_6, r8_1, arg4 = gzprintf(&arg1[0xd3], &data_1434ccff0, "ABOR", arg4)
            rsi = rax_6
            
            if (rax_6 != 0)
                arg4 = sub_142c64760(rbp, "Failure sending ABOR command: %s", sub_142c558d0(rax_6), 
                    arg4)
                *(arg1 + 0x729) = 0
                r8_1 = sub_142c65340(arg1, 1)
        
        if (arg1[0x5d].b != 0)
            r8_1 = j_sub_142c71b70(arg1, 1)
        
        SOCKET rdx_2 = arg1[0x48]
        
        if (rdx_2 != -1)
            r8_1 = sub_142c65200(arg1, rdx_2)
            arg1[0x48] = -1
        
        *(arg1 + 0x3fe) = 0
    
    if (rsi != 0)
        goto label_142c7d5b7
    
    if (r15[3].d != rsi || *(arg1 + 0x729) == rsi.b || arg1[0xd7].b == rsi.b)
        if (arg3 != 0)
            goto label_142c7d5b7
        
    label_142c7d506:
        
        if (*(rbp + 0x5e9) != 0)
            int64_t r9_2 = *(rbp + 0x4e68)
            
            if (r9_2 != -1)
                int64_t r8_4 = **r15
                
                if (r9_2 != r8_4 && *(rbp + 0x3da) == 0 && r15[3].d == 0)
                    arg4 = sub_142c64760(rbp, 
                        "Uploaded unaligned file size (%I64d out of %I64d bytes)", r8_4, arg4)
                    rsi = 0x12
            
            goto label_142c7d5b7
        
        int64_t rcx_28 = *(rbp + 0xd8)
        
        if (rcx_28 != -1)
            r8_1 = **r15
        
        if (rcx_28 != -1 && rcx_28 != r8_1 && *(rbp + 0xe8) != r8_1)
            arg4 = sub_142c64760(rbp, "Received only partial file: %I64d bytes", r8_1, arg4)
            rsi = 0x12
        else if (arg1[0xe5].b == 0 && **r15 == 0 && rcx_28 s> 0)
            arg4 = sub_142c64760(rbp, "No data was received!", r8_1, arg4)
            rsi = 0x13
        
        goto label_142c7d5b7
    
    if (arg3 != 0)
        goto label_142c7d5b7
    
    int32_t rbx_1 = arg1[0xdd].d
    arg1[0xdd].d = 0xea60
    int64_t var_48
    *(arg1 + 0x6d8) = *sub_142c59600(&var_48)
    int32_t arg_8
    int32_t rax_9
    rax_9, r8_1, arg4 = sub_142c7df50(&var_48, arg1, &arg_8, arg4)
    rsi = rax_9
    arg1[0xdd].d = rbx_1
    
    if (var_48 == 0 && rax_9 == 0x1c)
        sub_142c64760(rbp, "control connection looks dead", r8_1, arg4)
        *(arg1 + 0x729) = arg3
        sub_142c65340(arg1, rsi - 0x1b)
        return zx.q(rsi)
    
    if (rsi != 0)
        return zx.q(rsi)
    
    char rax_10 = arg1[0xe5].b
    
    if (rax_10 == 0)
    label_142c7d4ca:
        r8_1 = zx.q(arg_8)
        
        if (r8_1.d == 0xe2 || r8_1.d == 0xfa)
            goto label_142c7d506
        
        arg4 = sub_142c64760(rbp, "server did not report OK, got %d", r8_1, arg4)
        rsi = 0x12
    label_142c7d5b7:
        r15[3].d = 0
        arg1[0xe5].b = 0
        
        if (r13.d == 0 && rsi == 0 && arg3 == 0)
            int64_t* rdx_6 = *(rbp + 0x3e8)
            
            if (rdx_6 != 0)
                rsi = sub_142c7ee90(arg1, rdx_6, arg4)
        
        return zx.q(rsi)
    
    if (*(rbp + 0xe8) s<= 0)
        if (rax_10 != 0)
            goto label_142c7d506
        
        goto label_142c7d4ca
    
    sub_142c64850(rbp, "partial download completed, closing connection\n", r8_1, arg4)
    sub_142c65340(arg1, rsi + 1)

return 0
