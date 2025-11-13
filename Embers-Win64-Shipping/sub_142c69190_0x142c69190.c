// 函数: sub_142c69190
// 地址: 0x142c69190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx = 0
int32_t r14 = 0x64
int32_t* r12 = arg4
char arg_8 = 0
int64_t* rbx = arg3
int32_t var_58 = 0x64
*arg7 = 0
int32_t r15 = 0
uint64_t r13 = 0
*arg8 = 0

while (true)
    int64_t rax_2 = *rbx
    int64_t r9 = sx.q(*(arg1 + 0x598))
    
    if (rax_2 != -1 && rbx[0xb].b == 0)
        int64_t rax_3 = rax_2 - rbx[4]
        
        if (rax_3 s< r9)
            r9 = rax_3
    
    int64_t* var_78
    uint64_t var_50
    int32_t rax_4
    
    if (r9 != 0)
        var_78 = &var_50
        rax_4, arg3, arg5 = sub_142c648f0(arg2, arg2[0x8a], rbx[0x27], r9, var_78)
        r15 = rax_4
        
        if (rax_4 == 0x51)
            goto label_142c6929e
        
        if (rax_4 s> 0)
            return rax_4
        
        rcx = var_50
        goto label_142c6924b
    
    var_50 = 0
label_142c6924b:
    
    if (rbx[4] == 0 && rbx[5] == 0)
        arg3, arg5 = sub_142c6f300(arg1, 7)
        
        if (rbx[0x18].d s> 0)
            uint64_t var_48[0x2]
            uint64_t* rax_5
            rax_5, arg3 = sub_142c59600(&var_48)
            arg5.o = *rax_5
            *(rbx + 0xb0) = arg5.o
        
        rcx = var_50
    
    *r12 |= 1
    
    if (rcx != 0 || rbx[0x26].d != rcx.d)
        r12.b = 0
        
        if (rcx s> 0)
            goto label_142c69305
        
        rbx[0x29].d &= 0xfffffffe
    label_142c6929e:
        
        if (r14 s<= 0)
            arg2[0xf0].d = 1
            *arg8 = 1
        
        if (((rbx[0x29].d).b & 3) != 2)
            return 0
        
        if (*(arg2 + 0x3f1) != 0)
            sub_142c64850(arg1, "we are done reading and this is set to close, stop send\n", arg3, 
                arg6)
            rbx[0x29].d &= 0xfffffffd
        
        return 0
    
    r12.b = 1
label_142c69305:
    *(rcx + rbx[0x27]) = 0
    rbx[0xf] = rbx[0x27]
    int64_t r10_1 = *(arg2[0x87] + 0x68)
    int64_t var_70
    int64_t var_68
    uint64_t var_60
    
    if (r10_1 != 0)
        rax_4, arg3 = r10_1(arg1, arg2, &var_50, &arg_8, var_78, var_70, var_68, var_60, var_58)
        r15 = rax_4
        
        if (rax_4 != 0)
            return rax_4
        
        if (arg_8 != rax_4.b)
            goto label_142c6929e
        
        goto label_142c69345
    
