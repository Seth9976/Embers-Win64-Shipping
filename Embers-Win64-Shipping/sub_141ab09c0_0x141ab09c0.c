// 函数: sub_141ab09c0
// 地址: 0x141ab09c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c8
sub_140dd5b90(&var_c8, *arg2)
*arg2
int32_t i = 0
bool result = arg2[8].b != 0
int64_t var_c0
__builtin_memset(&var_c0, 0, 0x33)
sub_141e1c570(arg1 + 0x78, &var_c8, sub_141e295c0(&var_c8))
int64_t var_b0
int64_t var_a8

if (sub_140d3e110(arg1 + 0x38) != 0 && *(arg1 + 0x50) s> 0)
    void* rax_1 = sub_140d3c6e0(arg1 + 0x38)
    int64_t r8_1 = *(*arg2 + 0xb0)
    
    if (r8_1 != 0 && *(rax_1 + 0x38) == r8_1)
        int64_t* rax_2 = sub_140d3c6e0(arg1 + 0x38)
        void var_78
        sub_140dd5b90(&var_78, *arg2)
        *arg2
        bool var_38_1 = arg2[8].b != 0
        int64_t var_70
        __builtin_memset(&var_70, 0, 0x33)
        sub_141e295c0(&var_78)
        
        if (*(arg1 + 0x50) s> 0)
            void* r14_1 = nullptr
            
            do
                int64_t r15_1 = *(arg1 + 0x48)
                uint32_t rcx_8 = zx.d(*(r14_1 + r15_1))
                int64_t* var_98
                int16_t rdx_7
                
                if (rcx_8 s>= var_98[1].d)
                    rdx_7 = -1
                else
                    rdx_7 = *(*var_98 + (zx.q(rcx_8.w) << 1))
                
                float zmm0_1[0x4]
                
                if (rdx_7 == 0xffff)
                    zmm0_1 = zx.o(0)
                else
                    zmm0_1 = *(var_a8 + (zx.q(rdx_7) << 3))
                
                *(r14_1 + r15_1 + 8) = sub_141de16d0(zmm0_1, *(arg1 + 0x88), *(arg1 + 0x90))[0]
                i += 1
                r14_1 += 0xc
            while (i s< *(arg1 + 0x50))
        
        int64_t var_58
        char rax_5
        uint32_t zmm1_1[0x8]
        rax_5, zmm1_1 = sub_141e3f230(rax_2, &var_70, &var_58, arg1 + 0x40)
        
        if (rax_5 != 0)
            if ((*(*rax_2 + 0x278))(rax_2) == 0)
                return sub_141de4c60(&var_c0, &var_70, &var_a8, &var_58, zmm1_1, arg1 + 0x68, 
                    &arg2[1], &arg2[4])
            
            if (*arg2 != var_c8)
                sub_141e295c0(arg2)
            
            sub_141a911c0(&arg2[1], &var_c0)
            arg2[3] = var_b0
            uint32_t zmm1_2[0x8] = sub_141a91450(&arg2[4], &var_a8)
            arg2[8].b = result
            return sub_141de0cd0(&arg2[1], &var_70, &arg2[4], &var_58, zmm1_2, 0x3f800000, 1)

if (*arg2 != var_c8)
    sub_141e295c0(arg2)

sub_141a911c0(&arg2[1], &var_c0)
arg2[3] = var_b0
sub_141a91450(&arg2[4], &var_a8)
arg2[8].b = result
return result
