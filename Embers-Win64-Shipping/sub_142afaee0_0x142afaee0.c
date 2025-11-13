// 函数: sub_142afaee0
// 地址: 0x142afaee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = zx.q(arg4)
uint64_t r14 = zx.q(arg3)
uint64_t rsi = zx.q(arg2)
int32_t r10_1 = *(arg1 + 0xc8) + ((rsi + (rbp << 1)).d << 1)
int64_t rax_1 = sub_142a7dd00(zx.q(r10_1))
*(arg1 + 0xd8) = rax_1

if (rax_1 == 0)
    *arg6 = 7
    return arg6

memset(rax_1, 0, zx.q(r10_1))
int16_t* r15_1 = *(arg1 + 0xd8)
memcpy(r15_1, *(arg1 + 0x28), (rsi * 2).d)
void* rbx_1 = &r15_1[rsi]
memcpy(rbx_1 + (zx.q(rbp.d - r14.d) << 2), *(arg1 + 0x28) + rsi * 2, (r14 << 2).d)
*(arg1 + 0x28) = r15_1
uint64_t rbx_3 = zx.q(zx.d(*(arg1 + 0xd0)) + 1)
*(arg1 + 0xb8) = rbx_1 + (rbp << 2)
uint64_t rbx_4 = rbx_3 u>> 6

if (rbx_4 != 0)
    int64_t r8_3 = 0
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rsi.d)
    int16_t* r10_2 = r15_1
    
    do
        uint64_t rdx_4 = zx.q(*r10_2)
        
        if (rdx_4.d == (temp1_1 - temp0_1) s>> 1)
            r8_3 += 0x10
        else
            void* rcx_6 = &r15_1[rdx_4 * 2]
            int64_t i_1 = 0x10
            int64_t i
            
            do
                uint32_t rax_10 = zx.d(*(*(arg1 + 0x30) + (r8_3 << 1)))
                r8_3 += 1
                
                if (rax_10 != 0)
                    uint32_t rax_11 = rax_10 u>> 4
                    *rcx_6 = rax_11
                    *(rcx_6 + 4) = rax_11 + 1
                    *(rcx_6 + 8) = rax_11 + 2
                    *(rcx_6 + 0xc) = rax_11 + 3
                
                rcx_6 += 0x10
                rdx_4 = zx.q(rdx_4.d + 4)
                i = i_1
                i_1 -= 1
            while (i != 1)
        
        r10_2 = &r10_2[1]
    while (r8_3 s< rbx_4)

return sub_142afb3d0(arg1, sub_142afc120, arg1, arg6, arg5)
