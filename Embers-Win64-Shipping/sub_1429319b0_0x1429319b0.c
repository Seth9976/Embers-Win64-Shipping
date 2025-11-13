// 函数: sub_1429319b0
// 地址: 0x1429319b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* result = nullptr
void* rax = sub_142898ba0()

if (rax != 0)
    int64_t* result_1 = sub_1428a6730(0x18)
    result = result_1
    
    if (result_1 != 0)
        int32_t i = 0
        char* rdx_1 = arg2
        
        if (*arg2 != 0)
            while (i u< 0x80000000)
                rdx_1 = &rdx_1[1]
                i += 1
                
                if (*rdx_1 == 0)
                    break
        
        int64_t rbp_1 = sx.q((i & 0x7fffffff) + 1)
        int64_t rax_1 = sub_1428a6730(rbp_1)
        *result = rax_1
        
        if (rax_1 != 0)
            memcpy(rax_1, arg2, rbp_1.d)
            result[1] = 0
            result[2] = rax
            
            if (sub_1428a8a90(*(arg1 + 0x10), result) == 0 && sub_142890ee0(*(arg1 + 0x10)) s<= 0)
                return result

sub_142898a10(rax)

if (result != 0)
    sub_1428a6780(*result)

sub_1428a6780(result)
return nullptr