label_142c69345:
    
    if (rbx[0xb].b != 0)
        char arg_18 = 0
        rax_4, arg3, arg5, arg6 = sub_142c6d070(arg1, arg2, &var_50, &arg_18, arg5, arg6)
        r15 = rax_4
        
        if (rax_4 != 0)
            return rax_4
        
        int64_t r10_2 = *(arg2[0x87] + 0x68)
        
        if (r10_2 != 0 && rbx[2] s<= 0 && var_50 s> 0)
            rax_4, arg3 = r10_2(arg1, arg2, &var_50, &arg_8, var_78, var_70, var_68, var_60, var_58)
            r15 = rax_4
            
            if (rax_4 != 0)
                return rax_4
            
            if (arg_8 != rax_4.b)
                goto label_142c6929e
            
            goto label_142c693b0
        
    label_142c693b0:
        
        if (arg_18 != 0)
            if (var_50 s> 0)
                char rax_37 = sub_142c53090(*(*arg2 + 0xc0), 1)
                *(arg1 + 0x4e38)
                uint64_t r8_17 = var_50
                
                if (rax_37 == 0)
                    arg3, arg6 = sub_142c64850(arg1, 
                        "Excess found in a non pipelined read: excess = %zd url = %s (zero-length body)\n", 
                        r8_17, arg6)
                else
                    arg3, arg6 = sub_142c64850(arg1, 
                        "Rewinding stream by : %zd bytes on url %s (zero-length body)\n", r8_17, 
                        arg6)
                    arg2[0xa0] -= var_50
                    *(arg2 + 0x409) = 1
            
            goto label_142c6929e
    
    if (rbx[0xf] != 0 && rbx[0xb].b == 0 && (var_50 s> 0 || r12.b != 0))
        if (*(arg1 + 0x5e8) != 0)
            sub_142c65340(arg2, 2)
            *arg7 = 1
            return 8
        
        if (rbx[0x26].d == 0 && r12.b == 0 && (*(arg2[0x87] + 0x7c) & 0x40003) != 0)
            if (*(arg1 + 0x230) != 0)
                if (*(arg2 + 0x3f1) != r12.b)
                label_142c698a2:
                    rbx[0x29].d &= 0xfffffffe
                    *arg7 = 1
                    return 0
                
                *(rbx + 0x14d) = 1
                arg3, arg6 = sub_142c64850(arg1, "Ignoring the response-body\n", arg3, arg6)
            
            if (*(arg1 + 0x4e50) != 0 && rbx[0x13].b == 0 && *(arg1 + 0x438) == 1
                    && *(rbx + 0x14d) == 0)
                if (*rbx != *(arg1 + 0x4e50))
                    sub_142c64760(arg1, 
                        "HTTP server doesn't seem to support byte ranges. Cannot resume.", arg3, 
                        arg6)
                    return 0x21
                
                sub_142c64850(arg1, "The entire document is already downloaded", arg3, arg6)
                sub_142c65340(arg2, 1)
                goto label_142c698a2
            
            if (*(arg1 + 0x428) != 0 && *(arg1 + 0x4e48) == 0)
                char rax_13
                int64_t r8_4
                rax_13, r8_4, arg6 = sub_142c68580(arg1, rbx[0x25], arg3, arg6)
                
                if (rax_13 == 0)
                    *arg7 = 1
                    *(arg1 + 0x4ef0) = 0x130
                    sub_142c64850(arg1, "Simulate a HTTP 304 response!\n", r8_4, arg6)
                    sub_142c65340(arg2, 1)
                    return 0
        
        rbx[0x26].d += 1
        
        if (*(arg1 + 0x5f0) != 0)
            var_78 = arg2
            
            if (*(rbx + 0x5c) == 0)
                arg6 = sub_142c64600(arg1, 3, rbx[0xf], var_50, arg6, var_78)
            else
                arg6 = sub_142c64600(arg1, 3, *(arg1 + 0xa70), rbx[0xe], arg6, var_78)
                
                if (*(rbx + 0x5c) == 1)
                    var_78 = arg2
                    arg6 = sub_142c64600(arg1, 3, rbx[0xf], var_50, arg6, var_78)
        
        if (rbx[0x2e].b != 0)
            int32_t rax_14
            int64_t r8_8
            rax_14, r8_8, arg6 = sub_142c89660(arg2, rbx[0xf], var_50, &var_50, arg6)
            
            if (rax_14 s> 0)
                if (rax_14 != 4)
                    sub_142c64760(arg1, "%s in chunked-encoding", sub_142c895e0(rax_14), arg6)
                    return 0x38
                
                sub_142c64760(arg1, "Failed writing data", r8_8, arg6)
                return 0x17
            
            if (rax_14 == 0xffffffff)
                rbx[0x29].d &= 0xfffffffe
                int64_t r14_1 = arg2[9]
                
                if (r14_1 != 0)
                    arg6 =
                        sub_142c64850(*arg2, "Leftovers after chunking: %zu bytes\n", r14_1, arg6)
                    
                    if (sub_142c53090(*(*arg2 + 0xc0), 1) != 0)
                        arg6 = sub_142c64850(*arg2, "Rewinding %zu bytes\n", r14_1, arg6)
                        arg2[0xa0] -= r14_1
                        *(arg2 + 0x409) = 1
                
                r14 = var_58
        
        if (*(rbx + 0x5c) != 0 && *(rbx + 0x14d) == 0)
            rbx[4] += rbx[0xe]
        
        int64_t rcx_16 = rbx[2]
        
        if (rcx_16 != -1)
            uint64_t rdx_6 = var_50
            
            if (rbx[4] + rdx_6 s>= rcx_16)
                int64_t r13_2 = rbx[4] - rcx_16
                r13 = r13_2 + rdx_6
                
                if (r13_2 != neg.q(rdx_6) && *(rbx + 0x14d) == 0)
                    if (sub_142c53090(*(*arg2 + 0xc0), 1) == 0)
                        *rbx
                        var_70 = rbx[4]
                        var_78 = rbx[2]
                        arg6 = sub_142c64850(arg1, 
                            "Excess found in a non pipelined read: excess = %zu, size = %I64d, "
                        "maxdownload = %I64d, bytecount = %I64d\n", 
                            r13, arg6)
                    else
                        *(arg1 + 0x4e38)
                        var_60 = var_50
                        var_68 = rbx[4]
                        var_70 = rbx[2]
                        var_78 = *rbx
                        arg6 = sub_142c64850(arg1, 
                            "Rewinding stream by : %zu bytes on url %s (size = %I64d, maxdownload = "
                        ", bytecount = %I64d, nread = %zd)\n", 
                            r13, arg6)
                        arg2[0xa0] -= r13
                        *(arg2 + 0x409) = 1
                
                int64_t rax_26 = rbx[2]
                uint64_t rax_27 = rax_26 - rbx[4]
                
                if (rax_26 - rbx[4] s< 0)
                    rax_27 = 0
                
                rbx[0x29].d &= 0xfffffffe
                var_50 = rax_27
        
        rbx[4] += var_50
        arg3, arg5 = sub_142c6f0c0(arg1, rbx[4])
        
        if (rbx[0x2e].b == 0)
            if (var_50 != 0)
            label_142c6969e:
                
                if (*(rbx + 0x5c) != 0 && *(rbx + 0x14d) == 0)
                label_142c696ad:
                    int64_t r9_9 = rbx[2]
                    
                    if (r9_9 == -1 || rbx[0xe] s<= r9_9)
                        r9_9 = rbx[0xe]
                    
                    int32_t rax_29
                    rax_29, arg3, arg5, arg6 = sub_142c645e0(arg2, 1, *(arg1 + 0xa70), r9_9, arg6)
                    r15 = rax_29
                    
                    if (rax_29 != 0)
                        return r15
                    
                    goto label_142c696e4
                
            label_142c696e4:
                
                if (*(rbx + 0x5c) s< 2)
                    int32_t rcx_22
                    
                    if (*(*arg2 + 0x611) == 0)
                        rcx_22 = rbx[0x19].d
                    else
                        rcx_22 = 0
                    
                    int32_t rax_31
                    
                    if (rcx_22 == 0)
                        if (*(rbx + 0x14d) == 0)
                            if ((*(arg2[0x87] + 0x7c) & 0xc000) == 0)
                                rax_31, arg3, arg5, arg6 =
                                    sub_142c645e0(arg2, 1, rbx[0xf], var_50, arg6)
                            else
                                rax_31, arg3, arg5, arg6 =
                                    sub_142c7acf0(arg2, rbx[0xf], var_50, arg6)
                            
                            r15 = rax_31
                    else if (rcx_22 == 1)
                        if (*(rbx + 0x14d) == 0)
                            rax_31, arg3, arg5, arg6 = sub_142c89ac0(arg2, rbx, var_50.d, arg6)
                            r15 = rax_31
                    else if (rcx_22 != 2)
                        arg3, arg5, arg6 = sub_142c64760(arg1, 
                            "Unrecognized content encoding type. libcurl understands `identity', "
                        "`deflate' and `gzip' content encodings.", 
                            arg3, arg6)
                        r15 = 0x3d
                    else if (*(rbx + 0x14d) == 0)
                        rax_31, arg3, arg5, arg6 = sub_142c89b90(arg2, rbx, var_50, arg6)
                        r15 = rax_31
                
                *(rbx + 0x5c) = 0
                
                if (r15 != 0)
                    return r15
            else
                if (*(rbx + 0x5c) != 0)
                    if (*(rbx + 0x14d) != 0)
                        goto label_142c696e4
                    
                    goto label_142c696ad
                
                if (r12.b != 0)
                    goto label_142c6969e
    
    if (*(arg2[0x87] + 0x68) != 0 && r13 != 0 && *(arg2 + 0x409) == 0)
        rbx[0xf] += var_50
        int64_t rax_45 = arg2[0x87]
        var_50 = r13
        rax_4, arg3 = (*(rax_45 + 0x68))(arg1, arg2, &var_50, &arg_8, var_78, var_70, var_68, 
            var_60, var_58, var_50)
        
        if (rax_4 != 0)
            return rax_4
        
        if (arg_8 != rax_4.b)
            rbx[0x29].d |= 1
        
        goto label_142c6929e
    
    if (r12.b != 0)
        rbx[0x29].d &= 0xfffffffe
    
    char rax_35
    
    if ((*(arg2[0x87] + 0x7c) & 0x30) == 0)
        rax_35, arg3 = j_sub_142c71c60(arg2, 0)
    
    if ((*(arg2[0x87] + 0x7c) & 0x30) == 0 && rax_35 == 0)
        goto label_142c6929e
    
    int32_t rax_36 = r14
    r14 -= 1
    var_58 = r14
    
    if (rax_36 == 0)
        goto label_142c6929e
    
    r12 = arg4
    rcx = 0
