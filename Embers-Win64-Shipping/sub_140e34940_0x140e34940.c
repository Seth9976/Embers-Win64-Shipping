// 函数: sub_140e34940
// 地址: 0x140e34940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rax = arg1[0x10].q
int64_t rbx = 1

if (arg2 u> 1)
    rbx = arg2

uint64_t count = (rbx + 3) & 0xfffffffffffffffc
void* result

if (rax == 0)
label_140e349ac:
    int32_t rcx_1 = 0x7f00
    
    if (((count + 0x7ff) & 0xfffffffffffff800) u>= 0x7f00)
        rcx_1 = (count + 0x7ff).d & 0xfffff800
    
    int64_t rdi_2 = sx.q(rcx_1)
    int64_t* rax_3 = sub_140a82f30(rdi_2 + 0x20, 0)
    
    if (rax_3 == 0)
        sub_140e43530(arg1, 0xffffff20)
        noreturn
    
    *rax_3 = arg1[0x10].q
    arg1[0x10].q = rax_3
    rax_3[2] = rdi_2
    result = &rax_3[3]
    rax_3[1] = count
else
    int64_t rcx
    int64_t rdx
    
    while (true)
        rcx = rax[1]
        rdx = rcx + count
        
        if (rdx u<= rax[2])
            break
        
        rax = *rax
        
        if (rax == 0)
            goto label_140e349ac
    
    rax[1] = rdx
    result = &rax[3] + rcx
    
    if (&rax[3] == neg.q(rcx))
        goto label_140e349ac

if (arg3 != 0)
    memset(result, 0, count)

return result
