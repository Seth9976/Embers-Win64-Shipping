// 函数: sub_14202e420
// 地址: 0x14202e420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int16_t* var_100 = arg2
uint64_t result

if (sub_14243ac50(arg4).d == 0)
    int64_t r8
    result, r8 = sub_1423de4f0(data_143f5b298, arg4)
    
    if (*(result + 0x1a0) == 0)
        r8.b = 1
        data_143f3f3c8 = 1
        int64_t* var_120
        
        if (sub_140b0f6c0(&var_100, u"PREPHYSBONES") == 0)
            int32_t rax_7 = sub_14230f1e0(var_100, nullptr)
            
            if (rax_7 == 0xffffffff)
                int32_t var_6c_1 = 0x80
                int64_t var_98 = 0
                var_120 = &var_98
                int64_t var_118_2 = *(arg1 + 0xac)
                int32_t var_90_1 = 0
                int64_t var_88
                __builtin_memset(&var_88, 0, 0x1c)
                int32_t var_68_1 = 0xffffffff
                int32_t var_64_1 = 0
                int64_t var_58_1 = 0
                int32_t var_50_1 = 0
                sub_142012ea0(&var_120)
                char var_128
                char* var_d0 = &var_128
                
                if (var_90_1 - var_64_1 s> 0)
                    sub_140a6c1e0(&var_98)
                    char r8_4 = var_128
                    int64_t rcx_18 = var_98
                    var_120 = &var_d0
                    sub_14181b5f0(rcx_18, var_90_1 - var_64_1, r8_4)
                
                sub_1405a4480(&var_98)
                int32_t var_118_3 = &var_88
                int32_t rcx_20 = 0
                var_120.d = 0
                int32_t r8_5 = 0
                var_120:4.d = 1
                int32_t var_110_2 = 0xffffffff
                int64_t var_10c_1 = 0
                int32_t var_70
                
                if (var_70 != 0)
                    int64_t* r10_1 = &var_88
                    int64_t* var_78
                    
                    if (var_78 != 0)
                        r10_1 = var_78
                    
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(var_70 - 1)
                    int32_t rdx_9 = *r10_1
                    
                    if (rdx_9 != 0)
                    label_14202e76b:
                        int32_t rax_22 = neg.d(rdx_9) & rdx_9
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rax_22)
                        var_120:4.d = rax_22
                        int32_t rax_23
                        
                        if (rax_22 == 0)
                            rax_23 = 0x20
                        else
                            rax_23 = 0x1f - temp0_2
                        
                        int32_t rax_24 = r8_5 - rax_23 + 0x1f
                        
                        if (rax_24 s> var_70)
                            rax_24 = var_70
                        
                        var_10c_1.d = rax_24
                    else
                        while (true)
                            int64_t rdx_10 = sx.q(rcx_20)
                            r8_5 += 0x20
                            rcx_20 += 1
                            var_10c_1:4.d = r8_5
                            var_120.d = rcx_20
                            
                            if (rdx_10.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                                var_10c_1.d = var_70
                                break
                            
                            rdx_9 = *(r10_1 + (rdx_10 << 2) + 4)
                            var_110_2 = 0xffffffff
                            
                            if (rdx_9 != 0)
                                goto label_14202e76b
                
                double zmm2_1[0x2] = var_110_2.o
                double var_c0_1[0x2] = var_120.o
                uint32_t rax_26 = (zmm2_1[0] u>> 0x20).d
                double var_b0_1[0x2] = zmm2_1
                double var_f8[0x2] = (&var_98).o
                int64_t var_d8_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
                
                if (rax_26 s< var_70)
                    int32_t i = var_c0_1[1]:4.d
                    
                    do
                        int64_t* rdi_2 = nullptr
                        var_120 = nullptr
                        int64_t rdx_11 = sx.q(i) * 3
                        int64_t rcx_22 = *var_f8[0]
                        int32_t rsi_2 = *(rcx_22 + (rdx_11 << 3) + 8)
                        int64_t r14_1 = *(rcx_22 + (rdx_11 << 3))
                        
                        if (rsi_2 != 0)
                            sub_1405a4c70(&var_120, rsi_2, 0)
                            rdi_2 = var_120
                            memcpy(rdi_2, r14_1, rsi_2 * 2)
                        else
                            var_118_3 = 0
                        
                        int64_t* r8_9 = &data_142d40450
                        
                        if (rsi_2 != 0)
                            r8_9 = rdi_2
                        
                        sub_140b1f700(arg3, u"%s", r8_9)
                        
                        if (rdi_2 != 0)
                            sub_140a74f90(rdi_2)
                        
                        var_c0_1[1].d &= not.d(var_f8[1]:4.d)
                        sub_14059bdd0(&var_f8[1])
                        i = var_c0_1[1]:4.d
                    while (i s< *(var_c0_1[0] i+ 0x18))
                
                int32_t var_50_2 = 0
                
                if (var_58_1 != 0)
                    sub_140a74f90(var_58_1)
                
                sub_140669e00(&var_98)
            else
                sub_14230f1e0(var_100, u"Collision")
                sub_14231dd00(arg1 + 0xac, rax_7, sub_142315ab0(arg1 + 0xac, rax_7) == 0)
                
                if (sub_14230f1e0(var_100, u"Navigation,Cover") != 0xffffffff)
                    (*(*arg1 + 0x340))(arg1)
                
                if (sub_14230f1e0(var_100, u"Volumes").d != 0xffffffff)
                    if (sub_1419c6730() == 0)
                        sub_140b1f640(arg3, 
                            Debug viewmodes not allowed on consoles by default.  See "
                        "AllowDebugViewmodes().")
                    else
                        sub_142041e30(arg1)
        else
            int32_t var_110_1 = 0xffffffff
            data_143f407f4 = data_143f407f4 == 0
            var_120 = nullptr
            int32_t var_118_1 = 0
            sub_140d3cc80(sub_142591550(), &var_120, 1, 0x10, 0)
            int32_t r8_2 = var_118_1
            int64_t* rdx_2 = var_120
            int32_t i_1 = var_110_1 + 1
            int32_t i_2 = i_1
            
            if (i_1 s< r8_2)
                while (rdx_2[sx.q(i_1)] == 0)
                    result = zx.q(i_1 + 1)
                    i_2 = result.d
                    i_1 = result.d
                    
                    if (result.d s>= r8_2)
                        break
            
            while (i_1 s>= 0)
                if (i_1 s>= r8_2)
                    break
                
                int64_t* rbx_1 = rdx_2[sx.q(i_1)]
                
                if (sub_141ee6400(rbx_1) == *(arg4 + 0x1b0))
                    char rax_6 = data_143f407f4
                    *(rbx_1 + 0x71c) &= 0xbf
                    *(rbx_1 + 0x71c) |= (rax_6 & 1) << 6
                    sub_141ee8490(rbx_1)
                
                r8_2 = var_118_1
                rdx_2 = var_120
                i_1 = i_2 + 1
                i_2 = i_1
                
                if (i_1 s< r8_2)
                    while (rdx_2[sx.q(i_1)] == 0)
                        result = zx.q(i_1 + 1)
                        i_2 = result.d
                        i_1 = result.d
                        
                        if (result.d s>= r8_2)
                            break
            
            if (rdx_2 != 0)
                sub_140a74f90(rdx_2)

result.b = 1
__security_check_cookie(rax_1 ^ &var_158)
return result
