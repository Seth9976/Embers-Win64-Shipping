// 函数: sub_141a52fb0
// 地址: 0x141a52fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1425a4180()
void* rcx = arg1[2]
int64_t rax_1 = sx.q(*(rax + 0x38))
int64_t result

if (rax_1.d s> *(rcx + 0x38) || *(*(rcx + 0x30) + (rax_1 << 3)) != rax + 0x30)
    result = sub_14259f000()
else
    void* rax_3
    int32_t zmm0_1
    rax_3, zmm0_1 = sub_1425a4180()
    void* rdx_2 = arg1[2]
    result = sx.q(*(rax_3 + 0x38))
    
    if (result.d s<= *(rdx_2 + 0x38))
        int64_t result_1 = result
        result = *(rdx_2 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_3 + 0x30)
            result = (*(*arg1 + 0x288))(arg1, rdx_2)
            
            if (not(zmm0_1 f!= 10000f))
                arg1[0x1f].d

return result
