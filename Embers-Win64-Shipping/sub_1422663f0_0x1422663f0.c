// 函数: sub_1422663f0
// 地址: 0x1422663f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x298)
int64_t result

if (rbx != 0)
    void* rax = sub_14254f450()
    void* rdx_1 = *(rbx + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (result << 3)) == rax + 0x30)
        int64_t* rcx_1 = *(rbx + 0x1310)
        
        if (*rcx_1 != 0 && *(rbx + 0x134) != 1)
            *(rbx + 0x138) |= 1
            int64_t* rcx_2 = *rcx_1
            (*(*rcx_2 + 0x278))(rcx_2, 0)
        
        result.b = 1
        return result

result.b = 0
return result
