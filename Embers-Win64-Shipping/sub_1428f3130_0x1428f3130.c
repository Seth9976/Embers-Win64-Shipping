// 函数: sub_1428f3130
// 地址: 0x1428f3130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdi = *arg1
int32_t i_4 = arg3
arg5.b = sbb.b(arg5.b, arg5.b, arg2 != 0)
arg5.b &= 0x20
char* r11 = &rdi[1]
uint64_t result
result.b = arg6 & 0xc0
int32_t i_2 = 0
arg5.b |= result.b

if (arg4 s>= 0x1f)
    arg5.b |= 0x1f
    result = 0
    *rdi = arg5.b
    int32_t i = arg4
    
    if (arg4 s> 0)
        do
            i s>>= 7
            result = zx.q(result.d + 1)
        while (i s> 0)
    
    int64_t rdi_1 = sx.q(result.d)
    
    if (result.d s> 0)
        int32_t rbx = (result - 1).d
        void* rdx_1 = &r11[sx.q(result.d)]
        
        do
            rdx_1 -= 1
            char rcx = arg4.b & 0x7f
            result = zx.q(result.d - 1)
            *rdx_1 = rcx
            
            if (result.d != rbx)
                *rdx_1 = rcx | 0x80
            
            arg4 s>>= 7
        while (result.d s> 0)
    
    r11 = &r11[rdi_1]
else
    arg4.b &= 0x1f
    arg4.b |= arg5.b
    *rdi = arg4.b

void* r11_1

if (arg2 == 2)
    *r11 = 0x80
    r11_1 = &r11[1]
else if (i_4 s> 0x7f)
    int32_t i_1 = i_4
    
    if (i_4 s> 0)
        do
            i_1 s>>= 8
            i_2 += 1
        while (i_1 s> 0)
    
    int64_t i_3 = sx.q(i_2)
    result.b = i_2.b | 0x80
    *r11 = result.b
    
    if (i_2 s> 0)
        result = &r11[1 + sx.q(i_2)]
        
        do
            result -= 1
            i_2 -= 1
            *result = i_4.b
            i_4 s>>= 8
        while (i_2 s> 0)
    
    r11_1 = &r11[1 + i_3]
else
    *r11 = i_4.b
    r11_1 = &r11[1]

*arg1 = r11_1
return result
