// 函数: sub_142666330
// 地址: 0x142666330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
sub_1405b6470(arg1, arg1[1].d - *(arg1 + 0x34), 0)
int64_t r11 = sx.q(arg1[9].d)

if (r11.d == 0)
    return 0

void* rdx_2 = arg1[8]
void* r8 = &arg1[7]
uint32_t r10_1 = (arg2 u>> 4).d
int32_t r9_1 = (0x9e3779b9 - r10_1) ^ r10_1 << 8
int32_t rcx_2 = neg.d(r9_1 + r10_1) ^ r9_1 u>> 0xd
int32_t r10_4 = (r10_1 - r9_1 - rcx_2) ^ rcx_2 u>> 0xc
int32_t r9_4 = (r9_1 - r10_4 - rcx_2) ^ r10_4 << 0x10
int32_t rcx_5 = (rcx_2 - r9_4 - r10_4) ^ r9_4 u>> 5
int32_t r10_7 = (r10_4 - r9_4 - rcx_5) ^ rcx_5 u>> 3
int32_t r9_7 = (r9_4 - r10_7 - rcx_5) ^ r10_7 << 0xa

if (rdx_2 != 0)
    r8 = rdx_2

int32_t i = *(r8 + (((sx.q(rcx_5 - r9_7 - r10_7) ^ zx.q(r9_7) u>> 0xf) & (r11 - 1)) << 2))
int32_t i_1 = i

if (i != 0xffffffff)
    int64_t rdx_3 = *arg1
    
    do
        int64_t rcx_11 = sx.q(i_1) * 3
        i = *(rdx_3 + (rcx_11 << 3) + 0x10)
        
        if (*(rdx_3 + (rcx_11 << 3)) == arg2)
            break
        
        i_1 = i
    while (i != 0xffffffff)

while (i_1 != 0xffffffff)
    int32_t* rcx_14 = *arg1 + ((sx.q(i_1) * 3 + 1) << 3)
    
    if (*rcx_14 == arg_18.d && rcx_14[1] == arg_18:4.d)
        sub_1405c2fb0(arg1, i_1)
        return 1
    
    if (sub_140d3e110(rcx_14) == 0 && sub_140d3e110(&arg_18) == 0)
        sub_1405c2fb0(arg1, i_1)
        return 1
    
    i_1 = i
    
    if (i == 0xffffffff)
        break
    
    int64_t rax_24 = *arg1
    
    do
        int64_t rdx_4 = sx.q(i_1) * 3
        i = *(rax_24 + (rdx_4 << 3) + 0x10)
        
        if (*(rax_24 + (rdx_4 << 3)) == arg2)
            break
        
        i_1 = i
    while (i != 0xffffffff)

return 0
