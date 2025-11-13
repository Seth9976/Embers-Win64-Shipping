// 函数: sub_14093db30
// 地址: 0x14093db30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = arg2
int64_t rax

if (*(arg2 + 0x14) != 0)
    *(arg2 + 0x14) = 1
    rax.b = 1
else
    rax = sx.q(arg2[2].d)
    int32_t rcx = (rax + 1).d
    
    if (rcx u> arg2[1].d)
        *(arg2 + 0x14) = 1
        rax.b = 1
    else
        arg2[2].d = rcx
        *(rax + *arg2) = 0xc
        
        if (*(arg2 + 0x14) != 0)
            *(arg2 + 0x14) = 1
            rax.b = 1
        else
            rax = sx.q(arg2[2].d)
            int32_t rcx_2 = (rax + 1).d
            
            if (rcx_2 u> arg2[1].d)
                *(arg2 + 0x14) = 1
                rax.b = 1
            else
                arg2[2].d = rcx_2
                rax[*arg2] = 1
                rax = zx.q(*(arg2 + 0x14))

if (rax.b == 0)
    int64_t rcx_4 = sx.q(arg2[2].d)
    
    if ((rcx_4 + 4).d u<= arg2[1].d)
        *(rcx_4 + *r9) = *(arg1 + 0xf)
        *(sx.q(r9[2].d) + *r9 + 1) = *(arg1 + 0xe)
        *(sx.q(r9[2].d) + *r9 + 2) = *(arg1 + 0xd)
        *(sx.q(r9[2].d) + *r9 + 3) = *(arg1 + 0xc)
        int64_t rcx_9 = sx.q(r9[2].d)
        int32_t rax_7 = (rcx_9 + 4).d
        r9[2].d = rax_7
        
        if (*(r9 + 0x14) == 0 && rax_7 + 1 u<= r9[1].d)
            r9[2].d = rax_7 + 1
            *(rcx_9 + *r9 + 4) = 0x53
            
            if (*(r9 + 0x14) == 0)
                int64_t rax_10 = sx.q(r9[2].d)
                int32_t rcx_10 = (rax_10 + 1).d
                
                if (rcx_10 u<= r9[1].d)
                    r9[2].d = rcx_10
                    *(rax_10 + *r9) = 0x52
                    
                    if (*(r9 + 0x14) == 0)
                        int64_t rcx_12 = sx.q(r9[2].d)
                        
                        if ((rcx_12 + 8).d u<= r9[1].d)
                            *(rcx_12 + *r9) = (arg3 u>> 0x38).b
                            *(sx.q(r9[2].d) + *r9 + 1) = (arg3 u>> 0x30).b
                            *(sx.q(r9[2].d) + *r9 + 2) = (arg3 u>> 0x28).b
                            *(sx.q(r9[2].d) + *r9 + 3) = (arg3 u>> 0x20).b
                            *(sx.q(r9[2].d) + *r9 + 4) = (arg3 u>> 0x18).b
                            *(sx.q(r9[2].d) + *r9 + 5) = (arg3 u>> 0x10).b
                            *(sx.q(r9[2].d) + *r9 + 6) = (arg3 u>> 8).b
                            *(sx.q(r9[2].d) + *r9 + 7) = arg3.b
                            r9[2].d += 8
                            return sub_14093cf70(r9, arg1 + 0x50) __tailcall

*(r9 + 0x14) = 1
return sub_14093cf70(r9, arg1 + 0x50) __tailcall
