// 函数: sub_140d17260
// 地址: 0x140d17260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[0x11].d)
int32_t r9 = 0
int64_t* rbx = arg1
int64_t* result
int64_t* result_1

if (rdi.d s> 0)
    int64_t* result_2 = arg1[0x10]
    result_1 = arg1
    int64_t r8 = 0
    
    if (result_2 != 0)
        result_1 = result_2
    
    result = result_1
    
    while (*result != arg2)
        r9 += 1
        r8 += 1
        result = &result[2]
        
        if (r8 s>= rdi)
            goto label_140d172a9

if (rdi.d s<= 0 || r9 == 0xffffffff)
label_140d172a9:
    int32_t rax_1 = (rdi + 1).d
    arg1[0x11].d = rax_1
    void* var_10_1 = arg3
    
    if (rax_1 s> *(arg1 + 0x8c))
        sub_14088f800(arg1, rdi.d)
    
    int64_t* rax_2 = rbx[0x10]
    
    if (rax_2 != 0)
        rbx = rax_2
    
    result = rdi * 2
    *(rbx + (result << 3)) = arg2.o
else if (arg3 != 0)
    int64_t rdx_2 = sx.q(r9) * 2
    result = result_1[rdx_2 + 1]
    
    if (result != 0)
        int64_t rcx = sx.q(*(arg3 + 0x38))
        
        if (rcx.d s> result[7].d)
            result_1[rdx_2 + 1] = arg3
            return result
        
        result = result[6]
        
        if (result[rcx] != arg3 + 0x30)
            result_1[rdx_2 + 1] = arg3

return result
