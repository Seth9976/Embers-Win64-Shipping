// 函数: sub_1408e5200
// 地址: 0x1408e5200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x360)
int64_t result

if (rbx != 0)
    void* rax = sub_1408ea9e0()
    void* r9_1 = *(rbx + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(r9_1 + 0x38) && *(*(r9_1 + 0x30) + (result << 3)) == rax + 0x30)
        int32_t rdx
        int32_t var_18 = rdx
        int64_t rax_1 = *(rbx + 0xb0)
        void* var_28 = rbx + 0x98
        int64_t* rcx_2 = *(rbx + 0xa8)
        int64_t var_20 = rax_1 + 0x68
        int64_t r8
        int64_t var_10 = r8
        return (*(*rcx_2 + 0x10))(rcx_2, &var_28)

result.b = 0
return result
