// 函数: sub_14270b120
// 地址: 0x14270b120
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
        int64_t* rax_8 = rcx * 0x38
        
        if (*(rax_8 + rdx) == arg2)
            break
        
        rbx = *(rax_8 + rdx + 0x30)
        
        if (rbx == 0xffffffff)
            return 0
    
    void* r9_1 = rcx * 0x38
    int64_t rax_11 = sx.q(*(r9_1 + rdx + 0x34)) & r11_1
    void* rcx_1 = r10 + (rax_11 << 2)
    
    for (int32_t i = *(r10 + (rax_11 << 2)); i != 0xffffffff; i = *rcx_1)
        if (i == rbx)
            *rcx_1 = *(r9_1 + rdx + 0x30)
            break
        
        rcx_1 = sx.q(i) * 0x38 + 0x30 + rdx
    
    int64_t rcx_4 = *(r9_1 + *arg1 + 0x10)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    rsi = 1
    sub_140afe9e0(arg1, rbx, 1)

return zx.q(rsi)
