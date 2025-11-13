// 函数: sub_141f0aaf0
// 地址: 0x141f0aaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm3 = data_143dbb1f8
float zmm1 = data_143dbb200
int32_t r15 = 0
int128_t zmm6 = arg3
int32_t rax = data_143dbb200
arg3 = data_143dbb1fc
*arg2 = data_143dbb1f8.q
uint128_t zmm0 = zx.o(0)
arg2[1].d = rax
int64_t rax_1 = sx.q(*(arg1 + 0x160))
float var_48[0x4]
float zmm4[0x4]
int32_t rdi

if (zmm6.d f< 1f)
    rdi = 0
    
    if (rax_1.d s> 0)
        int64_t rcx_5 = 0
        int32_t* rax_18 = *(arg1 + 0x158) + 0x18
        
        while (true)
            zmm0.d = zmm0.d f+ *rax_18
            
            if (zmm6.d f< zmm0.d)
                break
            
            rdi += 1
            rcx_5 += 1
            rax_18 = &rax_18[7]
            
            if (rcx_5 s>= rax_1)
                goto label_141f0ad37
        
        goto label_141f0ab63
else
    rdi = (rax_1 - 1).d
label_141f0ab63:
    
    if (rdi != 0xffffffff)
        void* rbx_1 = *(arg1 + 0xb0)
        zmm4 = *(rbx_1 + 0x1c0)
        uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_1 + 0x180), zmm4, 4))
        var_48 = zmm4
        void var_58
        
        if (temp0_2 != 0)
            *(rbx_1 + 0x180) = zmm4
            int32_t* rax_3
            rax_3, zmm6 = sub_140adf5d0(&var_48, &var_58)
            *(rbx_1 + 0x190) = *rax_3
            *(rbx_1 + 0x198) = rax_3[2]
        
        void* r12_1 = &data_143dbb1f8
        int64_t rcx_1 = *(arg1 + 0x158)
        uint64_t var_78 = *(rbx_1 + 0x190)
        int32_t* rbx_2 = &data_143dbb1f8
        int32_t var_70_1 = *(rbx_1 + 0x198)
        void* rdx_1 = sx.q(rdi) * 0x1c
        zmm6.d = zmm6.d f- *(rdx_1 + rcx_1 + 0x10)
        zmm6.d = zmm6.d f/ *(rdx_1 + rcx_1 + 0x18)
        uint64_t var_88 = *(rdx_1 + rcx_1)
        int32_t var_80_1 = *(rdx_1 + rcx_1 + 8)
        
        if (*(rdx_1 + rcx_1 + 0xc) == 1)
            rbx_2 = arg1 + 0x17c
        
        float* rax_8 = sub_140adf300(&var_78, &var_58, &var_88)
        int64_t zmm0_1
        zmm0_1.d = rax_8[2].d f+ rbx_2[2]
        var_88.d = *rbx_2 + *rax_8
        var_88:4.d = rax_8[1] f+ rbx_2[1]
        float var_80_2 = zmm0_1.d
        
        if (rdi + 1 s>= 0)
            int32_t rax_10 = *(arg1 + 0x160) - 1
            
            if (rdi + 1 s< rax_10)
                rax_10 = rdi + 1
            
            r15 = rax_10
        
        int64_t rcx_3 = *(arg1 + 0x158)
        int64_t* rdx_3 = sx.q(r15) * 0x1c
        int64_t var_68 = *(rdx_3 + rcx_3)
        int32_t var_60_1 = *(rdx_3 + rcx_3 + 8)
        
        if (*(rdx_3 + rcx_3 + 0xc) == 1)
            r12_1 = arg1 + 0x17c
        
        float* rax_13
        float zmm6_1
        rax_13, zmm6_1 = sub_140adf300(&var_78, &var_58, &var_68)
        zmm3.d = (*rax_13).d f+ *r12_1
        arg3.d = rax_13[1].d f+ *(r12_1 + 4)
        zmm3.d = zmm3.d f- var_88.d
        arg3.d = arg3.d f- var_88:4.d
        zmm3.d = zmm3.d f* zmm6_1
        arg3.d = arg3.d f* zmm6_1
        zmm3.d = zmm3.d f+ var_88.d
        arg3.d = arg3.d f+ var_88:4.d
        zmm1 = (rax_13[2] f+ *(r12_1 + 8) - var_80_2) * zmm6_1 + var_80_2
label_141f0ad37:
zmm4 = *(*(arg1 + 0xb0) + 0x1d0)
bool cond:1 = zmm4[0] f!= zmm3.d
zmm0 = zmm4
var_48 = zmm4
float zmm5 = var_48[1]
zmm0 = _mm_shuffle_ps(zmm0, zmm0, 0xaa)

if (cond:1 || zmm5 f!= arg3.d || not(zmm0.d f== zmm1))
    zmm3.d = zmm3.d f- zmm4[0]
    arg3.d = arg3.d f- zmm5
    *arg2 = (_mm_unpacklo_ps(zmm3, arg3.q)).q
    arg2[1].d = zmm1 f- zmm0.d

return arg2
