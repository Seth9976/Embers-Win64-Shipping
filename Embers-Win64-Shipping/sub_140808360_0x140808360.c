// 函数: sub_140808360
// 地址: 0x140808360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* rax_1 = arg1[8]
void* r10 = &arg1[7]
int64_t r11_1 = sx.q(arg1[9].d) - 1
int32_t rsi = 0

if (rax_1 != 0)
    r10 = rax_1

int32_t rbx = *(r10 + ((sx.q((arg2 u>> 0x20).d * 0x17 + arg2.d) & r11_1) << 2))

if (rbx != 0xffffffff)
    int64_t rdx = *arg1
    int64_t rcx
    
    while (true)
        rcx = sx.q(rbx)
        int64_t rax_9 = rcx * 0xc0
        
        if (*(rax_9 + rdx) == arg2)
            break
        
        rbx = *(rax_9 + rdx + 0xb0)
        
        if (rbx == 0xffffffff)
            return 0
    
    int64_t r8_2 = rcx * 0xc0
    void* r9_1 = r8_2 + rdx
    int64_t rax_12 = sx.q(*(r9_1 + 0xb4)) & r11_1
    void* rcx_1 = r10 + (rax_12 << 2)
    
    for (int32_t i = *(r10 + (rax_12 << 2)); i != 0xffffffff; i = *rcx_1)
        if (i == rbx)
            *rcx_1 = *(r9_1 + 0xb0)
            break
        
        rcx_1 = sx.q(i) * 0xc0 + 0xb0 + rdx
    
    rsi = 1
    void* rbp_2 = *arg1 + r8_2
    int64_t* rcx_5 = *(rbp_2 + 0x10)
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x30))(rcx_5)
        int64_t* rcx_6 = *(rbp_2 + 0x10)
        
        if (rcx_6 != 0)
            int64_t r8_3 = *rcx_6
            (*r8_3)(rcx_6, 1, r8_3)
    
    sub_140808630(arg1, rbx, 1)

return zx.q(rsi)
