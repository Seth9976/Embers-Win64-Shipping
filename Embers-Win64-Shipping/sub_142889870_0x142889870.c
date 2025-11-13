// 函数: sub_142889870
// 地址: 0x142889870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x48)

if (sub_14288f970(arg1) == 0)
    return 1

int64_t r8 = arg2[1]

if (r8 u>= 2)
    char* rcx = *arg2
    void* r14_1 = &rcx[2]
    uint64_t rdx_2 = zx.q(zx.d(*rcx) << 8) | zx.q(rcx[1])
    *arg2 = r14_1
    arg2[1] = r8 - 2
    
    if ((rdx_2.b & 1) == 0)
        uint64_t rbp_1 = zx.q(rdx_2.d)
        
        if (r8 - 2 u>= rbp_1)
            *arg2 = r14_1 + rdx_2
            arg2[1] = r8 - 2 - rbp_1
            int32_t* rax_4 = sub_14288f970(arg1)
            *(arg1 + 0x748) = 0
            int32_t rsi = sub_142898c70(rax_4)
            int32_t var_30_1
            int32_t r9_1
            
            if (rbp_1 == 0)
            label_142889985:
                int64_t rdx_4 = arg2[1]
                
                if (rdx_4 == 0)
                    var_30_1 = 0x228
                    r9_1 = 0x161
                else
                    char* rax_7 = *arg2
                    uint64_t rcx_5 = zx.q(*rax_7)
                    *arg2 = &rax_7[1]
                    arg2[1] = rdx_4 - 1
                    
                    if (rdx_4 - 1 u>= rcx_5)
                        *arg2 = &rax_7[1 + rcx_5]
                        arg2[1] = rdx_4 - 1 - rcx_5
                        
                        if (rdx_4 - 1 == rcx_5)
                            return 1
                    
                    var_30_1 = 0x22f
                    r9_1 = 0x160
            else
                while (true)
                    if (rbp_1 u< 2)
                        var_30_1 = 0x20f
                        break
                    
                    rbp_1 -= 2
                    uint32_t rcx_3 = zx.d(*(r14_1 + 1))
                    int32_t rbx_1 = 0
                    uint32_t rdi_2 = zx.d(*r14_1) << 8
                    r14_1 += 2
                    
                    if (rsi s> 0)
                        do
                            void* rax_6 = sub_142898ea0(rax_4, rbx_1)
                            
                            if (*(rax_6 + 8) == (rdi_2 | rcx_3))
                                *(arg1 + 0x748) = rax_6
                                rsi = rbx_1
                                break
                            
                            rbx_1 += 1
                        while (rbx_1 s< rsi)
                    
                    if (rbp_1 == 0)
                        goto label_142889985
                
                r9_1 = 0x161
            
            sub_142856580(arg1, 0x32, 0x1d1, r9_1, "ssl\statem\extensions_srvr.c", var_30_1)
            return 0

sub_142856580(arg1, 0x32, 0x1d1, 0x161, "ssl\statem\extensions_srvr.c", 0x203)
return 0
