// 函数: sub_142642a00
// 地址: 0x142642a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx_1 = *arg2 + 0xa8
*arg1 = *rcx_1
arg1[1] = rcx_1[1]
arg1[2].d = rcx_1[2].d
*(arg1 + 0x14) = *(rcx_1 + 0x14)
*(arg1 + 0x1c) = *(rcx_1 + 0x1c)
arg1[4] = rcx_1[4]
void* rax_4 = rcx_1[5]
arg1[5] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

arg1[6].d = rcx_1[6].d
*(arg1 + 0x34) = *(rcx_1 + 0x34)
arg1[7].d ^= (rcx_1[7].d ^ arg1[7].d) & 1

if (arg3 == 0)
    arg3 = sub_140d3c6e0(*arg2 + 0x9c)

sub_140d3a3a0(&arg1[8], arg3)
arg1[9] = *arg2
void* rax_12 = arg2[1]
arg1[0xa] = rax_12

if (rax_12 != 0)
    *(rax_12 + 8) += 1

sub_141dde360(&arg1[0xb], &data_143a2d220)
void* rcx_6 = *arg2
int64_t* rbx = &data_143b51510
uint128_t zmm0_1
float zmm1_1[0x4]

if (((*(rcx_6 + 0x98) u>> 6).b & 1) != 0 && sub_140d3c6e0(rcx_6 + 0x50) != 0)
    void* rsi_1 = *arg2
    int64_t* rcx_12
    
    if (j_sub_140d3e110(rsi_1 + 0x50) == 0)
        int64_t* rax_24
        
        if (*(rsi_1 + 0x30) s<= 0)
            rax_24 = &data_143b51510
        else
            rax_24 = *(rsi_1 + 0x28)
        
        uint64_t var_9c
        rcx_12 = &var_9c
        int32_t rax_25 = rax_24[1].d
        var_9c = *rax_24
        int32_t var_94_1 = rax_25
    else
        int64_t* rcx_9 = *(rsi_1 + 0x58)
        int64_t* rax_18
        void var_60
        
        if (rcx_9 == 0)
            void* rcx_11 = *(sub_140d3c6e0(rsi_1 + 0x50) + 0x130)
            float* rax_20
            
            if (rcx_11 == 0)
                int32_t var_b8_1 = data_143dbb200
                uint64_t var_c0
                rax_20 = &var_c0
                var_c0 = data_143dbb1f8.q
            else
                zmm1_1 = *(rcx_11 + 0x1d0)
                float var_d8
                rax_20 = &var_d8
                var_d8 = zmm1_1[0]
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                float var_48_1[0x4] = zmm1_1
                float var_d0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                int32_t var_d4_1 = zmm0_1.d
            
            int32_t var_ac_1 = rax_20[2]
            uint64_t var_b4
            rax_18 = &var_b4
            var_b4 = *rax_20
        else
            rax_18 = (*(*rcx_9 + 0x18))(rcx_9, &var_60)
        uint64_t var_a8
        rcx_12 = &var_a8
        int32_t rax_23 = rax_18[1].d
        var_a8 = *rax_18
        int32_t var_a0_1 = rax_23
    
    zmm0_1 = zx.o(*rcx_12)
    int32_t rax_26 = rcx_12[1].d
    
    if (zmm0_1.d f!= data_143b51510.d || zmm0_1.q:4.d.d f!= data_143b51510:4.d
            || not(rax_26.d f== data_143b51518))
        arg1[1] = *rcx_12
        arg1[2].d = rax_26

void* rdx_3 = *arg2
int32_t rcx_13 = *(rdx_3 + 0x98)

