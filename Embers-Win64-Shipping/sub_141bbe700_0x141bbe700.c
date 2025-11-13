// 函数: sub_141bbe700
// 地址: 0x141bbe700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx
rcx.b = sub_140b5b8a0(data_143f31500.d, 0).b == 0
int64_t result
result.b = data_143f31500:4.d != 0
result.b |= rcx.b

if (result.b != 0)
    result = sub_140d3c6e0(&data_143f314f8)
    
    if (result != 0)
        result = sub_140d1fd20(result, data_143f31500)
        
        if (result != 0)
            int64_t* rax = sub_140d3c6e0(&data_143f314f8)
            sub_140d1fd30(rax, data_143f31500)
            jump(*(*rax + 0x210))

void* const rdi = data_143f5b298

if (rdi == 0)
    rdi = nullptr
else
    void* rax_2 = sub_1424ad0c0()
    void* rdx_4 = *(rdi + 0x10)
    result = sx.q(*(rax_2 + 0x38))
    
    if (result.d s> *(rdx_4 + 0x38))
        rdi = nullptr
    else
        int64_t result_1 = result
        result = *(rdx_4 + 0x30)
        
        if (*(result + (result_1 << 3)) != rax_2 + 0x30)
            rdi = nullptr

int64_t* rbx_1 = *(rdi + 0xdf8)

if (rbx_1 != 0)
    result = zx.q(rbx_1[1].d)
    
    if (result.d != 0)
        result = zx.q(result.d + 1)
        rbx_1[1].d = result.d
        
        if (rbx_1 != 0)
            void* rcx_4 = *(rdi + 0xdf0)
            
            if (rcx_4 != 0)
                result = sub_140e21770(rcx_4)
            
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    return (*(*rbx_1 + 8))(rbx_1, 1)

return result
