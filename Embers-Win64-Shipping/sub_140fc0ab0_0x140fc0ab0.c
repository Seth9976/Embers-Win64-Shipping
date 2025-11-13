// 函数: sub_140fc0ab0
// 地址: 0x140fc0ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg1[0xdc]
char rbp = 0
int64_t* var_60 = arg3
int32_t var_68 = 0

if (r15 == 0 || *(arg1 + 0x76e) == 0 || (*(arg1 + 0x76d) == 0 && *(arg4 + 0x19) == 1))
    sub_140dc1a00(arg1, arg2, var_60, arg4)
else
    int32_t rax_2 = (*(*arg1 + 0x268))()
    int64_t i = arg1[0xce]
    int32_t rbx_1
    int64_t* rdi_1
    
    if (i != 0)
        rdi_1 = arg1[0xcf]
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        int64_t* rdx = *r15
        int64_t* rbx_2 = rdx
        void* rax_5 = &rdx[sx.q(r15[1].d) * 2]
        
        if (rdx == rax_5)
        label_140fc0b62:
            rbx_1 = -1
        else
            while (*rbx_2 != i)
                rbx_2 = &rbx_2[2]
                
                if (rbx_2 == rax_5)
                    goto label_140fc0b62
            
            rbx_1 = ((rbx_2 - rdx) s>> 4).d
        
        rbp = 1
    else
        rdi_1 = var_60
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
            sub_140dc1a00(arg1, arg2, var_60, arg4)
        else
            if (rax_8 == 0)
                goto label_140fc0bf0
            
            if (rax_8 == 1)
                goto label_140fc0bf8
            
            sub_140dc1a00(arg1, arg2, var_60, arg4)
    else
        int32_t rdx_2
        uint128_t zmm0
        
        if (rax_8 == 2)
        label_140fc0bf0:
            rdx_2 = rbx_1 - rax_2
        label_140fc0c70:
            
            if (rdx_2 s< 0 || rdx_2 s>= r15[1].d)
                sub_140dc1a00(arg1, arg2, var_60, arg4)
            else
                (*(*arg1 + 0x2b8))(arg1, (sx.q(rdx_2) << 4) + *r15, arg4)
                __builtin_memset(arg2, 0, 0x2c)
                arg2[6].b = 1
                
                if (&var_60 != &arg2[2])
                    zmm0 = *(arg2 + 0x10)
                    *(arg2 + 0x10) = zx.o(0)
                    int64_t* rbx_5 = _mm_bsrli_si128(zmm0, 8).q
                    
                    if (rbx_5 != 0)
                        rbx_5[1].d -= 1
                        
                        if (rbx_5[1].d == 1)
                            int64_t r8_3 = *rbx_5
                            (*r8_3)(rbx_5, (zx.o(0)).d, r8_3)
                            int32_t temp3_1 = *(rbx_5 + 0xc)
                            *(rbx_5 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                int64_t r8_4 = *rbx_5
                                (*(r8_4 + 8))(rbx_5, 1, r8_4)
        else
            if (rax_8 == 3)
            label_140fc0bf8:
                rdx_2 = rbx_1 + rax_2
                
                if (rdx_2 s< 0 || rdx_2 s>= r15[1].d)
                    int32_t r8_1 = r15[1].d
                    
                    if (r8_1 s> 0)
                        zmm0.d = float.s(rax_2)
                        float zmm1 = 1f f/ zmm0.d
                        int32_t zmm2 = float.s(rbx_1 + 1) f* zmm1
                        int32_t zmm4_1 = float.s(r8_1) f* zmm1
                        zmm0.d = -0.5f f- (zmm2 f+ zmm2)
                        
                        if (neg.d(int.d(zmm0.d) s>> 1)
                                s< neg.d(int.d(-0.5f f- (zmm4_1 f+ zmm4_1)) s>> 1))
                            rdx_2 = r8_1 - 1
                
                goto label_140fc0c70
            
            sub_140dc1a00(arg1, arg2, var_60, arg4)

return arg2
