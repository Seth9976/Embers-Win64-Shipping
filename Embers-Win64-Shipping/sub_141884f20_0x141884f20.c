// 函数: sub_141884f20
// 地址: 0x141884f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x40)
int64_t rax_1 = (*(*rcx + 0x10))(rcx)
int64_t rbp = rax_1

if (rax_1 != 0)
    return rax_1

*(arg1 + 0x88) = 1
void arg_8
void arg_18

if (*sub_140910250(arg1 + 0x130, &arg_8, arg2) != 0xffffffff
        && *sub_140b162a0(arg1 + 0x1d0, &arg_18, arg2) != 0xffffffff)
    int128_t zmm6
    int128_t var_48_1 = zmm6
    
    while (true)
        void* rdx_2 = **(arg1 + 0x278)
        
        if (rdx_2 == 0)
            void var_d4
            int32_t* rax_7
            int512_t zmm1_1
            rax_7, zmm1_1 = sub_140b162a0(arg1 + 0x280, &var_d4, arg2)
            
            if (*rax_7 != 0xffffffff)
                break
            
            int64_t* rcx_12 = *(arg1 + 0x40)
            int64_t rax_9 = (*(*rcx_12 + 0x10))(rcx_12, arg2)
            rbp = rax_9
            
            if (rax_9 != 0)
                break
            
            bool z_1
            
            if (rax_9.d == *(arg1 + 0x84))
                *(arg1 + 0x84) = 0
                z_1 = true
            else
                *(arg1 + 0x84)
                z_1 = false
            
            if (not(z_1))
                break
            
            int64_t* rcx_13 = *(arg1 + 0x30)
            zmm1_1.o = 0x3c23d70a
            (*(*rcx_13 + 0x10))(rcx_13, zmm1_1)
        else
            zmm6 = *(rdx_2 + 8)
            int64_t rcx_3 = *(arg1 + 0x278)
            *(arg1 + 0x278) = rdx_2
            int64_t var_e0_1 = 0
            *(rdx_2 + 8) = 0.o
            j_sub_140a74f90(rcx_3)
            int32_t var_d0
            sub_140598750(arg1 + 0x280, &var_d0)
            int128_t* var_c8
            *var_c8 = zmm6
            var_c8[1].d = 0xffffffff
            void arg_20
            sub_14093ebb0(arg1 + 0x280, &arg_20, sub_140a6b260(var_c8, 0x10), var_c8, var_d0, 
                nullptr)
            int32_t var_c0
            sub_140598750(arg1 + 0xd0, &var_c0)
            int128_t* var_b8
            *var_b8 = zmm6
            var_b8[1].d = 0xffffffff
            void var_d8
            sub_14093ebb0(arg1 + 0xd0, &var_d8, sub_140a6b260(var_b8, 0x10), var_b8, var_c0, 
                nullptr)
    
    void var_b0
    
    if (*(arg1 + 0x90) != 0 && *(arg1 + 0xd8) - *(arg1 + 0x104) s> 0)
        sub_14186ad90(arg1 + 0x90, sub_14077e140(&var_b0, arg1 + 0xd0))

return rbp
