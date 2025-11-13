// 函数: sub_1418aa5c0
// 地址: 0x1418aa5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg2)

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
void* r9 = &arg1[7]
int64_t r10_1 = sx.q(arg1[9].d) - 1
int32_t rsi = 0

if (rax_1 != 0)
    r9 = rax_1

int32_t rbx = *(r9 + ((r8 & r10_1) << 2))

if (rbx != 0xffffffff)
    int64_t rdx = *arg1
    int64_t rcx
    
    while (true)
        rcx = sx.q(rbx)
        int32_t* rax_5 = rcx * 0x60
        
        if (*(rax_5 + rdx) == r8.d)
            break
        
        rbx = *(rax_5 + rdx + 0x50)
        
        if (rbx == 0xffffffff)
            return 0
    
    int64_t r8_2 = rcx * 0x60
    int64_t rax_8 = sx.q(*(r8_2 + rdx + 0x54)) & r10_1
    void* rcx_1 = r9 + (rax_8 << 2)
    
    for (int32_t i = *(r9 + (rax_8 << 2)); i != 0xffffffff; i = *rcx_1)
        if (i == rbx)
            *rcx_1 = *(r8_2 + rdx + 0x50)
            break
        
        rcx_1 = sx.q(i) * 0x60 + 0x50 + rdx
    
    void* rcx_6 = *arg1 + r8_2
    
    if (*(rcx_6 + 0x10) != 0)
        void* rax_11 = *(rcx_6 + 0x20)
        void* rcx_7 = rcx_6 + 0x30
        
        if (rax_11 != 0)
            rcx_7 = rax_11
        
        (*(*rcx_7 + 0x10))(rcx_7)
    
    rsi = 1
    sub_140bb6940(arg1, rbx, 1)

return zx.q(rsi)
