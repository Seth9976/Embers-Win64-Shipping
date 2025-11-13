// 函数: sub_141d512b0
// 地址: 0x141d512b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)
int32_t rbx = 0
int32_t arg_18 = 0
int64_t var_28
char rdi

if (rcx == 0)
label_141d513a9:
    rdi = 0
else
    int64_t* rax_2 = (*(*rcx + 0x10))(rcx)
    int64_t r9_1 = *rax_2
    void* rax_3 = (*(r9_1 + 0x28))(rax_2, &var_28, zx.q(arg3), r9_1)
    
    while (true)
        if (rbx s< 0 || rbx s>= *(rax_3 + 8))
            rbx = 1
            goto label_141d513a9
        
        char* rcx_4 = (sx.q(rbx) << 4) + *rax_3
        int32_t arg_c = arg2.d
        char arg_8 = 1
        char rax_4 = *rcx_4
        int32_t zmm0
        
        if (rax_4 == 2)
        label_141d51352:
            char rdx_2 = rcx_4[8]
            void* rax_6 = &rcx_4[8]
            int32_t arg_24 = arg2.d
            char arg_20 = 1
            
            if (rdx_2 == 2)
            label_141d5139a:
                rdi = 1
                rbx = 1
                break
            
            zmm0 = *(rax_6 + 4)
            
            if (zmm0 f> arg2.d || (not(arg2.d f> zmm0) && rdx_2 == 1))
                goto label_141d5138d
            
            if (rdx_2 == 1)
                rax_6 = &arg_20
            label_141d5138d:
                
                if (*(rcx_4 + 0xc) f== *(rax_6 + 4))
                    goto label_141d5139a
        else
            zmm0 = *(rcx_4 + 4)
            char* rax_5
            
            if (not(zmm0 f>= arg2.d))
                rax_5 = rcx_4
            label_141d5134c:
                
                if (not(zmm0 f!= *(rax_5 + 4)))
                    goto label_141d51352
            else if (arg2.d f< zmm0)
                if (rax_4 == 1)
                    rax_5 = &arg_8
                    goto label_141d5134c
            else if (rax_4 == 1)
                rax_5 = rcx_4
                goto label_141d5134c
        rbx += 1
        continue

if ((rbx.b & 1) != 0)
    int64_t rcx_5 = var_28
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

return zx.q(rdi)
