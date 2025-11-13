// 函数: sub_14271e360
// 地址: 0x14271e360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140d3c6e0(arg2)

if (result == 0)
    return result

int64_t* r10_1 = arg1[0x11]
uint64_t rdx = sx.q(arg1[0x12].d)
int64_t* r8_1 = r10_1
void* rax = &r10_1[rdx]

if (r10_1 != rax)
    do
        if (*r8_1 == result)
            int32_t r8_3 = ((r8_1 - r10_1) s>> 3).d
            
            if (r8_3 != 0xffffffff)
                int32_t rax_3 = rdx.d - r8_3 - 1
                
                if (rax_3 s>= 1)
                    rax_3 = 1
                
                if (rax_3 != 0)
                    memcpy(&r10_1[sx.q(r8_3)], &r10_1[sx.q(rdx.d - rax_3)], rax_3 << 3)
                    rdx = zx.q(arg1[0x12].d)
                
                arg1[0x12].d = (rdx - 1).d
                sub_1405c53d0(&arg1[0x11])
            
            break
        
        r8_1 = &r8_1[1]
    while (r8_1 != rax)

return sub_14272c170(arg1, *(result + 0xa0))
