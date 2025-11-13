// 函数: sub_140b424a0
// 地址: 0x140b424a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = arg1[2]
int32_t rsi = arg1[3].d
int32_t i_2 = result.d - rsi
int32_t rdx_1 = arg2[1].d + i_2

if (rdx_1 s> *(arg2 + 0xc))
    result = sub_1405c5570(arg2, rdx_1)
    rsi = arg1[3].d

uint64_t rsi_1 = zx.q(rsi) & 0xf

if (i_2 != 0)
    int64_t rcx_1 = arg1[3]
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        if (rcx_1 == arg1[4] + 0x10)
            void* rcx_2 = *arg1
            rsi_1 = 0
            *arg1 = *(rcx_2 + 0x80)
            j_sub_140a74f90(rcx_2)
            arg1[4] = arg1[3]
        
        int64_t rbp_1 = sx.q(arg2[1].d)
        int64_t* r14_1 = *arg1 + (rsi_1 << 3)
        int32_t rax_5 = (rbp_1 + 1).d
        arg2[1].d = rax_5
        
        if (rax_5 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        rsi_1 = zx.q(rsi_1.d + 1)
        result = *r14_1
        *(*arg2 + (rbp_1 << 3)) = result
        arg1[3] += 1
        rcx_1 = arg1[3]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
