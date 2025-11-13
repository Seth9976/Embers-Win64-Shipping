// 函数: sub_141e83e30
// 地址: 0x141e83e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg2)

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
void* rcx = &arg1[7]
int64_t r10_1 = sx.q(arg1[9].d) - 1
int32_t rbp = 0

if (rax_1 != 0)
    rcx = rax_1

int32_t rbx = *(rcx + ((r9 & r10_1) << 2))

if (rbx != 0xffffffff)
    void* rdx = *arg1
    int64_t r8_1
    
    while (true)
        r8_1 = sx.q(rbx)
        int32_t* rax_5 = r8_1 << 6
        
        if (*(rax_5 + rdx) == r9.d)
            break
        
        rbx = *(rax_5 + rdx + 0x38)
        
        if (rbx == 0xffffffff)
            return 0
    
    int64_t r8_2 = r8_1 << 6
    void* rcx_1 = rcx + ((sx.q(*(r8_2 + rdx + 0x3c)) & r10_1) << 2)
    
    for (int32_t i = *rcx_1; i != 0xffffffff; i = *rcx_1)
        if (i == rbx)
            *rcx_1 = *(r8_2 + rdx + 0x38)
            break
        
        rcx_1 = rdx + 0x38 + (sx.q(i) << 6)
    
    void* rdi_2 = *arg1 + r8_2
    int64_t* rcx_3 = *(rdi_2 + 8)
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x28))(rcx_3)
        sub_141e895d0(*(rdi_2 + 8))
        int64_t* rcx_5 = *(rdi_2 + 8)
        
        if (rcx_5 != 0)
            (**rcx_5)(rcx_5, 1)
        
        *(rdi_2 + 8) = 0
    
    int64_t rcx_6 = *(rdi_2 + 0x18)
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    sub_1405c37b0(arg1, rbx, 1)
    rbp = 1

return zx.q(rbp)
