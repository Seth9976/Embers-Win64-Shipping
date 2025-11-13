// 函数: sub_142662270
// 地址: 0x142662270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd1570(arg1)
int64_t result = (*(*arg1 + 0x150))(arg1)
int64_t result_2 = result
void* const rbx_1

if (result == 0)
    rbx_1 = nullptr
else
    rbx_1 = *(result + 0x120)
    
    if (rbx_1 == 0)
        rbx_1 = nullptr
    else
        void* rax_1 = sub_14269bba0()
        void* rdx_1 = *(rbx_1 + 0x10)
        result = sx.q(*(rax_1 + 0x38))
        
        if (result.d s> *(rdx_1 + 0x38))
            rbx_1 = nullptr
        else
            int64_t result_1 = result
            result = *(rdx_1 + 0x30)
            
            if (*(result + (result_1 << 3)) != rax_1 + 0x30)
                rbx_1 = nullptr

if ((arg1[0x55].b & 4) != 0)
    if (result_2 == 0)
        return (*(*arg1 + 0x630))(arg1)
    
    if (sub_14243ac50(result_2) != 3 && rbx_1 == 0)
        return (*(*arg1 + 0x630))(arg1)
    
    result = sub_14243ac50(result_2)
    
    if (result.d == 3 && (*(arg1 + 0x59) & 1) == 0)
        return (*(*arg1 + 0x630))(arg1)

return result
