// 函数: sub_141cbd4b0
// 地址: 0x141cbd4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
void* rdx = *arg1
int64_t r14_1 = rdi << 5
void* rax = rdx
void* r8 = r14_1 + rdx

if (rdx != r8)
    do
        if (*(rax + 8) == *(arg2 + 8))
            int32_t result = ((rax - rdx) s>> 5).d
            
            if (result != 0xffffffff)
                return result
            
            break
        
        rax += 0x20
    while (rax != r8)

int32_t rax_2 = (rdi + 1).d
arg1[1].d = rax_2

if (rax_2 s> *(arg1 + 0xc))
    sub_1405c4e40(arg1)

void*** r8_2 = *arg1 + r14_1
*r8_2 = &data_143213a30
__builtin_memset(&r8_2[1], 0, 0x18)

if (r8_2 != arg2)
    r8_2[1] = *(arg2 + 8)
    sub_140597df0(&r8_2[2], arg2 + 0x10)

return rdi.d
