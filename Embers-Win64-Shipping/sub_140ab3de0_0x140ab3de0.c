// 函数: sub_140ab3de0
// 地址: 0x140ab3de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
int64_t* result = (*(*rcx + 0x10))(rcx)
int64_t rdx = sx.q(result[1].d)

if (rdx.d s> 1)
    int16_t* i = *result
    void* rcx_1 = &i[rdx]
    void* rdi_1 = rcx_1 - 2
    
    if (rdx.d == 0)
        rdi_1 = rcx_1
    
    for (; i != rdi_1; i = &i[1])
        if (sub_140a81220(*i).b == 0)
            result.b = 0
            return result

result.b = 1
return result
