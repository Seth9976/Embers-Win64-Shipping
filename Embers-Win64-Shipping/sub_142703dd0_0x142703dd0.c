// 函数: sub_142703dd0
// 地址: 0x142703dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rax_1 = (*(*arg1 + 0x3f8))()
int32_t rdx = *(arg1 + 0x1c4)

if (rdx s> *(arg1 + 0x1dc))
    rax_1 = sub_1408cf3a0(&arg1[0x3a], rdx)

if (arg1[0x4f].b != 2)
    rax_1 = sub_142709c00(arg1)
    
    if ((*(arg1 + 0x274) & 0x10) == 0)
        int64_t rax_2 = arg1[0x15]
        
        if (rax_2 == 0)
            rax_2 = sub_141ee69e0(arg1)
        
        if (rax_2 == 0)
            arg1[0x4f].b = 2
            return rax_2
        
        void* rdi_1 = *(rax_2 + 0x120)
        
        if (rdi_1 == 0)
            arg1[0x4f].b = 2
            return rax_2
        
        void* rax_3 = sub_14269bba0()
        void* rdx_1 = *(rdi_1 + 0x10)
        rax_2 = sx.q(*(rax_3 + 0x38))
        
        if (rax_2.d s> *(rdx_1 + 0x38))
            arg1[0x4f].b = 2
            return rax_2
        
        int64_t rcx_3 = rax_2
        rax_2 = *(rdx_1 + 0x30)
        
        if (*(rax_2 + (rcx_3 << 3)) != rax_3 + 0x30 || (*(rdi_1 + 0x39a) & 4) != 0)
            arg1[0x4f].b = 2
            return rax_2
        
        int32_t var_10_1 = 0
        rax_1 = sub_140a84c80(0, 0x30, 0)
        void** rdi_2 = rax_1
        
        if (rax_1 != 0)
            *rdi_2 = &data_142e33ea8
            sub_140d3a3a0(&rdi_2[1], arg1)
            *(rdi_2 + 0x10) = sub_1426f44d4.o
            rdi_2[5] = sub_140a387b0()
            *rdi_2 = &data_142e33f00
            sub_140599630(rdi_1 + 0xe0, 1)
            void arg_8
            (*(*rdi_2 + 0x30))(rdi_2, &arg_8)
            int64_t rbx_1 = sx.q(*(rdi_1 + 0xe8))
            int32_t rax_6 = (rbx_1 + 1).d
            *(rdi_1 + 0xe8) = rax_6
            
            if (rax_6 s> *(rdi_1 + 0xec))
                sub_1405a4f90(rdi_1 + 0xe0)
            
            rax_1 = (rbx_1 << 4) + *(rdi_1 + 0xe0)
            *rax_1 = rdi_2
            rax_1[1].d = 3

return rax_1
