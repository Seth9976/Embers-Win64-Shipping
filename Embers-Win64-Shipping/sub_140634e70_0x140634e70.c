// 函数: sub_140634e70
// 地址: 0x140634e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    *arg2 = 0

int64_t rax = sx.q(arg1[1].d)

if (rax.d s<= 0)
    *arg3 = 0xbf800000
    return rax

int32_t* r8 = *arg1
int32_t zmm0 = *r8
void* rcx = &r8[rax]
int32_t* rax_1 = r8

if (r8 != rcx)
    do
        zmm0 = __maxss_xmmss_memss(zmm0, *rax_1)
        rax_1 = &rax_1[1]
    while (rax_1 != rcx)

if (arg2 != 0)
    int32_t* rax_2 = r8
    
    if (r8 != rcx)
        do
            if (zmm0 f== *rax_2)
                int32_t rax_4 = ((rax_2 - r8) s>> 2).d
                *arg2 = rax_4
                *arg3 = zmm0
                return rax_4
            
            rax_2 = &rax_2[1]
        while (rax_2 != rcx)
    
    rax_1 = 0xffffffff
    *arg2 = 0xffffffff

*arg3 = zmm0
return rax_1
