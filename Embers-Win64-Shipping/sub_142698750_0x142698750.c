// 函数: sub_142698750
// 地址: 0x142698750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xe8)
void* rax_1 = (*(*rcx + 0x150))(rcx)
uint128_t zmm0

if (rax_1 != 0)
    int64_t* rdi_1 = *(rax_1 + 0x120)
    
    if (rdi_1 != 0)
        void* rax_2 = sub_14269bba0()
        void* rdx_1 = rdi_1[2]
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
            int32_t rax_14
            uint128_t var_98
            
            if (((rdi_1[0xd].d u>> 7).b & 1) != 0)
                int32_t rax_15 = *(arg1 + 0xe4)
                *(arg1 + 0xe0) = 0
                
                if (rax_15 s<= 0)
                    sub_1413f6f70(arg1 + 0xd8, 1)
                
                uint128_t* rax_16 = sub_14265c3d0(rdi_1, &var_98)
                *(arg1 + 0xb8) = *rax_16
                *(arg1 + 0xc8) = rax_16[1].q
                rax_14 = *(rax_16 + 0x18)
                *(arg1 + 0xd0) = rax_14
                
                if (rax_14.b == 0)
                    int64_t rdi_3 = sx.q(*(arg1 + 0xe0))
                    int32_t rax_17 = (rdi_3 + 1).d
                    *(arg1 + 0xe0) = rax_17
                    
                    if (rax_17 s> *(arg1 + 0xe4))
                        sub_1405c50f0(arg1 + 0xd8)
                    
                    int64_t rcx_10 = *(arg1 + 0xd8)
                    uint128_t* rdx_8 = rdi_3 * 0x1c
                    *(rdx_8 + rcx_10) = *(arg1 + 0xb8)
                    *(rdx_8 + rcx_10 + 0x10) = *(arg1 + 0xc8)
                    rax_14 = *(arg1 + 0xd0)
                    *(rdx_8 + rcx_10 + 0x18) = rax_14
            else
                int64_t rdx_2 = *(arg1 + 0xe8)
                uint64_t r12
                r12.b = 0
                uint128_t zmm6 = data_143dbb1f8
                uint128_t zmm7 = data_143dbb1fc
                uint128_t zmm8 = data_143dbb200
                uint128_t zmm9 = zmm7
                uint128_t zmm10 = zmm8
                uint128_t zmm11 = zmm6
                int64_t var_8c
                var_8c.d = zmm6.d
                var_8c:4.d = zmm7.d
                int32_t var_84_1 = zmm8.d
                var_98.d = zmm6.d
                var_98:4.d = zmm7.d
                int32_t var_90_1 = zmm8.d
                char var_80_1 = 0
                
                if (rdx_2 != 0)
                    int64_t rax_7 = *rdi_1
                    void* var_a8 = nullptr
                    int64_t var_a0_1 = 0
                    (*(rax_7 + 0x3d0))(rdi_1, rdx_2, &var_a8, 0, var_a8, var_a0_1)
                    *(arg1 + 0xe0) = 0
                    int32_t rax_8 = var_a0_1.d
                    
                    if (rax_8 s> *(arg1 + 0xe4))
                        sub_1413f6f70(arg1 + 0xd8, rax_8)
                        rax_8 = var_a0_1.d
                    
                    void* rcx_6 = var_a8
                    void* i = sx.q(rax_8) * 0x1c + rcx_6
                    
                    if (rcx_6 != i)
                        uint128_t* rbx_1 = rcx_6 + 8
                        
                        do
                            int64_t rdi_2 = sx.q(*(arg1 + 0xe0))
                            int32_t rax_10 = (rdi_2 + 1).d
                            *(arg1 + 0xe0) = rax_10
                            
                            if (rax_10 s> *(arg1 + 0xe4))
                                sub_1405c50f0(arg1 + 0xd8)
                            
                            int64_t rcx_5 = *(arg1 + 0xd8)
                            uint128_t* rdx_5 = rdi_2 * 0x1c
                            *(rdx_5 + rcx_5) = *(rbx_1 - 8)
                            *(rdx_5 + rcx_5 + 0x10) = *(rbx_1 + 8)
                            *(rdx_5 + rcx_5 + 0x18) = rbx_1[1].d
                            
                            if (r12.b == 0)
                                if (rbx_1[1].b != 0)
                                    uint128_t zmm1 = zx.o(*(rbx_1 + 8))
                                    uint128_t zmm2 = *(rbx_1 - 8)
                                    int32_t rax_12 = rbx_1[1].d
                                    r12 = zx.q(rax_12.b)
                                    var_8c = zmm1.q
                                    zmm7 = var_8c:4.d
                                    zmm0 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                                    var_98 = zmm2
                                    var_80_1.d = rax_12
                                    zmm10 = var_90_1
                                    zmm8 = zmm0
                                    zmm9 = var_98:4.d
                                    zmm11 = var_98.d
                                    zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                            else if (rbx_1[1].b != 0)
                                zmm0 = *(rbx_1 - 8)
                                
                                if (not(zmm11.d f<= zmm0.d))
                                    var_98.d = zmm0.d
                                    zmm11 = zmm0
                                
                                zmm0 = *(rbx_1 - 4)
                                
                                if (not(zmm9.d f<= zmm0.d))
                                    var_98:4.d = zmm0.d
                                    zmm9 = zmm0
                                
                                zmm0 = *rbx_1
                                
                                if (not(zmm10.d f<= zmm0.d))
                                    var_90_1 = zmm0.d
                                    zmm10 = zmm0
                                
                                zmm0 = *(rbx_1 + 4)
                                
                                if (not(zmm6.d f>= zmm0.d))
                                    var_8c.d = zmm0.d
                                    zmm6 = zmm0
                                
                                zmm0 = *(rbx_1 + 8)
                                
                                if (not(zmm7.d f>= zmm0.d))
                                    var_8c:4.d = zmm0.d
                                    zmm7 = zmm0
                                
                                zmm0 = *(rbx_1 + 0xc)
                                
                                if (not(zmm8.d f>= zmm0.d))
                                    int32_t var_84_2 = zmm0.d
                                    zmm8 = zmm0
                            
                            rbx_1 += 0x1c
                        while (rbx_1 - 8 != i)
                        
                        rcx_6 = var_a8
                    
                    if (rcx_6 != 0)
                        sub_140a74f90(rcx_6)
                
                rax_14 = var_80_1.d
                *(arg1 + 0xb8) = var_98
                *(arg1 + 0xc8) = var_8c
                *(arg1 + 0xd0) = rax_14
            return rax_14

zmm0 = zx.o(data_143dbb1f8.q)
int32_t rax_18 = data_143dbb200
uint64_t var_8c_1 = zmm0.q
int32_t var_90_2 = rax_18
int32_t var_84_3 = rax_18
int32_t rax_19 = 0.d
zmm0.q = zmm0.q
*(arg1 + 0xb8) = zmm0
*(arg1 + 0xc8) = var_8c_1
*(arg1 + 0xd0) = rax_19
return rax_19
