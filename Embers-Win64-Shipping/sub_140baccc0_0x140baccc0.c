// 函数: sub_140baccc0
// 地址: 0x140baccc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg3)
int32_t arg_8
sub_140ba6ab0(arg1 + 0x10, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rax_3

if (rax.d == 0xffffffff)
    rax_3 = nullptr
else
    rax_3 = rax * 0x60 + *(arg1 + 0x10)

int64_t* r9 = rax_3 + 8

if (rax_3 == 0)
    r9 = nullptr

if (r9 == 0)
    rax_3.b = 0
    return rax_3

int32_t i

if (r9[1].d != *(r9 + 0x34))
    void* rcx_1 = r9[8]
    void* r8_1 = &r9[7]
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    i = *(r8_1 + (((sx.q(r9[9].d) - 1) & rbx) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *r9
        
        do
            int64_t rdx_4 = sx.q(i) * 3
            
            if (*(r8_2 + (rdx_4 << 2)) == rbx.d)
                goto label_140bacd5f
            
            i = *(r8_2 + (rdx_4 << 2) + 4)
        while (i != 0xffffffff)

i = -1
label_140bacd5f:
i.b = i != 0xffffffff
return i
