// 函数: sub_142c7ee90
// 地址: 0x142c7ee90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg2
int64_t* r12 = arg2

if (arg2 != 0)
    while (true)
        int64_t r12_1 = *r12
        
        if (r12_1 != 0)
            char arg_8 = 0
            
            if (*r12_1 == 0x2a)
                r12_1 += 1
                arg_8 = 1
            
            int32_t rax_1
            rax_1, arg3 = gzprintf(&arg1[0xd3], &data_1434ccff0, r12_1, arg3)
            
            if (rax_1 != 0)
                return rax_1
            
            int32_t rsi_1 = 0
            uint64_t var_60[0x4]
            *(arg1 + 0x6d8) = *sub_142c59600(&var_60)
            void* rbp_1 = *arg1
            SOCKET r13_1 = arg1[0x47]
            int32_t rcx_7
            int32_t rbx_2
            
            while (true)
                int64_t rax_3
                int64_t r8_2
                rax_3, r8_2 = sub_142c8f090(&arg1[0xd3])
                
                if (rax_3 s<= 0)
                    sub_142c64760(rbp_1, "FTP response timeout", r8_2, arg3)
                    return 0x1c
                
                int64_t rbx_1 = 0x3e8
                
                if (rax_3 s< 0x3e8)
                    rbx_1 = rax_3
                
                if ((arg1[0xd3] == 0 || rsi_1 s>= 2) && sub_142c65270(arg1, 0) == 0)
                    int32_t rax_5
                    int64_t rdx
                    rax_5, rdx = sub_142c64080(r13_1, -1, -1, rbx_1)
                    
                    if (rax_5 == 0xffffffff)
                        sub_142c64760(rbp_1, "FTP response aborted due to select/poll error: %d", 
                            zx.q(WSAGetLastError()), arg3)
                        return 0x38
                    
                    if (rax_5 == 0)
                        int32_t rax_6
                        rax_6, arg3 = sub_142c6f450(arg1, rdx, arg3)
                        
                        if (rax_6 != 0)
                            return 0x2a
                        
                        continue
                
                int64_t* r14_1 = arg1[0xde]
                void* rbp_2 = *r14_1
                int64_t var_68
                int32_t arg_10
                int32_t rax_7
                int64_t r8_4
                rax_7, r8_4, arg3 =
                    FindVITargetTypeInstance(r13_1, &arg1[0xd3], &arg_10, &var_68, arg3)
                rcx_7 = rax_7
                *(rbp_2 + 0x4ef0) = arg_10
                rbx_2 = arg_10
                
                if (rbx_2 == 0x1a5)
                    arg3 = sub_142c64850(rbp_2, "We got a 421 - timeout!\n", r8_4, arg3)
                    rcx_7 = 0x1c
                    r14_1[0xea].d = 0
                else if (rcx_7 == 0)
                    if (var_68 != 0 || arg1[0xd3] == 0)
                        rsi_1 = 0
                    else
                        rsi_1 += 1
                    
                    if (rbx_2 == 0)
                        continue
                
                arg1[0xd7].b = 0
                break
            
            if (rcx_7 != 0)
                return rcx_7
            
            if (arg_8 == rcx_7.b && rbx_2 s>= 0x190)
                sub_142c64760(*arg1, "QUOT string not accepted: %s", r12_1, arg3)
                return 0x15
        
        r12 = arg_18[1]
        arg_18 = r12
        
        if (r12 == 0)
            break

return 0
