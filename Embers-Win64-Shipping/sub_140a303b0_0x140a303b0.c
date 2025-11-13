// 函数: sub_140a303b0
// 地址: 0x140a303b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx = zx.d(arg2)
int32_t rax
int16_t r9
rax, r9 = iswupper(rbx.w)

if (rax == 0)
    int32_t rax_2
    rax_2.w = sbb.w((rbx - 0x61).w, (rbx - 0x61).w, rbx - 0x61 u< 0x1a)
    rax_2.w &= 0x20
    r9 = rbx.w - rax_2.w
else
    r9 = (sbb.w(r9, r9, rbx - 0x41 u< 0x1a) & 0x20) + rbx.w

int16_t* i = *arg1
int64_t r8 = sx.q(arg1[1].d)
void* rdx = &i[r8]

if (i != rdx)
    do
        int16_t rcx_1 = *i
        
        if (rcx_1 == r9)
            rcx_1 = arg3
        
        *i = rcx_1
        i = &i[1]
    while (i != rdx)
    
    r8 = zx.q(arg1[1].d)
    i = *arg1

for (; i != &i[sx.q(r8.d)]; i = &i[1])
    int16_t rcx_3 = *i
    
    if (rcx_3 == rbx.w)
        rcx_3 = arg3
    
    *i = rcx_3

return i
