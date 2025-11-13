// 函数: sub_142ae1ec0
// 地址: 0x142ae1ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r8 = *(arg1 + 8)
int32_t r11_1

if (r8 s< 0)
    r11_1 = *(arg1 + 0xc)
else
    r11_1 = sx.d(r8) s>> 5

if (r11_1 == 0)
    return 0xffffffff

int32_t rax_2

if (r8 s< 0)
    rax_2 = *(arg1 + 0xc)
else
    rax_2 = sx.d(r8) s>> 5

int16_t rbx

if (rax_2 == 0)
    rbx = -1
else
    void* rax_3 = arg1 + 0xa
    
    if ((r8.b & 2) == 0)
        rax_3 = *(arg1 + 0x18)
    
    rbx = *rax_3

int32_t r10 = 1

if (r11_1 s> 1)
    int64_t i = 1
    
    do
        int32_t rax_5
        
        if (r8 s< 0)
            rax_5 = *(arg1 + 0xc)
        else
            rax_5 = sx.d(r8) s>> 5
        
        int16_t rdx
        
        if (r10 u>= rax_5)
            rdx = -1
        else
            void* rax_6 = arg1 + 0xa
            
            if ((r8.b & 2) == 0)
                rax_6 = *(arg1 + 0x18)
            
            rdx = *(rax_6 + (i << 1))
        
        if (rbx != rdx)
            return 0xffffffff
        
        r10 += 1
        i += 1
    while (i s< sx.q(r11_1))

int32_t rdx_1 = 0
void* const rcx = &data_14365a170
int64_t r10_1 = 0
int32_t r9_1 = -1
int16_t i_1

do
    int16_t rax_7 = *(rcx - 0x10)
    
    if (rax_7 == rbx)
        r9_1 = rdx_1
        
        if (rax_7 != *rcx || sx.d(*(rcx + 0xa)) s> r11_1)
            return zx.q(rdx_1)
    
    i_1 = *rcx
    rdx_1 += 1
    rcx += 0x10
    r10_1 += 1
while (i_1 != 0)

if (arg2 != 0)
    r9_1 = -1

return zx.q(r9_1)
