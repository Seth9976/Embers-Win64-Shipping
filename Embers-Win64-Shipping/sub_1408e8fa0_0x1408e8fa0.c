// 函数: sub_1408e8fa0
// 地址: 0x1408e8fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x360)
int64_t result

if (rbx == 0)
    result.b = 0
else
    void* rax = sub_1408ea9e0()
    void* rdx_1 = *(rbx + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s> *(rdx_1 + 0x38))
        result.b = 0
    else if (*(*(rdx_1 + 0x30) + (result << 3)) != rax + 0x30)
        result.b = 0
    else
        int32_t result_1 = *arg4
        void* rbp_1 = *(rbx + 0xb0)
        result = sub_1408e26b0(rbp_1, arg2, arg3)
        int32_t result_2 = result.d
        
        if (result.d != result_1)
            int64_t* rcx_2 = *(rbx + 0xa8)
            result = zx.q(result_1)
            
            if (rcx_2 != 0)
                void* var_38 = rbx + 0x98
                void* var_30_1 = rbp_1 + 0x68
                int64_t var_20_1 = arg5
                int32_t result_3 = result_2
                (*(*rcx_2 + 0x10))(rcx_2, &var_38)
                result = zx.q(result_2)
                *arg4 = result_2
            
            result.b = result_1 != result.d
        else
            result.b = 0

return result
