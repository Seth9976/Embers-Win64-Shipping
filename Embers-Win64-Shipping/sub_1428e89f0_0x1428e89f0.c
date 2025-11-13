// 函数: sub_1428e89f0
// 地址: 0x1428e89f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)

if (arg1 == 0)
    return 0

int32_t rbx_1 = 0

if (sub_142898c70(arg2) s<= 0)
    return 1

while (true)
    void* rax_2 = sub_142898ea0(arg2, rbx_1)
    char* r9_1 = *(rax_2 + 8)
    void* r8 = r9_1
    uint64_t rcx_2 = zx.q(*r9_1)
    
    while (rcx_2.b != 0)
        if (rcx_2.b u<= 0x3a && test_bit(0x400500000000000, rcx_2))
            if (*(r8 + 1) != 0)
                r9_1 = r8 + 1
            
            break
        
        rcx_2 = zx.q(*(r8 + 1))
        r8 += 1
    
    char* rdx_1 = &r9_1[1]
    int32_t rcx_3
    rcx_3.b = *r9_1 != 0x2b
    
    if (*r9_1 != 0x2b)
        rdx_1 = r9_1
    
    if (sub_1428e7190(arg1, rdx_1, arg3, *(rax_2 + 0x10), 0xffffffff, 0xffffffff, rcx_3 - 1) == 0)
        return 0
    
    rbx_1 += 1
    
    if (rbx_1 s>= sub_142898c70(arg2))
        return 1
