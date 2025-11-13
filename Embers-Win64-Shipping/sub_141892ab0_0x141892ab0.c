// 函数: sub_141892ab0
// 地址: 0x141892ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg2)

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
void* rcx = &arg1[7]
int64_t r10_1 = sx.q(arg1[9].d) - 1
int32_t rsi = 0

if (rax_1 != 0)
    rcx = rax_1

int32_t rbx = *(rcx + ((r9 & r10_1) << 2))

if (rbx != 0xffffffff)
    void* r8_1 = *arg1
    int64_t rdx
    
    while (true)
        rdx = sx.q(rbx)
        int32_t* rax_5 = rdx << 5
        
        if (*(rax_5 + r8_1) == r9.d)
            break
        
        rbx = *(rax_5 + r8_1 + 0x18)
        
        if (rbx == 0xffffffff)
            return 0
    
    int64_t rdx_1 = rdx << 5
    void* rcx_1 = rcx + ((sx.q(*(rdx_1 + r8_1 + 0x1c)) & r10_1) << 2)
    
    for (int32_t i = *rcx_1; i != 0xffffffff; i = *rcx_1)
        if (i == rbx)
            *rcx_1 = *(rdx_1 + r8_1 + 0x18)
            break
        
        rcx_1 = r8_1 + 0x18 + (sx.q(i) << 5)
    
    int64_t rcx_3 = *(rdx_1 + *arg1 + 8)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    rsi = 1
    sub_1405c36f0(arg1, rbx, 1)

return zx.q(rsi)
