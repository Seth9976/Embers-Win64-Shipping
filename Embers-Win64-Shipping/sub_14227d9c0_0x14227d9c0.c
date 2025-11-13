// 函数: sub_14227d9c0
// 地址: 0x14227d9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm12 = arg2
sub_140b33630("PlayerControllerTick")
void* rax

if (arg3 == 3)
    if ((arg1[0x9b].b & 4) != 0)
        rax.b = 1
    else
        int64_t* rcx = *(data_143f5b298 + 0xaf8)
        
        if (rcx == 0)
            rax.b = 0
        else if ((*(*rcx + 8))(rcx).b == 0)
            rax.b = 0
        else
            int64_t* rcx_1 = *(data_143f5b298 + 0xb08)
            
            if (rcx_1 == 0)
                rax.b = 0
            else if ((*(*rcx_1 + 0x100))(rcx_1) == 0)
                rax.b = 0
            else
                int64_t* rcx_2 = *(data_143f5b298 + 0xb08)
                int64_t* rax_5 = (*(*rcx_2 + 0x100))(rcx_2)
                int64_t rdx_1 = *rax_5
                
                if ((*(rdx_1 + 0x40))(rax_5, rdx_1).b != 0)
                    rax.b = 1
                else
                    rax.b = 0

if (arg3 != 3 || rax.b != 0)
    int32_t rcx_10
    rcx_10.b = *(arg1 + 0xec) == 0
    int32_t rbx_1
    
    if ((rcx_10.b & sub_140b5b8a0(arg1[0x1d].d, 0)) == 0)
        rbx_1 = *(arg1 + 0xec)
        sub_140b5b8a0(arg1[0x1d].d, 0x11a)
        int32_t rcx_11
        rcx_11.b = rbx_1 == 0
    
    int32_t rax_18
    int128_t zmm6_1
    int128_t zmm7_1
    int128_t zmm8_1
    rax_18, zmm6_1, zmm7_1, zmm8_1 = sub_141dcdc50(arg1)
    int64_t rsi
    rsi.b = rax_18 == 3
    char rax_20
    
    if ((*(arg1 + 0x294) & 2) != 0)
        rax_20 = (*(*arg1 + 0x6a8))(arg1)
    
    if ((*(arg1 + 0x294) & 2) == 0 || rax_20 == 0)
        rbx_1.b = 0
    else
        rbx_1.b = 1
    
    void* rbp_1 = nullptr
    int64_t var_98
    int64_t zmm0_2
    int64_t zmm1_1
    int32_t zmm2_1
    
    if (*(arg1 + 0x5f) == 2 && rsi.b == 0 && rbx_1.b == 0)
        int64_t* r8_1 = arg1[0x4a]
        int128_t zmm10
        int128_t var_68_1 = zmm10
        int128_t zmm11
        int128_t var_78_1 = zmm11
        
        if (r8_1 != 0)
            int32_t rax_21 = *(r8_1 + 0xc)
            void* const rax_28
            
            if (rax_21 s>= data_143e1d9b4)
                rax_28 = nullptr
            else
                int16_t temp6_1
                int32_t temp7_1
                temp6_1:temp7_1 = sx.q(rax_21)
                uint32_t rdx_6 = zx.d(temp6_1)
                int32_t rax_23 = temp7_1 + rdx_6
                rax_28 = *(data_143e1d9a0 + (sx.q(rax_23 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_23.w) - rdx_6) * 0x18
            
            if (((*(rax_28 + 8) u>> 0x1d).b & 1) == 0 && *(r8_1 + 0x5f) == 2
                    && (r8_1[0xb].b & 0x10) != 0)
                void* rax_32 = (*(*r8_1 + 0x628))(r8_1)
                
                if (rax_32 != 0)
                    void* rax_34 = sub_140d21950(rax_32, sub_14254d8b0())
                    
                    if (rax_34 != 0)
                        uint64_t rax_35 = *(rax_32 + 0xb0)
                        void* const rax_43
                        
                        if (rax_35 != 0)
                            int32_t rax_36 = *(rax_35 + 0xc)
                            
                            if (rax_36 s>= data_143e1d9b4)
                                rax_43 = nullptr
                            else
                                int16_t temp8_1
                                int32_t temp9_1
                                temp8_1:temp9_1 = sx.q(rax_36)
                                uint32_t rdx_10 = zx.d(temp8_1)
                                int32_t rax_38 = temp9_1 + rdx_10
                                rax_43 = *(data_143e1d9a0 + (sx.q(rax_38 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_38.w) - rdx_10) * 0x18
                        
                        if (rax_35 == 0 || ((*(rax_43 + 8) u>> 0x1d).b & 1) != 0)
                            rax_35.b = 0
                        else
                            rax_35.b = 1
                        
                        if (rax_35.b != 0 && (*(*rax_34 + 0x40))(rax_34) != 0)
                            int64_t* rax_48 = (*(*rax_34 + 0x30))(rax_34)
                            
                            if (rax_48 != 0)
                                int64_t rdx_12 = *arg1
                                int128_t var_38_1 = zmm7_1
                                void* rax_49 = (*(rdx_12 + 0x150))(arg1, rdx_12)
                                zmm0_2 = rax_48[1].d
                                zmm7_1 = *(rax_49 + 0x520)
                                
                                if (zmm0_2.d f== 0f)
                                    rax_48[1].d = zmm7_1.d
                                    (*(*rax_48 + 8))(rax_48)
                                else
                                    zmm10.d = zmm7_1.d f- zmm0_2.d
                                    int128_t var_48_1 = zmm8_1
                                    zmm10.d = zmm10.d f* *(arg1[0x4a] + 0x98)
                                    int64_t* rax_50
                                    rax_50, zmm0_2 = sub_1424b0d70()
                                    void* rbx_3 = rax_50[0x23]
                                    
                                    if (rbx_3 == 0)
                                        int64_t rdx_13 = *rax_50
                                        (*(rdx_13 + 0x390))(rax_50, rdx_13)
                                        rbx_3 = rax_50[0x23]
                                    
                                    zmm11 = *(rbx_3 + 0x270)
                                    zmm8_1 = *(rbx_3 + 0x274)
                                    *(rax_48 + 0x15) = 0
                                    
                                    if (*(rax_48 + 0x14) != 0)
                                        int64_t* rcx_29 = arg1[0x4a]
                                        int128_t var_28_1 = zmm6_1
                                        zmm6_1.d = zmm7_1.d f- *(rax_48 + 0xc)
                                        zmm6_1.d = zmm6_1.d f* rcx_29[0x13].d
                                        zmm0_2, rax_50 = sub_141dc5480(rcx_29, zmm0_2.d)
                                        zmm0_2.d =
                                            zmm0_2.d f* __minss_xmmss_memss(zmm8_1.d, 0x40a00000).d
                                        
                                        if (not(zmm6_1.d f<= zmm0_2.d))
                                            if (rax_48[2].d.d f>= rax_48[1].d)
                                                *(rax_48 + 0x15) = 1
                                            else
                                                (*(*rax_48 + 8))(rax_48)
                                    
                                    zmm1_1 = *(rax_49 + 0x528)
                                    zmm2_1 = *(arg1 + 0x564)
                                    zmm0_2.d = zmm1_1.d f- zmm2_1
                                    
                                    if (zmm0_2.d f<= *(rbx_3 + 0x278) || zmm2_1 f== 0f)
                                        zmm2_1 = arg1[0xad].d
                                        rax_50.b = 0
                                    else
                                        rax_50.b = 1
                                        zmm2_1 = zmm1_1.d
                                    
                                    arg1[0xad].d = zmm2_1
                                    
                                    if (rax_50.b == 0)
                                        zmm0_2.d = zmm1_1.d f- zmm2_1
                                    
                                    if (rax_50.b != 0 || not(zmm0_2.d f>= *(rbx_3 + 0x27c)))
                                        rax_50.b = 1
                                    
                                    *(arg1 + 0x564) = zmm1_1.d
                                    
                                    if (rax_50.b == 0 && not(zmm11.d f<= 0f))
                                        zmm0_2.d = sub_141dc5480(arg1[0x4a], zmm0_2.d).d f* zmm11.d
                                        zmm1_1.d = zmm12.q.d f+ 0.0599999987f
                                        
                                        if (not(zmm10.d f<= _mm_max_ss(zmm0_2.d, zmm1_1.d).q.d))
                                            int64_t* rbx_4 = arg1[0x4a]
                                            int64_t rax_52 = sub_142591550()
                                            int64_t r8_2 = *rbx_4
                                            int64_t* rax_53 = (*(r8_2 + 0x610))(rbx_4, rax_52, r8_2)
                                            
                                            if (*(rax_48 + 0x15) == 0)
                                                char rax_54
                                                
                                                if (rax_53 != 0)
                                                    int64_t r8_3 = *rax_53
                                                    var_98 = 0
                                                    rax_54 = (*(r8_3 + 0x3e8))(rax_53, 0, r8_3)
                                                
                                                if (rax_53 == 0 || rax_54 == 0)
                                                    char rax_56 =
                                                        (*(*rax_34 + 0x18))(rax_34, zmm10.q)
                                                    int64_t rdx_15 = *rax_34
                                                    void* const rcx_37
                                                    
                                                    if ((*(rdx_15 + 0x40))(rax_34, rdx_15) == 0)
                                                        rcx_37 = nullptr
                                                    else
                                                        int64_t rdx_16 = *rax_34
                                                        rcx_37 = (*(rdx_16 + 0x30))(rax_34, rdx_16)
                                                    
                                                    if (rax_56 != 0 && rcx_37 != 0)
                                                        *(rcx_37 + 0x10) = zmm7_1.d
                                                        
                                                        if (*(rcx_37 + 0x14) == 0)
                                                            *(rcx_37 + 0xc) = *(rcx_37 + 8)
                                                            *(rcx_37 + 0x14) = 1
                                                        
                                                        *(rcx_37 + 8) = zmm7_1.d
        
        void* rcx_39 = arg1[0x57]
        
        if (rcx_39 != 0)
            int64_t* rax_61 = sub_14226f770(rcx_39)
            
            if (rax_61 != arg1[0x4a] && rax_61 != 0)
                int64_t r8_4 = *rax_61
                int64_t* rax_62 = (*(r8_4 + 0x6c8))(rax_61, &var_98, r8_4)
                *(arg1 + 0x2cc) = *rax_62
                *(arg1 + 0x2d4) = rax_62[1].d
        
        goto label_14227e133
    
    if (arg1[0x1e].b u<= 1)
    label_14227e133:
        int32_t rax_86 = *(arg1 + 0xc)
        
        if (rax_86 s< data_143e1d9b4)
            int16_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rax_86)
            uint32_t rdx_26 = zx.d(temp2_1)
            int32_t rax_88 = temp3_1 + rdx_26
            rbp_1 = *(data_143e1d9a0 + (sx.q(rax_88 s>> 0x10) << 3))
                + sx.q(zx.d(rax_88.w) - rdx_26) * 0x18
        
        if (((*(rbp_1 + 8) u>> 0x1d).b & 1) == 0)
            (*(*arg1 + 0x450))(arg1, zmm12.q)
        
        arg1[0x84] = data_143dbb208
        arg1[0x85].d = data_143dbb210
    else
        if (arg1[0x69] == 0)
            void* r14_2 = arg1[0x53]
            
            if (r14_2 == 0)
                (*(*arg1 + 0xd80))(arg1)
            else
                void* rax_64 = sub_142531230()
                void* rdx_18 = *(r14_2 + 0x10)
                int64_t rax_65 = sx.q(*(rax_64 + 0x38))
                
                if (rax_65.d s<= *(rdx_18 + 0x38)
                        && *(*(rdx_18 + 0x30) + (rax_65 << 3)) == rax_64 + 0x30)
                    (*(*arg1 + 0xd80))(arg1)
        
        if (arg1[0x69] != 0 || arg1[0x69] != 0)
            (*(*arg1 + 0xa90))(arg1, zmm12.q)
        
        int32_t rax_69 = *(arg1 + 0xc)
        void* const rax_76
        
        if (rax_69 s>= data_143e1d9b4)
            rax_76 = nullptr
        else
            int16_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(rax_69)
            uint32_t rdx_20 = zx.d(temp4_1)
            int32_t rax_71 = temp5_1 + rdx_20
            rax_76 = *(data_143e1d9a0 + (sx.q(rax_71 s>> 0x10) << 3))
                + sx.q(zx.d(rax_71.w) - rdx_20) * 0x18
        
        if (((*(rax_76 + 8) u>> 0x1d).b & 1) == 0)
            void* rcx_48 = arg1[0x57]
            
            if (rcx_48 != 0)
                int64_t rax_79 = sub_14226f770(rcx_48)
                
                if (rax_79 != arg1[0x4a] && rax_79 != 0)
                    (*(*arg1 + 0xc18))(arg1, rax_79, zmm12.d)
                
                if (rsi.b != 0 && rbx_1.b != 0)
                    int64_t* rcx_50 = arg1[0x4a]
                    
                    if (rcx_50 != 0 && (*(arg1[0x57] + 0x2710) & 0x80) != 0)
                        int64_t* rax_82 = (*(*rcx_50 + 0x628))(rcx_50)
                        
                        if (rax_82 != 0)
                            int64_t rdx_23 = *rax_82
                            
                            if ((*(rdx_23 + 0x578))(rax_82, rdx_23) == 0)
                                int64_t* rax_84 = sub_141f15620(rax_82, &var_98)
                                zmm2_1 = data_143dbb1f8
                                zmm1_1 = data_143dbb200
                                zmm0_2 = data_143dbb1fc
                                
                                if (zmm2_1 f!= *rax_84 || zmm0_2.d f!= *(rax_84 + 4)
                                        || zmm1_1.d f!= rax_84[1].d)
                                    rax_84.b = 1
                                else
                                    rax_84.b = 0
                                
                                void* rax_85
                                
                                if (rax_84.b != 0)
                                    rax_85 = arg1[0x57]
                                    *(rax_85 + 0x2710) |= 0x200
                                else
                                    if (zmm2_1 f!= *(rax_82 + 0xc4) || zmm0_2.d f!= rax_82[0x19].d
                                            || not(zmm1_1.d f== *(rax_82 + 0xcc)))
                                        rax_84.b = 1
                                    
                                    if (rax_84.b != 0)
                                        rax_85 = arg1[0x57]
                                        *(rax_85 + 0x2710) |= 0x200
            
            goto label_14227e133
else
    if (arg1[0x69] != 0)
        zmm12 = sub_14227eff0(arg1, zmm12, 1)
    
    arg1[0x84] = data_143dbb208
    arg1[0x85].d = data_143dbb210
    int32_t rax_7 = *(arg1 + 0xc)
    void* const rbp
    
    if (rax_7 s>= data_143e1d9b4)
        rbp = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_7)
        uint32_t rdx_3 = zx.d(temp0_1)
        int32_t rax_9 = temp1_1 + rdx_3
        rbp = *(data_143e1d9a0 + (sx.q(rax_9 s>> 0x10) << 3)) + sx.q(zx.d(rax_9.w) - rdx_3) * 0x18
    
    if (((*(rbp + 8) u>> 0x1d).b & 1) == 0)
        (*(*arg1 + 0x450))(arg1, zmm12)

return sub_140b37f60("PlayerControllerTick") __tailcall
