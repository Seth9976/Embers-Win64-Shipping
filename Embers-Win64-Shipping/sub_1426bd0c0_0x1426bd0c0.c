// 函数: sub_1426bd0c0
// 地址: 0x1426bd0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbp = zx.d(*(arg2 + 0x64))

if (rbp == 0)
    return 

void* i_1 = sub_1426b06a0(arg1, *(arg2 + 0x48))

if (i_1 == 0)
    return 

int64_t r9_1 = sx.q(*(arg1 + 0x118))

if (r9_1.d == 0)
    return 

uint64_t r8_1 = zx.q(*(arg1 + 0x260))
int64_t* rdx_1 = *(arg1 + 0x110)
int32_t rbx_1

if (rdx_1[r8_1 * 0xb + 1] == i_1)
    rbx_1 = r8_1.d
label_1426bd15f:
    
    if (rbx_1 != 0xffffffff)
        char rdi_1 = *(arg2 + 0x59)
        
        if (rbp == 3)
            rbp = zx.d(sub_1426b6270(arg1, arg2, zx.d(rdi_1))) + 1
        
        int32_t r15_1
        r15_1.b = rbp != 2
        char var_28_1 = 1
        sub_1426bcb00(arg1, *(arg2 + 0x48), rbx_1, arg2, zx.d(rdi_1), r15_1 + 1)
else
    for (void* i = *(i_1 + 0x48); i != 0; i = *(i + 0x48))
        i_1 = i
    
    rbx_1 = 0
    
    if (r9_1.d s> 0)
        int64_t rcx_1 = 0
        
        while (*rdx_1 != i_1)
            rbx_1 += 1
            rcx_1 += 1
            rdx_1 = &rdx_1[0xb]
            
            if (rcx_1 s>= r9_1)
                return 
        
        goto label_1426bd15f
