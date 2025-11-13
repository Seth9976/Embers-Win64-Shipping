// 函数: sub_141d9ed50
// 地址: 0x141d9ed50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi
int64_t* var_8 = rdi
void* r10 = *(arg1 + 8)
*(r10 + 0x4c)
int64_t* rbx_2

if (*(r10 + 0x20) == *(r10 + 0x4c))
label_141d9edb9:
    rbx_2 = nullptr
    rdi.b = 0
else
    void* r8_1 = *(r10 + 0x58)
    void* r9_1 = r10 + 0x50
    int64_t r11_1 = sx.q(*(arg1 + 0x170))
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t rax_2 = *(r9_1 + (((sx.q(*(r10 + 0x60)) - 1) & r11_1) << 2))
    
    if (rax_2 == 0xffffffff)
        goto label_141d9edb9
    
    int64_t rdx_4 = *(r10 + 0x18)
    int64_t rbx_1
    
    while (true)
        rbx_1 = sx.q(rax_2)
        int64_t rcx_1 = rbx_1 << 5
        
        if (*(rcx_1 + rdx_4) == r11_1.d)
            break
        
        rax_2 = *(rcx_1 + rdx_4 + 0x18)
        
        if (rax_2 == 0xffffffff)
            goto label_141d9edb9
    
    if (rax_2 == 0xffffffff)
        goto label_141d9edb9
    
    int64_t rbx_3 = rbx_1 << 5
    void* rbx_4 = rbx_3 + rdx_4
    
    if (rbx_3 == neg.q(rdx_4))
        goto label_141d9edb9
    
    rdi = *(rbx_4 + 8)
    rbx_2 = *(rbx_4 + 0x10)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    if (rdi == 0)
        rdi.b = 0
    else
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        rdi[2] = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
        sub_14081d8c0(arg1 + 0xe0, rdi)
        rdi.b = 1

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        int64_t rdx_5 = *rbx_2
        (*rdx_5)(rbx_2, rdx_5)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_2 = *rbx_2
            (*(r8_2 + 8))(rbx_2, 1, r8_2)

return zx.q(rdi.b)
