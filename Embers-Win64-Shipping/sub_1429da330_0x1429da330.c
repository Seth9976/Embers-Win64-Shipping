// 函数: sub_1429da330
// 地址: 0x1429da330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
uint64_t result = 0
int64_t r12 = arg4
int32_t r15 = arg3
int64_t r14 = arg2
int64_t* rbx = arg1
int32_t result_1 = 0
int32_t var_a4 = 0

if (arg1[0x56].d != 0 || arg2 != 0 || arg3 != 0)
    if (sub_1429dade0(arg1, arg2, arg3, &result_1) s> 0)
        int32_t r13_1 = rbx[0x1d].d
        int32_t rdi_1 = *(rbx + 0xec)
        int32_t result_3 =
            sub_1429daf40(rbx[0x57], rbx[0x60].d, rbx + 0xe4, rbx[0x21], arg5, rbx[0x22])
        result_1 = result_3
        int32_t result_2 = result_3
        
        if (result_3 == 5)
            if (rbx[0x1e].d == 0)
                result_2 = 0
            
            result_1 = result_2
        
        int32_t rax_4 = *(rbx + 0xf4)
        
        if (rax_4 == 0)
            if (rbx[0x1e].d == rax_4)
                result_2 = 5
            
            result_1 = result_2
        
        int32_t rcx_1 = *(rbx + 0xec)
        int32_t r13_2
        
        if (rcx_1 != rdi_1 || rbx[0x1d].d != r13_1)
            r13_2 = 1
        else
            r13_2 = var_a4
        
        if (result_2 == 0 && rax_4 == 0)
            int32_t var_68 = rbx[0x1d].d
            int32_t var_64_1 = rcx_1
            int64_t var_60_1 = 9
            int32_t var_58_1 = rbx[0x1b].d
            int32_t var_54_1 = rbx[1].d & 0x20000
            
            if (rbx[0x1f].d == result_2 && (rbx[1].d & 0x10000) != 0)
                *(rbx + 0xfc) = 0x403
                rbx[0x20] = 4
            
            int32_t result_4 = sub_1429de360(&rbx[0x35], &var_68)
            result_1 = result_4
            result_2 = result_4
            
            if (result_4 == 0)
                *(rbx + 0xf4) = 1
        
        if (*(rbx + 0xf4) != 0)
            *(rbx[0x35] + 0x3840) = rbx[0x21]
            *(rbx[0x35] + 0x3848) = rbx[0x22]
        
        if (result_2 != 0)
            result = zx.q(result_2)
        else
            void* rdi_2 = rbx[0x35]
            
            if (r13_2 == 0)
            label_1429da876:
                *(rdi_2 + 0x36e8) = *(rbx + 0x2b0)
                arg5.o = *(rbx + 0x2c0)
                *(rdi_2 + 0x36f8) = arg5.o
                *(rdi_2 + 0x3708) = *(rbx + 0x2d0)
                arg5.o = *(rbx + 0x2e0)
                *(rdi_2 + 0x3718) = arg5.o
                *(rdi_2 + 0x3728) = *(rbx + 0x2f0)
                arg5.o = *(rbx + 0x300)
                *(rdi_2 + 0x3738) = arg5.o
                *(rdi_2 + 0x3748) = *(rbx + 0x310)
                arg5.o = zx.o(rbx[0x64])
                *(rdi_2 + 0x3758) = (arg5.o).q
                rbx[0x55] = r12
                
                if (sub_1429de590(rdi_2, zx.q(r15), r14, sx.q(arg6)) != 0)
                    result_2 = *(rdi_2 + 0x12c0)
                    
                    if (result_2 != 0)
                        void* rax_26 = rdi_2 + 0x12c8
                        
                        if (*(rdi_2 + 0x12c4) == 0)
                            rax_26 = nullptr
                        
                        *rbx = rax_26
                
                *(rbx + 0x2b4) = 0
                result = zx.q(result_2)
            else
                int32_t* rcx_5 = rdi_2 + 0x12c0
                rcx_5[0x1d8] = rbx[0x1d].d
                rcx_5[0x1d9] = *(rbx + 0xec)
                int32_t rax_13 = rcx_5[0x2ed]
                int32_t rax_14
                int64_t r9_2
                rax_14, r9_2 = __intrinsic_setjmp(rdi_2 + 0x1320, &var_d8)
                
                if (rax_14 == 0)
                    *(rdi_2 + 0x1318) = 1
                    
                    if (rcx_5[0x1d8] s<= 0)
                        rcx_5[0x1d8] = r13_1
                        r9_2 = sub_1429da010(rcx_5, 7, "Invalid frame width", r9_2)
                    
                    if (rcx_5[0x1d9] s<= 0)
                        rcx_5[0x1d9] = rdi_1
                        sub_1429da010(rcx_5, 7, "Invalid frame height", r9_2)
                    
                    int32_t rax_19
                    int64_t r9_3
                    rax_19, r9_3 = sub_1429dd9c0(rcx_5, rcx_5[0x1d8], rcx_5[0x1d9])
                    
                    if (rax_19 != 0)
                        sub_1429da010(rcx_5, 2, "Failed to allocate frame buffers", r9_3)
                    
                    int32_t i = 0
                    int64_t rcx_12 = sx.q(rcx_5[0x275]) * 0x12
                    *(rdi_2 + 0xde0) = *(rcx_5 + (rcx_12 << 3) + 0x780)
                    arg5.o = *(rcx_5 + (rcx_12 << 3) + 0x790)
                    *(rdi_2 + 0xdf0) = arg5.o
                    *(rdi_2 + 0xe00) = *(rcx_5 + (rcx_12 << 3) + 0x7a0)
                    arg5.o = *(rcx_5 + (rcx_12 << 3) + 0x7b0)
                    *(rdi_2 + 0xe10) = arg5.o
                    *(rdi_2 + 0xe20) = *(rcx_5 + (rcx_12 << 3) + 0x7c0)
                    arg5.o = *(rcx_5 + (rcx_12 << 3) + 0x7d0)
                    *(rdi_2 + 0xe30) = arg5.o
                    *(rdi_2 + 0xe40) = *(rcx_5 + (rcx_12 << 3) + 0x7e0)
                    arg5.o = *(rcx_5 + (rcx_12 << 3) + 0x7f0)
                    *(rdi_2 + 0xe50) = arg5.o
                    *(rdi_2 + 0xe60) = *(rcx_5 + (rcx_12 << 3) + 0x800)
                    int64_t rcx_14 = sx.q(rcx_5[0x274]) * 0x12
                    *(rdi_2 + 0xe70) = *(rcx_5 + (rcx_14 << 3) + 0x780)
                    arg5.o = *(rcx_5 + (rcx_14 << 3) + 0x790)
                    *(rdi_2 + 0xe80) = arg5.o
                    *(rdi_2 + 0xe90) = *(rcx_5 + (rcx_14 << 3) + 0x7a0)
                    arg5.o = *(rcx_5 + (rcx_14 << 3) + 0x7b0)
                    *(rdi_2 + 0xea0) = arg5.o
                    *(rdi_2 + 0xeb0) = *(rcx_5 + (rcx_14 << 3) + 0x7c0)
                    arg5.o = *(rcx_5 + (rcx_14 << 3) + 0x7d0)
                    *(rdi_2 + 0xec0) = arg5.o
                    *(rdi_2 + 0xed0) = *(rcx_5 + (rcx_14 << 3) + 0x7e0)
                    arg5.o = *(rcx_5 + (rcx_14 << 3) + 0x7f0)
                    *(rdi_2 + 0xee0) = arg5.o
                    *(rdi_2 + 0xef0) = *(rcx_5 + (rcx_14 << 3) + 0x800)
                    
                    if (*(rdi_2 + 0x3770) s> 0)
                        int64_t r14_1 = 0
                        
                        do
                            int64_t rax_23 = *(rdi_2 + 0x37f0)
                            int64_t rcx_16 = sx.q(rcx_5[0x274]) * 0x12
                            *(r14_1 + rax_23 + 0xe70) = *(rcx_5 + (rcx_16 << 3) + 0x780)
                            arg5.o = *(rcx_5 + (rcx_16 << 3) + 0x790)
                            *(r14_1 + rax_23 + 0xe80) = arg5.o
                            *(r14_1 + rax_23 + 0xe90) = *(rcx_5 + (rcx_16 << 3) + 0x7a0)
                            arg5.o = *(rcx_5 + (rcx_16 << 3) + 0x7b0)
                            *(r14_1 + rax_23 + 0xea0) = arg5.o
                            *(r14_1 + rax_23 + 0xeb0) = *(rcx_5 + (rcx_16 << 3) + 0x7c0)
                            arg5.o = *(rcx_5 + (rcx_16 << 3) + 0x7d0)
                            *(r14_1 + rax_23 + 0xec0) = arg5.o
                            *(r14_1 + rax_23 + 0xed0) = *(rcx_5 + (rcx_16 << 3) + 0x7e0)
                            arg5.o = *(rcx_5 + (rcx_16 << 3) + 0x7f0)
                            *(r14_1 + rax_23 + 0xee0) = arg5.o
                            *(r14_1 + rax_23 + 0xef0) = *(rcx_5 + (rcx_16 << 3) + 0x800)
                            sub_1429dd7f0(sx.q(i) * 0x12a0 + *(rdi_2 + 0x37f0))
                            i += 1
                            r14_1 += 0x12a0
                        while (i s< *(rdi_2 + 0x3770))
                    
                    sub_1429dd7f0(rdi_2)
                    
                    if (*(rdi_2 + 0x3760) != 0)
                        sub_1429e0260(rdi_2, rcx_5[0x1d8], rax_13)
                    
                    r12 = arg4
                    result_2 = result_1
                    rbx = arg1
                    r14 = arg2
                    r15 = arg3
                    *(rdi_2 + 0x1318) = 0
                    *(rdi_2 + 0x1c80) = 0
                    goto label_1429da876
                
                *(rdi_2 + 0x1318) = 0
                arg1[0x1d] = 0
                result = 0xffffffff
    else
        result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_d8)
return result
