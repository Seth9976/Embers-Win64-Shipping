// 函数: sub_142bbbd60
// 地址: 0x142bbbd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = *(arg1 + 0x2e0)
int64_t r15
r15.b = 0
int32_t rbp = arg2

if (rdi == 0)
    return zx.q((rdi + 6).d)

if (rbp u> rdi[1])
    rbp = rdi[1]

uint64_t rsi = 0

if (*rdi u> 0)
    do
        uint64_t rbx_1 = 0
        int32_t r8 = 0x10000
        
        if (rdi[1] u> 0)
            do
                if (rbx_1.d u< rbp)
                    int32_t rdx = *(arg3 + (rbx_1 << 2))
                    
                    if (not(test_bit(rsi.d, rbx_1.d)))
                        rdx = 0x10000 - rdx
                    
                    if (rdx s<= 0)
                        r8 = 0
                        break
                    
                    if (rdx s< 0x10000)
                        r8 = sub_142b93e80(r8, rdx)
                else
                    r8 s>>= 1
                
                rbx_1 = zx.q(rbx_1.d + 1)
            while (rbx_1.d u< rdi[1])
        
        arg4 = *(rdi + 0x108)
        
        if (*(arg4 + (rsi << 2)) != r8)
            *(arg4 + (rsi << 2)) = r8
            r15.b = 1
        
        rsi = zx.q(rsi.d + 1)
    while (rsi.d u< *rdi)

return zx.q(neg.d(sbb.d(arg4.d, arg4.d, r15.b != 0)) - 1)
