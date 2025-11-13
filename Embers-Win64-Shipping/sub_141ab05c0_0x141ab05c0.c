// 函数: sub_141ab05c0
// 地址: 0x141ab05c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_90 = &arg_8
int64_t* rbx = arg2
void*** (* var_98)() = j_sub_141a91e60
void* rax
int256_t zmm1
rax, zmm1 = sub_140a756e0(&var_98, &data_1439dbe74)
int32_t r10 = 0
int32_t arg_18 = 0
void* rdi = rax + 0xe0
int32_t rax_1 = *(rax + 0xd8)
int32_t rax_2 = *(arg1 + 0x18)

if (rax_2 == *(arg1 + 0x38))
    int32_t i = 0
    
    if (rax_2 s> 0)
        int128_t* r12_1 = nullptr
        int128_t zmm6
        int128_t var_58_1 = zmm6
        
        do
            if (not((*(r12_1 + *(arg1 + 0x30))).d f<= 9.99999975e-06f))
                void var_e8
                sub_140dd5b90(&var_e8, *rbx)
                *rbx
                bool cond:1_1 = rbx[8].b != 0
                int64_t var_e0
                __builtin_memset(&var_e0, 0, 0x33)
                bool var_a8_1 = cond:1_1
                int512_t zmm1_1 = sub_141e295c0(&var_e8)
                zmm1, zmm6 = sub_141e1c570((sx.q(i) << 4) + *(arg1 + 0x10), &var_e8, zmm1_1)
                int64_t rbx_1 = sx.q(*(rax + 0xd8))
                int32_t rax_4 = (rbx_1 + 1).d
                *(rax + 0xd8) = rax_4
                
                if (rax_4 s> *(rax + 0xdc))
                    sub_141a63ee0(rax + 0x10, rbx_1.d)
                
                void* rax_5 = *(rax + 0xd0)
                void* rdx_4 = rax + 0x10
                
                if (rax_5 != 0)
                    rdx_4 = rax_5
                
                void* r8_1 = rdx_4 + rbx_1 * 0x18
                __builtin_memset(r8_1, 0, 0x18)
                
                if (r8_1 != &var_e0)
                    *r8_1 = var_e0
                    __builtin_memset(&var_e0, 0, 0x18)
                    int64_t var_d8
                    *(r8_1 + 8) = var_d8.d
                    *(r8_1 + 0xc) = var_d8:4.d
                    int64_t var_d0
                    *(r8_1 + 0x10) = var_d0
                
                int64_t rbx_2 = sx.q(*(rax + 0x218))
                int32_t rax_10 = (rbx_2 + 1).d
                *(rax + 0x218) = rax_10
                
                if (rax_10 s> *(rax + 0x21c))
                    sub_141acb850(rax + 0x110, rbx_2.d)
                
                void* rax_11 = *(rax + 0x210)
                void* rcx_9 = rax + 0x110
                
                if (rax_11 != 0)
                    rcx_9 = rax_11
                
                void* rcx_10 = rcx_9 + (rbx_2 << 5)
                __builtin_memset(rcx_10, 0, 0x1b)
                *(rcx_10 + 0x10) = 0
                *(rcx_10 + 0x18) = 0
                int64_t var_b8_1 = 0
                int16_t var_b0_1 = 0
                int64_t var_c8
                
                if (rcx_10 != &var_c8)
                    *rcx_10 = var_c8
                    var_c8 = 0
                    int64_t var_c0_1
                    *(rcx_10 + 8) = var_c0_1.d
                    *(rcx_10 + 0xc) = var_c0_1:4.d
                    int64_t var_c0_2 = 0
                
                *(rcx_10 + 0x1a) = 1
                int64_t rbx_3 = sx.q(*(rdi + 0x28))
                char var_ae_1 = 0
                int32_t rax_17 = (rbx_3 + 1).d
                *(rdi + 0x28) = rax_17
                
                if (rax_17 s> *(rdi + 0x2c))
                    sub_14083a280(rdi, rbx_3.d)
                
                void* rax_18 = *(rdi + 0x20)
                void* rcx_12 = rdi
                
                if (rax_18 != 0)
                    rcx_12 = rax_18
                
                r10 = arg_18 + 1
                arg_18 = r10
                *(rcx_12 + (rbx_3 << 2)) = zmm6.d
                rbx = arg2
            
            i += 1
            r12_1 += 4
        while (i s< *(arg1 + 0x18))
        
        if (r10 s> 0)
            void* rax_19 = *(rdi + 0x20)
            void* rdx_7 = *(rax + 0x210)
            void* r8_2 = *(rax + 0xd0)
            void* rcx_13 = rdi
            int64_t r15_1 = sx.q(rax_1)
            
            if (rax_19 != 0)
                rcx_13 = rax_19
            
            int32_t var_f0_1 = r10
            void* rcx_14 = rax + 0x110
            void* var_f8 = rcx_13 + (r15_1 << 2)
            
            if (rdx_7 != 0)
                rcx_14 = rdx_7
            
            int32_t var_f0_2 = r10
            int128_t var_88 = var_f8.o
            var_f8 = rcx_14 + (r15_1 << 5)
            int32_t var_f0_3 = r10
            void* rcx_16 = rax + 0x10
            
            if (r8_2 != 0)
                rcx_16 = r8_2
            
            int128_t var_78 = var_f8.o
            var_f8 = rcx_16 + r15_1 * 0x18
            var_f8.o = var_f8.o
            sub_141e451a0(&rbx[1], sub_141de3ac0(&var_f8, &var_78, &var_88, &rbx[1], &arg2[4]))
            sub_141acd800(rax + 0x10, r15_1.d, 0)
            int64_t result = sub_141acd750(rax + 0x110, r15_1.d, 0)
            int64_t rbx_4 = sx.q(*(rdi + 0x28))
            
            if (r15_1.d s<= rbx_4.d)
                if (r15_1.d s< rbx_4.d && r15_1.d != rbx_4.d)
                    *(rdi + 0x28) = r15_1.d
                
                return result
            
            *(rdi + 0x28) = r15_1.d
            
            if (r15_1.d s> *(rdi + 0x2c))
                sub_14083a280(rdi, rbx_4.d)
            
            void* rax_26 = *(rdi + 0x20)
            
            if (rax_26 != 0)
                rdi = rax_26
            
            return memset(rdi + (rbx_4 << 2), 0, sx.q(r15_1.d - rbx_4.d) << 2)

if (*(arg1 + 0x48) == 0 && rbx[8].b == 0)
    return sub_141acb4e0(&rbx[1], rbx[3])

return sub_141e47c50(&rbx[1], zmm1)
