// 函数: sub_142670300
// 地址: 0x142670300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141fa49d0(arg1, arg2)
int64_t* rcx = &arg1[0x5c]
*arg1 = &data_143458578
arg1[0x48] = 0
arg1[0x49].d = 0x41200000
__builtin_memset(&arg1[0x4a], 0, 0x14)
__builtin_memset(&arg1[0x4d], 0, 0x78)
rcx[2] = 0
rcx[3].d = 0
*(rcx + 0x1c) = 0x80
int64_t* rax = rcx[2]

if (rax != 0)
    rcx = rax

*rcx = 0
rcx[1] = 0
arg1[0x60].d = 0xffffffff
*(arg1 + 0x304) = 0
arg1[0x62] = 0
arg1[0x63].d = 0
arg1[0x64].d = 0xffffffff

if (arg2 != 0)
    void* const rbx_1 = arg2[0x14]
    void* rax_1
    int64_t rax_2
    void* rdx
    
    if (rbx_1 != 0)
        rax_1 = sub_1426a0b20()
        rdx = *(rbx_1 + 0x10)
        rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rbx_1 == 0 || rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        rbx_1 = nullptr
    
    arg1[0x4a] = rbx_1
    
    if (rbx_1 != 0)
        int64_t zmm0_1
        zmm0_1.d = (*(rbx_1 + 0x24c)).d f* 0.100000001f
        zmm0_1.d = zmm0_1.d f+ arg1[0x49].d
        arg1[0x49].d = zmm0_1.d
        *(arg1 + 0x24c) ^= (*(rbx_1 + 0x2a8) u>> 3 ^ *(arg1 + 0x24c)) & 2
        int32_t rax_8 = *(arg1 + 0x24c)
        int32_t rcx_6 = ((*(rbx_1 + 0x2a8) u>> 5 ^ rax_8) & 1) ^ rax_8
        *(arg1 + 0x24c) = rcx_6
        *(arg1 + 0x24c) = ((*(rbx_1 + 0x2a8) u>> 4 ^ rcx_6) & 4) ^ rcx_6
        void* rax_14 = rbx_1 + 0x2e0
        
        if ((*(rbx_1 + 0x2a8) & 8) == 0)
            rax_14 = &data_143b515c8
        
        *(arg1 + 0x324) = *rax_14
        *(arg1 + 0x32c) = *(rax_14 + 8)
        void* rax_16 = *(rbx_1 + 0x2f0)
        
        if (rax_16 != 0)
            int32_t i = 0
            
            if (*(rax_16 + 0x30) s> 0)
                int64_t r14_1 = 0
                
                do
                    int64_t rbx_2 = sx.q(arg1[0x4f].d)
                    int64_t* r12_1 = *(*(rbx_1 + 0x2f0) + 0x28)
                    int32_t rax_18 = (rbx_2 + 1).d
                    arg1[0x4f].d = rax_18
                    
                    if (rax_18 s> *(arg1 + 0x27c))
                        sub_140638a00(&arg1[0x4e])
                    
                    int64_t rcx_8 = arg1[0x4e]
                    int64_t rdx_2 = rbx_2 * 3
                    *(rcx_8 + (rdx_2 << 2)) = *(r12_1 + r14_1)
                    *(rcx_8 + (rdx_2 << 2) + 8) = *(r12_1 + r14_1 + 8)
                    *(*(arg1[0x4a][0x5e] + 0x28) + r14_1 + 0x1a)
                    int64_t var_38
                    sub_140a2e390(&var_38, u"%d-%d", zx.q(i))
                    int64_t rbx_3 = sx.q(arg1[0x51].d)
                    int32_t rax_22 = (rbx_3 + 1).d
                    arg1[0x51].d = rax_22
                    
                    if (rax_22 s> *(arg1 + 0x28c))
                        sub_1405a4f90(&arg1[0x50])
                    
                    int64_t* rcx_14 = &arg1[0x50][rbx_3 * 2]
                    *rcx_14 = 0
                    *rcx_14 = var_38
                    var_38 = 0
                    int32_t var_30
                    rcx_14[1].d = var_30
                    int32_t var_2c
                    *(rcx_14 + 0xc) = var_2c
                    int64_t rcx_15 = var_38
                    var_30.q = 0
                    
                    if (rcx_15 != 0)
                        sub_140a74f90(rcx_15)
                    
                    rbx_1 = arg1[0x4a]
                    i += 1
                    r14_1 += 0x20
                while (i s< *(*(rbx_1 + 0x2f0) + 0x30))
        
        sub_142682b00(arg1)

return arg1
