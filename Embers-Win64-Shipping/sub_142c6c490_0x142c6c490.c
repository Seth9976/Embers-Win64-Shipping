// 函数: sub_142c6c490
// 地址: 0x142c6c490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *arg1
int64_t r12 = 0
int64_t r14 = 1
int32_t rdx

if (arg2 == 0)
    if (*(arg1 + 0x3f6) != 0)
        rdx = 1
    
    if (*(arg1 + 0x3f6) == 0 || *(arg1 + 0x401) != 0)
        rdx = 0
else
    rdx = 2

int64_t var_28

if (rdx == 0)
    var_28 = *(rbp + 0x3c0)
else if (rdx == 1)
    var_28 = *(rbp + 0x3c0)
    
    if (*(rbp + 0x3d8) != 0)
        r14 = 2
        int64_t var_20_1 = *(rbp + 0x3c8)
else if (rdx == 2)
    if (*(rbp + 0x3d8) == 0)
        var_28 = *(rbp + 0x3c0)
    else
        var_28 = *(rbp + 0x3c8)

do
    for (int64_t* i = (&var_28)[r12]; i != 0; i = i[1])
        char* rax_4 = strchr(*i, 0x3a)
        
        if (rax_4 == 0)
            char* rax_12 = strchr(*i, 0x3b)
            
            if (rax_12 != 0)
                char rax_13 = rax_12[1]
                void* rbx_4 = &rax_12[1]
                
                if (rax_13 == 0)
                label_142c6c6a4:
                    
                    if (*(rbx_4 - 1) == 0x3b)
                        *(rbx_4 - 1) = 0x3a
                    label_142c6c6bb:
                        int32_t result
                        result, arg4 = sub_142c6c410(arg3, "%s\r\n", *i, arg4)
                        
                        if (result != 0)
                            return result
                else
                    while (isspace(zx.d(rax_13)) != 0)
                        rax_13 = *(rbx_4 + 1)
                        rbx_4 += 1
                        
                        if (rax_13 == 0)
                            goto label_142c6c6a4
                    
                    if (*rbx_4 == 0)
                        goto label_142c6c6a4
        else
            char rax_5 = rax_4[1]
            void* rbx_2 = &rax_4[1]
            
            if (rax_5 != 0)
                while (isspace(zx.d(rax_5)) != 0)
                    rax_5 = *(rbx_2 + 1)
                    rbx_2 += 1
                    
                    if (rax_5 == 0)
                        goto label_142c6c6c4
                
                if (*rbx_2 != 0)
                    int32_t rax_7
                    
                    if (arg1[0x92] != 0)
                        rax_7 = j_sub_142c704d0("Host:", *i, 5)
                    
                    if (arg1[0x92] == 0 || rax_7 == 0)
                        int32_t rax_8
                        
                        if (*(rbp + 0x438) == 3)
                            rax_8 = j_sub_142c704d0("Content-Type:", *i, 0xd)
                        
                        if (*(rbp + 0x438) != 3 || rax_8 == 0)
                            int32_t rax_9
                            
                            if (*(arg1 + 0x402) != 0)
                                rax_9 = j_sub_142c704d0("Content-Length", *i, 0xe)
                            
                            if (*(arg1 + 0x402) == 0 || rax_9 == 0)
                                int32_t rax_10
                                
                                if (arg1[0x95] != 0)
                                    rax_10 = j_sub_142c704d0("Connection", *i, 0xa)
                                
                                if (arg1[0x95] == 0 || rax_10 == 0)
                                    if (arg1[0x42].d != 0x14)
                                        goto label_142c6c6bb
                                    
                                    if (j_sub_142c704d0("Transfer-Encoding:", *i, 0x12) == 0)
                                        goto label_142c6c6bb
        
    label_142c6c6c4:
    
    r12 += 1
while (r12 s< r14)

return 0
