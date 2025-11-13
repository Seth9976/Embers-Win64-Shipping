// 函数: sub_142662440
// 地址: 0x142662440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140ce3290(arg1)
int64_t* rdi = arg1[4]

if (rdi != 0)
    sub_140cd85e0(rdi)
    void* rax = sub_1425aaa30()
    void* rdx_1 = rdi[2]
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rdx_1 + 0x38))
        uint64_t result_1 = result
        result = *(rdx_1 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax + 0x30)
            return (*(*arg1 + 0x260))(arg1, rdi[0x11])

return result
