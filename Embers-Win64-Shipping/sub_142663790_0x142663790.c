// 函数: sub_142663790
// 地址: 0x142663790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x150))()

if (result == 0)
    result.b = 0
else if (sub_14243ade0(result).b != 0)
    result.b = 0
else
    result.b = 1

int128_t zmm6
zmm6.d = arg2.d f+ *(arg1 + 0x354)
*(arg1 + 0x354) = zmm6.d

if (result.b == 0)
    arg2 = arg1[0x6a].d

if (result.b == 0 && (arg2.d f== 0f || not(zmm6.d f>= 1f f/ arg2.d)))
    result.b = 0
else
    result.b = 1

if (arg1[0x6c].d s> 0 && result.b != 0)
    int64_t* rbx_1 = arg1[0x12]
    int64_t rdi_1 = 0
    result = &rbx_1[arg1[0x13]]
    uint64_t r14_2 = sx.q(arg1[0x13].d) << 3 u>> 3
    
    if (rbx_1 u> result)
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            int64_t* rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                result = (*(*rcx_1 + 0x6b8))(rcx_1, &arg1[0x6b])
            
            rbx_1 = &rbx_1[1]
            rdi_1 += 1
        while (rdi_1 != r14_2)
    
    *(arg1 + 0x354) = 0
    arg1[0x6c].d = 0
    
    if (*(arg1 + 0x364) s<= 0xffffffff)
        return sub_1405a51b0(&arg1[0x6b], 0) __tailcall

return result
