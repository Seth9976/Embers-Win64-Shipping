// 函数: sub_1423cd290
// 地址: 0x1423cd290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg1[1].d
int64_t rbp = sx.q(arg2)
int32_t rax_2 = r10 - rbp.d - 1

if (rax_2 s>= 1)
    rax_2 = 1

if (rax_2 != 0)
    int64_t rcx = *arg1
    memcpy(rcx + (rbp << 3), rcx + (sx.q(r10 - rax_2) << 3), rax_2 << 3)
    r10 = arg1[1].d

int32_t i = r10 - 1
arg1[1].d = i

if (arg4 != 0)
    sub_1405c53d0(arg1)
    i = arg1[1].d

int64_t rsi = *arg1
uint64_t result = zx.q(((rbp << 1) + 1).d)
uint64_t r11 = zx.q(rbp.d)
int64_t zmm1

while (result.d s< i)
    uint64_t r8_2 = zx.q(((r11 << 1) + 1).d)
    int32_t r9 = (r8_2 + 1).d
    int64_t rbx_1 = **arg3
    
    if (r9 s< i)
        if (*(rbx_1 + (zx.q(*(rsi + (sx.q(r9) << 3))) & 0xffffff) * 0x90 + 8) f>
                *(rbx_1 + (zx.q(*(rsi + (sx.q(r8_2.d) << 3))) & 0xffffff) * 0x90 + 8))
            r9 = r8_2.d
        
        r8_2 = zx.q(r9)
    
    int32_t* rdx_3 = rsi + (sx.q(r8_2.d) << 3)
    int32_t* r9_1 = rsi + (sx.q(r11.d) << 3)
    result = (zx.q(*r9_1) & 0xffffff) * 0x12
    
    if (*(rbx_1 + (result << 3) + 8) f<= *(rbx_1 + (zx.q(*rdx_3) & 0xffffff) * 0x90 + 8))
        break
    
    if (r9_1 != rdx_3)
        zmm1 = *r9_1
        *r9_1 = *rdx_3
        *rdx_3 = zmm1
    
    result = zx.q(((r8_2 << 1) + 1).d)
    r11 = zx.q(r8_2.d)

int64_t rbx_2 = *arg1
int32_t rcx_10 = arg1[1].d - 1

if (rbp.d s<= rcx_10)
    rcx_10 = rbp.d

if (rcx_10 s> 0)
    int64_t r11_1
    
    do
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rcx_10 - 1)
        int32_t* r10_2 = rbx_2 + (sx.q(rcx_10) << 3)
        r11_1 = sx.q((temp1_1 - temp0_1) s>> 1)
        int32_t* r9_2 = rbx_2 + (r11_1 << 3)
        int64_t r8_3 = **arg3
        result = (zx.q(*r9_2) & 0xffffff) * 0x12
        
        if (*(r8_3 + (result << 3) + 8) f<= *(r8_3 + (zx.q(*r10_2) & 0xffffff) * 0x90 + 8))
            break
        
        if (r10_2 != r9_2)
            zmm1 = *r10_2
            *r10_2 = *r9_2
            *r9_2 = zmm1
        
        rcx_10 = r11_1.d
    while (r11_1.d s> 0)

return result
