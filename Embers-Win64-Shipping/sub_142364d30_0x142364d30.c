// 函数: sub_142364d30
// 地址: 0x142364d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void var_128
int64_t rax_2 = __security_cookie ^ &var_128
int128_t zmm1
zmm1.d = (*(arg1 + 0x58)).d f* 100f
zmm1.d = zmm1.d f+ zmm1.d
zmm1.d = zmm1.d f- 0.5f
sub_140a20c40(arg2, int.d(zmm1.d) s>> 1)
zmm1.d = (*(arg1 + 0x60)).d f* 100f
zmm1.d = zmm1.d f+ zmm1.d
zmm1.d = zmm1.d f- 0.5f
sub_140a20c40(arg2, int.d(zmm1.d) s>> 1)

if (arg1[0x64] != 0)
    sub_140a20ba0(arg2, u"_StreamCache_Ver", 0x10)
    sub_140a20c40(arg2, 0x139d)
    int32_t rdx_4 = arg2[1].d
    int32_t rax_3
    rax_3.b = rdx_4 s<= 0
    int32_t rsi_1 = rdx_4 - 1
    
    if (rdx_4 s<= 0)
        rsi_1 = 0
    
    int32_t rax_5 = rax_3 + 1 + rdx_4
    arg2[1].d = rax_5
    
    if (rax_5 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    int64_t rcx_5 = sx.q(rsi_1)
    *(*arg2 + (rcx_5 << 1)) = 0x5f
    *(*arg2 + (rcx_5 << 1) + 2) = 0
    sub_140a20ba0(arg2, u"MEM_", 4)
    sub_140a20c40(arg2, *(arg1 + 0x68))
    
    if (arg1[0x6c] != 0)
        sub_140a20ba0(arg2, u"_LegacyChunking_", 0x10)
        sub_140a20c40(arg2, *(arg1 + 0x70))

sub_140a20c40(arg2, zx.d(*arg1))
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c_1 = 0x80
int32_t var_68_1 = 0xffffffff
int32_t var_64_1 = 0
int64_t var_58_1 = 0
int32_t var_50_1 = 0
sub_1417d6d70(&var_98, &arg1[8])
int64_t var_88
int64_t* var_100_1 = &var_88
int32_t rcx_12 = 0
int32_t var_108_1 = 0
int32_t var_f8_1 = 0xffffffff
int32_t r8_1 = 0
int32_t var_104_1 = 1
int64_t var_f4_1 = 0
int64_t* var_78
int32_t var_70

if (var_70 != 0)
    int64_t* r10_1 = &var_88
    
    if (var_78 != 0)
        r10_1 = var_78
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(var_70 - 1)
    int32_t rdx_11 = *r10_1
    
    if (rdx_11 != 0)
    label_142364f48:
        int32_t rax_15 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_15)
        int32_t var_104_2 = rax_15
        int32_t rax_16
        
        if (rax_15 == 0)
            rax_16 = 0x20
        else
            rax_16 = 0x1f - temp0_2
        
        int32_t rax_17 = r8_1 - rax_16 + 0x1f
        
        if (rax_17 s> var_70)
            rax_17 = var_70
        
        var_f4_1.d = rax_17
    else
        while (true)
            int64_t rdx_12 = sx.q(rcx_12)
            r8_1 += 0x20
            rcx_12 += 1
            var_f4_1:4.d = r8_1
            var_108_1 = rcx_12
            
            if (rdx_12.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                var_f4_1.d = var_70
                break
            
            rdx_11 = *(r10_1 + (rdx_12 << 2) + 4)
            int32_t var_f8_2 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_142364f48

int128_t var_b8_1 = var_108_1.o
int128_t var_a8_1 = 0xffffffff
var_f4_1.d = var_70
int64_t zmm2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
int128_t var_e8 = (&var_98).o
int128_t var_d8_1 = var_b8_1
int64_t var_c8_1 = zmm2

while (true)
    int64_t rcx_16 = sx.q(var_d8_1:0xc.d)
    int64_t* rax_18 = var_e8.q
    
    if (rcx_16.d == ((0xffffffff << (var_70.b & 0x1f)).q u>> 0x20).d && var_d8_1.q == &var_88
            && rax_18 == &var_98)
        break
    
    zmm1.d = (*(*rax_18 + rcx_16 * 0x10 + 4)).d f* 0.00100000005f
    zmm1.d = zmm1.d f+ zmm1.d
    zmm1.d = zmm1.d f- 0.5f
    sub_140a20c40(arg2, int.d(zmm1.d) s>> 1)
    var_d8_1:8.d &= not.d(var_e8:0xc.d)
    sub_14059bdd0(&var_e8:8)

int32_t var_50_2 = 0

if (var_58_1 != 0)
    sub_140a74f90(var_58_1)

int64_t var_90
var_90.d = 0
int32_t var_68_2 = 0xffffffff
int32_t var_64_2 = 0
sub_14059a8e0(&var_88, 0)

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t rcx_24 = var_98

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

__security_check_cookie(rax_2 ^ &var_128)
