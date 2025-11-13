// 函数: sub_142186d90
// 地址: 0x142186d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x48) == 1)
    sub_1421953f0(arg1 + 0x40, 1, 1)
    void* rax_1
    int64_t r9_1
    int512_t zmm2_1
    rax_1, r9_1, zmm2_1 = sub_142180670(arg1)
    int128_t zmm6 = 0x41200000
    *(*(arg1 + 0x40) + 8) = rax_1
    *(rax_1 + 0xb0) |= 1
    *(rax_1 + 0x28) = 1
    *(rax_1 + 0xb4) = 0
    void* rbx_1 = **(arg1 + 0x40)
    *(rax_1 + 0x2c) ^= (*(rbx_1 + 0x2c) ^ *(rax_1 + 0x2c)) & 1
    void* r14_1 = *(rbx_1 + 0x48)
    
    if (r14_1 != 0)
        void* rax_2
        rax_2, r9_1 = sub_142557290()
        void* rdx = *(r14_1 + 0x10)
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
            zmm6 = 0x42c80000
    
    if (arg2 == 1)
        zmm6 = 0x42c80000
    
    r9_1.b = 1
    zmm2_1.o = zmm6
    char rax_6 = (*(*rax_1 + 0x268))(rax_1, rbx_1, zmm2_1, r9_1, arg3)
    
    if (rax_6 == 0)
        return rax_6
    
    sub_140d25500(arg1)

uint64_t rax
rax.b = 1
return rax
