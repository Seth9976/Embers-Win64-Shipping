// 函数: sub_142124b60
// 地址: 0x142124b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1 + 0x398
int64_t i_1 = 3
int64_t result
int64_t i

do
    int64_t j_1 = 4
    int64_t j
    
    do
        int64_t rdi_1 = sx.q(arg2[1].d)
        int64_t r14_1 = *(*rsi + 8)
        int32_t rax_2 = (rdi_1 + 1).d
        arg2[1].d = rax_2
        
        if (rax_2 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        result = *arg2
        rsi = &rsi[1]
        *(result + (rdi_1 << 3)) = r14_1
        j = j_1
        j_1 -= 1
    while (j != 1)
    i = i_1
    i_1 -= 1
while (i != 1)
return result
