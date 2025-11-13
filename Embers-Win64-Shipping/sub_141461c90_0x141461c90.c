// 函数: sub_141461c90
// 地址: 0x141461c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[1]
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(r8 s/ 7)
int32_t rdx_4 = temp2 & 3
int32_t rax_4 = temp3 + rdx_4
int32_t r8_1 = r8 s% 7
int32_t r9 = (rax_4 & 3) - rdx_4 + 1
int32_t var_24 = r9
uint32_t rcx_3 = rax_4 s>> 2 & 0x80000001

if (rcx_3 s< 0)
    rcx_3 = ((rcx_3 - 1) | 0xfffffffe) + 1

rdx_4.b = rcx_3 == 1

if (r8_1 == 5 && r9 s<= 1)
    int64_t zmm0 = r8_1.q
    
    if (((r8_1 - 2) & 0xfffffffd) == 0)
        rcx_3 = zx.d(rdx_4.b)
    label_141461d37:
        
        if ((zmm0 u>> 0x20).d == r9 && rcx_3.b == rdx_4.b)
            return sub_141461df0(5, *arg1) __tailcall
    else
        rcx_3.b = 1
        
        if (zmm0.d == r8_1)
            goto label_141461d37

uint32_t result
result.b = 0
return result
