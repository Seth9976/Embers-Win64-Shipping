// 函数: sub_140941e40
// 地址: 0x140941e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
rdi.b = 0
int128_t* rsi = arg4

if (arg3 u> 0x20)
    char r10 = 0
    void* var_28 = arg2
    int32_t var_20_1 = arg3
    int32_t var_1c_1 = 0
    char var_18_1 = 0
    
    if (arg3 s>= 1)
        int32_t rcx = 1
        int32_t var_1c_2 = 1
        
        if (*arg2 == 0xc)
            char rax_1 = 0xff
            
            if (arg3 s<= 1)
                r10 = 1
                var_18_1 = 1
            else
                rax_1 = *(arg2 + 1)
                rcx = 2
                int32_t var_1c_3 = 2
            
            if ((*(arg1 + 0x10) & rax_1) != 0)
                uint32_t rdx = -1
                
                if (r10 == 0)
                    arg4 = zx.q(rcx + 4)
                
                if (r10 != 0 || arg4.d s> arg3)
                    r10 = 1
                    var_18_1 = 1
                else
                    char* rcx_2 = sx.q(rcx) + arg2
                    rcx = arg4.d
                    rdx = ((zx.d(rcx_2[1]) | zx.d(*rcx_2) << 8) << 8 | zx.d(rcx_2[2])) << 8
                        | zx.d(rcx_2[3])
                    int32_t var_1c_4 = rcx
                
                if (rdx == *(arg1 + 0xc))
                    arg4.b = 0
                    
                    if (r10 != 0 || rcx s>= arg3)
                    label_140941f41:
                        r10 = 1
                        rdx.b = 0
                        var_18_1 = 1
                    else
                        int64_t rax_6 = sx.q(rcx)
                        rcx += 1
                        int32_t var_1c_5 = rcx
                        arg4 = zx.q(*(rax_6 + arg2))
                        
                        if (rcx s>= arg3)
                            goto label_140941f41
                        
                        int64_t rax_7 = sx.q(rcx)
                        rcx += 1
                        int32_t var_1c_6 = rcx
                        rdx = zx.d(*(rax_7 + arg2))
                    
                    if (arg4.b == 0x53 && rdx.b == 0x52)
                        uint64_t rdx_6 = 0
                        
                        if (r10 != 0 || rcx + 8 s> arg3)
                            var_18_1 = 1
                        else
                            char* rcx_4 = sx.q(rcx) + arg2
                            int32_t var_1c_7 = rcx + 8
                            rdx_6 = ((((
                                ((zx.q(rcx_4[1]) | zx.q(*rcx_4) << 8) << 8 | zx.q(rcx_4[2])) << 8
                                | zx.q(rcx_4[3])) << 8 | zx.q(rcx_4[4])) << 8 | zx.q(rcx_4[5])) << 8
                                | zx.q(rcx_4[6])) << 8 | zx.q(rcx_4[7])
                        
                        if (rdx_6 == *(arg1 + 0x30))
                            int64_t var_38 = 0
                            int64_t var_30_1 = 0
                            sub_14093ce40(&var_28, &var_38)
                            rdi.b = var_18_1 == 0
                            
                            if (var_18_1 == 0)
                                *rsi = var_38.o

return zx.q(rdi.b)
