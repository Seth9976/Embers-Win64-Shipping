// 函数: sub_1410097b0
// 地址: 0x1410097b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx = zx.d(arg5)
sub_141009eb0(arg1, *(arg2 + 0x20), *(arg2 + 0x10), arg4, rbx.b)
arg1[0x27] = arg2
*arg1 = &data_142efd308
int32_t rax = *(arg2 + 0x10)
arg1[0x28] = arg2
arg1[0x29].d = *(arg2 + 0x10)
*(arg1 + 0x14c) = rax
sub_14103f450(&arg1[0x2a], arg2)
arg1[0x37].d = 0x10000
*(arg1 + 0x1bc) = 0x10000
arg1[0x38] = &data_142efcd90
arg1[0x39] = 0
arg1[0x3a] = 0
arg1[0x3c] = arg2
arg1[0x3d] = 0
arg1[0x3e] = 0
int64_t* rax_1 = j_sub_140a82f30(0x10)

if (rax_1 == 0)
    rax_1 = nullptr
else
    *rax_1 = 0

arg1[0x41] = rax_1
arg1[0x40] = rax_1
InitializeCriticalSection(&arg1[0x42])
SetCriticalSectionSpinCount(&arg1[0x42], 0xfa0)
arg1[0x47].d = rbx * 2
arg1[0x48] = 0
arg1[0x49] = 0
sub_14103fd30(&arg1[0x4a], *(arg2 + 0x10))
void* r15 = &arg1[0x70c]
arg1[0x6a0] = *(*(arg2 + 0x20) + 0x10)
__builtin_memset(&arg1[0x6a9], 0, 0x14)
__builtin_memset(r15, 0, 0x300)
*(arg1 + 0x3b6c) = 0x22
arg1[0x76e] = 0
arg1[0x76f].w = 0
*(arg1 + 0x3b7a) = 0
*(arg1 + 0x3b7c) = 0xc0
arg1[0x776] = arg2
arg1[0x774] = &data_142efcde8
arg1[0x978] = 0
arg1[0x979].b = 0
arg1[0x97a] = &arg1[0x28]
memset(&arg1[0x778], 0, 0x1000)
arg1[0x97e] = arg2
arg1[0x97c] = &data_142efcde8
arg1[0xb80] = 0
arg1[0xb81].b = 0
arg1[0xb82] = &arg1[0x28]
memset(&arg1[0x980], 0, 0x1000)
arg1[0xb86] = arg2
arg1[0xb84] = &data_142efcde8
arg1[0xd88] = 0
arg1[0xd89].b = 0
arg1[0xd8a] = &arg1[0x28]
memset(&arg1[0xb88], 0, 0x1000)
arg1[0xd8e] = arg2
arg1[0xd8c] = &data_142efcde8
arg1[0xf90] = 0
arg1[0xf91].b = 0
arg1[0xf92] = &arg1[0x28]
memset(&arg1[0xd90], 0, 0x1000)
arg1[0xf96] = arg2
arg1[0xf94] = &data_142efcde8
arg1[0x1198] = 0
arg1[0x1199].b = 0
arg1[0x119a] = &arg1[0x28]
memset(&arg1[0xf98], 0, 0x1000)
arg1[0x119e] = arg2
arg1[0x119c] = &data_142efcde8
arg1[0x13a0] = 0
arg1[0x13a1].b = 0
arg1[0x13a2] = &arg1[0x28]
memset(&arg1[0x11a0], 0, 0x1000)
arg1[0x13a4] = 0
arg1[0x13a5] = 0
arg1[0x76c] = 0
arg1[0x76d].d = 0
memset(&arg1[0x6ac], 0, 0x300)

for (int32_t i = 0; i u< 6; )
    int32_t j = 0
    void* rdi_1 = r15
    
    do
        int64_t* rbx_1 = *rdi_1
        *rdi_1 = 0
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                char rax_4
                
                if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                    rax_4 = sub_1405949a0()
                
                if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_4 != 0))
                    (**rbx_1)(rbx_1, 1)
                else
                    bool z_1
                    
                    if (0 == *(rbx_1 + 0xc))
                        *(rbx_1 + 0xc) = 1
                        z_1 = true
                    else
                        *(rbx_1 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_6 = sub_140a20af0()
                        uint64_t rdx_3 = zx.q(rax_6)
                        void* const rax_7
                        
                        if (rax_6 != 0)
                            rax_7 = *(&data_143cf0bf8 + (rdx_3 u>> 0xe << 3))
                                + (zx.q(rdx_3.d) & 0x3fff) * 0x18
                        else
                            rax_7 = nullptr
                        
                        *(rax_7 + 8) = rbx_1
                        sub_1405a42f0(&data_143f02390, rdx_3.d)
        
        j += 1
        rdi_1 += 8
    while (j u< 0x10)
    
    i += 1
    r15 -= -0x80

char var_38
var_38.q = arg3
__builtin_memset(&arg1[0x6a1], 0, 0x40)
sub_14104cd90(&arg1[0x4a], arg1[0x27], arg1, 0, var_38)
sub_1419ce440()
int64_t rbx_2 = sx.q(arg1[0x13a5].d)
int64_t rdi_2 = sx.q(data_143f213d8)
int32_t rax_12 = (rdi_2 + rbx_2).d
arg1[0x13a5].d = rax_12

if (rax_12 s> *(arg1 + 0x9d2c))
    sub_1405a4d70(&arg1[0x13a4])

memset(&arg1[0x13a4][rbx_2], 0, rdi_2 << 3)
return arg1
