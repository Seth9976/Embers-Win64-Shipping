// 函数: sub_14264b680
// 地址: 0x14264b680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1a30)
void var_1a48
int64_t rax_1 = __security_cookie ^ &var_1a48
void* rbx = *(arg1 + 0xa0)
uint128_t zmm11 = data_143dbb1f8
int128_t zmm10 = data_143dbb1fc
uint128_t zmm14 = zmm11
uint128_t zmm9 = data_143dbb200
int128_t zmm13 = zmm10
uint128_t zmm12 = zmm9
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2

if (rbx != 0)
    void* rax_2 = sub_1426a09e0()
    void* rdx = *(rbx + 0x10)
    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
    
    if (rax_3.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
        int32_t var_1a08
        int128_t* rax_5
        uint128_t zmm6_1
        int128_t zmm7_1
        uint128_t zmm8_1
        rax_5, zmm6_1, zmm7_1, zmm8_1 = sub_1426841a0(rbx, &var_1a08)
        uint128_t var_1a28_1 = *rax_5
        char var_1a10_1 = (*(rax_5 + 0x18)).b
        uint64_t var_1a18_1 = rax_5[1].q
        
        if ((*(rbx + 0x400) & 0x2000) == 0)
        label_14264b9aa:
            zmm9 = var_1a18_1:4.d
            zmm10 = var_1a18_1.d
            zmm11 = var_1a28_1:0xc.d
            zmm12 = var_1a28_1:8.d
            zmm13 = var_1a28_1:4.d
            zmm14 = var_1a28_1.d
        else
            void* rax_7 = *(arg1 + 0xa8)
            
            if (rax_7 == 0)
                rax_7 = sub_141ee69e0(arg1)
                
                if (rax_7 == 0)
                    goto label_14264b9aa
            
            void* rbx_1 = *(rax_7 + 0x120)
            
            if (rbx_1 == 0)
                goto label_14264b9aa
            
            void* rax_8 = sub_14269bba0()
            void* rdx_2 = *(rbx_1 + 0x10)
            int64_t rax_9 = sx.q(*(rax_8 + 0x38))
            
            if (rax_9.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
                goto label_14264b9aa
            
            void* rax_11 = *(rbx_1 + 0x298)
            
            if (rax_11 == 0)
                goto label_14264b9aa
            
            zmm9 = var_1a18_1:4.d
            zmm10 = var_1a18_1.d
            zmm11 = var_1a28_1:0xc.d
            zmm1 = *(rax_11 + 0x400)
            zmm12 = var_1a28_1:8.d
            zmm13 = var_1a28_1:4.d
            zmm14 = var_1a28_1.d
            uint128_t var_28_1 = zmm6_1
            int96_t var_19c8_1 = (*(rax_11 + 0x3f0)).12
            zmm0 = *(rax_11 + 0x410)
            void* i = rax_11 + 0x10
            int128_t var_38_1 = zmm7_1
            int64_t var_d8_1 = 0
            int32_t var_c8_1 = 0
            uint128_t var_48_1 = zmm8_1
            int96_t var_19b8_1 = zmm1.12
            uint128_t var_19a8_1 = zmm0
            int32_t var_c4_1 = 0x63
            
            do
                uint128_t zmm3_1 = var_19c8_1.d
                int128_t zmm4_1 = var_19c8_1:4.d
                uint128_t zmm5_1 = var_19c8_1:8.d
                zmm6_1.d = zmm3_1.d f+ var_19b8_1.d
                zmm7_1.d = zmm4_1.d f+ var_19b8_1:4.d
                zmm3_1.d = zmm3_1.d f- var_19b8_1.d
                zmm4_1.d = zmm4_1.d f- var_19b8_1:4.d
                char var_19f0_1 = 1
                zmm8_1.d = zmm5_1.d f+ var_19b8_1:8.d
                zmm5_1.d = zmm5_1.d f- var_19b8_1:8.d
                int32_t var_19fc_1 = zmm6_1.d
                int32_t var_19f8_1 = zmm7_1.d
                var_1a08 = zmm3_1.d
                int32_t var_19f4_1 = zmm8_1.d
                int32_t var_1a04_1 = zmm4_1.d
                int32_t var_1a00_1 = zmm5_1.d
                
                if (var_1a10_1 == 0)
                    zmm1 = zx.o(var_19f8_1.q)
                    zmm2 = var_1a08.o
                    zmm10 = zmm1.d
                    int96_t var_1a28_2 = zmm2.12
                    var_1a10_1 = var_19f0_1
                    zmm12 = var_1a28_2:8.d
                    zmm9 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    zmm13 = var_1a28_2:4.d
                    zmm14 = var_1a28_2.d
                    zmm11 = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                else
                    if (not(zmm14.d f<= zmm3_1.d))
                        zmm14 = zmm3_1
                    
                    if (not(zmm13.d f<= zmm4_1.d))
                        zmm13 = zmm4_1
                    
                    if (not(zmm12.d f<= zmm5_1.d))
                        zmm12 = zmm5_1
                    
                    if (not(zmm11.d f>= zmm6_1.d))
                        zmm11 = zmm6_1
                    
                    if (not(zmm10.d f>= zmm7_1.d))
                        zmm10 = zmm7_1
                    
                    if (not(zmm9.d f>= zmm8_1.d))
                        zmm9 = zmm8_1
                
                sub_142648ea0(&i)
            while (i != 0)
            
            if (var_d8_1 != 0)
                sub_140a74f90(var_d8_1)

zmm11.d = zmm11.d f- zmm14.d
zmm10.d = zmm10.d f- zmm13.d
zmm9.d = zmm9.d f- zmm12.d
zmm11.d = zmm11.d f* 0.5f
zmm9.d = zmm9.d f* 0.5f
zmm10.d = zmm10.d f* 0.5f
int32_t var_19e4 = zmm9.d
*(arg2 + 0xc) = (_mm_unpacklo_ps(zmm11, zmm10.q)).q
*(arg2 + 0x14) = var_19e4
zmm14.d = zmm14.d f+ *(arg2 + 0xc)
zmm13.d = zmm13.d f+ arg2[2].d
zmm12.d = zmm12.d f+ *(arg2 + 0x14)
*arg2 = (_mm_unpacklo_ps(zmm14, zmm13.q)).q
arg2[1].d = zmm12.d
zmm0 = arg2[2].d
zmm2 = *(arg2 + 0xc)
zmm1 = *(arg2 + 0x14)
zmm0.d = zmm0.d f* zmm0.d
zmm2.d = zmm2.d f* zmm2.d
zmm1.d = zmm1.d f* zmm1.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d
arg2[3].d = _mm_sqrt_ss(0, zmm2.d).d
__security_check_cookie(rax_1 ^ &var_1a48)
return arg2
