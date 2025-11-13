// 函数: sub_14083fae0
// 地址: 0x14083fae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(*(arg4 + 0xb0))
int32_t r8_1 = *(arg1 + 0x1c0) * rax.d
uint32_t count = (rax << 2).d

if (r8_1 s<= 4)
    r8_1 = 4

sub_141996f30(arg3, arg2, r8_1)
void* i_1 = *(arg1 + 0x1b0)
void* i = arg1 + 0xb0

if (i_1 != 0)
    i = i_1

for (void* r13_2 = (sx.q(*(arg1 + 0x1b8)) << 4) + i; i != r13_2; i += 0x10)
    void* i_2 = i + 4
    
    if (data_14396fef8 == 0)
        i_2 = i
    
    int32_t rsi_1 = *i_2
    
    if (rsi_1 != 0xffffffff && *(i + 0xc) != 0)
        int32_t j = 0
        
        if (*(i + 8) s> 0)
            do
                memcpy(sx.q((rsi_1 + j) * count) + *arg2, 
                    zx.q((*i + j) * *(arg4 + 0xb8)) + *(arg4 + 0x18), count)
                j += 1
            while (j s< *(i + 8))

return arg2
