// 函数: sub_1423c5cd0
// 地址: 0x1423c5cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int64_t result = sub_140d23dc0(arg1, 0x30)

if (result.b == 0)
    void* rax
    float zmm0_1
    rax, zmm0_1 = sub_141fe0c50(0)
    int32_t rax_3 = sub_1423bd270(sub_1405e25d0(sub_141fe0f50(rax)), arg1, 1, zmm0_1)
    void* rdi_1 = arg1[4]
    arg1[7].d = rax_3
    
    if (rdi_1 == 0)
        return (*(*arg1 + 0x2f8))(arg1)
    
    void* rax_4 = sub_1425b3c70()
    void* rdx_2 = *(rdi_1 + 0x10)
    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_5.d s> *(rdx_2 + 0x38))
        return (*(*arg1 + 0x2f8))(arg1)
    
    result = *(rdx_2 + 0x30)
    
    if (*(result + (rax_5 << 3)) != rax_4 + 0x30)
        return (*(*arg1 + 0x2f8))(arg1)

return result
