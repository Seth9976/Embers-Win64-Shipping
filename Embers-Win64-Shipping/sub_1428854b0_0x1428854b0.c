// 函数: sub_1428854b0
// 地址: 0x1428854b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r12 = 1
int32_t rsi = arg2
char* _Str2 = arg1

if (arg1 != 0)
    int64_t i = 0
    int32_t r15_1 = 0
    
    if (arg2 != 0xffffffff)
        char rax_1 = *arg1
        
        if (rax_1 == 0x2b)
            _Str2 = &_Str2[1]
            rsi -= 1
        else if (rax_1 == 0x2d)
            r12 = 0
            r15_1 = 1
            _Str2 = &_Str2[1]
            rsi -= 1
    
    int64_t* rbx_1 = *(arg3 + 0x98)
    
    if (*(arg3 + 0xa0) u> 0)
        do
            if (((*(rbx_1 + 0xc)).b & (*arg3).b & 0xc) != 0)
                bool cond:0_1
                
                if (rsi == 0xffffffff)
                    void* rax_4 = *rbx_1
                    void* r8_1 = _Str2 - rax_4
                    uint32_t j
                    uint32_t rdx
                    
                    do
                        rdx = zx.d(*rax_4)
                        j = zx.d(*(rax_4 + r8_1))
                        
                        if (rdx != j)
                            break
                        
                        rax_4 += 1
                    while (j != 0)
                    
                    cond:0_1 = rdx - j == 0
                    goto label_14288556d
                
                if (rbx_1[1].d == rsi)
                    cond:0_1 = _strnicmp(*rbx_1, _Str2, sx.q(rsi)) == 0
                label_14288556d:
                    
                    if (cond:0_1)
                        int32_t* rax_7 = *(arg3 + 0x28)
                        int32_t rcx_1 = rbx_1[2].d
                        
                        if (rax_7 != 0)
                            int32_t rdx_3 = *(rbx_1 + 0xc)
                            
                            if ((rdx_3.b & 1) == 0)
                                r15_1 = r12
                            
                            int32_t rdx_4 = rdx_3 & 0xf00
                            
                            if (rdx_4 == 0)
                                goto label_1428855db
                            
                            if (rdx_4 == 0x100)
                                rax_7 = *(arg3 + 0x78)
                            label_1428855db:
                                int32_t rdx_5 = *rax_7
                                
                                if (r15_1 != 0)
                                    *rax_7 = rdx_5 | rcx_1
                                    return 1
                                
                                *rax_7 = not.d(rcx_1) & rdx_5
                            else if (rdx_4 == 0x200)
                                rax_7 = *(arg3 + 0x80)
                                goto label_1428855db
                        
                        return 1
            
            i += 1
            rbx_1 = &rbx_1[3]
        while (i u< *(arg3 + 0xa0))

return 0
