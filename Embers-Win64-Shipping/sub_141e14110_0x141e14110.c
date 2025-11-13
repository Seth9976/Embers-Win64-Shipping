// 函数: sub_141e14110
// 地址: 0x141e14110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x188))
int32_t rax = (rdi + 1).d
*(arg1 + 0x188) = rax

if (rax s> *(arg1 + 0x18c))
    sub_14083a7e0(arg1 + 0x180)

int64_t rcx_1 = *(arg1 + 0x180)
int64_t rdx_1 = rdi * 3
int32_t rax_1 = arg2[1].d
*(rcx_1 + (rdx_1 << 2)) = *arg2
int64_t zmm0 = *(arg2 + 4)
*(rcx_1 + (rdx_1 << 2) + 8) = rax_1
int32_t arg_8
void* const rcx_4

if (arg3[1].d == *(arg3 + 0x34))
label_141e141d1:
    rcx_4 = nullptr
else
    void* rcx_2 = arg3[8]
    void* r8 = &arg3[7]
    int64_t rdx_3 = sx.q(arg3[9].d) - 1
    arg_8 = zmm0.d
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    int32_t rax_4 = *(r8 + ((rdx_3 & sx.q(arg_8)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141e141d1_1:
        rcx_4 = nullptr
    else
        int64_t r8_1 = *arg3
        
        while (true)
            int64_t rdx_5 = sx.q(rax_4) * 3
            rcx_4 = r8_1 + (rdx_5 << 3)
            
            if (zmm0.d f== *(r8_1 + (rdx_5 << 3)))
                break
            
            rax_4 = *(rcx_4 + 0x10)
            
            if (rax_4 == 0xffffffff)
                goto label_141e141d1_2
        
        if (rax_4 == 0xffffffff)
        label_141e141d1_2:
            rcx_4 = nullptr

void* result = rcx_4 + 8

if (rcx_4 == 0)
    result = nullptr

if (result != 0)
    return result

arg_8.q = sx.q(*arg2) * 0xb8 + *(arg1 + 0x80)
return sub_141e103e0(arg3, arg2 + 4, &arg_8)
