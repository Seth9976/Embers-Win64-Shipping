// 函数: sub_1423f2f20
// 地址: 0x1423f2f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("TimelineComponent")
int512_t zmm1_1
uint128_t zmm6_1
zmm1_1, zmm6_1 = sub_141efce60(arg1, arg2.d)

if ((arg1[0x29].b & 1) != 0)
    void* rax_1 = arg1[0x15]
    zmm6_1 = _mm_cvtpd_ps(zx.o(data_14399f938))
    
    if (rax_1 != 0)
    label_1423f2fa6:
        void* rax_2 = sub_142437e30(rax_1, 0, 1)
        
        if (rax_2 != 0)
            uint128_t zmm0_1 = *(rax_2 + 0x2fc)
            
            if (zmm6_1.d f>= zmm0_1.d)
                zmm6_1 = _mm_min_ss((*(rax_2 + 0x300)).d, zmm6_1.d)
            else
                zmm6_1 = zmm0_1
    else
        rax_1 = sub_141ee69e0(arg1)
        
        if (rax_1 != 0)
            goto label_1423f2fa6

zmm1_1.o = zmm6_1
sub_1423f31f0(&arg1[0x16])
int32_t rax_3

if ((arg1[0x11].b & 0x10) != 0)
    rax_3 = sub_141ee58f0(arg1)

if (((arg1[0x11].b & 0x10) == 0 || rax_3 == 3) && (*(arg1 + 0xb1) & 4) == 0)
    (*(*arg1 + 0x270))(arg1)

return sub_140b37f60("TimelineComponent") __tailcall
