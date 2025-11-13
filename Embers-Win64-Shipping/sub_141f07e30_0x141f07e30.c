// 函数: sub_141f07e30
// 地址: 0x141f07e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float* rbx = arg2
sub_141f31e20(arg1, arg2, arg3)
int32_t* rdx = arg1[0x81]
char r10 = 0
void* r8_1 = sx.q(arg1[0x82].d) * 0x34 + rdx
float zmm0_1
float zmm1_1

if (rdx != r8_1)
    r10 = 1
    void* rax_1 = &rdx[5]
    
    do
        *rdx = *rdx + *rbx
        rdx = &rdx[0xd]
        zmm0_1 = *(rax_1 - 0xc)
        *(rax_1 - 0x10) = rbx[1] f+ *(rax_1 - 0x10)
        *(rax_1 - 0xc) = zmm0_1 + rbx[2]
        zmm0_1 = *(rax_1 - 4)
        *(rax_1 - 8) = *(rax_1 - 8) + *rbx
        zmm1_1 = *rax_1
        *(rax_1 - 4) = zmm0_1 + rbx[1]
        *rax_1 = zmm1_1 + rbx[2]
        rax_1 += 0x34
    while (rdx != r8_1)

float* rdx_1 = arg1[0x83]
void* rax_3 = &rdx_1[sx.q(arg1[0x84].d) * 0xa]

if (rdx_1 != rax_3)
    r10 = 1
    
    do
        *rdx_1 = *rdx_1 + *rbx
        zmm0_1 = rdx_1[2]
        rdx_1[1] = rbx[1] + rdx_1[1]
        rdx_1[2] = zmm0_1 + rbx[2]
        rdx_1 = &rdx_1[0xa]
    while (rdx_1 != rax_3)

void** i = arg1[0x86]
uint64_t result = sx.q(arg1[0x87].d)

for (void* r9_2 = &i[result * 6]; i != r9_2; i = &i[6])
    float* rdx_2 = *i
    result = &rdx_2[sx.q(i[1].d) * 3]
    
    if (rdx_2 != result)
        r10 = 1
        
        do
            zmm1_1 = rdx_2[1]
            *rdx_2 = *rdx_2 + *rbx
            zmm0_1 = rdx_2[2]
            rdx_2[1] = zmm1_1 + rbx[1]
            rdx_2[2] = zmm0_1 + rbx[2]
            rdx_2 = &rdx_2[3]
        while (rdx_2 != result)

if (r10 == 0)
    return result

return sub_141ee8490(arg1)
