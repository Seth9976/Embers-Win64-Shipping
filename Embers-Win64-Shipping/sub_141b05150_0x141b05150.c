// 函数: sub_141b05150
// 地址: 0x141b05150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t rax_2 = *arg2
int32_t var_104 = (*arg1).d
char var_e4 = 0
int32_t var_108 = 3
int128_t var_100 = *(arg1 + 4)
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x2c)
int32_t var_7c = 0x80
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0
(*(rax_2 + 0x30))(arg2, &var_a8)
int64_t var_98
int64_t* var_150 = &var_98
int32_t rcx_1 = 0
int32_t var_158 = 0
int32_t var_148 = 0xffffffff
int32_t r8 = 0
int32_t var_154 = 1
int64_t var_144 = 0
int64_t* var_88
int32_t var_80

if (var_80 != 0)
    int64_t* r9_1 = &var_98
    
    if (var_88 != 0)
        r9_1 = var_88
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_80 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_141b05268:
        int32_t rax_10 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_154_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        int32_t rax_12 = r8 - rax_11 + 0x1f
        
        if (rax_12 s> var_80)
            rax_12 = var_80
        
        var_144.d = rax_12
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_144:4.d = r8
            var_158 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_144.d = var_80
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_148 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141b05268

double zmm2[0x2] = var_148.o
var_144.d = var_80
int32_t r10 = 0xffffffff << (var_80.b & 0x1f)
int128_t var_d8 = var_158.o
double var_c8[0x2] = zmm2
double temp0_3[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
int128_t var_130 = (&var_a8).o
int128_t var_120 = var_d8
int64_t var_110 = temp0_3.q

while (true)
    int64_t rax_13 = sx.q(var_120:0xc.d)
    int64_t* rdx_5 = var_130.q
    
    if (rax_13.d == (r10.q u>> 0x20).d && var_120.q == &var_98 && rdx_5 == &var_a8)
        (*(*arg2 + 0x28))(arg2, &var_a8)
        int64_t* rax_22 = (*(*arg2 + 0x78))(arg2)
        
        if (rax_22 != 0)
            int64_t rdx_8 = *rax_22
            void* rax_23 = (*(rdx_8 + 0x150))(rax_22, rdx_8)
            
            if (rax_23 != 0 && ((*(rax_23 + 0x11a) - 1) & 0xfd) == 0)
                int64_t* rax_24 = sub_142029890(*(rax_23 + 0x188), 0)
                
                if (rax_24 != 0)
                    int64_t* r10_1 = rax_24[0x57]
                    
                    if (r10_1 != 0)
                        int32_t rax_25 = *(r10_1 + 0xc)
                        void* const rax_32
                        
                        if (rax_25 s>= data_143e1d9b4)
                            rax_32 = nullptr
                        else
                            int16_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(rax_25)
                            uint32_t rdx_10 = zx.d(temp2_1)
                            int32_t rax_27 = temp3_1 + rdx_10
                            rax_32 = *(data_143e1d9a0 + (sx.q(rax_27 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_27.w) - rdx_10) * 0x18
                        
                        if (((*(rax_32 + 8) u>> 0x1d).b & 1) == 0)
                            var_158.o = *(arg1 + 4)
                            (*(*r10_1 + 0x7c8))(r10_1, *arg1, &var_158, zx.q(*(arg1 + 0x14)), 
                                var_158, var_150, r10)
        
        int32_t var_60_1 = 0
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        int64_t var_a0
        var_a0.d = 0
        int32_t var_78_1 = 0xffffffff
        int32_t var_74_1 = 0
        void* result = sub_14059a8e0(&var_98, 0)
        
        if (var_88 != 0)
            result = sub_140a74f90(var_88)
        
        int64_t rcx_22 = var_a8
        
        if (rcx_22 != 0)
            result = sub_140a74f90(rcx_22)
        
        __security_check_cookie(rax_1 ^ &var_178)
        return result
    
    int32_t var_138
    sub_140ba6bd0(&var_a8, &var_138, *(rax_13 * 0x38 + *rdx_5))
    int64_t rax_15 = sx.q(var_138)
    void* const rax_17
    
    if (rax_15.d == 0xffffffff)
        rax_17 = nullptr
    else
        rax_17 = rax_15 * 0x38 + var_a8
    
    *(rax_17 + 8) = var_108.o
    *(rax_17 + 0x18) = var_100
    int64_t var_e8
    *(rax_17 + 0x28) = var_e8
    var_120:8.d &= not.d(var_130:0xc.d)
    sub_14059bdd0(&var_130:8)
