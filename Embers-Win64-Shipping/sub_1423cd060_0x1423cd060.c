// 函数: sub_1423cd060
// 地址: 0x1423cd060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = **arg1
int32_t r10_1 = arg1[1].d
uint64_t result = zx.q(r10_1 - 1)

if (result.d s>= 1)
    result = 1

if (result.d != 0)
    int64_t rcx = *arg1
    result = memcpy(rcx, rcx + (sx.q(r10_1 - result.d) << 3), result.d << 3)
    r10_1 = arg1[1].d

int32_t i = r10_1 - 1
arg1[1].d = i

if (arg4 != 0)
    result = sub_1405c53d0(arg1)
    i = arg1[1].d

int64_t rdi_1 = *arg1
uint64_t r11 = 0

if (i s> 1)
    do
        uint64_t r8_2 = zx.q(((r11 << 1) + 1).d)
        int32_t r9 = (r8_2 + 1).d
        int64_t rbx_1 = **arg3
        
        if (r9 s< i)
            if (*(rbx_1 + (zx.q(*(rdi_1 + (sx.q(r9) << 3))) & 0xffffff) * 0x90 + 8) f>
                    *(rbx_1 + (zx.q(*(rdi_1 + (sx.q(r8_2.d) << 3))) & 0xffffff) * 0x90 + 8))
                r9 = r8_2.d
            
            r8_2 = zx.q(r9)
        
        int32_t* rdx_3 = rdi_1 + (sx.q(r8_2.d) << 3)
        int32_t* r9_1 = rdi_1 + (sx.q(r11.d) << 3)
        result = (zx.q(*r9_1) & 0xffffff) * 0x12
        
        if (*(rbx_1 + (result << 3) + 8) f<= *(rbx_1 + (zx.q(*rdx_3) & 0xffffff) * 0x90 + 8))
            break
        
        if (r9_1 != rdx_3)
            int64_t zmm1 = *r9_1
            *r9_1 = *rdx_3
            *rdx_3 = zmm1
        
        result = zx.q(((r8_2 << 1) + 1).d)
        r11 = zx.q(r8_2.d)
    while (result.d s< i)

return result
