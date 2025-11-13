// 函数: sub_1420acbc0
// 地址: 0x1420acbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = *(*(arg3 + 0x20) + 0x20)
char rcx = (r12[0x50].d).b
int64_t r15

if ((rcx & 3) == 3 || (arg4 != 0 && (rcx & 1) == 0 && arg2.d f< *(arg3 + 0x28)))
    r15.b = 1
else
    r15.b = 0

int32_t i = 0
int128_t __saved_zmm7 = arg6
int128_t __saved_zmm8 = arg7
char result = 1
char* r14 = arg1 + 0x80

if (arg4 == 0)
    goto label_1420acc4b

if ((*r14 & 4) == 0 || r15.b != 0)
    result = 0
label_1420acc4b:
    
    if (r15.b == 0)
        goto label_1420acc54
    
    arg6 = *(arg3 + 0x28)
    arg7 = arg2
    
    if (not(arg2.d f!= 0f))
        arg7.d = arg7.d f- 9.99999975e-05f
    
    if ((*r14 & 2) == 0 || result == 0 || *(arg1 + 0x78) s<= 0)
        *(arg3 + 0x28) = arg2.d
    else
    label_1420accae:
        int32_t* rdi_1 = nullptr
        
        do
            int64_t r10_1 = *(arg1 + 0x70)
            int32_t zmm2 = *(rdi_1 + r10_1)
            
            if (r15.b != 0)
                if (not(zmm2 f<= arg7.d) && not(zmm2 f> arg6.d))
                label_1420accde:
                    int64_t r8 = *r12
                    result = (*(r8 + 0x668))(r12, *(r10_1 + sx.q(i) * 0xc + 4), r8, 
                        (*r14 u>> 3).b & 1, __saved_zmm8, __saved_zmm7, arg5)
            else if (not(zmm2 f< arg7.d) && not(zmm2 f>= arg6.d))
                goto label_1420accde
            
            i += 1
            rdi_1 = &rdi_1[3]
        while (i s< *(arg1 + 0x78))
        
        *(arg3 + 0x28) = arg2.d
else
label_1420acc54:
    arg7 = *(arg3 + 0x28)
    arg6 = arg2
    
    if (not(arg2.d f!= *(*(*(arg1 + 0x20) + 0x20) + 0x28)))
        arg6.d = arg6.d f+ 9.99999975e-05f
    
    r14 = arg1 + 0x80
    char result_1 = 0
    
    if ((*r14 & 1) != 0)
        result_1 = result
    
    result = result_1
    
    if (result != 0 && *(arg1 + 0x78) s> 0)
        goto label_1420accae
    
    *(arg3 + 0x28) = arg2.d

return result
