// 函数: sub_142226270
// 地址: 0x142226270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
bool cond:0 = *(arg1 + 0x2c) == 0x20
char* rbx = arg1
*(arg1 + 0x28) = 0

if (not(cond:0))
    sub_14083ad30(&arg1[0x20], 0x20)

uint64_t result = sub_141ec4150()
void* r14 = &data_143f3a640 - rbx
uint64_t result_1 = result

do
    if (*rbx != *(r14 + rbx))
        int32_t arg_8
        sub_141eca510(result_1, &arg_8, i)
        int32_t rcx_3
        rcx_3.b = sub_140b5b8a0(arg_8, 0).b == 0
        result.b = arg2 != 0
        result.b |= rcx_3.b
        
        if (result.b != 0)
            int64_t rax = arg_8.q
            int64_t rbp_1 = sx.q(*(arg1 + 0x28))
            char rax_1 = *rbx
            int32_t rax_2 = (rbp_1 + 1).d
            *(arg1 + 0x28) = rax_2
            
            if (rax_2 s> *(arg1 + 0x2c))
                sub_14083a7e0(&arg1[0x20])
            
            int64_t rax_3 = *(arg1 + 0x20)
            int64_t rcx_6 = rbp_1 * 3
            *(rax_3 + (rcx_6 << 2)) = rax
            result = zx.q(rax_1.d)
            *(rax_3 + (rcx_6 << 2) + 8) = result.d
    
    i += 1
    rbx = &rbx[1]
while (i u< 0x20)

return result
