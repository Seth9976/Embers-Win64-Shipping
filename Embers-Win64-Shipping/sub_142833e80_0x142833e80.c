// 函数: sub_142833e80
// 地址: 0x142833e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*arg1)
int32_t rbp_1 = ((rax << 1) + 1).d + rax.d

if (rbp_1 s> 0xd342ab)
    rbp_1 = 0xd342ab

int64_t rbx_1 = sx.q(rbp_1) << 3
int64_t rax_1 = malloc(rbx_1)
memset(rax_1, 0, rbx_1)
uint64_t rsi = 0

if (*arg1 u> 0)
    do
        int64_t* i_1 = *(*(arg1 + 8) + (rsi << 3))
        
        if (i_1 != 0)
            int64_t* i
            
            do
                i = i_1[3]
                uint64_t rdx_1 = zx.q(modu.dp.d(0:(sub_142833f38(*i_1)), rbp_1))
                i_1[3] = *(rax_1 + (rdx_1 << 3))
                *(rax_1 + (rdx_1 << 3)) = i_1
                i_1 = i
            while (i != 0)
        
        rsi = zx.q(rsi.d + 1)
    while (rsi.d u< *arg1)

int64_t result = free(*(arg1 + 8))
*arg1 = rbp_1
*(arg1 + 8) = rax_1
return result
