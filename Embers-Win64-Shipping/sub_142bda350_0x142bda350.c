// 函数: sub_142bda350
// 地址: 0x142bda350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*arg1)
int32_t i_1 = arg4
int32_t r9 = 0
uint64_t rbp = zx.q(arg3)
int32_t* rdi

if (rax.d != 0)
    rdi = *(arg1 + 8) + ((rax * 3 - 3) << 3)
label_142bda3a4:
    
    if (r9 != 0)
        return r9
else
    int32_t* arg_8
    int32_t rax_1 = sub_142bd9f90(arg1, arg5, &arg_8)
    rdi = arg_8
    r9 = rax_1
    
    if (rax_1 != 0)
        goto label_142bda3a4

int32_t rax_3 = sub_142bd9f00(rdi, i_1, arg5)

if (rax_3 == 0)
    char* r9_1 = *(rdi + 8)
    *rdi = i_1
    char* r10_3 = (rbp u>> 3) + arg2
    int32_t r8_2 = 0x80 s>> (rbp.b & 7)
    int32_t rdx_2 = 0x80
    
    if (i_1 != 0)
        int32_t i
        
        do
            int32_t rcx_3 = zx.d(*r9_1) & not.d(rdx_2)
            
            if ((*r10_3 & r8_2.b) != 0)
                rcx_3 |= rdx_2
            
            r8_2 s>>= 1
            *r9_1 = rcx_3.b
            
            if (r8_2 == 0)
                r10_3 = &r10_3[1]
                r8_2 = 0x80
            
            rdx_2 s>>= 1
            
            if (rdx_2 == 0)
                r9_1 = &r9_1[1]
                rdx_2 = 0x80
            
            i = i_1
            i_1 -= 1
        while (i != 1)

return rax_3
