// 函数: sub_140d3e2f0
// 地址: 0x140d3e2f0
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
    void* rdx = *arg1
    int64_t r8_1
    
    while (true)
        r8_1 = sx.q(rbx)
        int32_t* rax_5 = r8_1 << 5
        
        if (*(rax_5 + rdx) == r9.d)
            break
        
        rbx = *(rax_5 + rdx + 0x18)
        
        if (rbx == 0xffffffff)
            return 0
    
    int64_t r8_2 = r8_1 << 5
    void* rcx_1 = rcx + ((sx.q(*(r8_2 + rdx + 0x1c)) & r10_1) << 2)
    
    for (int32_t i = *rcx_1; i != 0xffffffff; i = *rcx_1)
        if (i == rbx)
            *rcx_1 = *(r8_2 + rdx + 0x18)
            break
        
        rcx_1 = rdx + 0x18 + (sx.q(i) << 5)
    
    sub_140d3a1f0(*arg1 + r8_2)
    rsi = 1
    sub_1405c36f0(arg1, rbx, 1)

return zx.q(rsi)
