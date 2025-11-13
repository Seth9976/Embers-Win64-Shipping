// 函数: sub_14242bce0
// 地址: 0x14242bce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15_1 = sx.q(arg2) << 6
void* rbp_1 = *arg1 + r15_1
int64_t rax = 0
void* rdx = *(rbp_1 + 8)

if (0 == *(rdx + 8))
    *(rdx + 8) = 0
else
    rax = *(rdx + 8)

if (((rax u>> 0x1a).b & 1) == 0)
    data_14399e5e0
    sub_1405a6220(sub_140a242a0(), rbp_1 + 8)

int64_t* rcx_1 = *(rbp_1 + 8)
*(rbp_1 + 8) = 0

if (rcx_1 != 0)
    rcx_1[9].d -= 1
    
    if (rcx_1[9].d == 1)
        sub_140a2f6e0(rcx_1)

int64_t rdx_2 = *arg1
void* r8_2 = r15_1 + rdx_2
*((sx.q(*(r8_2 + 0x3a)) << 6) + rdx_2 + 0x38) = *(r15_1 + rdx_2 + 0x38)
*((sx.q(*(r8_2 + 0x38)) << 6) + *arg1 + 0x3a) = *(r8_2 + 0x3a)
*(r8_2 + 0x3a) = arg2.w
*(r8_2 + 0x38) = arg2.w
void* rdx_5 = *arg1
*(r15_1 + rdx_5 + 0x38) = 0
*(r15_1 + rdx_5 + 0x3a) = *(rdx_5 + 0x3a)
*((sx.q(*(rdx_5 + 0x3a)) << 6) + *arg1 + 0x38) = arg2.w
*(rdx_5 + 0x3a) = arg2.w
*(rbp_1 + 0x34) += 1

if (arg2 u< arg1[3].d)
    uint64_t rcx_8 = zx.q(*(rbp_1 + 0x36)) & zx.q(*(arg1 + 0x14))
    int64_t rax_9 = arg1[4]
    int32_t rax_10 = *(rax_9 + (rcx_8 << 2))
    
    if (rax_10 == arg2)
        *(rax_9 + (rcx_8 << 2)) = *(arg1[5] + (zx.q(arg2) << 2))
        return rbp_1 + 0x10
    
    if (rax_10 != 0xffffffff)
        int64_t r8_3 = arg1[5]
        
        while (true)
            uint64_t rdx_7 = zx.q(rax_10) << 2
            rax_10 = *(rdx_7 + r8_3)
            
            if (rax_10 == arg2)
                *(rdx_7 + r8_3) = *(r8_3 + (zx.q(arg2) << 2))
                break
            
            if (rax_10 == 0xffffffff)
                return rbp_1 + 0x10

return rbp_1 + 0x10
