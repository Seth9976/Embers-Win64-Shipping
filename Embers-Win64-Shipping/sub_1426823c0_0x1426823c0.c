// 函数: sub_1426823c0
// 地址: 0x1426823c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1b48)
void var_1b68
int64_t rax_1 = __security_cookie ^ &var_1b68
int64_t* rcx = *(arg2 + 0xe8)
int32_t rsi = 0
int32_t var_1b40 = 0
int64_t result = (*(*rcx + 0x150))(rcx)

if (result != 0)
    void* rbx_1 = *(result + 0x120)
    
    if (rbx_1 != 0)
        void* rax_3 = sub_14269bba0()
        void* rdx = *(rbx_1 + 0x10)
        result = sx.q(*(rax_3 + 0x38))
        
        if (result.d s<= *(rdx + 0x38))
            int64_t result_1 = result
            result = *(rdx + 0x30)
            
            if (*(result + (result_1 << 3)) == rax_3 + 0x30)
                void* r14_1 = *(rbx_1 + 0x298)
                var_1b40.q = r14_1
                
                if (r14_1 != 0)
                    float zmm5_1 = *(arg2 + 0xa8)
                    float zmm1[0x4] = *(arg1 + 0x6c)
                    float zmm3 = *(arg1 + 0x70)
                    float zmm4_1 = *(arg1 + 0x74) - zmm5_1
                    zmm5_1 = zmm5_1 f+ *(arg1 + 0x80)
                    int64_t r12_1 = *(arg2 + 0xe8)
                    float zmm6[0x4] = *(arg2 + 0xa0)
                    zmm1[0] = zmm1[0] - zmm6[0]
                    zmm6[0] = zmm6[0] f+ *(arg1 + 0x78)
                    int128_t zmm7 = *(arg2 + 0xa4)
                    zmm3 = zmm3 f- zmm7.d
                    int32_t var_1abc_1 = 0
                    zmm7.d = zmm7.d f+ *(arg1 + 0x7c)
                    int32_t var_1aac_1 = 0
                    zmm6[0] = zmm6[0] - zmm1[0]
                    int64_t var_98_1 = 0
                    zmm5_1 = (zmm5_1 - zmm4_1) * 0.5f
                    int32_t var_88_1 = 0
                    zmm7.d = zmm7.d f- zmm3
                    int32_t var_84_1 = 0x63
                    int32_t var_70_1 = 0
                    zmm6[0] = zmm6[0] * 0.5f
                    zmm7.d = zmm7.d f* 0.5f
                    float var_1ab0_1 = zmm5_1
                    zmm6[0] = zmm6[0] + zmm1[0]
                    float var_1ac0_1 = zmm5_1 + zmm4_1
                    void* i = r14_1 + 0x10
                    float temp0_1[0x4] = _mm_unpacklo_ps(zmm6, zmm7.q)
                    zmm7.d = zmm7.d f+ zmm3
                    int128_t zmm0_1
                    zmm0_1.q = (_mm_unpacklo_ps(zmm6, zmm7.q)).q
                    float var_1ab8[0x4]
                    var_1ab8[0].q = temp0_1.q
                    int128_t var_1ac8_1 = zmm0_1
                    int128_t var_19b8 = zmm0_1
                    float var_1ab8_1[0x4] = var_1ab8
                    float var_19a8_1[0x4] = var_1ab8
                    int128_t var_1988_1 = *(i + 0x3e0)
                    float var_1978_1[0x4] = *(i + 0x3f0)
                    int128_t var_1968_1 = *(i + 0x400)
                    sub_1426625e0(&var_19b8)
                    result = sub_142648f90(&var_19b8)
                    
                    if (i != 0)
                        int128_t zmm6_1 = 0x80000000
                        int64_t r15
                        int64_t var_38_1 = r15
                        
                        do
                            void* i_1 = i
                            void* i_2 = *(i_1 + 0x380)
                            
                            if (i_2 != 0)
                                i_1 = i_2
                            
                            void* rdi_1 = i_1 + sx.q(var_70_1) * 0x38
                            int64_t* rax_8 = *(rdi_1 + 0x20) + 0x60
                            
                            if (rax_8[1].d == 0)
                                rax_8.b = 0
                            else
                                int64_t* rcx_4 = *rax_8
                                
                                if (rcx_4 == 0)
                                    rax_8.b = 0
                                else if ((*(*rcx_4 + 0x28))(rcx_4).b == 0)
                                    rax_8.b = 0
                                else
                                    rax_8.b = 1
                            
                            if (rax_8.b == 0)
                                rax_8.b = 1
                            else
                                void* rax_10 = *(rdi_1 + 0x20)
                                int64_t* rcx_5
                                
                                if (*(rax_10 + 0x68) == 0)
                                    rcx_5 = nullptr
                                else
                                    rcx_5 = *(rax_10 + 0x60)
                                
                                rax_8 = (*(*rcx_5 + 0x48))(rcx_5, r12_1 + 0x230)
                                
                                if (rax_8.b != 0)
                                    rax_8.b = 1
                            
                            if (rax_8.b != 0)
                                void* rcx_6 = *(rdi_1 + 0x20)
                                r15.b = 0
                                int32_t rdx_2 = *(rcx_6 + 0xc8)
                                
                                if ((rdx_2.b & 3) != 0)
                                    uint8_t rbx_3 = (rdx_2 u>> 2).b
                                    
                                    if ((rbx_3 & 1) == 0 || ((rdx_2 u>> 1).b & 1) != 0)
                                        sub_14264ed60(r14_1, rdi_1)
                                        rcx_6 = *(rdi_1 + 0x20)
                                    
                                    if ((rbx_3 & 1) != 0)
                                        uint128_t zmm0_2 = zx.o(data_143dbb1f8.q)
                                        void** const var_1b08 = &data_143459b08
                                        void* var_1b00_1 = rcx_6
                                        int128_t* var_1af8_1 = nullptr
                                        int32_t var_1af0_1 = 0
                                        int64_t var_1ae8
                                        __builtin_memset(&var_1ae8, 0, 0x11)
                                        int64_t var_1ad4_1 = 0
                                        int32_t rax_13 = data_143dbb200
                                        uint64_t var_1b20_1 = zmm0_2.q
                                        int32_t var_1b24_1 = rax_13
                                        int32_t var_1acc_1 = 0x3f800000
                                        int32_t var_1b18_1 = rax_13
                                        zmm0_2.q = zmm0_2.q
                                        *(rcx_6 + 0x30) = zmm0_2
                                        uint128_t var_1b2c = zmm0_2
                                        *(rcx_6 + 0x40) = var_1b20_1
                                        *(rcx_6 + 0x48) = 0.d
                                        void* rax_15 = sub_140d3c740(*(rdi_1 + 0x20) + 0xc0, 0)
                                        
                                        if (rax_15 != 0)
                                            void* rax_17 = sub_140d21950(rax_15, sub_14254cd20())
                                            
                                            if (rax_17 != 0)
                                                int64_t rdx_6 = *rax_17
                                                (*(rdx_6 + 0x38))(rax_17, rdx_6)
                                                int64_t r9_1 = *rax_17
                                                (*(r9_1 + 0x28))(rax_17, &var_1b08, arg1 + 0x88, 
                                                    r9_1, arg3, var_1b40)
                                                int128_t* rcx_13 = var_1af8_1
                                                uint32_t r9_2 = 0
                                                int32_t rdx_9 = var_1af0_1 s/ 3
                                                uint128_t zmm1_1
                                                
                                                if (rdx_9 s>= 4)
                                                    uint64_t rax_22 = zx.q(((rdx_9 - 4) u>> 2) + 1)
                                                    uint64_t j_3 = zx.q(rax_22.d)
                                                    r9_2 = (rax_22 << 2).d
                                                    uint64_t j
                                                    
                                                    do
                                                        int32_t rax_23 = *(rcx_13 + 8)
                                                        zmm1_1 = *(rcx_13 + 4) ^ zmm6_1
                                                        *rcx_13 = (*rcx_13 ^ zmm6_1).d
                                                        int128_t zmm0_3 = *(rcx_13 + 0xc)
                                                        *(rcx_13 + 8) = zmm1_1.d
                                                        zmm1_1 = rcx_13[1].d ^ zmm6_1
                                                        *(rcx_13 + 0xc) = (zmm0_3 ^ zmm6_1).d
                                                        zmm0_3 = *(rcx_13 + 0x18)
                                                        *(rcx_13 + 4) = rax_23
                                                        int32_t rax_24 = *(rcx_13 + 0x14)
                                                        *(rcx_13 + 0x14) = zmm1_1.d
                                                        zmm1_1 = *(rcx_13 + 0x1c) ^ zmm6_1
                                                        rcx_13[1].d = rax_24
                                                        int32_t rax_25 = rcx_13[2].d
                                                        *(rcx_13 + 0x18) = (zmm0_3 ^ zmm6_1).d
                                                        zmm0_3 = *(rcx_13 + 0x24)
                                                        rcx_13[2].d = zmm1_1.d
                                                        zmm1_1 = *(rcx_13 + 0x28)
                                                        *(rcx_13 + 0x1c) = rax_25
                                                        int32_t rax_26 = *(rcx_13 + 0x2c)
                                                        *(rcx_13 + 0x24) = (zmm0_3 ^ zmm6_1).d
                                                        *(rcx_13 + 0x2c) = (zmm1_1 ^ zmm6_1).d
                                                        *(rcx_13 + 0x28) = rax_26
                                                        rcx_13 = &rcx_13[3]
                                                        j = j_3
                                                        j_3 -= 1
                                                    while (j != 1)
                                                
                                                if (r9_2 s< rdx_9)
                                                    int32_t* rcx_14 = rcx_13 + 8
                                                    uint64_t j_2 = zx.q(rdx_9 - r9_2)
                                                    uint64_t j_1
                                                    
                                                    do
                                                        int32_t rax_27 = *rcx_14
                                                        zmm1_1 = rcx_14[-1] ^ zmm6_1
                                                        rcx_14[-2] = (rcx_14[-2] ^ zmm6_1).d
                                                        *rcx_14 = zmm1_1.d
                                                        rcx_14[-1] = rax_27
                                                        rcx_14 = &rcx_14[3]
                                                        j_1 = j_2
                                                        j_2 -= 1
                                                    while (j_1 != 1)
                                                
                                                sub_142696ee0(&var_1b08)
                                                r15.b = 1
                                        
                                        int64_t rcx_16 = var_1ae8
                                        
                                        if (rcx_16 != 0)
                                            sub_140a74f90(rcx_16)
                                        
                                        if (var_1af8_1 != 0)
                                            sub_140a74f90(var_1af8_1)
                                
                                void* r9_3 = *(rdi_1 + 0x20)
                                int32_t* rax_29
                                
                                if ((*(r9_3 + 0x70) & 1) == 0)
                                    rsi |= 2
                                    void var_1a58
                                    rax_29 = sub_1426700a0(&var_1a58, r9_3 + 0x70)
                                else
                                    rsi |= 1
                                    void var_1a08
                                    rax_29 = sub_141dc8b30(r9_3 + 0x70, &var_1a08, r12_1 + 0x230, 
                                        *(r9_3 + 0xc0))
                                
                                void var_1aa8
                                sub_141db7370(&var_1aa8, rax_29)
                                
                                if ((rsi.b & 2) != 0)
                                    rsi &= 0xfffffffd
                                    int64_t var_1a20
                                    
                                    if (var_1a20 != 0)
                                        sub_140a74f90(var_1a20)
                                    
                                    void var_1a30
                                    sub_141db7f30(&var_1a30)
                                    void var_1a40
                                    sub_141db7ed0(&var_1a40)
                                    void var_1a50
                                    sub_140745b20(&var_1a50)
                                
                                if ((rsi.b & 1) != 0)
                                    rsi &= 0xfffffffe
                                    int64_t var_19d0
                                    
                                    if (var_19d0 != 0)
                                        sub_140a74f90(var_19d0)
                                    
                                    void var_19e0
                                    sub_141db7f30(&var_19e0)
                                    void var_19f0
                                    sub_141db7ed0(&var_19f0)
                                    void var_1a00
                                    sub_140745b20(&var_1a00)
                                
                                char rax_30
                                
                                if (arg3 != 0)
                                    void* r14_2 = *(rdi_1 + 0x20)
                                    
                                    if (*(r14_2 + 0x28) != 0 || *(r14_2 + 0x18) != 0)
                                        rax_30 = 1
                                    else
                                        rax_30 = 0
                                    
                                    if (rax_30 != 0)
                                        int64_t* rbx_6 = *(rdi_1 + 0x28)
                                        
                                        if (rbx_6 != 0)
                                            rbx_6[1].d += 1
                                        
                                        if (sub_141ded450(r14_2) != 0)
                                            sub_142674160(arg1, r14_2 + 0x10, &var_1aa8, 
                                                r14_2 + 0x50)
                                        
                                        if (rbx_6 != 0)
                                            rbx_6[1].d -= 1
                                            
                                            if (rbx_6[1].d == 1)
                                                (**rbx_6)(rbx_6)
                                                int32_t rax_33 = *(rbx_6 + 0xc)
                                                *(rbx_6 + 0xc) -= 1
                                                
                                                if (rax_33 == 1)
                                                    (*(*rbx_6 + 8))(rbx_6, 1)
                                        
                                        if (r15.b != 0)
                                            int64_t* rcx_34 = *(rdi_1 + 0x20) + 0x10
                                            rcx_34[1].d = 0
                                            
                                            if (*(rcx_34 + 0xc) != 0)
                                                sub_1405c5510(rcx_34, 0)
                                    
                                    r14_1 = var_1b40.q
                                
                                int32_t var_1a88
                                int32_t var_1a78
                                int32_t var_1a68
                                
                                if (var_1a88 != 0 || var_1a78 != 0 || var_1a68 != 0)
                                    rax_30 = 0
                                else
                                    rax_30 = 1
                                
                                if (rax_30 == 0)
                                    sub_142674450(arg1, &var_1aa8, *(rdi_1 + 0x20) + 0x50)
                                
                                int64_t var_1a70
                                
                                if (var_1a70 != 0)
                                    sub_140a74f90(var_1a70)
                                
                                void var_1a80
                                sub_141db7f30(&var_1a80)
                                void var_1a90
                                sub_141db7ed0(&var_1a90)
                                void var_1aa0
                                sub_140745b20(&var_1aa0)
                            
                            var_70_1 += 1
                            result, zmm6_1 = sub_142648f90(&var_19b8)
                        while (i != 0)
                    
                    if (var_98_1 != 0)
                        result = sub_140a74f90(var_98_1)

__security_check_cookie(rax_1 ^ &var_1b68)
return result
