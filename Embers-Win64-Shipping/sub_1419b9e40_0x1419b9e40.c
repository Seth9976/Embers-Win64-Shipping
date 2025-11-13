// 函数: sub_1419b9e40
// 地址: 0x1419b9e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x18)
int32_t rsi = 0

if (rdx s<= 0)
    *(arg1 + 0x20) += 1
    return 

int64_t* r14 = nullptr

do
    int64_t r9_1 = *(arg1 + 0x10)
    void* rcx = *(r14 + r9_1)
    void* r8_1 = r14 + r9_1
    
    if (rcx == 0 || *(rcx + 0xd0) != 1 || *(arg1 + 0x20) - *(rcx + 0xd4) u<= 0x1e)
        rsi += 1
        r14 = &r14[1]
    else
        int64_t* rax_3 = r9_1 + (sx.q(rdx - 1) << 3)
        
        if (r8_1 != rax_3)
            int64_t zmm1 = *r8_1
            *r8_1 = *rax_3
            *rax_3 = zmm1
        
        int64_t rcx_2 = sx.q(*(arg1 + 0x18))
        r9_1.b = 1
        int64_t rax_4 = *(arg1 + 0x10)
        int64_t* rbx_1 = *(rax_4 + (rcx_2 << 3) - 8)
        *(rax_4 + (rcx_2 << 3) - 8) = 0
        sub_1419aa710(arg1 + 0x10, *(arg1 + 0x18) - 1, 1, r9_1.b)
        
        if (rbx_1 != 0)
            rbx_1[0x1a].d -= 1
            
            if (rbx_1[0x1a].d == 1)
                sub_1405d16e0(rbx_1, nullptr)
                sub_14081d930(&rbx_1[1], nullptr)
                sub_1405d16e0(&rbx_1[2], nullptr)
                sub_141096260(&rbx_1[3], 0)
                sub_141096040(&rbx_1[0xd], 0)
    
    rdx = *(arg1 + 0x18)
while (rsi s< rdx)

*(arg1 + 0x20) += 1
