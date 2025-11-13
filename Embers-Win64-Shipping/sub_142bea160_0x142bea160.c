// 函数: sub_142bea160
// 地址: 0x142bea160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x10)
int32_t rbx = 0
uint32_t rdi_1 = zx.d(*(arg1 + 8)) u>> 1
int32_t arg_8
char* result = sub_142b99a90(arg2, 1, 0, rdi_1 + 1, 0, &arg_8)

if (arg_8 != 0)
    return 0

if (rdi_1 != 0)
    char* result_1 = result
    char* rdx = rsi - 1
    
    do
        uint32_t rax_2 = zx.d(rdx[1])
        rdx = &rdx[2]
        uint32_t rax_4 = rax_2 << 8 | zx.d(*rdx)
        
        if (rax_4 == 0)
            break
        
        if (rax_4 - 0x20 u> 0x5f)
            rax_4 = 0x3f
        
        rbx += 1
        *result_1 = rax_4.b
        result_1 = &result_1[1]
    while (rbx u< rdi_1)

*(zx.q(rbx) + result) = 0
return result
