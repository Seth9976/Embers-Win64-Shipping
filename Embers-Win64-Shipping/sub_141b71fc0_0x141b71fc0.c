// 函数: sub_141b71fc0
// 地址: 0x141b71fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
sub_141b721b0(arg1, &var_18, arg2)
void* rbx = var_18
void* const result

if (rbx == 0)
    result = nullptr
else
    result = *(rbx + 0x3a0)
    
    if (result == 0)
        result = nullptr
    else
        void* rax_1 = sub_141c122a0()
        void* rdx_1 = *(result + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            result = nullptr

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        int64_t rdx_2 = *var_10
        (*rdx_2)(var_10, rdx_2)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_2 = *var_10
            (*(r8_2 + 8))(var_10, 1, r8_2)

return result
