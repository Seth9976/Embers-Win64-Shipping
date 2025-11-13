// 函数: sub_141e46210
// 地址: 0x141e46210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141e09ce0(arg1, arg2)
int64_t r8 = 0
int64_t* r9 = *(arg2 + 0x78)
void* result = &r9[sx.q(*(arg2 + 0x80))]
uint64_t r11_1 = sx.q(*(arg2 + 0x80)) << 3 u>> 3

if (r9 u> result)
    r11_1 = 0

if (r11_1 != 0)
    int64_t r10_1 = 0
    
    do
        int64_t* rdx = *r9
        
        if (*rdx != 0 && not(9.99999975e-06f f>= rdx[0x29].d))
            result = *(arg1 + 0x658)
            char rcx = *(result + r10_1 + 0x14)
            r10_1 += 0x18
            rdx[5].b = rcx
        
        r9 = &r9[1]
        r8 += 1
    while (r8 != r11_1)

return result
