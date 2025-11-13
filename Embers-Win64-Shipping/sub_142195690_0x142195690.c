// 函数: sub_142195690
// 地址: 0x142195690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x433) |= 4
*(arg1 + 0x620) = *(arg1 + 0x1c0)
*(arg1 + 0x630) = *(arg1 + 0x1d0)
*(arg1 + 0x640) = *(arg1 + 0x1e0)
*(arg1 + 0x5a8) = 0

if (*(arg1 + 0x5ac) s<= 0xffffffff)
    sub_140888ba0(arg1 + 0x5a0, 0)

int64_t rsi = sx.q(*(arg1 + 0x448))

if (rsi.d != 0)
    int32_t rax_1 = *(arg1 + 0x5a8)
    int32_t rdx_1 = rax_1 + rsi.d
    
    if (rdx_1 s> *(arg1 + 0x5ac))
        sub_140888ba0(arg1 + 0x5a0, rdx_1)
        rax_1 = *(arg1 + 0x5a8)
    
    memcpy((sx.q(rax_1) << 7) + *(arg1 + 0x5a0), *(arg1 + 0x440), (rsi << 7).d)
    *(arg1 + 0x5a8) += rsi.d

int32_t rax_2 = *(arg1 + 0x118)
uint128_t zmm1 = zx.o(*(arg1 + 0x110))
*(arg1 + 0x5d0) = *(arg1 + 0x100)
uint128_t zmm0 = zx.o(*(arg1 + 0x4a0))
*(arg1 + 0x5e0) = zmm1.q
*(arg1 + 0x5e8) = rax_2
uint64_t result = zx.q(*(arg1 + 0x4a8))
*(arg1 + 0x5ec) = zmm0.q
*(arg1 + 0x5f4) = result.d
void* rsi_1 = *(arg1 + 0x5a0)
void* rbp_2 = (sx.q(*(arg1 + 0x5a8)) << 7) + rsi_1

if (rsi_1 != rbp_2)
    int128_t* rbx_1 = rsi_1 + 0x60
    
    do
        result = rbx_1[-3].q
        
        if (result != 0)
            void* rcx_5 = *(result + 0x130)
            uint128_t* rcx_6
            
            if (rcx_5 == 0)
                rcx_6 = &data_143dbb0c0
            else
                rcx_6 = rcx_5 + 0x1c0
            
            rbx_1[-2] = *rcx_6
            rbx_1[-1] = rcx_6[1]
            *rbx_1 = rcx_6[2]
            void var_18
            int64_t* rax_4 = (*(*result + 0x2f0))(result, &var_18)
            rbx_1[1].q = *rax_4
            result = zx.q(rax_4[1].d)
            *(rbx_1 + 0x18) = result.d
        
        *(rbx_1 + 0x1c) = 1
        rsi_1 -= -0x80
        rbx_1 -= -0x80
    while (rsi_1 != rbp_2)

*(arg1 + 0x434) = 1
return result
