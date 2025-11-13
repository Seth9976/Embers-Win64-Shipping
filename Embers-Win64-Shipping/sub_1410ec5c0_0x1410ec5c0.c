// 函数: sub_1410ec5c0
// 地址: 0x1410ec5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 8)
int32_t rbp = rbx[2].d
int32_t r8 = rbp

if (rbp == rbp s/ 0x78 * 0x78)
    void* rax_2 = j_sub_140a82f30(0x3fc0)
    void* const rsi_1
    
    if (rax_2 == 0)
        rsi_1 = nullptr
    else
        rsi_1 = sub_1410e9790(rax_2)
    
    int64_t rdi_1 = sx.q(rbx[1].d)
    int32_t rax_4 = (rdi_1 + 1).d
    rbx[1].d = rax_4
    
    if (rax_4 s> *(rbx + 0xc))
        sub_140638870(rbx)
    
    *(*rbx + (rdi_1 << 3)) = rsi_1
    r8 = rbx[2].d

int32_t rcx_4 = r8 + 1
rbx[2].d = rcx_4
int64_t r8_1 = sx.q(rbp s/ 0x78)
int64_t rdx_9 = *rbx
int64_t r9 = zx.q(rbp s% 0x78) * 0x88

if (r9 != neg.q(*(rdx_9 + (r8_1 << 3))))
    sub_1410eace0(r9 + *(rdx_9 + (r8_1 << 3)), arg2)
    rcx_4 = rbx[2].d

void* result = zx.q((rcx_4 - 1) s% 0x78) * 0x88 + *(**(arg1 + 8) + (sx.q((rcx_4 - 1) s/ 0x78) << 3))
*(result + 0x7c) = *(arg1 + 0x18)
return result
