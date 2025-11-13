// 函数: sub_141ef4980
// 地址: 0x141ef4980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = data_143f3a9b8
sub_140b34200("CharacterMovementServerMove", rbp)

if ((*(*arg1 + 0x5c0))(arg1) != 0 && (*(arg1 + 0x8a) & 1) != 0)
    void* rbx_1 = arg1[0x98]
    
    if (rbx_1 == 0)
        void* rax_3 = (*(arg1[0x28] + 0x30))(&arg1[0x28])
        rbx_1 = rax_3
        arg1[0x98] = rax_3
    
    int64_t rdx_1 = *arg1
    
    if ((*(rdx_1 + 0x9c8))(arg1, rdx_1, rbx_1) != 0)
        void* rax_5 = sub_1405be820(arg1)
        double zmm0_1 = sub_141dc5440(arg1[0x29], rax_5)
        float zmm2
        
        if (*(rbx_1 + 0x8c) == 0)
            zmm0_1.d = zmm0_1.d f* *(rbx_1 + 0x7c)
            zmm2 = _mm_min_ss(arg2.d f- *(rbx_1 + 0x60), zmm0_1.d)
        else
            zmm2 = *(rbx_1 + 0x90)
        
        if (not(zmm2 f<= (zx.o(0)).q.d))
            *(rbx_1 + 0x60) = arg2.d
            *(rbx_1 + 0x68) = fconvert.d(zmm2) f+ *(rbx_1 + 0x68)
            int32_t zmm1 = *(rax_5 + 0x520)
            *(rbx_1 + 8) = zmm1
            *(rbx_1 + 0x74) = zmm1
            (*(*arg1 + 0x998))(arg1, arg2.d, zmm2, zx.q(arg4), arg3)

return sub_140b38680("CharacterMovementServerMove", rbp)
