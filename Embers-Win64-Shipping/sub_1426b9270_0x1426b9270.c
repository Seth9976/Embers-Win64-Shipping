// 函数: sub_1426b9270
// 地址: 0x1426b9270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x84) - 3 u<= 1)
    int32_t result
    result.b = 0
    return result

arg1[0x12].d |= 1
char rdi = (arg1[0x12].d).b
int64_t* rcx = arg1[5]

if (rcx != 0)
    (*(*rcx + 0x288))(rcx)
    rdi = arg1[0x12].b

rdi &= 1

if (rdi != 0)
    void* rax_2 = arg1[7]
    int64_t rdx_1
    
    if (rax_2 == 0)
        rdx_1 = 0
    else
        rdx_1 = *(rax_2 + 0xb0)
    
    sub_14273f430(arg1, rdx_1)

return zx.q(rdi)
