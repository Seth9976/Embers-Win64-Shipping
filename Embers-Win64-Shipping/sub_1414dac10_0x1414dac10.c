// 函数: sub_1414dac10
// 地址: 0x1414dac10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t var_e8 = arg4
sub_140b33630("RenderVelocities")

if (data_1439c8830 != 0)
    char var_f8_1 = 0
    int32_t i_1 = 0
    
    if (*(arg1 + 0xa8) s> 0)
        int64_t r12_1 = 0
        int64_t rsi
        int64_t var_28_1 = rsi
        int64_t rdi
        int64_t var_30_1 = rdi
        int64_t r14
        int64_t var_40_1 = r14
        char rdx_1
        int32_t i
        
        do
            int64_t* rbx_2 = *(arg1 + 0xa0) + r12_1
            
            if (rbx_2[0x2a4].d != 2 || *(rbx_2 + 0xd64) != 0)
                r14.b = 0
            else
                r14.b = 1
            
            char rax_2 = sub_14135d270(rbx_2)
            char rax_3 = sub_141108ca0(arg1)
            char rax_4 = sub_141461ee0(rbx_2)
            char rax_5
            
            if (rax_4 != 0)
                rax_5 = sub_1414593e0(rbx_2)
            
            if (rax_4 == 0 || rax_5 == 0)
                rsi.b = 0
            else
                rsi.b = 1
            
            int64_t rax_6
            uint64_t rdx
            
            if (data_143f0f21f != 0)
                rdx = zx.q(data_143f0f1a0)
                rax_6 = sx.q(rdx.d)
            
            if (data_143f0f21f == 0 || ((*(&data_143f025fc + rax_6 * 0x14) u>> 0x13).b & 1) == 0)
                rdi.b = 0
            else
                rdi.b = test_bit(data_143f13cd8, rdx)
            
            char rax_10 = sub_141461ea0(rbx_2)
            
            if (rax_2 != 0 || r14.b != 0 || rax_3 != r14.b || rsi.b != 0 || rdi.b != 0
                    || rax_10 != 0)
                rax_10 = 1
            
            r12_1 += 0x5240
            rdx_1 = var_f8_1 | rax_10
            i = i_1 + 1
            var_f8_1 = rdx_1
            i_1 = i
        while (i s< *(arg1 + 0xa8))
        
        if (rdx_1 != 0)
            int64_t* rbx_3 = arg3
            
            if (*rbx_3 == 0)
                int64_t rax_11 = data_143ec4fdc
                int32_t var_94_1 = rax_11.d
                int32_t var_90_1 = rax_11:4.d
                char var_100_1 = 0
                wchar16 const* const var_68_1 = u"UnknownTexture2D"
                int32_t var_98_1 = data_1439c7b30
                char var_108_1 = 1
                char var_110_1 = 1
                wchar16 const* const var_118_1 = u"Velocity"
                int16_t var_70_1 = 0
                int128_t var_a8 = data_1439c7b20
                int32_t var_8c_1 = 0
                int32_t var_88_1 = 1
                int32_t var_84_1 = 0x10000
                int16_t var_80_1 = 1
                int64_t var_7c_1 = 0xe
                int32_t var_74_1 = 0x10009
                int16_t var_60_1 = 1
                char var_5e_1 = 0
                sub_1419a0ce0(&data_1439c9260, arg2, &var_a8, rbx_3, var_118_1, var_110_1, 
                    var_108_1, var_100_1)
            
            TEB* gsbase
            
            if (data_143eecff0 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143eecff0)
                
                if (data_143eecff0 == 0xffffffff)
                    int64_t* rcx_37 = data_143db18d0
                    
                    if (rcx_37 == 0)
                        sub_140a53c40()
                        rcx_37 = data_143db18d0
                    
                    int64_t* rax_46 = (*(*rcx_37 + 0xb0))(rcx_37, u"r.MotionBlurDebug", 1)
                    int64_t rax_44
                    
                    if (rax_46 == 0)
                        rax_44 = 0
                    else
                        int64_t rdx_6 = *rax_46
                        rax_44 = (*(rdx_6 + 0x58))(rax_46, rdx_6)
                    
                    data_143eecfe8 = rax_44
                    _Init_thread_footer(&data_143eecff0)
            
            int32_t rdi_1 = var_e8
            sub_1414c3830(arg2, rbx_3, rdi_1, arg5)
            
            if (sub_140b011d0() == 0)
                sub_1414db1f0(arg1, arg2, rbx_3.d, rdi_1, rbx_3)
                sub_141096650(arg2)
            else if (data_1439c7a0e != 0)
                if (*(data_143ee80d8 + 4) == 0)
                    sub_1414db1f0(arg1, arg2, rbx_3.d, rdi_1, rbx_3)
                    sub_141096650(arg2)
                else
                    sub_141096650(arg2)
                    sub_1414db530(arg1, arg2)
            else if (data_143f01c92 != 0 || *(data_143ee80d8 + 4) == 0)
                sub_1414db1f0(arg1, arg2, rbx_3.d, rdi_1, rbx_3)
                sub_141096650(arg2)
            else
                sub_141096650(arg2)
                sub_1414db530(arg1, arg2)
            
            if (rdi_1 != 0)
                void* rcx_16 = *sub_1410f83c0(&data_143ec4c60)
                var_e8.q = rcx_16
                
                if (rcx_16 != 0)
                    *(rcx_16 + 8) += 1
                    int64_t rax_18 = var_e8.q
                    int64_t* rbx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rcx_17 = &rbx_6[1]
                    
                    if (rcx_17 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x10)
                        rbx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rcx_17 = &rbx_6[1]
                    
                    *(arg2 + 0x30) = rcx_17
                    *rbx_6 = rax_18
                    void*** rcx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_19 = &rcx_21[5]
                    
                    if (rax_19 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x30)
                        rcx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_19 = &rcx_21[5]
                    
                    *(arg2 + 0x30) = rax_19
                    void**** rax_20 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_20 = rcx_21
                    *(arg2 + 8) = &rcx_21[1]
                    rcx_21[1] = 0
                    rcx_21[3] = rbx_6
                    rbx_3 = arg3
                    *rcx_21 = &data_142d549c8
                    rcx_21[2].d = 1
                    rcx_21[4].d = 0
                
                sub_1405d1550(&var_e8)
            
            int64_t rax_22 = *rbx_3
            int128_t var_d8_1 = data_142d57d10
            void*** rbx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            int128_t zmm0_2 = data_142d57920
            int128_t var_c8_1 = data_142d3f800
            int64_t r14_1 = *(rax_22 + 0x10)
            int64_t* rsi_1 = *(rax_22 + 8)
            void* rax_23 = &rbx_11[0xa]
            
            if (rax_23 u> *(arg2 + 0x38))
                sub_140b0e3d0(arg2 + 0x30, 0x58)
                rbx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                rax_23 = &rbx_11[0xa]
            
            *(arg2 + 0x30) = rax_23
            int64_t* rax_24 = *(arg2 + 8)
            *(arg2 + 0x14) += 1
            *rax_24 = rbx_11
            *(arg2 + 8) = &rbx_11[1]
            rbx_11[1] = 0
            *rbx_11 = &data_142d56628
            rbx_11[2].d = var_d8_1.d
            __builtin_memset(rbx_11 + 0x14, 0xff, 0x20)
            *(rbx_11 + 0x34) = zmm0_2:4.d
            rbx_11[7].d = zmm0_2:8.d
            *(rbx_11 + 0x3c) = zmm0_2:0xc.d
            rbx_11[8] = rsi_1
            rbx_11[9] = r14_1
            
            if ((*(*rsi_1 + 8))(rsi_1) == 0)
                int64_t* rcx_28 = rbx_11[8]
                
                if ((*(*rcx_28 + 0x18))(rcx_28) == 0)
                    int64_t* rcx_29 = rbx_11[8]
                    
                    if ((*(*rcx_29 + 0x20))(rcx_29) == 0)
                        int64_t* rcx_30 = rbx_11[8]
                        (*(*rcx_30 + 0x10))(rcx_30)
            
            int64_t* rcx_31 = rbx_11[9]
            
            if ((*(*rcx_31 + 8))(rcx_31) == 0)
                int64_t* rcx_32 = rbx_11[9]
                
                if ((*(*rcx_32 + 0x18))(rcx_32) == 0)
                    int64_t* rcx_33 = rbx_11[9]
                    
                    if ((*(*rcx_33 + 0x20))(rcx_33) == 0)
                        int64_t* rcx_34 = rbx_11[9]
                        (*(*rcx_34 + 0x10))(rcx_34)

int64_t result = sub_140b37f60("RenderVelocities")
__security_check_cookie(rax_1 ^ &var_138)
return result
