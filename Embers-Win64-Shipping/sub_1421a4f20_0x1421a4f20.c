// 函数: sub_1421a4f20
// 地址: 0x1421a4f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x28)
int64_t zmm0

if (rax == 0)
    zmm0 = (zx.o(0)).q
else
    zmm0 = *(rax + 0x218)

uint64_t rax_1 = zx.q(*(arg1 + 0x50))
char* i_1 = nullptr
*(arg1 + 0x58) = zmm0

if (rax_1.b != 0xff)
    rax_1.b = rax_1.b == 0
else
    int32_t rax_2 = *(arg1 + 0x38) + 0x40
    *(arg1 + 0x38) = rax_2
    
    if (rax_2 s> *(arg1 + 0x3c))
        sub_1405daba0(arg1 + 0x30)
    
    int32_t rax_3 = *(arg1 + 0x48) + 0x40
    *(arg1 + 0x48) = rax_3
    
    if (rax_3 s> *(arg1 + 0x4c))
        sub_1405daba0(arg1 + 0x40)
    
    for (int64_t i = 0; i s< 0x40; i += 1)
        int32_t rax_4 = rand()
        *(i + *(arg1 + 0x40)) = (rax_4 s/ 0xff).b + rax_4.b
    
    rax_1.b = 0

*(arg1 + 0x50) = rax_1.b
int64_t result

do
    int32_t rax_5 = rand()
    result = *(((zx.q(rax_1.b) + 3) << 4) + arg1)
    i_1[result] = (rax_5 s/ 0xff).b + rax_5.b
    i_1 = &i_1[1]
while (i_1 s< 0x40)

return result
