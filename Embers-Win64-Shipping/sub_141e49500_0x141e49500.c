// 函数: sub_141e49500
// 地址: 0x141e49500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xb1) != 0 || data_143a2d2a0 != 3)
    return 

int128_t* r11_1 = *(arg2 + 0x370)
int128_t* r9_1 = r11_1
void* r10_3 = &r11_1[sx.q(*(arg2 + 0x378))]

if (r11_1 == r10_3)
    return 

int32_t rcx = data_143a2d2a4

while (true)
    if (arg3 s>= data_143a2d2a8)
        uint64_t rax = (*r9_1):8.q
        
        if (rax.b != 0)
            bool cond:1_1
            
            if (rcx s< 0)
                cond:1_1 = arg3 s>= (rax u>> 0x20).d
            else
                cond:1_1 = arg3 s>= rcx
            
            if (cond:1_1)
                break
    
    r9_1 = &r9_1[1]
    
    if (r9_1 == r10_3)
        return 

int32_t r9_3 = ((r9_1 - r11_1) s>> 4).d

if (r9_3 == 0xffffffff)
    return 

int64_t rcx_1 = arg1[1]

if (rcx_1 != 0)
    return 

int64_t rax_1

if (arg1[0x16].b != rcx_1.b)
    rax_1 = sx.q(r9_3)

if (arg1[0x16].b != rcx_1.b && *(arg1 + 0xb4) == r11_1[rax_1].q && rcx_1 != 0)
    return 

int64_t rbx_2 = sx.q(r9_3) * 2
arg1[1] = sub_141e42170(arg1, r11_1 + (rbx_2 << 3))
arg1[0x16].b = 1
*(arg1 + 0xb4) = *(*(arg2 + 0x370) + (rbx_2 << 3))
