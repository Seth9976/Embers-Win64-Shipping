// 函数: sub_14195aa70
// 地址: 0x14195aa70
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
        int64_t rax_4 = rcx * 3
        
        if (*(rdx + (rax_4 << 3)) == r8.d)
            break
        
        rbx = *(rdx + (rax_4 << 3) + 0x10)
        
        if (rbx == 0xffffffff)
            return 0
    
    int64_t r11_1 = rcx * 0x18
    int64_t rax_8 = sx.q(*(r11_1 + rdx + 0x14)) & r10_1
    void* rcx_1 = r9 + (rax_8 << 2)
    int32_t i = *(r9 + (rax_8 << 2))
    
    while (i != 0xffffffff)
        if (i == rbx)
            *rcx_1 = *(r11_1 + rdx + 0x10)
            break
        
        int64_t i_1 = sx.q(i)
        int64_t rcx_3 = i_1 + ((i_1 + 1) << 1)
        i = *(rdx + (rcx_3 << 3))
        rcx_1 = rdx + (rcx_3 << 3)
    
    rsi = 1
    int64_t* rcx_4 = *(r11_1 + *arg1 + 8)
    
    if (rcx_4 != 0)
        rcx_4[1].d -= 1
        
        if (rcx_4[1].d == 1)
            int64_t r8_2 = *rcx_4
            (*r8_2)(rcx_4, 1, r8_2)
    
    sub_1405c3640(arg1, rbx, 1)

return zx.q(rsi)
