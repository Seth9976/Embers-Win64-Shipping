// 函数: sub_142be5a60
// 地址: 0x142be5a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 + 4 u> *(arg2 + 0x108))
    sub_142b9a750(arg2, 8)
    noreturn

uint32_t rcx_3 = zx.d(*(arg1 + 2)) << 8 | zx.d(*(arg1 + 3))
void* r13_1 = zx.q(rcx_3) + arg1

if (r13_1 u> *(arg2 + 0x108) || rcx_3 u< 0x206)
    sub_142b9a750(arg2, 8)
    noreturn

void* rbx_1 = arg1 + 6
int64_t i_2 = 0x100
int32_t rbp = 0
uint64_t rsi_4
int64_t i

do
    uint32_t rax_3 = zx.d(*(rbx_1 + 1))
    rbx_1 += 2
    uint32_t rsi_3 = zx.d(*(rbx_1 - 2)) << 8 | rax_3
    
    if (arg2[0x11].d s>= 2 && (rsi_3.b & 7) != 0)
        sub_142b9a750(arg2, 8)
        noreturn
    
    rsi_4 = zx.q(rsi_3 u>> 3)
    
    if (rsi_4.d u<= rbp)
        rsi_4 = zx.q(rbp)
    
    rbp = rsi_4.d
    i = i_2
    i_2 -= 1
while (i != 1)
void* r12_1 = zx.q(((rsi_4 << 3) + 8).d) + rbx_1

if (r12_1 u> *(arg2 + 0x108))
    sub_142b9a750(arg2, (i_2 + 8).d)
    noreturn

uint64_t i_3 = zx.q((rsi_4 + 1).d)
uint64_t i_1

do
    uint32_t rcx_9 = zx.d(*rbx_1) << 8 | zx.d(*(rbx_1 + 1))
    uint32_t rsi_7 = zx.d(*(rbx_1 + 2)) << 8 | zx.d(*(rbx_1 + 3))
    uint32_t rbp_2 = zx.d(*(rbx_1 + 6)) << 8
    uint16_t rax_8 = zx.w(*(rbx_1 + 4)) << 8
    uint16_t rax_9 = zx.w(*(rbx_1 + 5))
    rbx_1 += 8
    uint32_t rbp_3 = rbp_2 | zx.d(*(rbx_1 - 1))
    
    if (rsi_7 != 0)
        if (arg2[0x11].d s>= 2 && (rcx_9 u>= 0x100 || rsi_7 u> 0x100 - rcx_9))
            sub_142b9a750(arg2, 8)
            noreturn
        
        if (rbp_3 != 0)
            void* rdx_3 = zx.q(rbp_3) - 2 + rbx_1
            
            if (rdx_3 u< r12_1 || zx.q(rsi_7 * 2) + rdx_3 u> r13_1)
                sub_142b9a750(arg2, 9)
                noreturn
            
            if (arg2[0x11].d s>= 1)
                void* rsi_9 = zx.q(rsi_7 * 2) + rbx_1
                
                while (rbx_1 u< rsi_9)
                    uint32_t rcx_14 = zx.d(*rbx_1)
                    rbx_1 += 2
                    uint32_t rcx_16 = rcx_14 << 8 | zx.d(*(rbx_1 - 1))
                    
                    if (rcx_16 != 0 && zx.d(rcx_16.w + (rax_8 | rax_9)) u>= arg2[0x12].d)
                        sub_142b9a750(arg2, 0x10)
                        noreturn
    
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
return 0
