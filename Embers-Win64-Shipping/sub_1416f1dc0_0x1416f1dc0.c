// 函数: sub_1416f1dc0
// 地址: 0x1416f1dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
(*(*arg1 + 0x1d8))(arg1, &data_1439a9538)
int32_t rax_3
int512_t zmm1
rax_3, zmm1 = sub_140b4e7c0(arg1, &data_1439a9538)
int64_t* result

if (rax_3 s>= 0x19)
    result = sub_141708680(arg1, arg2, zmm1)
    
    if ((arg1[5].b & 1) != 0)
        int64_t rcx_16 = arg2[8]
        
        if (rcx_16 != 0)
            arg2[8] = sub_140a84c80(rcx_16, 0, 0)
        
        arg2[9].d = 0
        result = sub_141734dc0(arg2, arg2[1].d - *(arg2 + 0x34), 0)
else
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x2c)
    int32_t var_54_1 = 0
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    int32_t var_5c_1 = 0x80
    int32_t var_58_1 = 0xffffffff
    sub_1417085b0(arg1, &var_88, zmm1)
    int64_t var_78
    int64_t* var_110_1 = &var_78
    int32_t rcx_2 = 0
    int32_t var_118 = 0
    int32_t var_108_1 = 0xffffffff
    int32_t r8_1 = 0
    int32_t var_114_1 = 1
    int64_t var_104_1 = 0
    int64_t* var_68
    int32_t var_60
    
    if (var_60 != 0)
        int64_t* r10_1 = &var_78
        
        if (var_68 != 0)
            r10_1 = var_68
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_60 - 1)
        int32_t rdx_3 = *r10_1
        
        if (rdx_3 != 0)
        label_1416f1ee9:
            int32_t rax_11 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
            int32_t var_114_2 = rax_11
            int32_t rax_12
            
            if (rax_11 == 0)
                rax_12 = 0x20
            else
                rax_12 = 0x1f - temp0_2
            
            int32_t rax_13 = r8_1 - rax_12 + 0x1f
            
            if (rax_13 s> var_60)
                rax_13 = var_60
            
            var_104_1.d = rax_13
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx_2)
                r8_1 += 0x20
                rcx_2 += 1
                var_104_1:4.d = r8_1
                var_118 = rcx_2
                
                if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    var_104_1.d = var_60
                    break
                
                rdx_3 = *(r10_1 + (rdx_4 << 2) + 4)
                var_108_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_1416f1ee9
    
    double zmm2_1[0x2] = var_108_1.o
    var_104_1.d = var_60
    uint128_t var_b0_1 = var_118.o
    double var_a0_1[0x2] = zmm2_1
    double temp0_3[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
    uint128_t var_e0 = (&var_88).o
    uint128_t var_d0_1 = var_b0_1
    int64_t var_c0_1 = temp0_3.q
    
    while (true)
        int64_t rcx_5 = sx.q(var_d0_1:0xc.d)
        char rax_15
        
        if (rcx_5.d != ((0xffffffff << (var_60.b & 0x1f)).q u>> 0x20).d || var_d0_1.q != &var_78)
            rax_15 = 0
        else
            rax_15 = 1
        
        int64_t rdx_5 = var_e0.q
        
        if (rax_15 == 0 || rdx_5 != &var_88)
            rax_15 = 1
        else
            rax_15 = 0
        
        if (rax_15 == 0)
            break
        
        int32_t* rcx_7 = rcx_5 * 0x38 + *rdx_5
        int32_t rbx_1 = *rcx_7
        int32_t rdi_1 = rcx_7[8]
        int32_t rsi_1 = rcx_7[0xb]
        uint64_t var_f0_1 = *(rcx_7 + 0x18)
        uint64_t var_e8_1 = *(rcx_7 + 0x24)
        sub_14172f800(arg2, &var_118)
        int32_t rax_16 = var_118
        char* var_120_1 = nullptr
        *var_110_1 = rbx_1
        *(var_110_1 + 4) = var_f0_1
        var_110_1[2] = var_e8_1
        var_110_1[3].d = rsi_1
        *(var_110_1 + 0xc) = rdi_1
        *(var_110_1 + 0x1c) = 0xffffffff
        void var_f8
        sub_141735d80(arg2, &var_f8, *var_110_1, var_110_1, rax_16, var_120_1)
        var_d0_1:8.d &= not.d(var_e0:0xc.d)
        sub_14059bdd0(&var_e0:8)
    
    int32_t var_40_2 = 0
    
    if (var_48_1 != 0)
        sub_140a74f90(var_48_1)
    
    result = sub_141736080(&var_88, 0)
    
    if (var_68 != 0)
        result = sub_140a74f90(var_68)
    
    int64_t rcx_15 = var_88
    
    if (rcx_15 != 0)
        result = sub_140a74f90(rcx_15)

__security_check_cookie(rax_1 ^ &var_148)
return result
