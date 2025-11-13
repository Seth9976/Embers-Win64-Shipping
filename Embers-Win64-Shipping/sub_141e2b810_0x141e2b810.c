// 函数: sub_141e2b810
// 地址: 0x141e2b810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = *arg1
int32_t rdx = 0
int64_t r10 = sx.q(*(r11 + 0x150))
void* rsi_1

if (r10.d s> 0)
    rsi_1 = *(r11 + 0x148)
    int64_t r8 = 0
    int64_t* rcx = rsi_1 + 0x30
    
    while (*rcx != *arg2)
        rdx += 1
        r8 += 1
        rcx = &rcx[0xb]
        
        if (r8 s>= r10)
            goto label_141e2b864

int64_t result

if (r10.d s<= 0 || rdx s< 0 || rdx s>= r10.d)
label_141e2b864:
    result.b = 0
else
    void* rbx_2 = sx.q(rdx) * 0x58 + rsi_1
    float zmm1
    
    if (arg3 == 0)
        zmm1 = (zx.o(0)).d
    else
        zmm1 = sub_141e246e0(r11, rdx) - 9.99999975e-05f
    
    char rax_1 = *(rbx_2 + 0x19)
    float zmm0
    
    if (rax_1 == 0)
        zmm0 = *(rbx_2 + 0x24)
    else
        uint32_t rcx_2 = zx.d(rax_1)
        
        if (rcx_2 == 1)
            zmm0 = *(rbx_2 + 0x24) f+ *(rbx_2 + 0x1c)
        else if (rcx_2 != 2)
            zmm0 = *(rbx_2 + 0x24)
        else
            zmm0 = *(rbx_2 + 0x24) f* *(rbx_2 + 0x20) f+ *(rbx_2 + 0x1c)
    
    arg1[0x25].d = zmm1 + zmm0
    arg1[6].d = 0xfffffffe
    arg1[7].d = 0xfffffffe
    sub_141e2d5e0(arg1)
    result.b = 1

return result
