// 函数: sub_1421f7090
// 地址: 0x1421f7090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (sub_140a80f40() == 0)
    if (data_143f138f4 == 0)
        uint32_t rax_4
        
        if (data_143de5480 != 0)
            rax_4.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_4.b != 0)
            return sub_1421d9420() __tailcall
    
    void var_28
    void** rax_6 = sub_1421e14e0(&var_28, nullptr, 0xff)
    void* rcx_5 = *rax_6
    int32_t r8_3 = rax_6[2].d
    int64_t* rdx_4 = rax_6[1]
    int64_t* rbx_1 = *(rcx_5 + 0x18)
    int64_t* arg_10 = rbx_1
    void* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_10
    
    result = sub_1405a5890(rcx_5, rdx_4, r8_3, 1)
    
    if (rbx_1 != 0)
        result = zx.q(*rdi_1)
        *rdi_1 -= 1
        
        if (result.d == 1)
            return sub_140a2f6e0(arg_10)
else
    sub_1421dfc30(&data_143f50880)
    int32_t rax_1 = data_143f50948
    result = zx.q(rax_1 - 1)
    int64_t rbx = sx.q(result.d)
    
    if (rax_1 - 1 s>= 0)
        int64_t temp2_1
        
        do
            result = data_143f50940
            int64_t* rcx_1 = *(result + (rbx << 3))
            
            if (rcx_1[0x29].b != 0)
                result = (**rcx_1)(rcx_1, 1)
            
            temp2_1 = rbx
            rbx -= 1
        while (temp2_1 - 1 s>= 0)
    
    bool cond:1_1 = data_143f5094c == 0
    data_143f50948 = 0
    
    if (not(cond:1_1))
        return sub_1405c5570(&data_143f50940, 0) __tailcall

return result
