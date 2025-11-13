// 函数: ?FindVITargetTypeInstance@@YAPEBU_s_RTTIBaseClassDescriptor@@PEAXPEBU_s_RTTICompleteObjectLocator@@PEAUTypeDescriptor@@_J2_K@Z
// 地址: 0x142c8ed80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
int64_t* r12 = arg2[0xb]
int64_t rbp = 0
char* r13
r13.b = 1
int32_t r15 = 0
void* r14 = *r12
char* rax = *(r14 + 0xa80)
*arg3 = 0
*arg4 = 0
void* rdx = arg2[2]
char* rsi = rdx + rax
uint64_t rdi_1 = rsi - arg2[3]

if (rdx u< sx.q(*(r14 + 0x598)))
    while (r13.b != 0)
        if (r15 != 0)
            break
        
        int64_t rdx_1 = *arg2
        int64_t* var_68
        int64_t arg_10
        int64_t rax_3
        int64_t r8_1
        
        if (rdx_1 == 0)
            var_68 = &arg_10
            int32_t rax_4
            rax_4, r8_1 = sub_142c648f0(r12, arg1, rsi, sx.q(*(r14 + 0x598)) - arg2[2], var_68)
            r15 = rax_4
            
            if (rax_4 == 0x51)
                return 0
            
            if (rax_4 == 0)
                rax_3 = arg_10
                
                if (rax_3 s<= 0)
                    goto label_142c8effc
                
                r15 = 0
                goto label_142c8ee7d
            
            r13.b = 0
        else
            memcpy(rsi, rdx_1, (arg2[1]).d)
            int64_t rcx_1 = *arg2
            arg_10 = arg2[1]
            r8_1 = data_143ccb8a0(rcx_1)
            rax_3 = arg_10
            *arg2 = 0
            arg2[1] = 0
        label_142c8ee7d:
            
            if (rax_3 s<= 0)
            label_142c8effc:
                r13.b = 0
                r15 = 0x38
                arg5 = sub_142c64760(r14, "response reading failed", r8_1, arg5)
            else
                *(r14 + 0x108) += rax_3.d
                int64_t r8_3 = arg_10
                arg2[2] += r8_3
                
                if (r8_3 s> 0)
                    do
                        rdi_1 += 1
                        
                        if (*rsi == 0xa)
                            if (*(r14 + 0x5f0) != 0)
                                var_68 = r12
                                arg5 = sub_142c64600(r14, 1, arg2[3], rdi_1, arg5, var_68)
                            
                            int32_t rax_5
                            rax_5, arg5 = sub_142c645e0(r12, 2, arg2[3], rdi_1, arg5)
                            r15 = rax_5
                            
                            if (rax_5 != 0)
                                return rax_5
                            
                            if (arg2[0xd](r12, arg2[3], rdi_1, arg3, var_68) != 0)
                                int64_t rdx_5 = arg2[3]
                                void* rdi_3 = rsi - rdx_5
                                memmove(rax, rdx_5, rdi_3.d)
                                *(rdi_3 + rax) = 0
                                int64_t rdi_4 = arg_10
                                r13.b = 0
                                arg2[3] = &rsi[1]
                                *arg4 = arg2[2]
                                arg2[2] = 0
                                
                                if (rbp + 1 == rdi_4)
                                    goto label_142c8efeb
                                
                                rdi_1 = rdi_4 - (rbp + 1)
                                goto label_142c8efbc
                            
                            r8_3 = arg_10
                            arg2[3] = &rsi[1]
                            rdi_1 = 0
                        
                        rsi = &rsi[1]
                        rbp += 1
                    while (rbp s< r8_3)
                
                int32_t temp0_1
                int32_t temp1_1
                
                if (rdi_1 == r8_3)
                    temp0_1:temp1_1 = sx.q(*(r14 + 0x598))
                
                if (rdi_1 == r8_3 && r8_3 s> sx.q((temp1_1 - temp0_1) s>> 1))
                    arg5 = sub_142c64850(r14, 
                        "Excessive server response line length received, %zd bytes. Stripping\n", 
                        r8_3, arg5)
                    rdi_1 = 0x28
                label_142c8efc4:
                    arg2[1] = rdi_1
                    int64_t rax_16 = data_143ccb898(rdi_1)
                    *arg2 = rax_16
                    
                    if (rax_16 == 0)
                        return 0x1b
                    
                    memcpy(rax_16, arg2[3], (arg2[1]).d)
                    goto label_142c8efeb
                
                if (arg2[2] u<= sx.q(*(r14 + 0x598)) u>> 1)
                    rbp = 0
                else
                label_142c8efbc:
                    
                    if (rdi_1 != 0)
                        goto label_142c8efc4
                    
                label_142c8efeb:
                    rbp = 0
                    arg2[2] = 0
                    rsi = rax
                    arg2[3] = rax
                    rdi_1 = 0
        
        if (arg2[2] u>= sx.q(*(r14 + 0x598)))
            break
        
        arg1 = arg_8

arg2[4].b = 0
return r15