if (((rcx_13 u>> 7).b & 1) != 0 && test_bit(rcx_13, 0xa) && sub_140d3c6e0(rdx_3 + 0x40) != 0)
    void* rsi_2 = *arg2
    uint64_t* rcx_19
    
    if (j_sub_140d3e110(rsi_2 + 0x40) == 0)
        if (*(rsi_2 + 0x30) s> 0)
            rbx = (sx.q(*(rsi_2 + 0x30) - 1) << 5) + *(rsi_2 + 0x28)
        
        uint64_t var_6c
        rcx_19 = &var_6c
        int32_t rax_40 = rbx[1].d
        var_6c = *rbx
        int32_t var_64_1 = rax_40
    else
        int64_t* rcx_16 = *(rsi_2 + 0x48)
        uint64_t* rax_32
        void var_54
        
        if (rcx_16 == 0)
            void* rcx_18 = *(sub_140d3c6e0(rsi_2 + 0x40) + 0x130)
            float* rax_34
            
            if (rcx_18 == 0)
                int32_t var_88_1 = data_143dbb200
                uint64_t var_90
                rax_34 = &var_90
                var_90 = data_143dbb1f8.q
            else
                zmm1_1 = *(rcx_18 + 0x1d0)
                float var_cc
                rax_34 = &var_cc
                var_cc = zmm1_1[0]
                zmm0_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
                float var_38_1[0x4] = zmm1_1
                float var_c4_1 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
                int32_t var_c8_1 = zmm0_1.d
            
            int32_t var_7c_1 = rax_34[2]
            uint64_t var_84
            rax_32 = &var_84
            var_84 = *rax_34
        else
            rax_32 = (*(*rcx_16 + 0x18))(rcx_16, &var_54)
        uint64_t var_78
        rcx_19 = &var_78
        int32_t rax_37 = rax_32[1].d
        var_78 = *rax_32
        int32_t var_70_1 = rax_37
    
    zmm0_1 = zx.o(*rcx_19)
    int32_t rax_41 = rcx_19[1].d
    
    if (zmm0_1.d f!= data_143b51510.d || zmm0_1.q:4.d.d f!= data_143b51510:4.d
            || not(rax_41.d f== data_143b51518))
        *(arg1 + 0x14) = *rcx_19
        *(arg1 + 0x1c) = rax_41

if (sub_140d3e110(&arg1[8]) != 0)
    if (arg1[4] == 0)
        void* rax_43 = sub_140d3c6e0(&arg1[8])
        int64_t* rcx_22 = *(rax_43 + 0x340)
        int64_t rdx_6 = *(rax_43 + 0x338)
        int64_t var_e8 = rdx_6
        int64_t* var_e0 = rcx_22
        
        if (rcx_22 != 0)
            rcx_22[1].d += 1
            rcx_22 = var_e0
        
        if (&arg1[4] != &var_e8)
            arg1[4] = rdx_6
            var_e8 = 0
            sub_1405aeff0(&arg1[5], &var_e0)
            rcx_22 = var_e0
        
        if (rcx_22 != 0)
            rcx_22[1].d -= 1
            
            if (rcx_22[1].d == 1)
                int64_t* rbx_3 = var_e0
                (**rbx_3)(rbx_3)
                int32_t rax_46 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rax_46 == 1)
                    int64_t* rcx_25 = var_e0
                    (*(*rcx_25 + 8))(rcx_25, 1)
    
    char* rdx_8 = sub_140d3c6e0(&arg1[8]) + 0x230
    arg1[0xb].b = *rdx_8
    *(arg1 + 0x5c) = *(rdx_8 + 4)
    arg1[0xc].d = *(rdx_8 + 8)
    *(arg1 + 0x64) = *(rdx_8 + 0xc)
    arg1[0xd].d = *(rdx_8 + 0x10)
    arg1[0xe] = *(rdx_8 + 0x18)
    sub_140597df0(&arg1[0xf], &rdx_8[0x20])

int64_t* rbx_4 = arg2[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t rsi_3 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rsi_3 == 1)
            (*(*rbx_4 + 8))(rbx_4, zx.q(rsi_3))

return arg1
