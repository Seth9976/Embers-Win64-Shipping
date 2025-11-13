// 函数: sub_1408ce5e0
// 地址: 0x1408ce5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x280)

if (rdx == 0)
    return 

uint64_t j = zx.q(*(arg1 + 0x279))

if (j.d s>= *(rdx + 0x60))
    return 

j = j * 0xa0 + *(rdx + 0x58)
uint64_t rdx_1 = zx.q(*(arg1 + 0x27a))

if (rdx_1.d s>= *(j + 0x28))
    return 

int64_t* rax_3 = sub_141f66100(*(*(j + 0x20) + (rdx_1 << 3)))
int32_t* i = *rax_3

for (void* r14_1 = &i[sx.q(rax_3[1].d) * 2]; i != r14_1; i = &i[2])
    if (sub_140d3e110(i).b != 0)
        void* rax_4 = sub_140d3c6e0(i)
        j = *arg2
        
        for (int64_t rdx_2 = j + (sx.q(arg2[1].d) << 3); j != rdx_2; j += 8)
            if (*j == *(rax_4 + 0xa0))
                goto label_1408ce6cd
        
        void* rax_5 = sub_140d3c6e0(i)
        int64_t rsi_1 = sx.q(arg2[1].d)
        int64_t rbp_1 = *(rax_5 + 0xa0)
        int32_t rax_6 = (rsi_1 + 1).d
        arg2[1].d = rax_6
        
        if (rax_6 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        *(*arg2 + (rsi_1 << 3)) = rbp_1
    
label_1408ce6cd:
