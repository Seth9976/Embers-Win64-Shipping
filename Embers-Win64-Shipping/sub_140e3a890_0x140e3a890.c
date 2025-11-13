// 函数: sub_140e3a890
// 地址: 0x140e3a890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = arg3
int64_t* rdi = arg2
struct _SETJMP_FLOAT128* rbx = arg1

if (arg1[0x358].d == 0 && *(arg1 + 0x3584) != 0)
    if (*(arg1 + 0x2b4) == 0)
        return 1
    
    if (*(arg1 + 0x2b8) != 0)
    label_140e3a984:
        
        if (*(rbx + 0x251c) == 0)
            int32_t rcx_6 = *(rbx + 0x1c8)
            
            if (rcx_6 == 0)
                int32_t i = *(rbx + 0x2508)
                int32_t* rcx_14 = rbx[0x357].q
                int32_t* rdx_2 = sx.q((*(rbx + 0x278) - *(rbx + 0x2b8)) << 3) + *(rbx + 0x2568)
                
                if (i s> 0)
                    do
                        i -= 1
                        *rcx_14 = *rdx_2
                        rcx_14 = &rcx_14[2]
                        int32_t rax_14 = rdx_2[1]
                        rdx_2 = &rdx_2[0x10]
                        rcx_14[-1] = rax_14
                    while (i s> 0)
                    
                    rcx_14 = rbx[0x357].q
                
                *rdi = rcx_14
            else if (rcx_6 == 1)
                sub_140e31df0(rbx)
                *rdi = rbx[0x357].q
            else if (rcx_6 == 2)
                sub_140e32600(rbx)
                *rdi = rbx[0x357].q
            else if (rcx_6 == 3)
                if ((*(rbx + 0x2b8) & 1) != 0)
                    *rdi = *(rbx + 0x3578)
                else
                    sub_140e32210(rbx)
                    *rdi = rbx[0x357].q
            else if (rcx_6 == 4)
                if ((*(rbx + 0x2b8) & (rcx_6 - 3).b) != 0)
                    *rdi = *(rbx + 0x3578)
                else
                    sub_140e32980(rbx)
                    *rdi = rbx[0x357].q
        else
            sub_140e3c630(rbx)
            *rdi = rbx[0x357].q
        
        *rsi = *(rbx + 0x2bc)
        *(rbx + 0x2b8) -= 1
        *(rbx + 0x2b4) -= 1
        return 0
    
    void var_38
    int32_t rax_2 = __intrinsic_setjmp(arg1, &var_38)
    
    if (rax_2 == 0)
        rbx = arg1
        int512_t zmm1
        
        if (*(rbx + 0x118) == rax_2)
            zmm1 = sub_140e3b250(rbx, arg4)
        else
            zmm1 = sub_140e40b90(rbx)
        
        int32_t rcx_4 = *(rbx + 0x278)
        
        if (*(rbx + 0x2b4) s<= rcx_4)
            if (*(rbx + 0x118) == 0)
                *(rbx + 0x24f4) = 0x10
                sub_140e3cbd0(rbx, 0x10, zmm1)
                sub_140e3cbd0(rbx, 0x10, zmm1)
                sub_140e41de0(rbx, zmm1)
                rcx_4 = *(rbx + 0x278)
            
            *(rbx + 0x3588) -= *(rbx + 0x368)
        
        rsi = arg3
        rdi = arg2
        *(rbx + 0x2b8) = rcx_4
        goto label_140e3a984

return 0xffffffff
