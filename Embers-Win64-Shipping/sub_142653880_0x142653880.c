// 函数: sub_142653880
// 地址: 0x142653880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2a30)
void var_2a58
int64_t rax_1 = __security_cookie ^ &var_2a58
int64_t* r14 = arg2
void* r15 = arg1
int64_t result = sub_1426670c0(arg1)
*(r15 + 0xdc) = arg3

if (r14 != 0 && arg3 != 0)
    *(r15 + 0xd8) &= 0xfffffffd
    *(r15 + 0xd8) |= 1
    *(r15 + 0xd4) = *(r14 + 0x404)
    float (* var_24b8)[0x4]
    sub_142642f80(&var_24b8)
    int32_t rcx_1 = *(r15 + 0xdc)
    void* r13_1 = &r14[0x46]
    int64_t var_2910_1 = 0x40
    int32_t var_1c18 = ((((rcx_1 u>> 0xf & 1) * 2) | (rcx_1 u>> 2 & 1)) * 2) | (rcx_1 u>> 1 & 1)
        | (var_1c18 & 0xfffffff8)
    void* var_2918 = nullptr
    sub_1406105e0(&var_2918)
    void* r12_1 = var_2918
    int32_t rbx
    rbx.b = 0
    void* rdi_1 = r12_1
    int32_t var_28a0
    
    do
        int32_t* rax_8 = sub_142684120(r14, &var_28a0, rbx.b)
        rbx.b += 1
        rdi_1 += 4
        *(rdi_1 - 4) = *rax_8
    while (rbx.b u< 0x40)
    
    int32_t rax_9 = *(r13_1 + 0x38)
    int32_t rcx_7 = data_143b5159c
    
    if (rax_9 != 0)
        rcx_7 = rax_9
    
    *(r12_1 + 0xfc) = rcx_7
    *(r15 + 0xd4) = *(r14 + 0x234) * 0.100000001f f+ *(r15 + 0xd4)
    (*(*r14 + 0x6d8))(r14)
    float zmm7_1[0x4]
    float zmm8_1[0x4]
    float zmm9_1[0x4]
    float zmm11_1[0x4]
    float zmm12_1[0x4]
    float zmm13_1[0x4]
    float zmm14_1[0x4]
    float zmm15_1[0x4]
    
    if (arg4[1].d s<= 0)
        zmm7_1, zmm8_1, zmm9_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
            sub_142684610(r14, &var_24b8, 0xffffffff)
    else
        int32_t i = 0
        int64_t rdi_2 = 0
        
        do
            zmm7_1, zmm8_1, zmm9_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
                sub_142684610(r14, &var_24b8, *(*arg4 + rdi_2))
            i += 1
            rdi_2 += 4
        while (i s< arg4[1].d)
    
    int64_t var_29d8
    int64_t var_29cc
    void var_24a8
    float zmm1_1[0x4]
    double zmm2_1[0x2]
    float zmm4_1[0x4]
    
    if ((*(r15 + 0xdc) & 1) != 0)
        void* rsi_1 = &var_24a8
        int64_t i_16 = 0x40
        int64_t i_1
        
        do
            int32_t j = 0
            
            if (*(rsi_1 + 8) s> 0)
                int64_t rdi_3 = 0
                
                do
                    float (* r8_2)[0x4] = var_24b8
                    zmm1_1 = *(r15 + 0xcc)
                    zmm4_1 = *(r15 + 0xd4)
                    zmm2_1 = *(r15 + 0xd0)
                    void* rdx_12 = *rsi_1
                    int64_t r14_1 = sx.q(*(r15 + 0x28))
                    int32_t var_29bc_1 = 0
                    int64_t rcx_11 = sx.q(*(rdx_12 + rdi_3 + 4)) * 3
                    int64_t rax_14 = sx.q(*(rdx_12 + rdi_3))
                    zmm4_1[0] = zmm4_1[0] + (*r8_2)[rcx_11 + 2]
                    zmm2_1[0].d = zmm2_1[0].d f+ (*r8_2)[rcx_11 + 1]
                    zmm1_1[0] = zmm1_1[0] + (*r8_2)[rcx_11]
                    int64_t rcx_12 = rax_14 * 3
                    zmm4_1[0] = zmm4_1[0] + (*r8_2)[rcx_12 + 2]
                    zmm1_1[0] = zmm1_1[0] + (*r8_2)[rcx_12]
                    zmm2_1[0].d = zmm2_1[0].d f+ (*r8_2)[rcx_12 + 1]
                    float var_29d0_1 = zmm4_1[0]
                    float var_29c4_1 = zmm4_1[0]
                    int64_t var_29d8_1 = (_mm_unpacklo_ps(zmm1_1, zmm2_1[0])).q
                    int32_t var_29c0_1 = data_143b51594
                    int32_t rax_18 = (r14_1 + 1).d
                    int64_t var_29cc_1 = (_mm_unpacklo_ps(zmm1_1, zmm2_1[0])).q
                    *(r15 + 0x28) = rax_18
                    
                    if (rax_18 s> *(r15 + 0x2c))
                        sub_1405c4e40(r15 + 0x20)
                    
                    int32_t var_29bc_2 = 0
                    float (* rax_21)[0x4] = (r14_1 << 5) + *(r15 + 0x20)
                    *rax_21 = var_29d8_1.o
                    rax_21[1] = var_29cc_1:4.o
                    float (* r8_3)[0x4] = var_24b8
                    zmm1_1 = *(r15 + 0xcc)
                    zmm4_1 = *(r15 + 0xd4)
                    zmm2_1 = *(r15 + 0xd0)
                    int64_t rdx_14 = *rsi_1
                    int64_t r14_2 = sx.q(*(r15 + 0x28))
                    int64_t rcx_14 = sx.q(*(rdx_14 + rdi_3 + 8)) * 3
                    int64_t rax_23 = sx.q(*(rdx_14 + rdi_3 + 4))
                    zmm4_1[0] = zmm4_1[0] + (*r8_3)[rcx_14 + 2]
                    zmm2_1[0].d = zmm2_1[0].d f+ (*r8_3)[rcx_14 + 1]
                    zmm1_1[0] = zmm1_1[0] + (*r8_3)[rcx_14]
                    int64_t rcx_15 = rax_23 * 3
                    zmm4_1[0] = zmm4_1[0] + (*r8_3)[rcx_15 + 2]
                    zmm1_1[0] = zmm1_1[0] + (*r8_3)[rcx_15]
                    zmm2_1[0].d = zmm2_1[0].d f+ (*r8_3)[rcx_15 + 1]
                    float var_29d0_2 = zmm4_1[0]
                    float var_29c4_2 = zmm4_1[0]
                    int64_t var_29d8_2 = (_mm_unpacklo_ps(zmm1_1, zmm2_1[0])).q
                    int32_t var_29c0_2 = data_143b51594
                    int32_t rax_27 = (r14_2 + 1).d
                    int64_t var_29cc_2 = (_mm_unpacklo_ps(zmm1_1, zmm2_1[0])).q
                    *(r15 + 0x28) = rax_27
                    
                    if (rax_27 s> *(r15 + 0x2c))
                        sub_1405c4e40(r15 + 0x20)
                    
                    int32_t var_29bc_3 = 0
                    float (* rax_30)[0x4] = (r14_2 << 5) + *(r15 + 0x20)
                    *rax_30 = var_29d8_2.o
                    rax_30[1] = var_29cc_2:4.o
                    float (* r8_4)[0x4] = var_24b8
                    zmm1_1 = *(r15 + 0xcc)
                    zmm4_1 = *(r15 + 0xd4)
                    zmm2_1 = *(r15 + 0xd0)
                    void* rdx_16 = *rsi_1
                    int64_t r14_3 = sx.q(*(r15 + 0x28))
                    int64_t rcx_17 = sx.q(*(rdx_16 + rdi_3)) * 3
                    int64_t rax_32 = sx.q(*(rdx_16 + rdi_3 + 8))
                    zmm4_1[0] = zmm4_1[0] + (*r8_4)[rcx_17 + 2]
                    zmm2_1[0].d = zmm2_1[0].d f+ (*r8_4)[rcx_17 + 1]
                    zmm1_1[0] = zmm1_1[0] + (*r8_4)[rcx_17]
                    int64_t rcx_18 = rax_32 * 3
                    zmm4_1[0] = zmm4_1[0] + (*r8_4)[rcx_18 + 2]
                    zmm1_1[0] = zmm1_1[0] + (*r8_4)[rcx_18]
                    zmm2_1[0].d = zmm2_1[0].d f+ (*r8_4)[rcx_18 + 1]
                    float var_29d0_3 = zmm4_1[0]
                    float var_29c4_3 = zmm4_1[0]
                    var_29d8 = (_mm_unpacklo_ps(zmm1_1, zmm2_1[0])).q
                    int32_t var_29c0_3 = data_143b51594
                    int32_t rax_36 = (r14_3 + 1).d
                    var_29cc = (_mm_unpacklo_ps(zmm1_1, zmm2_1[0])).q
                    *(r15 + 0x28) = rax_36
                    
                    if (rax_36 s> *(r15 + 0x2c))
                        sub_1405c4e40(r15 + 0x20)
                    
                    j += 3
                    rdi_3 += 0xc
                    float (* rax_39)[0x4] = (r14_3 << 5) + *(r15 + 0x20)
                    *rax_39 = var_29d8.o
                    rax_39[1] = var_29cc:4.o
                while (j s< *(rsi_1 + 8))
            
            rsi_1 += 0x10
            i_1 = i_16
            i_16 -= 1
        while (i_1 != 1)
        r14 = arg2
    
    int32_t r12_2 = *(r15 + 0xdc)
    int32_t* var_2088
    
    if (((r12_2 u>> 1).b & 1) != 0)
        int32_t r13_2 = 0
        int32_t var_2080
        
        if (var_2080 s> 0)
            int64_t rbx_1 = 0
            
            do
                zmm1_1 = *(r15 + 0xcc)
                zmm4_1 = *(r15 + 0xd4)
                zmm2_1 = *(r15 + 0xd0)
                zmm4_1[0] = zmm4_1[0] f+ *(var_2088 + rbx_1 + 0x14)
                zmm4_1[0] = zmm4_1[0] f+ *(var_2088 + rbx_1 + 8)
                zmm1_1[0] = zmm1_1[0] f+ *(var_2088 + rbx_1)
                zmm1_1[0] = zmm1_1[0] f+ *(var_2088 + rbx_1 + 0xc)
                int64_t rsi_2 = sx.q(*(r15 + 0x38))
                zmm2_1[0].d = zmm2_1[0].d f+ *(var_2088 + rbx_1 + 4)
                zmm2_1[0].d = zmm2_1[0].d f+ *(var_2088 + rbx_1 + 0x10)
                float var_29d0_4 = zmm4_1[0]
                float var_29c4_4 = zmm4_1[0]
                var_29d8 = (_mm_unpacklo_ps(zmm1_1, zmm2_1[0])).q
                int32_t var_29c0_4 = data_143b51598
                int32_t rax_46 = (rsi_2 + 1).d
                var_29cc = (_mm_unpacklo_ps(zmm1_1, zmm2_1[0])).q
                int32_t var_29bc_4 = 0
                *(r15 + 0x38) = rax_46
                
                if (rax_46 s> *(r15 + 0x3c))
                    sub_1405c4e40(r15 + 0x30)
                
                r13_2 += 2
                rbx_1 += 0x18
                float (* rax_49)[0x4] = (rsi_2 << 5) + *(r15 + 0x30)
                *rax_49 = var_29d8.o
                rax_49[1] = var_29cc:4.o
            while (r13_2 s< var_2080)
            
            r12_2 = *(r15 + 0xdc)
    
    void* r9 = var_2918
    int32_t* var_2078
    
    if (((r12_2 u>> 2).b & 1) != 0)
        int32_t rax_52 = *(r9 + 0xfc)
        int32_t rcx_21 = 0
        int32_t var_29ec_1 = 0
        int32_t var_2070
        
        if (var_2070 s> 0)
            int64_t rdi_4 = 0
            
            do
                zmm1_1 = *(r15 + 0xcc)
                zmm4_1 = *(r15 + 0xd4)
                zmm2_1 = *(r15 + 0xd0)
                zmm4_1[0] = zmm4_1[0] f+ *(var_2078 + rdi_4 + 0x14)
                zmm1_1[0] = zmm1_1[0] f+ *(var_2078 + rdi_4)
                zmm4_1[0] = zmm4_1[0] f+ *(var_2078 + rdi_4 + 8)
                zmm1_1[0] = zmm1_1[0] f+ *(var_2078 + rdi_4 + 0xc)
                int64_t r13_3 = sx.q(*(r15 + 0x48))
                zmm2_1[0].d = zmm2_1[0].d f+ *(var_2078 + rdi_4 + 4)
                zmm2_1[0].d = zmm2_1[0].d f+ *(var_2078 + rdi_4 + 0x10)
                float var_2950_3 = zmm4_1[0]
                float var_29d0_5 = zmm4_1[0]
                var_29d8 = (_mm_unpacklo_ps(zmm1_1, zmm2_1[0])).q
                float var_29c4_5 = var_2950_3
                int32_t rax_57 = (r13_3 + 1).d
                var_29cc = (_mm_unpacklo_ps(zmm1_1, zmm2_1[0])).q
                int32_t var_29c0_5 = (rax_52 u>> 1 & 0x7f7f7f) | (rax_52 & 0xff000000)
                int32_t var_29bc_5 = 0
                *(r15 + 0x48) = rax_57
                
                if (rax_57 s> *(r15 + 0x4c))
                    sub_1405c4e40(r15 + 0x40)
                    rcx_21 = var_29ec_1
                
                rcx_21 += 2
                rdi_4 += 0x18
                float (* rax_60)[0x4] = (r13_3 << 5) + *(r15 + 0x40)
                var_29ec_1 = rcx_21
                *rax_60 = var_29d8.o
                rax_60[1] = var_29cc:4.o
            while (rcx_21 s< var_2070)
            
            r12_2 = *(r15 + 0xdc)
            r9 = var_2918
    
    uint8_t rax_62 = (r12_2 u>> 0xc).b & 1
    uint32_t r8_6
    r8_6.b = (r12_2 u>> 0xa).b & 1
    uint32_t var_2980_1 = r8_6
    char var_2a38
    int64_t var_2a30
    float var_2a28
    float var_2a20
    int32_t var_2a18
    char var_2a10
    float var_2a08
    int64_t var_2068
    int64_t var_2058
    float zmm3_1[0x4]
    float zmm6_1[0x4]
    
    if (rax_62 == 0)
        int32_t var_29ec_2 = 0
        int32_t var_2060
        
        if (var_2060 s> 0)
            int32_t rax_63 = data_143b515ac
            int32_t* rbx_6 = nullptr
            int32_t rcx_31
            
            do
                char rdx_20 = *(rbx_6 + var_2068 + 0x1a)
                
                if (((r12_2 u>> 0xb).b & 1) != 0)
                label_142653ff9:
                    double zmm5_1[0x2] = *(r15 + 0xd4)
                    zmm4_1 = *(r15 + 0xd0)
                    zmm3_1 = *(r15 + 0xcc)
                    zmm5_1[0].d = zmm5_1[0].d f+ *(rbx_6 + var_2068 + 8)
                    zmm4_1[0] = zmm4_1[0] f+ *(rbx_6 + var_2068 + 4)
                    zmm5_1[0].d = zmm5_1[0].d f+ *(rbx_6 + var_2068 + 0x14)
                    zmm4_1[0] = zmm4_1[0] f+ *(rbx_6 + var_2068 + 0x10)
                    char r8_7 = *(rbx_6 + var_2068 + 0x19)
                    int32_t var_2888_1 = zmm5_1[0].d
                    float var_288c_1 = zmm4_1[0]
                    int32_t var_28b8_1 = zmm5_1[0].d
                    float var_28bc_1 = zmm4_1[0]
                    zmm3_1[0] = zmm3_1[0] f+ *(rbx_6 + var_2068)
                    zmm3_1[0] = zmm3_1[0] f+ *(rbx_6 + var_2068 + 0xc)
                    float var_2890 = zmm3_1[0]
                    float var_28c0 = zmm3_1[0]
                    int32_t rsi_3
                    int32_t rsi_4
                    
                    if (r8_7 == 0)
                        if ((rdx_20 & 1) != 0)
                            rsi_4 = *(r9 + (zx.q(*(rbx_6 + var_2068 + 0x18)) << 2))
                            rsi_3 = (rsi_4 & 0xff000000)
                                | ((rsi_4 u>> 1 & 0x7f7f7f) + (rsi_4 u>> 2 & 0x3f3f3f))
                        else
                            rsi_3 = rax_63
                    else if (rdx_20 != 0 || (rdx_20 & 1) != 0)
                        rsi_4 = *(r9 + (zx.q(*(rbx_6 + var_2068 + 0x18)) << 2))
                        rsi_3 = (rsi_4 & 0xff000000)
                            | ((rsi_4 u>> 1 & 0x7f7f7f) + (rsi_4 u>> 2 & 0x3f3f3f))
                    else
                        rsi_3 = rax_63
                    int64_t var_2798 = var_28c0.q
                    int32_t var_2790_2 = var_28b8_1
                    int64_t var_27c8 = var_2890.q
                    int32_t var_27c0_2 = var_2888_1
                    zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
                        sub_14264a950(r15 + 0x50, &var_27c8, &var_2798, rsi_3, r8_7)
                    rax_63 = data_143b515ac
                    
                    if (rsi_3 != rax_63)
                        if (*(rbx_6 + var_2068 + 0x19) != 0
                                && (*(rbx_6 + var_2068 + 0x1a) & 1) == 0)
                            var_2a08 = zmm6_1[0]
                            var_2a10 = 0
                            var_2a18 = 0x10
                            var_2a20 = (*(r14 + 0x42c))[0]
                            var_2a28 = (*(rbx_6 + var_2068 + 0x1c))[0]
                            var_2a30.d = rax_63
                            int64_t var_2690
                            var_2a38.q = &var_2690
                            var_2690 = 0
                            int32_t var_2688_1 = 0x3f800000
                            int32_t var_2684 = 0
                            int64_t var_2680_1 = 0x3f800000
                            int64_t var_2678 = 0x3f800000
                            int32_t var_2670_1 = 0
                            zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, 
                                zmm15_1 = sub_142651030(r15 + 0x50, &var_2890, &var_2678, &var_2684, 
                                var_2a38, var_2a30.d, var_2a28, var_2a20, var_2a18)
                            rax_63 = data_143b515ac
                        
                        if ((*(rbx_6 + var_2068 + 0x1a) & 2) == 0)
                            var_2a08 = zmm6_1[0]
                            var_2a10 = 0
                            var_2a18 = 0x10
                            var_2a20 = (*(r14 + 0x42c))[0]
                            var_2a28 = (*(rbx_6 + var_2068 + 0x1c))[0]
                            var_2a30.d = rax_63
                            int64_t var_266c
                            var_2a38.q = &var_266c
                            var_266c = 0
                            int32_t var_2664_1 = 0x3f800000
                            int32_t var_2660 = 0
                            int64_t var_265c_1 = 0x3f800000
                            int64_t var_2710 = 0x3f800000
                            int32_t var_2708_1 = 0
                            zmm7_1, zmm8_1, zmm9_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
                                sub_142651030(r15 + 0x50, &var_28c0, &var_2710, &var_2660, 
                                var_2a38, var_2a30.d, var_2a28, var_2a20, var_2a18)
                            rax_63 = data_143b515ac
                    
                    r8_6 = var_2980_1
                else if (r8_6.b != 0 && (rdx_20 & 3) == 3)
                    goto label_142653ff9
                
                rbx_6 = &rbx_6[0xa]
                r9 = var_2918
                rcx_31 = var_29ec_2 + 1
                var_29ec_2 = rcx_31
            while (rcx_31 s< var_2060)
        
        if ((var_1c18.b & 4) != 0)
            int32_t rdi_6 = 0
            int32_t var_2050
            
            if (var_2050 s> 0)
                int32_t* rbx_7 = nullptr
                
                do
                    zmm1_1 = *(r15 + 0xcc)
                    zmm4_1 = *(r15 + 0xd4)
                    zmm2_1 = *(r15 + 0xd0)
                    zmm4_1[0] = zmm4_1[0] f+ *(rbx_7 + var_2058 + 8)
                    zmm1_1[0] = zmm1_1[0] f+ *(rbx_7 + var_2058 + 0xc)
                    zmm4_1[0] = zmm4_1[0] f+ *(rbx_7 + var_2058 + 0x14)
                    zmm1_1[0] = zmm1_1[0] f+ *(rbx_7 + var_2058)
                    int32_t r9_4 = data_143f71598
                    zmm2_1[0].d = zmm2_1[0].d f+ *(rbx_7 + var_2058 + 0x10)
                    zmm2_1[0].d = zmm2_1[0].d f+ *(rbx_7 + var_2058 + 4)
                    float var_2950_4 = zmm4_1[0]
                    float var_2940_4 = zmm4_1[0]
                    int64_t var_27b8 = (_mm_unpacklo_ps(zmm1_1, zmm2_1[0])).q
                    float var_27b0_2 = var_2940_4
                    float var_27a0_2 = var_2950_4
                    char rax_73 = *(rbx_7 + var_2058 + 0x19)
                    int64_t var_27a8 = (_mm_unpacklo_ps(zmm1_1, zmm2_1[0])).q
                    zmm7_1, zmm8_1, zmm9_1, zmm11_1, zmm12_1, zmm13_1, zmm14_1, zmm15_1 =
                        sub_14264a950(r15 + 0x50, &var_27a8, &var_27b8, r9_4, rax_73)
                    rdi_6 += 1
                    rbx_7 = &rbx_7[0xa]
                while (rdi_6 s< var_2050)
    
    int32_t rax_74 = *(r15 + 0xdc)
    uint32_t r13_5
    r13_5.b = (rax_74 u>> 6).b & 1
    uint8_t rcx_35 = (rax_74 u>> 4).b & 1
    uint8_t rdx_26 = (rax_74 u>> 7).b & 1
    uint8_t rax_75 = (rax_74 u>> 8).b & 1
    float var_58_1[0x4] = zmm7_1
    float var_68_1[0x4] = zmm8_1
    uint32_t var_29ec_3 = r13_5
    int32_t var_29f0
    float var_29e4
    float var_29b4
    float var_2978
    float var_2974
    float var_2970
    float zmm0_2[0x4]
    
    if (r13_5.b != 0 || rcx_35 != 0 || rdx_26 != 0 || rax_75 != 0)
        int32_t* rsi_6 = nullptr
        int64_t rdi_7 = 0
        int32_t* var_29a8_1 = nullptr
        int32_t r12_4 = 0
        int32_t* var_2938 = nullptr
        int64_t var_2930_1 = 0
        int64_t rax_76 = sx.q(arg4[1].d)
        
        if (rax_76.d s<= 0)
            int32_t rax_77 = sub_142686590(r14)
            int32_t rbx_10 = 0
            
            if (rax_77 s> 0)
                int32_t* r15_1 = var_29a8_1
                
                do
                    int64_t rsi_7 = sx.q(rdi_7.d)
                    rdi_7 = zx.q((rsi_7 + 1).d)
                    var_2930_1.d = rdi_7.d
                    
                    if (rdi_7.d s> r12_4)
                        sub_1405a4cf0(&var_2938)
                        r12_4 = var_2930_1:4.d
                        rdi_7 = zx.q(var_2930_1.d)
                        r15_1 = var_2938
                    
                    r15_1[rsi_7] = rbx_10
                    rbx_10 += 1
                while (rbx_10 s< rax_77)
                
                var_29a8_1 = r15_1
                r15 = arg1
                rsi_6 = var_29a8_1
            
            r13_5 = var_29ec_3
        else if (&var_2938 != arg4)
            int64_t rbx_9 = *arg4
            rdi_7 = rax_76
            var_2930_1.d = rdi_7.d
            
            if (rax_76.d != 0)
                sub_140638750(&var_2938, rdi_7.d, 0)
                rsi_6 = var_2938
                var_29a8_1 = rsi_6
                memcpy(rsi_6, rbx_9, (rdi_7 << 2).d)
                rdi_7 = zx.q(var_2930_1.d)
        
        if (rdi_7.d s> *(r15 + 0x9c))
            sub_1405a51b0(r15 + 0x90, rdi_7.d)
        
        if (rdi_7.d s> 0)
            uint64_t i_11 = zx.q(rdi_7.d)
            uint64_t i_2
            
            do
                int32_t r12_7 = *rsi_6
                var_2a38.q = &var_2974
                var_29f0 = r12_7
                
                if (sub_142686500(r14, r12_7, &var_29b4, &var_2970, var_2a38) != 0)
                    int32_t var_2628
                    sub_142686430(r14, &var_2628, r12_7)
                    int32_t var_2614
                    zmm2_1 = var_2614
                    zmm0_2 = var_2628
                    int32_t var_261c
                    zmm0_2[0] = zmm0_2[0] f+ var_261c
                    int32_t var_2624
                    zmm1_1 = var_2624
                    int32_t var_2618
                    zmm1_1[0] = zmm1_1[0] f+ var_2618
                    int64_t rax_80 = r14[0x44]
                    int32_t var_2808_1 = zmm2_1[0].d
                    int64_t rsi_8 = 0
                    zmm0_2[0] = zmm0_2[0] * 0.5f
                    var_2a30 = 0
                    zmm1_1[0] = zmm1_1[0] * 0.5f
                    int128_t var_2508
                    var_2a38.q = &var_2508
                    float var_2810 = zmm0_2[0]
                    float var_2788 = zmm0_2[0]
                    var_2508 = zx.o(0)
                    int64_t var_2778_1 = 0
                    zmm0_2 = r14[0x82].d
                    zmm0_2[0] = zmm0_2[0] * 0.00999999978f
                    int32_t var_2780_1 = zmm2_1[0].d
                    int32_t var_2620
                    zmm2_1[0].d = zmm2_1[0].d f- var_2620
                    float var_2704 = zmm0_2[0]
                    float var_2700_1 = zmm0_2[0]
                    float var_280c_1 = zmm1_1[0]
                    float var_2784_1 = zmm1_1[0]
                    int32_t var_26fc_1 = zmm2_1[0].d
                    
                    if ((*(rax_80 + 0x10))(&r14[0x44], &var_2810, &var_2788, &var_2704, var_2a38, 
                            var_2a30, var_2a28, var_2a20, var_2a18, var_2a10, var_2a08) == 0)
                        zmm1_1 = var_2614
                        zmm1_1[0] = zmm1_1[0] f- var_2620
                        int64_t rax_82 = r14[0x44]
                        var_2a30 = 0
                        int128_t var_2518 = zx.o(0)
                        var_2a38.q = &var_2518
                        zmm0_2 = r14[0x82].d
                        zmm0_2[0] = zmm0_2[0] * 0.5f
                        float var_26f0_1 = zmm1_1[0]
                        float var_26f8 = zmm0_2[0]
                        float var_26f4_1 = zmm0_2[0]
                        (*(rax_82 + 0x10))(&r14[0x44], &var_2810, &var_2788, &var_26f8, var_2a38, 
                            var_2a30)
                    
                    int64_t var_2994
                    int64_t var_2990
                    int32_t var_2984
                    
                    if (r13_5.b != 0)
                        var_2a38.d = var_2974
                        int64_t var_25e0
                        sub_140a2e390(&var_25e0, u"(%d,%d:%d)", zx.q(var_29b4))
                        zmm0_2 = var_2788
                        zmm0_2[0] = zmm0_2[0] f+ *(r15 + 0xcc)
                        zmm2_1 = var_2780_1
                        zmm1_1 = var_2784_1
                        int64_t r12_5 = var_25e0
                        var_2990 = 0
                        zmm2_1[0].d = zmm2_1[0].d f+ *(r15 + 0xd4)
                        zmm1_1[0] = zmm1_1[0] f+ *(r15 + 0xd0)
                        int32_t var_2558_1 = zmm2_1[0].d
                        float temp0_13[0x4] = _mm_unpacklo_ps(zmm0_2, zmm1_1[0].q)
                        int64_t var_29a0_1 = temp0_13.q
                        zmm6_1 = temp0_13
                        int32_t var_29f4_1 = var_2558_1
                        int32_t var_25d8
                        int32_t r12_6
                        
                        if (var_25d8 != 0)
                            sub_1405a4c70(&var_2994:4, var_25d8, 0)
                            rsi_8 = var_2990
                            memcpy(rsi_8, r12_5, var_25d8 * 2)
                            r12_6 = var_2984
                            zmm6_1 = zx.o(var_29a0_1)
                            var_29f4_1 = var_2558_1
                        else
                            r12_6 = 0
                            var_2984 = 0
                        
                        int64_t r13_7 = sx.q(*(r15 + 0x98))
                        int32_t rax_85 = (r13_7 + 1).d
                        *(r15 + 0x98) = rax_85
                        
                        if (rax_85 s> *(r15 + 0x9c))
                            sub_1405c4e40(r15 + 0x90)
                        
                        int64_t* rax_88 = (r13_7 << 5) + *(r15 + 0x90)
                        *rax_88 = zmm6_1.q
                        rax_88[1].d = var_29f4_1
                        rax_88[2] = rsi_8
                        rax_88[3].d = var_25d8
                        *(rax_88 + 0x1c) = r12_6
                        int64_t rcx_51 = var_25e0
                        
                        if (rcx_51 != 0)
                            sub_140a74f90(rcx_51)
                        
                        r12_7 = var_29f0
                    
                    if (rdx_26 != 0 || rax_75 != 0)
                        int32_t r13_8 = 0
                        int64_t var_2928 = 0
                        int32_t var_2920_1 = 0
                        sub_142687690(r14, r12_7, &var_2928)
                        
                        if (rax_75 == 0)
                            int32_t var_29f4_3 = 0
                            
                            if (var_2920_1 s> 0)
                                int64_t* rsi_10 = nullptr
                                int32_t r12_12
                                
                                do
                                    int64_t rdx_45 = var_2928
                                    var_2978 = 0f
                                    var_29e4 = 0f
                                    sub_142687050(r14, *(rsi_10 + rdx_45), &var_2978, &var_29e4)
                                    int64_t var_25c0
                                    sub_140a2e390(&var_25c0, u"[%X:%X]", zx.q(var_29e4))
                                    int64_t rax_100 = var_2928
                                    uint64_t r14_8 = 0
                                    int64_t r12_9 = var_25c0
                                    uint64_t var_2740 = 0
                                    zmm0_2 = *(rsi_10 + rax_100 + 8)
                                    zmm2_1 = *(rsi_10 + rax_100 + 0x10)
                                    zmm1_1 = *(rsi_10 + rax_100 + 0xc)
                                    zmm0_2[0] = zmm0_2[0] f+ *(r15 + 0xcc)
                                    zmm2_1[0].d = zmm2_1[0].d f+ *(r15 + 0xd4)
                                    zmm1_1[0] = zmm1_1[0] f+ *(r15 + 0xd0)
                                    int32_t var_2540_1 = zmm2_1[0].d
                                    float temp0_19[0x4] = _mm_unpacklo_ps(zmm0_2, zmm1_1[0].q)
                                    int64_t var_2750_1 = temp0_19.q
                                    zmm6_1 = temp0_19
                                    int32_t var_29e8_2 = var_2540_1
                                    int32_t var_25b8
                                    int32_t r12_10
                                    int32_t var_2734
                                    
                                    if (var_25b8 != 0)
                                        sub_1405a4c70(&var_2740, var_25b8, 0)
                                        r14_8 = var_2740
                                        memcpy(r14_8, r12_9, var_25b8 * 2)
                                        r12_10 = var_2734
                                        zmm6_1 = zx.o(var_2750_1)
                                        var_29e8_2 = var_2540_1
                                    else
                                        r12_10 = 0
                                        var_2734 = 0
                                    int64_t r13_9 = sx.q(*(r15 + 0x98))
                                    int32_t rax_102 = (r13_9 + 1).d
                                    *(r15 + 0x98) = rax_102
                                    
                                    if (rax_102 s> *(r15 + 0x9c))
                                        sub_1405c4e40(r15 + 0x90)
                                    
                                    int64_t* rax_105 = (r13_9 << 5) + *(r15 + 0x90)
                                    *rax_105 = zmm6_1.q
                                    rax_105[1].d = var_29e8_2
                                    rax_105[2] = r14_8
                                    rax_105[3].d = var_25b8
                                    *(rax_105 + 0x1c) = r12_10
                                    int64_t rcx_72 = var_25c0
                                    
                                    if (rcx_72 != 0)
                                        sub_140a74f90(rcx_72)
                                    
                                    rsi_10 = &rsi_10[3]
                                    r14 = arg2
                                    r12_12 = var_29f4_3 + 1
                                    var_29f4_3 = r12_12
                                while (r12_12 s< var_2920_1)
                                r12_7 = var_29f0
                        else
                            int64_t* rdi_9 = r14[0x68]
                            
                            if (rdi_9 != 0)
                                rdi_9[1].d += 1
                            
                            int32_t var_2e8[0x40]
                            int32_t var_1e8[0x40]
                            sub_141de9540(r14[0x67], &var_1e8, &var_2e8, 0x40, var_2a38, var_2a30)
                            
                            if (rdi_9 != 0)
                                rdi_9[1].d -= 1
                                
                                if (rdi_9[1].d == 1)
                                    (**rdi_9)(rdi_9)
                                    int32_t rax_91 = *(rdi_9 + 0xc)
                                    *(rdi_9 + 0xc) -= 1
                                    
                                    if (rax_91 == 1)
                                        (*(*rdi_9 + 8))(rdi_9, 1)
                            
                            int32_t var_29e8_1 = 0
                            
                            if (var_2920_1 s> 0)
                                int64_t* rsi_9 = nullptr
                                bool cond:12_1
                                
                                do
                                    uint64_t rcx_57 = zx.q(sub_142686e00(r14, *(rsi_9 + var_2928)))
                                    zmm2_1 = var_1e8[rcx_57]
                                    zmm3_1 = _mm_cvtps_pd(var_2e8[rcx_57][0].q)
                                    double temp0_17[0x2] = _mm_cvtps_pd(zmm2_1[0])
                                    zmm3_1[0]
                                    int64_t var_25d0
                                    sub_140a2e390(&var_25d0, u"\%.3f; %.3f\", temp0_17[0])
                                    int64_t rax_94 = var_2928
                                    uint64_t r12_8 = 0
                                    int64_t r14_4 = var_25d0
                                    uint64_t var_2760 = 0
                                    zmm0_2 = *(rsi_9 + rax_94 + 8)
                                    zmm2_1 = *(rsi_9 + rax_94 + 0x10)
                                    zmm1_1 = *(rsi_9 + rax_94 + 0xc)
                                    zmm0_2[0] = zmm0_2[0] f+ *(r15 + 0xcc)
                                    zmm2_1[0].d = zmm2_1[0].d f+ *(r15 + 0xd4)
                                    zmm1_1[0] = zmm1_1[0] f+ *(r15 + 0xd0)
                                    int32_t var_254c_1 = zmm2_1[0].d
                                    float temp0_18[0x4] = _mm_unpacklo_ps(zmm0_2, zmm1_1[0].q)
                                    int64_t var_2770_1 = temp0_18.q
                                    zmm6_1 = temp0_18
                                    int32_t var_29f4_2 = var_254c_1
                                    int32_t var_25c8
                                    int32_t var_2754
                                    
                                    if (var_25c8 != 0)
                                        sub_1405a4c70(&var_2760, var_25c8, 0)
                                        r12_8 = var_2760
                                        memcpy(r12_8, r14_4, var_25c8 * 2)
                                        r13_8 = var_2754
                                        zmm6_1 = zx.o(var_2770_1)
                                        var_29f4_2 = var_254c_1
                                    else
                                        var_2754 = 0
                                    int64_t r14_5 = sx.q(*(r15 + 0x98))
                                    int32_t rax_96 = (r14_5 + 1).d
                                    *(r15 + 0x98) = rax_96
                                    
                                    if (rax_96 s> *(r15 + 0x9c))
                                        sub_1405c4e40(r15 + 0x90)
                                    
                                    int64_t* rax_99 = (r14_5 << 5) + *(r15 + 0x90)
                                    *rax_99 = zmm6_1.q
                                    rax_99[1].d = var_29f4_2
                                    rax_99[2] = r12_8
                                    rax_99[3].d = var_25c8
                                    *(rax_99 + 0x1c) = r13_8
                                    int64_t rcx_64 = var_25d0
                                    
                                    if (rcx_64 != 0)
                                        sub_140a74f90(rcx_64)
                                    
                                    rsi_9 = &rsi_9[3]
                                    r13_8 = 0
                                    cond:12_1 = var_29e8_1 + 1 s< var_2920_1
                                    var_29e8_1 += 1
                                    r14 = arg2
                                while (cond:12_1)
                                r12_7 = var_29f0
                        
                        int64_t rcx_73 = var_2928
                        
                        if (rcx_73 != 0)
                            sub_140a74f90(rcx_73)
                    
                    if (rcx_35 != 0)
                        int32_t var_2600
                        sub_142686430(r14, &var_2600, r12_7)
                        int32_t var_25f4
                        zmm0_2 = var_25f4
                        int32_t rax_106 = data_143b515a0
                        int32_t var_25fc
                        zmm1_1 = var_25fc
                        int64_t rsi_11 = sx.q(*(r15 + 0x28))
                        int32_t var_25f0
                        zmm2_1 = var_25f0
                        int32_t var_25ec
                        zmm3_1 = var_25ec
                        int32_t var_25f8
                        zmm3_1[0] = zmm3_1[0] f+ var_25f8
                        float var_2800_1 = zmm0_2[0]
                        float var_27f0_1 = zmm0_2[0]
                        float temp0_20[0x4] = _mm_unpacklo_ps(var_2600, zmm1_1[0].q)
                        zmm3_1[0] = zmm3_1[0] * 0.5f
                        int32_t var_2988_2 = rax_106
                        int32_t rax_107 = (rsi_11 + 1).d
                        int64_t var_29a0_2 = temp0_20.q
                        float temp0_21[0x4] = _mm_unpacklo_ps(var_2600, zmm2_1[0])
                        float var_2728_1 = zmm3_1[0]
                        float var_2718_1 = zmm3_1[0]
                        float var_2998_2 = var_2728_1
                        var_2990:4.d = var_2718_1
                        int32_t var_27fc_1 = zmm2_1[0].d
                        float var_27f8_1 = zmm3_1[0]
                        float var_27ec_1 = zmm1_1[0]
                        float var_27e8_1 = zmm3_1[0]
                        var_2994 = temp0_21.q
                        int32_t var_2984_1 = 0
                        *(r15 + 0x28) = rax_107
                        
                        if (rax_107 s> *(r15 + 0x2c))
                            sub_1405c4e40(r15 + 0x20)
                        
                        zmm1_1 = var_2990.o
                        int32_t var_2984_2 = 0
                        float (* rax_110)[0x4] = (rsi_11 << 5) + *(r15 + 0x20)
                        int64_t var_29a0_3 = temp0_21.q
                        zmm6_1 = zx.o(var_2800_1.q)
                        float var_2998_3 = var_2718_1
                        *rax_110 = var_29a0_2.o
                        var_2990:4.d = var_27f8_1
                        rax_110[1] = zmm1_1
                        int64_t rsi_12 = sx.q(*(r15 + 0x28))
                        int32_t var_2988_3 = data_143b515a0
                        var_2994 = zmm6_1.q
                        int32_t rax_112 = (rsi_12 + 1).d
                        *(r15 + 0x28) = rax_112
                        
                        if (rax_112 s> *(r15 + 0x2c))
                            sub_1405c4e40(r15 + 0x20)
                        
                        zmm1_1 = var_2990.o
                        int32_t var_2984_3 = 0
                        float (* rax_115)[0x4] = (rsi_12 << 5) + *(r15 + 0x20)
                        int64_t var_29a0_4 = zmm6_1.q
                        zmm6_1 = zx.o(var_27f0_1.q)
                        float var_2998_4 = var_27f8_1
                        *rax_115 = var_29a0_3.o
                        var_2990:4.d = var_27e8_1
                        rax_115[1] = zmm1_1
                        int64_t rsi_13 = sx.q(*(r15 + 0x28))
                        int32_t var_2988_4 = data_143b515a0
                        var_2994 = zmm6_1.q
                        int32_t rax_117 = (rsi_13 + 1).d
                        *(r15 + 0x28) = rax_117
                        
                        if (rax_117 s> *(r15 + 0x2c))
                            sub_1405c4e40(r15 + 0x20)
                        
                        zmm1_1 = var_2990.o
                        var_2990:4.d = var_2728_1
                        float (* rax_120)[0x4] = (rsi_13 << 5) + *(r15 + 0x20)
                        int64_t var_29a0_5 = zmm6_1.q
                        float var_2998_5 = var_27e8_1
                        var_2994 = temp0_20.q
                        *rax_120 = var_29a0_4.o
                        var_2984 = 0
                        rax_120[1] = zmm1_1
                        int64_t rsi_14 = sx.q(*(r15 + 0x28))
                        int32_t var_2988_5 = data_143b515a0
                        int32_t rax_122 = (rsi_14 + 1).d
                        *(r15 + 0x28) = rax_122
                        
                        if (rax_122 s> *(r15 + 0x2c))
                            sub_1405c4e40(r15 + 0x20)
                        
                        float (* rax_125)[0x4] = (rsi_14 << 5) + *(r15 + 0x20)
                        *rax_125 = var_29a0_5.o
                        rax_125[1] = var_2990.o
                    
                    rsi_6 = var_29a8_1
                
                r13_5 = var_29ec_3
                rsi_6 = &rsi_6[1]
                i_2 = i_11
                i_11 -= 1
                var_29a8_1 = rsi_6
            while (i_2 != 1)
            rsi_6 = var_2938
        
        if (rsi_6 != 0)
            sub_140a74f90(rsi_6)
    
    (*(*r14 + 0x6e0))(r14)
    int32_t var_24b0
    int64_t var_20a8
    int64_t var_2048
    
    if (((*(r15 + 0xdc) u>> 3).b & 1) != 0)
        if (rax_62 == 0)
            void* rdi_15 = var_2918
            int64_t* rbx_15 = &var_24a8
            int64_t i_13 = 0x40
            int64_t i_3
            
            do
                int32_t r9_12 = *rdi_15
                int32_t var_2950_5 = *(r15 + 0xd4)
                int64_t var_2958
                var_2a38.q = &var_2958
                var_2958 = *(r15 + 0xcc)
                sub_142647220(r15 + 0x10, rbx_15, &var_24b8, r9_12, var_2a38)
                rbx_15 = &rbx_15[2]
                rdi_15 += 4
                i_3 = i_13
                i_13 -= 1
            while (i_3 != 1)
            int32_t r9_13 = data_143f71598
            int32_t var_2940_5 = *(r15 + 0xd4)
            int64_t var_2948
            var_2a38.q = &var_2948
            var_2948 = *(r15 + 0xcc)
            sub_142647220(r15 + 0x10, &var_20a8, &var_24b8, r9_13, var_2a38)
        else
            float rsi_15 = 0f
            var_29e4 = 0f
            int32_t var_2040
            
            if (var_2040 s> 0)
                do
                    int64_t* r14_11 = (sx.q(rsi_15) << 4) + var_2048
                    int32_t rdx_55 = r14_11[1].d
                    
                    if (rdx_55 != 0)
                        var_29f0:3.b = 0xa4
                        int64_t var_2908
                        __builtin_memset(&var_2908, 0, 0x20)
                        int32_t rdi_12 = 0
                        var_29f0.b = (((rsi_15 s>> 5).b & 1) * 2 + (rsi_15.b & 1) + 1) * 0x3f
                        var_29f0:1.b =
                            (((rsi_15 s>> 4).b & 1) * 2 + ((rsi_15 s>> 2).b & 1) + 1) * 0x3f
                        var_29f0:2.b =
                            (((rsi_15 s>> 3).b & 1) * 2 + ((rsi_15 s>> 1).b & 1) + 1) * 0x3f
                        int32_t r8_31 = var_29f0
                        int32_t var_28e8_1 = r8_31
                        
                        if (var_24b0 s> 0)
                            float (* rbx_12)[0x4] = nullptr
                            
                            while (true)
                                float (* rax_137)[0x4] = var_24b8
                                zmm2_1 = *(rbx_12 + rax_137 + 8)
                                zmm1_1 = *(rbx_12 + rax_137 + 4)
                                zmm0_2 = *(rbx_12 + rax_137)
                                zmm2_1[0].d = zmm2_1[0].d f+ *(r15 + 0xd4)
                                zmm1_1[0] = zmm1_1[0] f+ *(r15 + 0xd0)
                                zmm0_2[0] = zmm0_2[0] f+ *(r15 + 0xcc)
                                int32_t var_26e4_1 = zmm2_1[0].d
                                float var_26e8_1 = zmm1_1[0]
                                float var_26ec = zmm0_2[0]
                                sub_142648d50(&var_2908, &var_26ec, r8_31)
                                rdi_12 += 1
                                rbx_12 = &(*rbx_12)[3]
                                
                                if (rdi_12 s>= var_24b0)
                                    break
                                
                                r8_31 = var_28e8_1
                            
                            rdx_55 = r14_11[1].d
                        
                        int32_t i_4 = 0
                        int64_t var_28f8
                        
                        if (rdx_55 s> 0)
                            int32_t* rsi_16 = nullptr
                            
                            do
                                int64_t rax_138 = *r14_11
                                int64_t var_28f0_1
                                int64_t rbx_13 = sx.q(var_28f0_1.d)
                                int32_t rcx_91 = *(rsi_16 + rax_138 + 8)
                                int32_t r13_11 = *(rsi_16 + rax_138)
                                int32_t rdi_13 = (rbx_13 + 1).d
                                int32_t rcx_92 = *(rsi_16 + rax_138 + 4)
                                var_28f0_1.d = rdi_13
                                
                                if (rdi_13 s> var_28f0_1:4.d)
                                    sub_1405a4cf0(&var_28f8)
                                    rdi_13 = var_28f0_1.d
                                
                                *(var_28f8 + (rbx_13 << 2)) = r13_11
                                int32_t rbx_14 = rdi_13 + 1
                                var_28f0_1.d = rbx_14
                                
                                if (rbx_14 s> var_28f0_1:4.d)
                                    sub_1405a4cf0(&var_28f8)
                                    rbx_14 = var_28f0_1.d
                                
                                *(var_28f8 + (sx.q(rdi_13) << 2)) = rcx_92
                                var_28f0_1.d = rbx_14 + 1
                                
                                if (rbx_14 + 1 s> var_28f0_1:4.d)
                                    sub_1405a4cf0(&var_28f8)
                                
                                i_4 += 3
                                rsi_16 = &rsi_16[3]
                                *(var_28f8 + (sx.q(rbx_14) << 2)) = rcx_91
                            while (i_4 s< r14_11[1].d)
                            
                            rsi_15 = var_29e4
                        
                        int64_t rdi_14 = sx.q(*(r15 + 0x18))
                        int32_t rax_143 = (rdi_14 + 1).d
                        *(r15 + 0x18) = rax_143
                        
                        if (rax_143 s> *(r15 + 0x1c))
                            sub_1405c4ec0(r15 + 0x10)
                        
                        sub_1426412f0(*(r15 + 0x10) + rdi_14 * 0x28, &var_2908)
                        int64_t rcx_101 = var_28f8
                        
                        if (rcx_101 != 0)
                            sub_140a74f90(rcx_101)
                        
                        int64_t rcx_102 = var_2908
                        
                        if (rcx_102 != 0)
                            sub_140a74f90(rcx_102)
                    
                    rsi_15 += 1
                    var_29e4 = rsi_15
                while (rsi_15 s< var_2040)
                
                r14 = arg2
    
    int32_t r12_16 = *(r15 + 0xdc)
    float rdi_17
    rdi_17.b = (r12_16 u>> 0xd).b & 1
    uint32_t r12_17
    r12_17.b = (r12_16 u>> 5).b & 1
    float var_78_1[0x4] = zmm9_1
    var_29b4 = rdi_17
    uint32_t var_29e0_3 = r12_17
    
    if (rdi_17.b != 0 || r12_17.b != 0)
        void* rax_149 = (*(*r14 + 0x150))(r14)
        
        if (rax_149 != 0)
            void* rbx_16 = *(rax_149 + 0x120)
            
            if (rbx_16 != 0)
                void* rax_150 = sub_14269bba0()
                void* rdx_67 = *(rbx_16 + 0x10)
                int64_t rax_151 = sx.q(*(rax_150 + 0x38))
                
                if (rax_151.d s<= *(rdx_67 + 0x38)
                        && *(*(rdx_67 + 0x30) + (rax_151 << 3)) == rax_150 + 0x30)
                    void* rax_153 = *(rbx_16 + 0x298)
                    
                    if (rax_153 != 0)
                        zmm1_1 = *(rax_153 + 0x400)
                        void* rcx_107 = nullptr
                        int32_t rbx_17 = var_28a0
                        int32_t rsi_17 = 0
                        float var_1bf8_1[0x4] = *(rax_153 + 0x3f0)
                        int64_t var_1bd8_1 = (*(rax_153 + 0x410))[0].q
                        int64_t* var_2858 = nullptr
                        int32_t i_17 = 0
                        int64_t var_2848 = 0
                        int32_t var_2840_1 = 0
                        uint64_t i_5 = rax_153 + 0x10
                        float var_1be8_1[0x4] = zmm1_1
                        void* var_308_1 = nullptr
                        int32_t var_2f8_1 = 0
                        int32_t var_2f4_1 = 0x63
                        
                        do
                            uint64_t rax_154
                            
                            if (rdi_17.b != 0)
                                int64_t rsi_18 = sx.q(*(r15 + 0xa8))
                                int32_t rax_155 = (rsi_18 + 1).d
                                *(r15 + 0xa8) = rax_155
                                
                                if (rax_155 s> *(r15 + 0xac))
                                    sub_1405c4e40(r15 + 0xa0)
                                
                                rax_154 = *(r15 + 0xa0)
                                int64_t rcx_110 = rsi_18 << 5
                                *(rcx_110 + rax_154) = var_1bf8_1
                                *(rcx_110 + rax_154 + 0x10) = var_1be8_1
                                
                                if (((r12_16 u>> 0xe).b & 1) != 0)
                                    int32_t rsi_19 = 0
                                    
                                    while (true)
                                        if (rsi_19 s< 0 || rsi_19 s>= *(i_5 + 0x388))
                                            rax_154.b = 0
                                        else
                                            rax_154.b = 1
                                        
                                        if (rax_154.b == 0)
                                            break
                                        
                                        uint64_t i_18 = *(i_5 + 0x380)
                                        uint64_t i_12 = i_5
                                        int64_t r14_12 = sx.q(*(r15 + 0xa8))
                                        int32_t var_29bc_6 = 0
                                        
                                        if (i_18 != 0)
                                            i_12 = i_18
                                        
                                        var_29cc.d = 0
                                        int32_t rax_157 = (r14_12 + 1).d
                                        float (* rdx_69)[0x4] = i_12 + sx.q(rsi_19) * 0x38
                                        var_29d8.d = (*rdx_69)[0]
                                        var_29d8:4.d = (*rdx_69)[1][0]
                                        int32_t var_29d0_6 = (*rdx_69)[2][0].d
                                        var_29cc:4.d = (*rdx_69)[3][0]
                                        float var_29c4_6 = rdx_69[1][0][0]
                                        int32_t var_29c0_6 = (*rdx_69)[5][0].d
                                        *(r15 + 0xa8) = rax_157
                                        
                                        if (rax_157 s> *(r15 + 0xac))
                                            sub_1405c4e40(r15 + 0xa0)
                                        
                                        rax_154 = *(r15 + 0xa0)
                                        int64_t rcx_114 = r14_12 << 5
                                        rsi_19 += 1
                                        *(rcx_114 + rax_154) = var_29d8.o
                                        *(rcx_114 + rax_154 + 0x10) = var_29cc:4.o
                                
                                rsi_17 = var_2f8_1
                                rcx_107 = var_308_1
                            
                            if (r12_17.b != 0)
                                int32_t r14_13 = 0
                                
                                while (true)
                                    if (r14_13 s< 0 || r14_13 s>= *(i_5 + 0x388))
                                        rax_154.b = 0
                                    else
                                        rax_154.b = 1
                                    
                                    if (rax_154.b == 0)
                                        break
                                    
                                    uint64_t i_19 = *(i_5 + 0x380)
                                    uint64_t i_14 = i_5
                                    
                                    if (i_19 != 0)
                                        i_14 = i_19
                                    
                                    void* rdi_19 = i_14 + sx.q(r14_13) * 0x38
                                    rax_154 = *(rdi_19 + 0x20) + 0x60
                                    
                                    if (*(rax_154 + 8) == 0)
                                        rax_154.b = 0
                                    else
                                        int64_t* rcx_116 = *rax_154
                                        
                                        if (rcx_116 == 0)
                                            rax_154.b = 0
                                        else if ((*(*rcx_116 + 0x28))(rcx_116).b == 0)
                                            rax_154.b = 0
                                        else
                                            rax_154.b = 1
                                    
                                    if (rax_154.b == 0)
                                        rax_154.b = 1
                                    else
                                        void* rax_161 = *(rdi_19 + 0x20)
                                        int64_t* rcx_117
                                        
                                        if (*(rax_161 + 0x68) == 0)
                                            rcx_117 = nullptr
                                        else
                                            rcx_117 = *(rax_161 + 0x60)
                                        
                                        rax_154 = (*(*rcx_117 + 0x48))(rcx_117, r13_1)
                                        
                                        if (rax_154.b != 0)
                                            rax_154.b = 1
                                    
                                    if (rax_154.b != 0)
                                        void* rdx_72 = *(rdi_19 + 0x20)
                                        
                                        if (*(rdx_72 + 0x18) != 0)
                                            void var_2590
                                            sub_142670970(&var_2590, *(rdx_72 + 0x10))
                                            zmm6_1 = var_1bf8_1[0]
                                            float zmm4_2[0x4] = var_1bf8_1[2]
                                            float zmm5_2[0x4] = var_1bf8_1[1]
                                            zmm4_2[0] = zmm4_2[0] + var_1be8_1[2]
                                            zmm6_1[0] = zmm6_1[0] - var_1be8_1[0]
                                            zmm6_1[0] = zmm6_1[0] + var_1be8_1[0]
                                            zmm4_2[0] = zmm4_2[0] - var_1be8_1[2]
                                            void* rdi_20 = *(rdi_19 + 0x20)
                                            zmm5_2[0] = zmm5_2[0] - var_1be8_1[1]
                                            zmm5_2[0] = zmm5_2[0] + var_1be8_1[1]
                                            float var_2728_2 = zmm4_2[0]
                                            float var_2718_2 = zmm4_2[0]
                                            int64_t var_25b0 =
                                                (_mm_unpacklo_ps(zmm6_1, zmm5_2[0].q)).q
                                            float var_25a8_1 = var_2718_2
                                            int64_t var_25a4_1 =
                                                (_mm_unpacklo_ps(zmm6_1, zmm5_2[0].q)).q
                                            int64_t j_4 = 0
                                            int32_t var_28a8_1 = 0
                                            float var_259c_1 = var_2728_2
                                            char var_2598_1 = 1
                                            float rax_164
                                            
                                            if (*(rdi_20 + 0x58) == 0)
                                                rax_164.b = 0
                                            else
                                                int64_t* rcx_119 = *(rdi_20 + 0x50)
                                                
                                                if (rcx_119 == 0)
                                                    rax_164.b = 0
                                                else if ((*(*rcx_119 + 0x28))(rcx_119).b == 0)
                                                    rax_164.b = 0
                                                else
                                                    rax_164.b = 1
                                            
                                            if (rax_164.b != 0)
                                                int64_t* rcx_120
                                                
                                                if (*(rdi_20 + 0x58) == 0)
                                                    rcx_120 = nullptr
                                                else
                                                    rcx_120 = *(rdi_20 + 0x50)
                                                
                                                (*(*rcx_120 + 0x50))(rcx_120, &var_25b0, &j_4)
                                            
                                            int32_t var_258c
                                            int32_t var_2588
                                            int128_t* var_2570
                                            int64_t var_2568
                                            
                                            if (var_28a8_1 != 0)
                                                int64_t j_1 = j_4
                                                
                                                for (int64_t rsi_22 =
                                                        sx.q(var_28a8_1) * 0x30 + j_1; j_1 != rsi_22; 
                                                        j_1 += 0x30)
                                                    var_2a28.q = j_1
                                                    var_2a30.d = var_2588
                                                    var_2a38.q = var_2568
                                                    sub_142648a90(&var_2858, &var_2848, var_2570, 
                                                        zx.q(var_258c), var_2a38, var_2a30.d, 
                                                        var_2a28)
                                            else
                                                var_2a28.q = &data_143dbb0c0
                                                var_2a30.d = var_2588
                                                var_2a38.q = var_2568
                                                sub_142648a90(&var_2858, &var_2848, var_2570, 
                                                    zx.q(var_258c), var_2a38, var_2a30.d, var_2a28)
                                            int64_t j_5 = j_4
                                            
                                            if (j_5 != 0)
                                                sub_140a74f90(j_5)
                                    
                                    r14_13 += 1
                                
                                rsi_17 = var_2f8_1
                                rcx_107 = var_308_1
                                r15 = arg1
                                r12_17 = var_29e0_3
                            
                            rbx_17 &= 0xfffffff0
                            void var_1bc8
                            
                            do
                                uint64_t r14_15 = zx.q(rbx_17) & 7
                                uint64_t rdi_21 = zx.q(rbx_17)
                                void* rax_171 = *(i_5 + (r14_15 << 3) + 0x398)
                                
                                if (rax_171 == 0 || (*(rax_171 + 0x3d8) & 0x7fffffff) u<= 0)
                                    rax_171.b = 0
                                else
                                    rax_171.b = 1
                                
                                if (rax_171.b != 0)
                                    var_2f8_1 = rsi_17 + 1
                                    
                                    if (rsi_17 + 1 s> var_2f4_1)
                                        sub_1409da5f0(&var_1bc8, rsi_17)
                                        rcx_107 = var_308_1
                                    
                                    void* rdx_78 = &var_1bc8
                                    
                                    if (rcx_107 != 0)
                                        rdx_78 = rcx_107
                                    
                                    int64_t rax_174 = sx.q(rsi_17) << 6
                                    void* rdx_79 = rdx_78 + rax_174
                                    
                                    if (rdx_78 == neg.q(rax_174))
                                        rdx_79 = nullptr
                                    else
                                        *(rdx_79 + 0x1c) = 0x3f800000
                                        *(rdx_79 + 0x10) = 0
                                        *(rdx_79 + 0x18) = 0
                                        *(rdx_79 + 0x24) = 0
                                        *(rdx_79 + 0x2c) = 0x3f800000
                                        *rdx_79 = 0
                                    
                                    *rdx_79 = *(i_5 + (r14_15 << 3) + 0x398)
                                    zmm0_2 = var_1bd8_1:4.d
                                    zmm0_2[0] = zmm0_2[0] f*
                                        *(&data_142e669e0 + ((zx.q(rdi_21.d) & 1) << 2))
                                    zmm0_2[0] = zmm0_2[0] + var_1bf8_1[0]
                                    *(rdx_79 + 0x10) = zmm0_2[0]
                                    zmm0_2 = var_1bd8_1:4.d
                                    zmm0_2[0] = zmm0_2[0] f*
                                        *(&data_142e669e0 + ((zx.q((rdi_21 u>> 1).d) & 1) << 2))
                                    zmm0_2[0] = zmm0_2[0] + var_1bf8_1[1]
                                    *(rdx_79 + 0x14) = zmm0_2[0]
                                    zmm0_2 = var_1bd8_1:4.d
                                    zmm0_2[0] = zmm0_2[0] f*
                                        *(&data_142e669e0 + ((zx.q((rdi_21 u>> 2).d) & 1) << 2))
                                    zmm0_2[0] = zmm0_2[0] + var_1bf8_1[2]
                                    *(rdx_79 + 0x1c) = 0
                                    *(rdx_79 + 0x18) = zmm0_2[0]
                                    *(rdx_79 + 0x20) = var_1bd8_1.d[0]
                                    *(rdx_79 + 0x24) = var_1bd8_1.d[0]
                                    *(rdx_79 + 0x28) = var_1bd8_1.d[0]
                                    *(rdx_79 + 0x2c) = 0
                                    zmm1_1 = var_1bd8_1.d
                                    zmm1_1[0] = zmm1_1[0] * 0.5f
                                    zmm1_1[0] = zmm1_1[0] * 1.0625f
                                    *(rdx_79 + 0x30) = zmm1_1[0]
                                    zmm0_2 = var_1bd8_1.d
                                    zmm0_2[0] = zmm0_2[0] - zmm1_1[0]
                                    *(rdx_79 + 0x34) = zmm0_2[0]
                                    rsi_17 = var_2f8_1
                                    rcx_107 = var_308_1
                                
                                if ((rbx_17.b & 7) u>= 7)
                                    rbx_17 |= 8
                                else
                                    rbx_17 ^= ((rbx_17 + 1) ^ rbx_17) & 7
                            while (((rbx_17 u>> 3).b & 1) == 0)
                            
                            if (rsi_17 == 0)
                                i_5.o = 0.o
                                float var_24c8[0x4]
                                var_1bd8_1 = var_24c8[0].q
                                __builtin_memcpy(&var_1bf8_1, 
                                    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x"
                                "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
                                        3f", 
                                    0x20)
                            else
                                void* r9_16 = &var_1bc8
                                
                                if (rcx_107 != 0)
                                    r9_16 = rcx_107
                                
                                float (* rax_188)[0x4] = sx.q(rsi_17 - 1) << 6
                                i_5.o = *(rax_188 + r9_16)
                                var_1bf8_1 = *(rax_188 + r9_16 + 0x10)
                                var_1be8_1 = *(rax_188 + r9_16 + 0x20)
                                var_1bd8_1 = (*(rax_188 + r9_16 + 0x30))[0].q
                                
                                if (0 != 0)
                                    memmove((sx.q(rsi_17 - 1) << 6) + r9_16, 
                                        (sx.q(rsi_17) << 6) + r9_16, 0 << 6)
                                    rsi_17 = var_2f8_1
                                
                                var_2f8_1 = rsi_17 - 1
                                sub_1409da9e0(&var_1bc8)
                                rcx_107 = var_308_1
                                rsi_17 = var_2f8_1
                            
                            rdi_17 = var_29b4
                        while (i_5 != 0)
                        
                        if (rcx_107 != 0)
                            sub_140a74f90(rcx_107)
                        
                        int64_t* rsi_24 = var_2858
                        int64_t r14_16 = var_2848
                        
                        if (i_17 != 0)
                            int64_t var_2650
                            __builtin_memset(&var_2650, 0, 0x20)
                            int32_t r9_17 = 0
                            
                            if (i_17 s> 0)
                                int64_t* rbx_18 = rsi_24
                                uint64_t i_15 = zx.q(i_17)
                                uint64_t i_6
                                
                                do
                                    sub_142648d50(&var_2650, rbx_18, data_143b515a4)
                                    rbx_18 += 0xc
                                    i_6 = i_15
                                    i_15 -= 1
                                while (i_6 != 1)
                                int64_t var_2638
                                r9_17 = var_2638:4.d
                            
                            var_2a38.d = 0
                            uint64_t var_2640
                            sub_14263eb70(&var_2640, r14_16, var_2840_1, r9_17, var_2a38)
                            int64_t rdi_24 = sx.q(*(r15 + 0x18))
                            int32_t var_2630_1 = data_143b515a4
                            int32_t rax_195 = (rdi_24 + 1).d
                            *(r15 + 0x18) = rax_195
                            
                            if (rax_195 s> *(r15 + 0x1c))
                                sub_1405c4ec0(r15 + 0x10)
                            
                            sub_1426412f0(*(r15 + 0x10) + rdi_24 * 0x28, &var_2650)
                            uint64_t rcx_136 = var_2640
                            
                            if (rcx_136 != 0)
                                sub_140a74f90(rcx_136)
                            
                            int64_t rcx_137 = var_2650
                            
                            if (rcx_137 != 0)
                                sub_140a74f90(rcx_137)
                        
                        if (r14_16 != 0)
                            sub_140a74f90(r14_16)
                        
                        if (rsi_24 != 0)
                            sub_140a74f90(rsi_24)
    
    int32_t var_2090
    int32_t rsi_25 = var_2090
    int64_t var_2098
    
    if (rsi_25 s> 0)
        uint64_t rbx_19 = 0
        int32_t rax_197 = 0
        int32_t rdi_25 = 0
        int64_t var_2838
        __builtin_memset(&var_2838, 0, 0x20)
        int32_t var_2820
        
        if (var_24b0 s> 0)
            do
                float (* rax_198)[0x4] = var_24b8
                int32_t r8_42 = data_143b515a8
                zmm0_2 = *(rax_198 + rbx_19)
                zmm0_2[0] = zmm0_2[0] f+ *(r15 + 0xcc)
                zmm1_1 = *(rax_198 + rbx_19 + 4)
                zmm1_1[0] = zmm1_1[0] f+ *(r15 + 0xd0)
                float var_26e0 = zmm0_2[0]
                zmm0_2 = *(rax_198 + rbx_19 + 8)
                zmm0_2[0] = zmm0_2[0] f+ *(r15 + 0xd4)
                float var_26dc_1 = zmm1_1[0]
                float var_26d8_1 = zmm0_2[0]
                sub_142648d50(&var_2838, &var_26e0, r8_42)
                rdi_25 += 1
                rbx_19 += 0xc
            while (rdi_25 s< var_24b0)
            
            rsi_25 = var_2090
            int32_t var_281c
            rax_197 = var_281c
            rbx_19 = zx.q(var_2820)
        
        uint64_t var_2828
        
        if (rsi_25 != 0)
            int32_t rdx_88 = rbx_19.d + rsi_25
            
            if (rdx_88 s> rax_197)
                sub_1405dadb0(&var_2828, rdx_88)
                rbx_19 = zx.q(var_2820)
            
            memcpy(var_2828 + (sx.q(rbx_19.d) << 2), var_2098, rsi_25 << 2)
            int32_t var_2820_1 = rbx_19.d + rsi_25
        
        int64_t rdi_26 = sx.q(*(r15 + 0x18))
        int32_t var_2818_1 = data_143b515a8
        int32_t rax_201 = (rdi_26 + 1).d
        *(r15 + 0x18) = rax_201
        
        if (rax_201 s> *(r15 + 0x1c))
            sub_1405c4ec0(r15 + 0x10)
        
        sub_1426412f0(*(r15 + 0x10) + rdi_26 * 0x28, &var_2838)
        uint64_t rcx_147 = var_2828
        
        if (rcx_147 != 0)
            sub_140a74f90(rcx_147)
        
        int64_t rcx_148 = var_2838
        
        if (rcx_148 != 0)
            sub_140a74f90(rcx_148)
    
    float var_98_1[0x4] = zmm11_1
    float var_a8_1[0x4] = zmm12_1
    float var_b8_1[0x4] = zmm13_1
    float var_c8_1[0x4] = zmm14_1
    float var_d8_1[0x4] = zmm15_1
    int32_t* var_2038
    float zmm10_1[0x4]
    
    if (rax_62 != 0)
        int32_t rdi_27 = 0
        int32_t var_2030
        
        if (var_2030 s> 0)
            zmm13_1 = 0x41a00000
            int64_t rbx_21 = 0
            zmm12_1 = 0x40000000
            zmm14_1 = 0x3ecccccd
            zmm15_1 = 0x3faa9fbe
            
            do
                zmm8_1 = *(r15 + 0xd4)
                zmm11_1 = *(r15 + 0xcc)
                zmm10_1 = *(r15 + 0xd0)
                zmm8_1[0] = zmm8_1[0] f+ *(var_2038 + rbx_21 + 0x14)
                zmm11_1[0] = zmm11_1[0] f+ *(var_2038 + rbx_21)
                zmm8_1[0] = zmm8_1[0] f+ *(var_2038 + rbx_21 + 8)
                zmm11_1[0] = zmm11_1[0] f+ *(var_2038 + rbx_21 + 0xc)
                zmm10_1[0] = zmm10_1[0] f+ *(var_2038 + rbx_21 + 4)
                zmm10_1[0] = zmm10_1[0] f+ *(var_2038 + rbx_21 + 0x10)
                zmm8_1[0] = zmm8_1[0] + zmm13_1[0]
                float var_26d0 = zmm11_1[0]
                float var_26c8_1 = zmm8_1[0]
                float var_27e0 = zmm11_1[0]
                float var_26cc_1 = zmm10_1[0]
                float var_27dc_1 = zmm10_1[0]
                float var_27d8_1 = zmm8_1[0]
                void var_253c
                sub_140acc920(&var_253c, &data_14399f634)
                float var_2a28_1 = zmm12_1[0]
                var_2a38.d = 4
                float zmm6_2
                float zmm7_2
                float zmm8_2
                float zmm9_2
                float zmm10_2
                float zmm11_2
                int32_t zmm12_2
                zmm6_2, zmm7_2, zmm8_2, zmm9_2, zmm10_2, zmm11_2, zmm12_2, zmm13_1, zmm14_1 =
                    sub_14264a440(r15 + 0x60, &var_26d0, &var_27e0, zmm14_1[0], var_2a38, &var_253c)
                zmm11_2 = zmm11_2 - zmm7_2
                zmm10_2 = zmm10_2 - zmm6_2
                zmm8_2 = zmm8_2 - zmm9_2
                void var_252c
                sub_140acc920(&var_252c, &data_14399f634)
                int128_t* var_2a30_1
                var_2a30_1.d = zmm12_2
                float var_26c0 = zmm7_2
                float var_26bc_1 = zmm6_2
                var_2a38.q = &var_252c
                float var_26b8_1 =
                    _mm_sqrt_ss(0, zmm10_2 * zmm10_2 + zmm11_2 * zmm11_2 + zmm8_2 * zmm8_2)
                    * zmm15_1[0] + zmm9_2
                zmm12_1, zmm15_1 =
                    sub_14264a690(r15 + 0x60, &var_27e0, &var_26c0, 0x41f00000, var_2a38)
                rdi_27 += 1
                rbx_21 += 0x18
            while (rdi_27 s< var_2030)
    
    int64_t var_2028
    
    if (var_2980_1.b != 0)
        void var_2010
        void* rax_204 = &var_2010
        int64_t i_10 = 0x40
        void* var_29b0_1 = &var_2010
        int64_t i_7
        
        do
            bool cond:7_1 = *rax_204 s<= 0
            int32_t r13_13 = 0
            int64_t var_2880
            __builtin_memset(&var_2880, 0, 0x1c)
            int32_t j_3 = 0
            
            if (not(cond:7_1))
                int64_t rcx_153 = 0
                int64_t var_2968_1 = 0
                int32_t j_2
                
                do
                    zmm12_1 = *(r15 + 0xcc)
                    zmm13_1 = *(r15 + 0xd0)
                    zmm14_1 = *(r15 + 0xd4)
                    zmm6_1 = zmm13_1
                    zmm7_1 = zmm14_1
                    int32_t rdi_28 = data_14399f634
                    zmm8_1 = zmm12_1
                    zmm9_1 = zmm13_1
                    void* rcx_155 = var_2918
                    int32_t rbx_22 = rdi_28
                    int32_t* rdx_95 = sx.q(*(*(rax_204 - 8) + rcx_153)) * 0x34 + var_2028
                    zmm8_1[0] = zmm8_1[0] f+ *rdx_95
                    zmm9_1[0] = zmm9_1[0] f+ rdx_95[1]
                    zmm14_1[0] = zmm14_1[0] f+ rdx_95[2]
                    zmm12_1[0] = zmm12_1[0] f+ rdx_95[6]
                    zmm6_1[0] = zmm6_1[0] f+ rdx_95[7]
                    zmm7_1[0] = zmm7_1[0] f+ rdx_95[8]
                    zmm12_1[0] = zmm12_1[0] f+ rdx_95[3]
                    zmm13_1[0] = zmm13_1[0] f+ rdx_95[4]
                    zmm12_1[0] = zmm12_1[0] f+ rdx_95[9]
                    zmm13_1[0] = zmm13_1[0] f+ rdx_95[0xa]
                    zmm14_1[0] = zmm14_1[0] f+ rdx_95[5]
                    zmm14_1[0] = zmm14_1[0] f+ rdx_95[0xb]
                    uint64_t rax_206 = zx.q(rdx_95[0xc].b)
                    zmm6_1[0] = zmm6_1[0] - zmm9_1[0]
                    zmm7_1[0] = zmm7_1[0] - zmm14_1[0]
                    float var_297c_2 = zmm8_1[0]
                    zmm12_1[0] = zmm12_1[0] - zmm8_1[0]
                    float var_29f4_4 = zmm9_1[0]
                    zmm12_1[0] = zmm12_1[0] - zmm12_1[0]
                    float var_29e0_4 = zmm14_1[0]
                    int32_t rcx_156 = *(rcx_155 + (rax_206 << 2))
                    zmm13_1[0] = zmm13_1[0] - zmm13_1[0]
                    var_29b4 = zmm12_1[0]
                    zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
                    zmm14_1[0] = zmm14_1[0] - zmm14_1[0]
                    var_2970 = zmm13_1[0]
                    zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
                    zmm2_1 = zmm12_1
                    zmm2_1[0].d = zmm2_1[0].d f* zmm12_1[0]
                    zmm12_1[0] = zmm12_1[0] * zmm12_1[0]
                    bool cond:9_1 = (*(rdx_95 + 0x32) & 1) != 0
                    zmm2_1[0].d = zmm2_1[0].d f+ zmm6_1[0]
                    var_29e4 = zmm14_1[0]
                    
                    if (cond:9_1)
                        rbx_22 = data_14399f630
                    
                    bool cond:10_1 = (*(rdx_95 + 0x32) & 2) != 0
                    var_2978 = zmm6_1[0]
                    
                    if (cond:10_1)
                        rdi_28 = data_14399f630
                    
                    zmm2_1[0].d = zmm2_1[0].d f+ zmm7_1[0]
                    float var_29e8_3 = zmm7_1[0]
                    float var_28e0 = zmm8_1[0]
                    zmm14_1[0] = zmm14_1[0] * zmm14_1[0]
                    float var_28dc_1 = zmm9_1[0]
                    float temp0_25[0x4] = _mm_sqrt_ss(0, zmm2_1[0].d)
                    float var_28d8_1 = zmm14_1[0]
                    float var_29dc_4 = temp0_25[0]
                    zmm13_1[0] = zmm13_1[0] * zmm13_1[0]
                    zmm12_1[0] = zmm12_1[0] + zmm13_1[0]
                    zmm12_1[0] = zmm12_1[0] + zmm14_1[0]
                    var_2974 = _mm_sqrt_ss(0, zmm12_1[0])[0]
                    float var_28d0 = zmm12_1[0]
                    float var_28cc_1 = zmm13_1[0]
                    float var_28c8_1 = zmm14_1[0]
                    sub_142648d50(&var_2880, &var_28e0, rbx_22)
                    sub_142648d50(&var_2880, &var_28d0, rbx_22)
                    int32_t k = 1
                    int32_t r12_18 = r13_13 + 1
                    
                    do
                        int32_t r8_49 = data_14399f630
                        zmm10_1 = zmm9_1
                        float temp0_27[0x4] = _mm_cvtepi32_ps(zx.o(k))
                        
                        if (k == 8)
                            r8_49 = rdi_28
                        
                        temp0_27[0] = temp0_27[0] * 0.125f
                        temp0_27[0] = temp0_27[0] * zmm12_1[0]
                        zmm2_1 = temp0_27
                        temp0_27[0] = temp0_27[0] * zmm6_1[0]
                        zmm6_1 = var_2970
                        zmm8_1[0] = zmm8_1[0] + temp0_27[0]
                        zmm2_1[0].d = zmm2_1[0].d f* zmm7_1[0]
                        zmm7_1 = var_29b4
                        temp0_27[0] = temp0_27[0] + temp0_27[0]
                        zmm10_1[0] = zmm10_1[0] + temp0_27[0]
                        zmm9_1 = 0x3f800000
                        float var_26b0 = zmm8_1[0]
                        temp0_27[0] = temp0_27[0] - 1f
                        temp0_27[0] = temp0_27[0] * zmm13_1[0]
                        float var_26ac_1 = zmm10_1[0]
                        temp0_27[0] = temp0_27[0] * temp0_27[0]
                        zmm6_1[0] = zmm6_1[0] + temp0_27[0]
                        zmm9_1[0] = 1f - temp0_27[0]
                        zmm0_2 = var_29e0_4
                        zmm0_2[0] = zmm0_2[0] f+ zmm2_1[0].d
                        float var_269c_1 = zmm6_1[0]
                        zmm9_1[0] = zmm9_1[0] * var_2974
                        zmm9_1[0] = zmm9_1[0] * var_29dc_4
                        zmm9_1[0] = zmm9_1[0] * 0.25f
                        zmm9_1[0] = zmm9_1[0] * 0.25f
                        zmm9_1[0] = zmm9_1[0] + zmm0_2[0]
                        temp0_27[0] = temp0_27[0] * zmm12_1[0]
                        temp0_27[0] = temp0_27[0] * zmm14_1[0]
                        zmm7_1[0] = zmm7_1[0] + temp0_27[0]
                        float var_26a8_1 = zmm9_1[0]
                        zmm0_2 = var_29e4
                        zmm0_2[0] = zmm0_2[0] + temp0_27[0]
                        float var_26a0 = zmm7_1[0]
                        zmm9_1[0] = zmm9_1[0] + zmm0_2[0]
                        float var_2698_1 = zmm9_1[0]
                        sub_142648d50(&var_2880, &var_26b0, r8_49)
                        int32_t r8_50 = data_14399f630
                        
                        if (k == 8)
                            r8_50 = rdi_28
                        
                        sub_142648d50(&var_2880, &var_26a0, r8_50)
                        sub_142648cb0(&var_2880, r13_13, r12_18 + 1, r12_18)
                        sub_142648cb0(&var_2880, r12_18 + 1, r12_18 + 2, r12_18)
                        sub_142648cb0(&var_2880, r13_13, r12_18, r12_18 + 1)
                        sub_142648cb0(&var_2880, r12_18 + 1, r12_18, r12_18 + 2)
                        r13_13 += 2
                        var_28e0 = zmm8_1[0]
                        r12_18 += 2
                        k += 1
                        float var_28d8_2 = zmm9_1[0]
                        zmm8_1 = var_297c_2
                        var_28d0 = zmm7_1[0]
                        zmm7_1 = var_29e8_3
                        float var_28cc_2 = zmm6_1[0]
                        zmm6_1 = var_2978
                        float var_28c8_2 = zmm9_1[0]
                        zmm9_1 = var_29f4_4
                        float var_28dc_2 = zmm10_1[0]
                    while (k s<= 8)
                    
                    r13_13 += 2
                    j_2 = j_3 + 1
                    rax_204 = var_29b0_1
                    rcx_153 = var_2968_1 + 4
                    r15 = arg1
                    int32_t var_2860_1 = (rcx_156 u>> 1 & 0x7f7f7f) | (rcx_156 & 0xff000000)
                    j_3 = j_2
                    var_2968_1 = rcx_153
                while (j_2 s< *rax_204)
                int32_t var_2868
                
                if (var_2868 != 0)
                    int64_t rdi_29 = sx.q(*(r15 + 0x18))
                    int32_t rax_207 = (rdi_29 + 1).d
                    *(r15 + 0x18) = rax_207
                    
                    if (rax_207 s> *(r15 + 0x1c))
                        sub_1405c4ec0(r15 + 0x10)
                    
                    sub_1426412f0(*(r15 + 0x10) + rdi_29 * 0x28, &var_2880)
                
                int64_t var_2870
                
                if (var_2870 != 0)
                    sub_140a74f90(var_2870)
                
                int64_t rcx_171 = var_2880
                
                if (rcx_171 != 0)
                    sub_140a74f90(rcx_171)
                
                rax_204 = var_29b0_1
            
            rax_204 += 0x10
            i_7 = i_10
            i_10 -= 1
            var_29b0_1 = rax_204
        while (i_7 != 1)
    
    sub_140a74f90(var_2918)
    int32_t* rdi_30 = &var_1c18
    int64_t i_9 = 0x40
    
    for (int64_t i_8 = 0x40; i_8 != 0; )
        int64_t rcx_173 = *(rdi_30 - 0x10)
        rdi_30 = &rdi_30[-4]
        i_8 -= 1
        
        if (rcx_173 != 0)
            sub_140a74f90(rcx_173)
    
    if (var_2028 != 0)
        sub_140a74f90(var_2028)
    
    if (var_2038 != 0)
        sub_140a74f90(var_2038)
    
    result = sub_140597000(&var_2048)
    
    if (var_2058 != 0)
        result = sub_140a74f90(var_2058)
    
    if (var_2068 != 0)
        result = sub_140a74f90(var_2068)
    
    if (var_2078 != 0)
        result = sub_140a74f90(var_2078)
    
    if (var_2088 != 0)
        result = sub_140a74f90(var_2088)
    
    if (var_2098 != 0)
        result = sub_140a74f90(var_2098)
    
    int64_t rcx_182 = var_20a8
    
    if (rcx_182 != 0)
        result = sub_140a74f90(rcx_182)
    
    int64_t* rbx_23 = &var_20a8
    
    do
        int64_t rcx_183 = rbx_23[-2]
        rbx_23 = &rbx_23[-2]
        i_9 -= 1
        
        if (rcx_183 != 0)
            result = sub_140a74f90(rcx_183)
    while (i_9 != 0)
    
    float (* rcx_184)[0x4] = var_24b8
    
    if (rcx_184 != 0)
        result = sub_140a74f90(rcx_184)

__security_check_cookie(rax_1 ^ &var_2a58)
return result
