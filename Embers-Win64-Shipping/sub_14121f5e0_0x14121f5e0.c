// 函数: sub_14121f5e0
// 地址: 0x14121f5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*(arg1 + 0xa8))

if (r10.d s<= 0)
    return 

int32_t i = 0
int64_t r8_1 = 0
int32_t* rax = *(arg1 + 0xa0) + 0x1548

while (true)
    void* rcx = *(rax - 0x1540)
    
    if (rcx != 0 && *rax s>= 3 && *(rcx + 0x4c0) == 0 && *(rcx + 0x4b8) != 0)
        break
    
    r8_1 += 1
    rax = &rax[0x1490]
    
    if (r8_1 s>= r10)
        return 

if (r10.d s<= 0)
    return 

void* rdi_1 = nullptr

do
    int64_t rcx_1 = *(arg1 + 0xa0)
    rax = *(rdi_1 + rcx_1 + 8)
    void* rsi_1 = rdi_1 + rcx_1
    
    if (rax != 0 && *(rsi_1 + 0x1548) s>= 3 && rax[0x130].b == 0)
        void* rbp_1 = *(rax + 0x4b8)
        
        if (rbp_1 != 0)
            sub_141228f00(rbp_1, arg2, sx.q(i) * 0x5240 + rcx_1)
            sub_14121f120(rbp_1, arg2, rsi_1)
    
    i += 1
    rdi_1 += 0x5240
while (i s< *(arg1 + 0xa8))
