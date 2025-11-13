// 函数: sub_1423f1a00
// 地址: 0x1423f1a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* r8_1 = *(arg2 + 0x38)
int32_t i = 0

if (r8_1 != 0)
    *(arg2 + 0x38) = 0
    sub_1423d84f0(arg1, arg2, *(r8_1 + 0x190))

sub_142430a60(arg2)
void* r9_1 = data_143f5b298
int64_t rax = *(r9_1 + 0xc38)
int64_t rcx_2 = rax + (sx.q(*(r9_1 + 0xc40)) << 3)
int64_t rbp_1

if (rax == rcx_2)
label_1423f1a7b:
    rax = sub_1423d6f90(r9_1, 0)
    r9_1 = data_143f5b298
    rbp_1 = rax
else
    while (true)
        rbp_1 = *rax
        
        if (*(rbp_1 + 0x278) == arg2)
            break
        
        rax += 8
        
        if (rax == rcx_2)
            goto label_1423f1a7b

if (*(rbp_1 + 0x228) s<= 0)
    return 

int64_t* r14_1 = nullptr

do
    void* rbx_1 = *(r14_1 + *(rbp_1 + 0x220))
    
    if (rbx_1 != 0 && *(rbx_1 + 0x140) == arg2)
        char** rax_1 = *(arg1 + 0xc38)
        int64_t rbx_2 = *(rbx_1 + 0x190)
        void* rcx_6 = &rax_1[sx.q(*(arg1 + 0xc40))]
        char* r8_3
        
        if (rax_1 == rcx_6)
        label_1423f1b0f:
            r8_3 = sub_1423d6f90(r9_1, 0)
        else
            while (true)
                r8_3 = *rax_1
                
                if (*(r8_3 + 0x278) == arg2)
                    break
                
                rax_1 = &rax_1[1]
                
                if (rax_1 == rcx_6)
                    goto label_1423f1b0f
        
        sub_1423d8550(r8_3, rbx_2)
        r9_1 = data_143f5b298
        i -= 1
        r14_1 -= 0x10
    
    i += 1
    r14_1 = &r14_1[2]
while (i s< *(rbp_1 + 0x228))
