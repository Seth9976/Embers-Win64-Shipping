// 函数: sub_141f91140
// 地址: 0x141f91140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if ((arg1[6].b & 0x20) == 0)
    uint64_t r13
    r13.b = 0
    int32_t r15_1 = 0
    int32_t var_1e8 = 0
    void** var_158
    int64_t var_c8
    char arg_8
    void* arg_18
    char arg_20
    
    if (arg1[0xe] != 0)
    label_141f91289:
        uint8_t rbx_2 = *(arg2 + 0xe4) u>> 3 & 1
        
        if (rbx_2 != (*(*arg1 + 0x308))(arg1))
            int64_t* rcx_10 = arg1[0xe]
            (*(*rcx_10 + 0x2a0))(rcx_10, zx.q(rbx_2))
            (*(*arg1 + 0x300))(arg1, zx.q(rbx_2))
        
        int64_t* rcx_12 = arg1[0xe]
        void* rax_21 = (*(*rcx_12 + 0x4a0))(rcx_12)
        void* rax_22
        int64_t rax_23
        void* rdx_7
        
        if (rax_21 != arg1[5] && rax_21 != 0)
            rax_22 = sub_1424929c0()
            rdx_7 = *(rax_21 + 0x10)
            rax_23 = sx.q(*(rax_22 + 0x38))
        
        int32_t rax_39
        
        if (rax_21 != arg1[5] && (rax_21 == 0 || rax_23.d s> *(rdx_7 + 0x38)
                || *(*(rdx_7 + 0x30) + (rax_23 << 3)) != rax_22 + 0x30
                || *(rax_21 + 0x1a30) != arg1[5]))
            rax_39 = var_1e8
        else
            rax_39 = var_1e8 | 1
        
        int32_t rdx_19 =
            (((zx.d(*(arg2 + 0xe5)) & 4) * 2) | (arg1[0x12].d & 0x10)) << 2 | (rax_39 & 0xffffff9f)
        int64_t rax_41 = *arg2
        var_1e8 = rdx_19
        int32_t var_1d8
        void* var_1d0
        
        if ((*(rax_41 + 0x30))(arg2, rdx_19) == 0)
            char i
            
            do
                void* rax_43 = arg1[5]
                
                if (rax_43 == 0)
                    break
                
                if (*(rax_43 + 0x134) == 1)
                    break
                
                sub_140bd5b20(&var_158, arg2[0x16], 0, 0)
                arg_18.b = 0
                arg_8 = 0
                void* rax_44
                int512_t zmm0_1
                rax_44, zmm0_1 = sub_141f92500(arg1, arg2, &arg_8, &arg_18)
                void* rbx_5 = rax_44
                
                if ((*(arg2 + 0x29) & 1) != 0)
                    rbx_5 = nullptr
                else if (arg_8 == 0)
                    int64_t rax_45 = *arg2
                    int32_t var_1e4 = 0
                    (*(rax_45 + 0x168))(arg2, &var_1e4)
                    
                    if ((*(arg2 + 0x29) & 1) == 0)
                        sub_140b550b0(&var_158, arg2, zx.q(var_1e4), zmm0_1)
                    else
                        rbx_5 = nullptr
                else
                    sub_140b550b0(&var_158, arg2, 0, zmm0_1)
                    rbx_5 = nullptr
                
                int64_t* rcx_40
                
                if ((*(arg2 + 0x29) & 1) != 0)
                    rcx_40 = arg1[5]
                    
                    if ((1 & (*(rcx_40 + 0xa4) u>> 1).b) == 0)
                    label_141f91642:
                        sub_14213f9e0(rcx_40)
                        
                        if (var_c8 != 0)
                            sub_140a74f90(var_c8)
                        
                        return sub_140b4cb40(&var_158)
                    
                label_141f918b4:
                    arg1[6].d |= 0x20
                    
                    if (var_c8 != 0)
                        sub_140a74f90(var_c8)
                    
                    sub_140b4cb40(&var_158)
                    break
                
                int64_t var_b8
                
                if (var_b8 == 0)
                    goto label_141f917de
                
                int32_t r8_9 = data_143e1d9b4
                int64_t r9_4 = data_143e1d9a0
                void* const rax_52
                
                if (rbx_5 != 0)
                    int32_t rax_46 = *(rbx_5 + 0xc)
                    
                    if (rax_46 s>= r8_9)
                        rax_52 = nullptr
                    else
                        int16_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(rax_46)
                        uint32_t rdx_26 = zx.d(temp4_1)
                        int32_t rax_48 = temp5_1 + rdx_26
                        rax_52 = *(r9_4 + (sx.q(rax_48 s>> 0x10) << 3))
                            + sx.q(zx.d(rax_48.w) - rdx_26) * 0x18
                
                if (rbx_5 != 0 && (1 & (*(rax_52 + 8) u>> 0x1d).b) == 0)
                    int64_t* rax_55 = sub_141f881c0(arg1, rbx_5, nullptr)
                    char r9_5 = arg_18.b
                    arg_20 = 0
                    
                    if (sub_141fc1ce0(*rax_55, &var_158, &var_1e8, r9_5, &arg_20) == 0)
                        rcx_40 = arg1[5]
                        
                        if ((1 & (*(rcx_40 + 0xa4) u>> 1).b) != 0)
                            goto label_141f917d3
                        
                        goto label_141f91642
                    
                    void* rax_59 = arg1[0xe]
                    
                    if (rax_59 == 0)
                        goto label_141f918b4
                    
                    int32_t rax_60 = *(rax_59 + 0xc)
                    void* const rax_66
                    
                    if (rax_60 s>= data_143e1d9b4)
                        rax_66 = nullptr
                    else
                        int16_t temp6_1
                        int32_t temp7_1
                        temp6_1:temp7_1 = sx.q(rax_60)
                        uint32_t rdx_31 = zx.d(temp6_1)
                        int32_t rax_62 = temp7_1 + rdx_31
                        rax_66 = *(data_143e1d9a0 + (sx.q(rax_62 s>> 0x10) << 3))
                            + sx.q(zx.d(rax_62.w) - rdx_31) * 0x18
                    
                    if ((1 & (*(rax_66 + 8) u>> 0x1d).b) != 0)
                        goto label_141f918b4
                    
                    if (arg_20 != 0)
                        int64_t rbx_7 = *rax_55
                        void* rdi_1 = *(arg1[5] + 0x58)
                        sub_140b9b5d0(rdi_1 + 0x518, &var_1d8)
                        int64_t* r9_6 = var_1d0
                        uint32_t rdx_35 = (rbx_7 u>> 4).d
                        *r9_6 = rbx_7
                        r9_6[1].d = 0xffffffff
                        int32_t r10_2 = (0x9e3779b9 - rdx_35) ^ rdx_35 << 8
                        int32_t r8_14 = neg.d(r10_2 + rdx_35) ^ r10_2 u>> 0xd
                        int32_t rdx_38 = (rdx_35 - r10_2 - r8_14) ^ r8_14 u>> 0xc
                        int32_t r10_5 = (r10_2 - rdx_38 - r8_14) ^ rdx_38 << 0x10
                        int32_t r8_17 = (r8_14 - r10_5 - rdx_38) ^ r10_5 u>> 5
                        int32_t rdx_41 = (rdx_38 - r10_5 - r8_17) ^ r8_17 u>> 3
                        int32_t r10_8 = (r10_5 - rdx_41 - r8_17) ^ rdx_41 << 0xa
                        char* var_1f8_1
                        var_1f8_1.d = var_1d8
                        void var_198
                        sub_140824480(rdi_1 + 0x518, &var_198, 
                            (r8_17 - r10_8 - rdx_41) ^ r10_8 u>> 0xf, r9_6, var_1f8_1.d, nullptr)
                    
                    goto label_141f917de
                
                void* rax_85 = arg1[0xe]
                
                if (rax_85 != 0)
                    int32_t rax_86 = *(rax_85 + 0xc)
                    void* const rdx_44
                    
                    if (rax_86 s>= r8_9)
                        rdx_44 = nullptr
                    else
                        uint32_t rcx_49 = zx.d(rax_86.w)
                        
                        if (rax_86 s< 0)
                            rax_86 += 0xffff
                            rcx_49 -= 0x10000
                        
                        rdx_44 = *(r9_4 + (sx.q(rax_86 s>> 0x10) << 3)) + sx.q(rcx_49) * 0x18
                    
                    if ((1 & (*(rdx_44 + 8) u>> 0x1d).b) == 0)
                        goto label_141f917de
                    
                    goto label_141f917d3
                
            label_141f917d3:
                arg1[6].d |= 0x20
            label_141f917de:
                
                if (var_c8 != 0)
                    sub_140a74f90(var_c8)
                
                sub_140b4cb40(&var_158)
                i = (*(*arg2 + 0x30))(arg2)
            while (i == 0)
        
        var_1d8 = 0
        int32_t r10_10 = arg1[0x1a].d
        void* r8_21 = &arg1[0x17]
        int32_t var_1d4_1 = 1
        int32_t rcx_54 = 0
        var_1d0 = r8_21
        int32_t var_1c8_1 = 0xffffffff
        int32_t var_1c4_1 = 0
        int32_t var_1c0_1 = 0
        
        if (r10_10 != 0)
            void* rax_93 = *(r8_21 + 0x10)
            
            if (rax_93 != 0)
                r8_21 = rax_93
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_10 - 1)
            int32_t rdx_47 = *r8_21
            int32_t var_1c4_3
            
            if (rdx_47 != 0)
            label_141f9188b:
                int32_t rax_100 = neg.d(rdx_47) & rdx_47
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_100)
                int32_t var_1d4_2 = rax_100
                int32_t rax_101
                
                if (rax_100 == 0)
                    rax_101 = 0x20
                else
                    rax_101 = 0x1f - temp0_2
                
                int32_t var_1c4_2 = rcx_54 - rax_101 + 0x1f
                
                if (rcx_54 - rax_101 + 0x1f s> r10_10)
                    var_1c4_3 = r10_10
            else
                while (true)
                    int64_t rdx_48 = sx.q(r15_1)
                    rcx_54 += 0x20
                    r15_1 += 1
                    var_1c0_1 = rcx_54
                    var_1d8 = r15_1
                    
                    if (rdx_48.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_47 = *(r8_21 + (rdx_48 << 2) + 4)
                    var_1c8_1 = 0xffffffff
                    
                    if (rdx_47 != 0)
                        goto label_141f9188b
                
                var_1c4_3 = r10_10
        
        uint128_t zmm4_1 = var_1c8_1.o
        void* var_168_1 = &arg1[0x15]
        uint128_t zmm0 = var_1d8.o
        uint128_t var_178_1 = zmm4_1
        int16_t var_1a0_1 = 0
        arg3.o = zmm4_1
        var_1c8_1.o = zmm0
        arg3.o = _mm_unpackhi_pd(arg3.o, zmm4_1.q)
        result = zmm0.q
        zmm0.q = (arg3.o).q
        int32_t rcx_58 = _mm_bsrli_si128(zmm4_1, 4).d
        var_1d8.o = (&arg1[0x15]).o
        
        if (rcx_58 s< result[3].d)
            int32_t i_2
            int32_t i_1 = i_2
            
            do
                void* rcx_60 = *((sx.q(i_1) << 5) + *var_1d8.q + 8)
                
                if (*(rcx_60 + 0x48) != 0)
                    sub_141fbf2c0(rcx_60)
                else
                    sub_141b643e0(zmm0:8.q, i_1)
                    var_1a0_1.b = 1
                
                var_1c0_1 &= not.d(var_1d0:4.d)
                sub_14059bdd0(&var_1d0)
                result = var_1c8_1.q
                i_1 = i_2
            while (i_1 s< result[3].d)
            
            if (var_1a0_1.b != 0 && var_1a0_1:1.b != 0)
                result = sub_1405b6520(&arg1[0x15], arg1[0x16].d - *(arg1 + 0xdc), 1)
        
        int64_t* rcx_64 = arg1[0xe]
        
        if (rcx_64 != 0 && r13.b != 0)
            return (*(*rcx_64 + 0x418))(rcx_64)
    else if ((*(arg2 + 0xe4) & 1) != 0)
        void* rax = arg1[5]
        arg_18 = nullptr
        int64_t* rcx = *(rax + 0x68)
        char rax_2 = (*(*rcx + 0x280))(rcx, arg2, arg1, &arg_18)
        void* r9_2 = arg_18
        r13 = zx.q(rax_2)
        void* const rax_9
        
        if (r9_2 != 0)
            int32_t rax_3 = *(r9_2 + 0xc)
            
            if (rax_3 s>= data_143e1d9b4)
                rax_9 = nullptr
            else
                int16_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(rax_3)
                uint32_t rdx_1 = zx.d(temp0_1)
                int32_t rax_5 = temp1_1 + rdx_1
                rax_9 = *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3))
                    + sx.q(zx.d(rax_5.w) - rdx_1) * 0x18
        
        if (r9_2 != 0 && (1 & (*(rax_9 + 8) u>> 0x1d).b) == 0)
            char rbx_1 = 0
            
            if (data_143a2d8ac != 0 && (*(arg2 + 0xe4) & 2) != 0)
                char rax_13 = (*(*arg2 + 0x30))(arg2)
                r9_2 = arg_18
                
                if (rax_13 != 0)
                    rbx_1 = 1
            
            sub_141f9b710(arg1, r9_2, rbx_1)
            (*(*arg1 + 0x310))(arg1, arg1[0xe], arg2)
            void* rcx_8 = arg1[0xe]
            var_1e8 |= 2
            *(rcx_8 + 0x98) = *(arg1 + 0x7c)
            goto label_141f91289
        
        if (r13.b == 0 && (*(arg2 + 0xe4) & 0x12) == 0x12 && (*(*arg2 + 0x30))(arg2) != 0)
            if (*(arg1[5] + 0x58) != 0)
                sub_14249b2a0()
            
            return sub_141f9b710(arg1, nullptr, 0)
        
        arg1[6].d |= 0x20
        void* rbx_4 = arg1[5]
        result = zx.q(*(rbx_4 + 0xa4) u>> 1)
        
        if ((1 & result.b) == 0)
            result = *(rbx_4 + 0x1310)
            void* const rdx_8 = *result
            
            if (rdx_8 != 0 && (*(rdx_8 + 0x30) & 2) == 0)
                sub_141f79e30(&var_158, rdx_8, 0)
                char var_68
                char var_68_1 = var_68 | 0x20
                var_158 = &data_143286f68
                arg_8 = 0x10
                int64_t* var_150
                char* rdx_9 = *var_150
                
                if (&rdx_9[1] u> var_150[1])
                    sub_140b53380(&var_158, &arg_8, 1)
                else
                    arg_8 = *rdx_9
                    *var_150 += 1
                
                int32_t* rdx_11 = *var_150
                
                if (&rdx_11[1] u> var_150[1])
                    int64_t* rcx_20 = &var_158
                    char var_12f
                    
                    if ((var_12f & 0x20) != 0)
                        sub_140b54070(rcx_20, arg1 + 0x34, arg3)
                    else
                        var_158[0x2a](rcx_20, arg1 + 0x34, 4)
                else
                    *(arg1 + 0x34) = *rdx_11
                    *var_150 += 4
                
                int64_t* rcx_21 = **(rbx_4 + 0x1310)
                (*(*rcx_21 + 0x2c8))(rcx_21, &arg_20, &var_158, 1)
                var_158 = &data_143286b38
                int64_t var_50
                
                if (var_50 != 0)
                    sub_140a74f90(var_50)
                
                int64_t var_60
                
                if (var_60 != 0)
                    sub_140a74f90(var_60)
                
                if (var_c8 != 0)
                    sub_140a74f90(var_c8)
                
                return sub_140b4cb40(&var_158)

return result
