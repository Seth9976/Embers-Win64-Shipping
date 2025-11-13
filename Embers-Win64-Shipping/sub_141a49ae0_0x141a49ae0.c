// 函数: sub_141a49ae0
// 地址: 0x141a49ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t r8 = 0
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int64_t var_88
int64_t* var_78

if (arg2 s>= 0 && arg2 s< *(arg1 + 0x20))
    int32_t rbx_1 = *(*(arg1 + 0x18) + (sx.q(arg2) << 2))
    
    if (rbx_1 != 0xffffffff)
        int64_t var_128 = *(arg1 + 0x28)
        int32_t var_120_1 = *(arg1 + 0x30)
        int128_t var_d8 = var_128.o
        sub_141a6a710(&var_128, arg4)
        var_128.o = var_128.o
        sub_141a4f560(&var_128, rbx_1, &var_d8, &var_98)
        sub_140747650(arg6 + 0x138, arg4)
        var_120_1.q = &var_88
        int32_t rcx_4 = 0
        var_128.d = 0
        int32_t var_118_1 = 0xffffffff
        int32_t r8_2 = 0
        var_128:4.d = 1
        int64_t var_114_1 = 0
        int32_t var_70
        
        if (var_70 != 0)
            int64_t* r9_1 = &var_88
            
            if (var_78 != 0)
                r9_1 = var_78
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(var_70 - 1)
            int32_t rdx_5 = *r9_1
            
            if (rdx_5 != 0)
            label_141a49c68:
                int32_t rax_12 = neg.d(rdx_5) & rdx_5
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
                var_128:4.d = rax_12
                int32_t rax_13
                
                if (rax_12 == 0)
                    rax_13 = 0x20
                else
                    rax_13 = 0x1f - temp0_2
                
                int32_t rax_14 = r8_2 - rax_13 + 0x1f
                
                if (rax_14 s> var_70)
                    rax_14 = var_70
                
                var_114_1.d = rax_14
            else
                while (true)
                    int64_t rdx_6 = sx.q(rcx_4)
                    r8_2 += 0x20
                    rcx_4 += 1
                    var_114_1:4.d = r8_2
                    var_128.d = rcx_4
                    
                    if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        var_114_1.d = var_70
                        break
                    
                    rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                    var_118_1 = 0xffffffff
                    
                    if (rdx_5 != 0)
                        goto label_141a49c68
        
        double zmm2[0x2] = var_118_1.o
        double var_b0_1[0x2] = zmm2
        int32_t r10_1 = 0xffffffff << (var_70.b & 0x1f)
        int128_t var_c0_1 = var_128.o
        var_114_1.d = var_70
        double temp0_3[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
        int128_t var_108 = (&var_98).o
        uint128_t var_f8_1 = var_c0_1
        int64_t var_e8_1 = temp0_3.q
        
        while (true)
            int64_t rax_15 = sx.q(var_f8_1:0xc.d)
            int64_t rdx_7 = var_108.q
            
            if (rax_15.d == (r10_1.q u>> 0x20).d && var_f8_1.q == &var_88 && rdx_7 == &var_98)
                break
            
            int32_t* rcx_9 = rax_15 * 0x1c + *rdx_7
            int64_t rdx_8 = sx.q(*rcx_9)
            void** rcx_11 = rdx_8 * 0x88 + *(arg1 + 0xa0)
            
            if ((rcx_11[0x10].b & 2) == 0)
                rcx_11 = *rcx_11
            
            uint128_t zmm1_1 = zx.o(*(arg5 + 0x18))
            *(arg5 + 0x24) = zmm1_1.q
            *(arg5 + 0x2c) = rdx_8.d
            char var_11c_1 = rcx_11[2].b
            int32_t var_120_2 = rdx_8.d
            int128_t zmm0_2
            zmm0_2.q = zmm1_1.q
            *(arg6 + 0x124) = zmm0_2
            var_128.o = zmm0_2
            (*(*rcx_11 + 0x38))(rcx_11, arg3, arg4, &rcx_9[1], arg5, arg6, var_128, var_120_2, 
                r10_1)
            var_f8_1:8.d &= not.d(var_108:0xc.d)
            sub_14059bdd0(&var_108:8)
        
        r8 = var_58

int32_t var_50_1 = 0

if (r8 != 0)
    sub_140a74f90(r8)

int64_t var_90
var_90.d = 0
int32_t var_68_1 = 0xffffffff
int32_t var_64_1 = 0
void* result = sub_14059a8e0(&var_88, 0)

if (var_78 != 0)
    result = sub_140a74f90(var_78)

int64_t rcx_17 = var_98

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

__security_check_cookie(rax_1 ^ &var_158)
return result
