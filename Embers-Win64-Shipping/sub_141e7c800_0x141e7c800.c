// 函数: sub_141e7c800
// 地址: 0x141e7c800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1

if (data_143a2d440 == 0)
    return 0

if (arg1[6].d s>= data_143a2d444 || arg1[5].d == 0)
    sub_141e7b230(result)
else
    int64_t* rax_1 = arg1[4]
    
    if (rax_1 != 0)
        arg1 = rax_1
    
    void* rdx_1 = *arg1
    
    if (rdx_1 == 0)
        sub_141e7b230(result)
    else
        int64_t rax_2 = 0
        
        if (0 == *(rdx_1 + 8))
            *(rdx_1 + 8) = 0
        else
            rax_2 = *(rdx_1 + 8)
        
        if (((rax_2 u>> 0x1a).b & 1) != 0)
            sub_141e7b230(result)

if (result[5].d == 0)
    int64_t* arg_18
    int64_t** rax_4 = sub_140a228d0(&arg_18)
    int64_t rdi_1 = sx.q(result[5].d)
    int32_t rcx_2 = (rdi_1 + 1).d
    result[5].d = rcx_2
    
    if (rcx_2 s> *(result + 0x2c))
        sub_14083a490(result, rdi_1.d)
    
    int64_t* result_2 = result[4]
    int64_t* result_1 = result
    
    if (result_2 != 0)
        result_1 = result_2
    
    result_1[rdi_1] = *rax_4
    *rax_4 = nullptr
    int64_t* rcx_4 = arg_18
    
    if (rcx_4 != 0)
        rcx_4[9].d -= 1
        
        if (rcx_4[9].d == 1)
            sub_140a2f6e0(rcx_4)

result[6].d += 1
return result
