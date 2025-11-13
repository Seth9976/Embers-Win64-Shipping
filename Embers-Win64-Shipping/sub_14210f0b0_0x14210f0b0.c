// 函数: sub_14210f0b0
// 地址: 0x14210f0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x40)
char r8 = *(arg4 + 8)
int32_t r10 = *(arg4 + 0xc)
int64_t rsi = sx.q(arg2[1].d)
int64_t r14_1 = rsi * 2
char var_10 = r8
int32_t var_c = r10
int32_t* r11 = *arg2
int32_t* rax_1 = r11
void* r9 = &r11[r14_1 * 2]
int64_t result

if (r11 != r9)
    while (*rax_1 != rax.d || rax_1[1] != rax:4.d || rax_1[2].b != r8 || rax_1[3] != r10)
        rax_1 = &rax_1[4]
        
        if (rax_1 == r9)
            goto label_14210f13c
    
    result = (rax_1 - r11) s>> 4

if (r11 == r9 || result.d == 0xffffffff)
label_14210f13c:
    int32_t rax_3 = (rsi + 1).d
    arg2[1].d = rax_3
    
    if (rax_3 s> *(arg2 + 0xc))
        sub_1405a4f90(arg2)
    
    result = *arg2
    *(result + (r14_1 << 3)) = rax.o

if (rsi.d != arg2[1].d)
    int64_t rbx_1 = sx.q(arg3[1].d)
    int32_t rax_4 = (rbx_1 + 1).d
    arg3[1].d = rax_4
    
    if (rax_4 s> *(arg3 + 0xc))
        sub_1405a4f90(arg3)
    
    result = *arg3
    *(result + rbx_1 * 0x10) = *(arg1 + 0x48)

return result
