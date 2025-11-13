// 函数: sub_1419686f0
// 地址: 0x1419686f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
char* rax = arg1 + 0x15
void* r8_1 = arg2 - arg1

do
    int64_t rcx = *(rax - 0x15)
    
    if (rcx == 0)
        break
    
    *(r8_1 + rax - 0x15) = rcx
    uint8_t rdx = *rax u>> 2
    *(r8_1 + rax - 5) = rdx
    *(r8_1 + rax - 4) = *rax & 3
    *(r8_1 + rax - 9) = *(rax - 5)
    *(r8_1 + rax - 0xd) = zx.d(rax[-1])
    *(arg2 + 0xc0) += 1
    uint32_t rcx_3
    rcx_3.b = rdx == 2
    *(arg2 + 0xc4) |= rcx_3.b
    
    if (*(rax - 0xd) != 0)
        *(arg2 + 0x188) = 1
        int64_t zmm1 = *(r8_1 + rax - 5)
        *(r8_1 + rax + 0xb3) = *(r8_1 + rax - 0x15)
        *(r8_1 + rax + 0xc3) = zmm1
        *(r8_1 + rax + 0xb3) = *(rax - 0xd)
    
    i += 1
    rax = &rax[0x18]
while (i s< 8)

int64_t rax_1 = *(arg1 + 0xc0)
uint8_t r9 = *(arg1 + 0xd0)
uint8_t rcx_5 = r9
r9 &= 0xf
rcx_5 u>>= 4
int32_t var_c = *(arg1 + 0xd4)
uint8_t rdx_1 = rcx_5 u>> 2
uint8_t r8_2 = r9 u>> 2
uint8_t var_10 = rdx_1
uint8_t var_f = rcx_5 & 3
int32_t rax_2
rax_2.b = rdx_1 == 2
uint8_t var_e = r8_2
*(arg2 + 0x1a0) = rax_2.b
uint8_t var_d = r9 & 3
rax_2.b = r8_2 == 2
*(arg2 + 0x1a1) = rax_2.b
*(arg2 + 0x190) = rax_1.o
int64_t result = *(arg1 + 0x108)
*(arg2 + 0x1a8) = result
return result
