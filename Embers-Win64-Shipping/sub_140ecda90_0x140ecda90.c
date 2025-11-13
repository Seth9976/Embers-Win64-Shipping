// 函数: sub_140ecda90
// 地址: 0x140ecda90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg1[0xdc]
char rbp = 0

if (r14 == 0 || *(arg1 + 0x76e) == 0 || (*(arg1 + 0x76d) == 0 && *(arg4 + 0x19) == 1))
    sub_140dc1a00(arg1, arg2, arg3, arg4)
else
    int32_t rax_2 = (*(*arg1 + 0x268))()
    int64_t i = arg1[0xce]
    int32_t rbx_1
    int64_t* rdi_1
    
    if (i != 0)
        rdi_1 = arg1[0xcf]
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int64_t* rdx = *r14
        int64_t* rbx_2 = rdx
        void* rax_5 = &rdx[sx.q(r14[1].d) * 2]
        
        if (rdx == rax_5)
        label_140ecdb42:
            rbx_1 = -1
        else
            while (*rbx_2 != i)
                rbx_2 = &rbx_2[2]
                
                if (rbx_2 == rax_5)
                    goto label_140ecdb42
            
            rbx_1 = ((rbx_2 - rdx) s>> 4).d
        
        rbp = 1
    else
        rdi_1 = 0.q
        rbx_1 = 0
    
    if ((rbp & 1) != 0 && rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp1_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    int32_t rcx_2 = arg1[0x9b].d
    char rax_8 = *(arg4 + 0x18)
    
    if (rcx_2 != 1)
        if (rcx_2 != 0)
            sub_140dc1a00(arg1, arg2, arg3, arg4)
        else
            if (rax_8 == 0)
                goto label_140ecdbd6
            
            if (rax_8 == 1)
                goto label_140ecdbde
            
            sub_140dc1a00(arg1, arg2, arg3, arg4)
    else
        int32_t rdx_2
        
        if (rax_8 == 2)
        label_140ecdbd6:
            rdx_2 = rbx_1 - rax_2
        label_140ecdc56:
            
            if (rdx_2 s< 0 || rdx_2 s>= r14[1].d)
                sub_140dc1a00(arg1, arg2, arg3, arg4)
            else
                (*(*arg1 + 0x2b8))(arg1, (sx.q(rdx_2) << 4) + *r14, arg4)
                int128_t var_48 = zx.o(0)
                sub_140eb9b00(arg2, &var_48, arg5)
        else
            if (rax_8 == 3)
            label_140ecdbde:
                rdx_2 = rbx_1 + rax_2
                
                if (rdx_2 s< 0 || rdx_2 s>= r14[1].d)
                    int32_t r8_1 = r14[1].d
                    
                    if (r8_1 s> 0)
                        float zmm2 = 1f f/ float.s(rax_2)
                        arg5.d = float.s(r8_1)
                        int32_t zmm3 = float.s(rbx_1 + 1) f* zmm2
                        arg5.d = arg5.d f* zmm2
                        arg5.d = arg5.d f+ arg5.d
                        
                        if (neg.d(int.d(-0.5f f- (zmm3 f+ zmm3)) s>> 1)
                                s< neg.d(int.d(-0.5f f- arg5.d) s>> 1))
                            rdx_2 = r8_1 - 1
                
                goto label_140ecdc56
            
            sub_140dc1a00(arg1, arg2, arg3, arg4)

return arg2
