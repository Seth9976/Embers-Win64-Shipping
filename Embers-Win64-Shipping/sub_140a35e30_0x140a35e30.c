// 函数: sub_140a35e30
// 地址: 0x140a35e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[1].d
bool r9 = false
int32_t rcx = r8 - 1

if (r8 == 0)
    rcx = -1

int32_t r11 = r8 - 1

if (r8 == 0)
    rcx = 0

if (r8 == 0)
    r11 = -1

int32_t rsi = 0

if (rcx s> 0)
    int32_t rdx = rcx - 1
    int16_t* r14_1 = *arg1
    int16_t temp1_1 = *r14_1
    
    if (temp1_1 != 0x22)
        rdx = rcx
    
    int32_t r10_1
    r10_1.b = temp1_1 == 0x22
    r9 = temp1_1 == 0x22
    rsi = r10_1
    rcx = rdx
    
    if (r8 == 0)
        r11 = 0
    
    if (r11 s> 1 && r14_1[sx.q(r11) - 1] == 0x22)
        rcx = rdx - 1
        r9 = true

if (arg2 != 0)
    *arg2 = r9
    r8 = arg1[1].d

int32_t rdx_1 = 0x7fffffff
int64_t rcx_2 = sx.q(rcx) + zx.q(rsi)
int32_t rax_3 = r8 - 1

if (rcx_2 s<= 0x7fffffff)
    rdx_1 = rcx_2.d

if (r8 == 0)
    rax_3 = 0

int32_t r10_2

if (rdx_1 s>= 0)
    r10_2 = rax_3
    
    if (rdx_1 s< rax_3)
        r10_2 = rdx_1
else
    r10_2 = 0

int32_t rbx_1 = r8 - 1

if (r8 == 0)
    rbx_1 = 0

int32_t result_1 = rbx_1 - r10_2
int32_t result = rax_3 - r10_2

if (rax_3 - r10_2 s>= 0)
    if (result s< result_1)
        result_1 = result
    
    if (result_1 != 0)
        int32_t rax_5 = r8 - result_1
        result = rax_5 - r10_2
        
        if (rax_5 != r10_2)
            int64_t r9_1 = *arg1
            result =
                memmove(r9_1 + (sx.q(r10_2) << 1), r9_1 + (sx.q(result_1 + r10_2) << 1), result * 2)
            r8 = arg1[1].d
        
        r8 -= result_1
        arg1[1].d = r8

int32_t rbx_2 = r8 - 1

if (r8 == 0)
    rbx_2 = 0

if (rsi s< rbx_2)
    rbx_2 = rsi

if (rbx_2 != 0)
    result = r8 - rbx_2
    
    if (r8 != rbx_2)
        int64_t rcx_5 = *arg1
        result = memmove(rcx_5, rcx_5 + (sx.q(rbx_2) << 1), result * 2)
        r8 = arg1[1].d
    
    arg1[1].d = r8 - rbx_2

return result
