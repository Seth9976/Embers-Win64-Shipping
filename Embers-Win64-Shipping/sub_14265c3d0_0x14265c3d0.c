// 函数: sub_14265c3d0
// 地址: 0x14265c3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t rax_2 = data_143dbb200
uint128_t* result = arg2
uint128_t zmm0 = zx.o(data_143dbb1f8.q)
uint64_t var_11c = zmm0.q
int32_t var_120 = rax_2
int32_t var_114 = rax_2
zmm0.q = zmm0.q
*(arg1 + 0x39c) = zmm0
uint128_t var_128 = zmm0
*(arg1 + 0x3ac) = var_11c
*(arg1 + 0x3b4) = 0.d

if ((*(*arg1 + 0x150))() != 0)
    int64_t r15
    int64_t var_38_1 = r15
    
    if ((arg1[0xd].b & 0x80) != 0)
        int64_t rax_30 = (*(*arg1 + 0x150))(arg1)
        void* rax_31 = sub_142452380()
        int32_t var_a8 = 5
        char var_50_1 = 0
        void* var_a0
        sub_1405ab0f0(&var_a0, rax_30, rax_31)
        char var_50_2 = 1
        sub_1405b0c60(&var_a8)
        int64_t** var_98
        char i
        int64_t var_70
        
        if (i == 0)
            int64_t* var_78
            int64_t* rdi_2 = var_78
            
            do
                void* rax_32
                
                if (rdi_2 == 0)
                    rax_32.b = 0
                else
                    rax_32 = sub_140d21950(rdi_2, sub_14254cd20())
                    
                    if (rax_32 == 0)
                        rdi_2 = var_78
                        rax_32.b = 0
                    else
                        int64_t rdx_13 = *rax_32
                        
                        if ((*(rdx_13 + 0x48))(rax_32, rdx_13).b == 0)
                            rdi_2 = var_78
                            rax_32.b = 0
                        else
                            rdi_2 = var_78
                            rax_32.b = 1
                
                if (rax_32.b != 0)
                    float (* rax_35)[0x4] = (*(*rdi_2 + 0x548))(rdi_2, &var_128, 0, 0)
                    
                    if (*(arg1 + 0x3b4) == 0)
                        if ((*rax_35)[6].b != 0)
                            *(arg1 + 0x39c) = *rax_35
                            *(arg1 + 0x3ac) = rax_35[1][0].q
                            *(arg1 + 0x3b4) = (*rax_35)[6]
                    else if ((*rax_35)[6].b != 0)
                        *(arg1 + 0x39c) = __minss_xmmss_memss((*(arg1 + 0x39c)).d, *rax_35).d
                        arg1[0x74].d = __minss_xmmss_memss(arg1[0x74].d.d, (*rax_35)[1]).d
                        *(arg1 + 0x3a4) = __minss_xmmss_memss((*(arg1 + 0x3a4)).d, (*rax_35)[2]).d
                        arg1[0x75].d = __maxss_xmmss_memss(arg1[0x75].d.d, (*rax_35)[3]).d
                        *(arg1 + 0x3ac) = __maxss_xmmss_memss((*(arg1 + 0x3ac)).d, rax_35[1][0]).d
                        arg1[0x76].d = __maxss_xmmss_memss(arg1[0x76].d.d, (*rax_35)[5]).d
                
                void* rax_37 = var_a0
                int32_t var_90
                int32_t rdx_15 = var_90
                int32_t var_68
                int32_t r8_5 = var_68
                int32_t var_88
                int32_t rsi_2 = var_88 + 1
                
                if (rsi_2 s>= rdx_15 + r8_5)
                label_14265caba:
                    int64_t var_78_1 = 0
                    char var_84 = 1
                    break
                
                int64_t r13_1 = sx.q(rsi_2) << 3
                
                while (true)
                    if (rsi_2 s>= rdx_15)
                        rdi_2 = *(var_70 + (sx.q(rsi_2 - rdx_15) << 3))
                    else
                        rdi_2 = *(var_98 + r13_1)
                    
                    int32_t var_80 = var_80 + 1
                    
                    if (rdi_2 != 0)
                        void* rax_44 = sub_141dc9840(rdi_2)
                        
                        if (rax_44 != 0)
                            void* const rax_51
                            
                            if ((var_a8.b & 1) != 0)
                                int32_t rax_45 = *(rdi_2 + 0xc)
                                
                                if (rax_45 s>= data_143e1d9b4)
                                    rax_51 = nullptr
                                else
                                    int16_t temp4_1
                                    int32_t temp5_1
                                    temp4_1:temp5_1 = sx.q(rax_45)
                                    uint32_t rdx_17 = zx.d(temp4_1)
                                    int32_t rax_47 = temp5_1 + rdx_17
                                    rax_51 = *(data_143e1d9a0 + (sx.q(rax_47 s>> 0x10) << 3))
                                        + sx.q(zx.d(rax_47.w) - rdx_17) * 0x18
                            
                            if ((var_a8.b & 1) == 0 || ((*(rax_51 + 8) u>> 0x1d).b & 1) == 0)
                                int32_t rcx_22 = var_a8
                                
                                if (((rcx_22 u>> 1).b & 1) == 0)
                                    goto label_14265c9da
                                
                                uint64_t rax_55 = sub_1405949a0()
                                
                                if (rax_55.b != 0)
                                    rcx_22 = var_a8
                                label_14265c9da:
                                    
                                    if (((rcx_22 u>> 2).b & 1) == 0)
                                    label_14265ca5a:
                                        
                                        if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                                rax_44) == rax_37)
                                            if (rax_44 == *(rax_37 + 0x30))
                                                break
                                            
                                            void* rax_56 = sub_1425bd0d0()
                                            void* rdx_19 = rdi_2[2]
                                            rax_32 = sx.q(*(rax_56 + 0x38))
                                            
                                            if (rax_32.d s> *(rdx_19 + 0x38))
                                                break
                                            
                                            if (*(*(rdx_19 + 0x30) + (rax_32 << 3))
                                                    != rax_56 + 0x30)
                                                break
                                    else
                                        if ((*(rax_44 + 0x1f4) & 0x20) == 0
                                                || (*(rax_44 + 0x1f6) & 8) != 0)
                                            rax_55 = zx.q(*(rax_44 + 0x1f5))
                                        
                                        if (((*(rax_44 + 0x1f4) & 0x20) != 0
                                                && (*(rax_44 + 0x1f6) & 8) == 0) || (rax_55.b & 0x40) != 0
                                                || rax_55.b s< 0)
                                            r15.b = 1
                                        else
                                            r15.b = 0
                                        
                                        void* rcx_24 = *(rax_44 + 0xb8)
                                        char* r14_2 = *(rax_44 + 0x248)
                                        
                                        if (rcx_24 != 0)
                                            rax_55 = sub_1424359b0(rcx_24)
                                        
                                        if (rcx_24 == 0 || rax_55 == 0 || r14_2 == rax_55)
                                            rcx_24.b = 1
                                        else
                                            rcx_24.b = 0
                                        
                                        if (r14_2 == 0 || *r14_2 == 2)
                                            rax_55.b = 1
                                        else
                                            rax_55.b = 0
                                        
                                        if (rcx_24.b != 0 || rax_55.b != 0)
                                            rax_55.b = 1
                                        
                                        if (r15.b != 0 && rax_55.b != 0)
                                            goto label_14265ca5a
                        
                        r8_5 = var_68
                        rdx_15 = var_90
                    
                    rsi_2 += 1
                    r13_1 += 8
                    
                    if (rsi_2 s>= rdx_15 + r8_5)
                        goto label_14265caba
                
                var_78 = rdi_2
                var_88 = rsi_2
            while (i == 0)
            
            result = arg2
        
        if (var_50_2 != 0)
            char var_50_3 = 0
            int64_t var_58
            sub_142441560(var_a0, var_58)
            
            if (var_70 != 0)
                sub_140a74f90(var_70)
            
            if (var_98 != 0)
                sub_140a74f90(var_98)
    else
        int32_t r11_1 = 0
        var_128:4.d = 1
        var_128.d = 0
        int32_t r10_1 = arg1[0x26].d
        var_120.q = &arg1[0x23]
        int32_t rcx = 0
        var_11c:4.d = 0xffffffff
        int32_t var_114_1 = 0
        char var_110
        var_110.d = 0
        
        if (r10_1 != 0)
            void* rax_6 = arg1[0x25]
            void* r8_1 = &arg1[0x23]
            
            if (rax_6 != 0)
                r8_1 = rax_6
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rdx_2 = *r8_1
            int32_t var_114_3
            
            if (rdx_2 != 0)
            label_14265c51b:
                int32_t rax_13 = neg.d(rdx_2) & rdx_2
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
                var_128:4.d = rax_13
                int32_t rax_14
                
                if (rax_13 == 0)
                    rax_14 = 0x20
                else
                    rax_14 = 0x1f - temp0_2
                
                int32_t var_114_2 = rcx - rax_14 + 0x1f
                
                if (rcx - rax_14 + 0x1f s> r10_1)
                    var_114_3 = r10_1
            else
                while (true)
                    int64_t rdx_3 = sx.q(r11_1)
                    rcx += 0x20
                    r11_1 += 1
                    var_110.d = rcx
                    var_128.d = r11_1
                    
                    if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_2 = *(r8_1 + (rdx_3 << 2) + 4)
                    var_11c:4.d = 0xffffffff
                    
                    if (rdx_2 != 0)
                        goto label_14265c51b
                
                var_114_3 = r10_1
        
        int32_t rdx_5 = arg1[0x26].d
        double zmm2[0x2] = var_11c:4.o
        int32_t var_114_4 = rdx_5
        double var_b8_1[0x2] = zmm2
        uint128_t var_c8_1 = var_128
        int32_t r15_1 = 0xffffffff << (rdx_5 & 0x1f).b
        int32_t r8_3 = rdx_5 s>> 5
        int32_t r9_2 = rdx_5 & 0xffffffe0
        int64_t var_d8_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
        var_11c:4.d = r15_1
        uint128_t var_f8 = (&arg1[0x21]).o
        uint128_t var_e8_1 = var_c8_1
        
        if (rdx_5 != r10_1)
            void* rax_18 = arg1[0x25]
            void* r11_2 = &arg1[0x23]
            
            if (rax_18 != 0)
                r11_2 = rax_18
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_1 - 1)
            int32_t rdx_9 = *(r11_2 + (sx.q(r8_3) << 2)) & r15_1
            int32_t var_114_6
            
            if (rdx_9 != 0)
            label_14265c606:
                int32_t rax_24 = neg.d(rdx_9) & rdx_9
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_24)
                int32_t rbx_1
                
                if (rax_24 == 0)
                    rbx_1 = 0x20
                else
                    rbx_1 = 0x1f - temp0_4
                
                int32_t var_114_5 = r9_2 - rbx_1 + 0x1f
                
                if (r9_2 - rbx_1 + 0x1f s> r10_1)
                    var_114_6 = r10_1
            else
                while (true)
                    int64_t rcx_4 = sx.q(r8_3)
                    r9_2 += 0x20
                    r8_3 += 1
                    
                    if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_9 = *(r11_2 + (rcx_4 << 2) + 4)
                    var_11c:4.d = 0xffffffff
                    
                    if (rdx_9 != 0)
                        goto label_14265c606
                
                var_114_6 = r10_1
            result = arg2
        
        while (true)
            int64_t rcx_6 = sx.q(var_e8_1:0xc.d)
            int32_t rax_17
            
            if (rcx_6.d != (var_11c u>> 0x20).d || var_e8_1.q != &arg1[0x23])
                rax_17.b = 0
            else
                rax_17.b = 1
            
            int64_t* rdx_10 = var_f8.q
            
            if (rax_17.b == 0 || rdx_10 != &arg1[0x21])
                rax_17.b = 1
            else
                rax_17.b = 0
            
            if (rax_17.b == 0)
                break
            
            int64_t rax_25 = *rdx_10
            int64_t rcx_7 = rcx_6 * 0x34
            
            if (*(arg1 + 0x3b4) == 0)
                if (*(rcx_7 + rax_25 + 0x1c) != 0)
                    *(arg1 + 0x39c) = *(rcx_7 + rax_25 + 4)
                    *(arg1 + 0x3ac) = *(rcx_7 + rax_25 + 0x14)
                    *(arg1 + 0x3b4) = *(rcx_7 + rax_25 + 0x1c)
            else if (*(rcx_7 + rax_25 + 0x1c) != 0)
                *(arg1 + 0x39c) = __minss_xmmss_memss((*(arg1 + 0x39c)).d, *(rcx_7 + rax_25 + 4)).d
                arg1[0x74].d = __minss_xmmss_memss((*(rcx_7 + rax_25 + 8)).d, arg1[0x74].d).d
                *(arg1 + 0x3a4) =
                    __minss_xmmss_memss((*(rcx_7 + rax_25 + 0xc)).d, *(arg1 + 0x3a4)).d
                arg1[0x75].d = __maxss_xmmss_memss((*(rcx_7 + rax_25 + 0x10)).d, arg1[0x75].d).d
                *(arg1 + 0x3ac) =
                    __maxss_xmmss_memss((*(rcx_7 + rax_25 + 0x14)).d, *(arg1 + 0x3ac)).d
                arg1[0x76].d = __maxss_xmmss_memss((*(rcx_7 + rax_25 + 0x18)).d, arg1[0x76].d).d
            
            var_e8_1:8.d &= not.d(var_f8:0xc.d)
            sub_14059bdd0(&var_f8:8)

*result = *(arg1 + 0x39c)
result[1].q = *(arg1 + 0x3ac)
*(result + 0x18) = *(arg1 + 0x3b4)
__security_check_cookie(rax_1 ^ &var_148)
return result
