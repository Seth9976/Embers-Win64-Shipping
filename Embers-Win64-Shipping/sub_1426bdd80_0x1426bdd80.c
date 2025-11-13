// 函数: sub_1426bdd80
// 地址: 0x1426bdd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[0x12].d

if ((rbx.b & 1) == 0)
    int64_t result
    result.b = 0
    return result

int64_t* rcx = arg1[5]
uint32_t rbx_1

if (rcx == 0)
    rbx_1 = rbx & 0xfffffffe
    arg1[0x12].d = rbx_1
else
    (*(*rcx + 0x290))(rcx)
    rbx_1 = zx.d(arg1[0x12].b)

rbx_1.b = not.b(rbx_1.b)
rbx_1.b &= 1

if (rbx_1.b != 0)
    void* rax_1 = arg1[7]
    int64_t rdx_1
    
    if (rax_1 == 0)
        rdx_1 = 0
    else
        rdx_1 = *(rax_1 + 0xb0)
    
    sub_14273f470(arg1, rdx_1)

return zx.q(rbx_1.b)
