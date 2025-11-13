// 函数: sub_141829fe0
// 地址: 0x141829fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int64_t var_138
__builtin_memset(&var_138, 0, 0x2c)
int32_t rax_2 = 0
int32_t rcx = 0
int32_t var_104 = 0
int32_t var_10c = 0x80
int32_t var_108 = 0xffffffff
void* var_f8 = nullptr
int32_t var_f0 = 0

if (&var_138 != arg4)
    int64_t rbx_1 = sx.q(arg4[9].d)
    void var_100
    sub_1405a4aa0(&var_100, 0, rbx_1.d, 4)
    void* rax_3 = arg4[8]
    void* rdx = &arg4[7]
    void* rcx_2 = &var_100
    
    if (rax_3 != 0)
        rdx = rax_3
    
    if (var_f8 != 0)
        rcx_2 = var_f8
    
    memcpy(rcx_2, rdx, (rbx_1 << 2).d)
    int32_t var_f0_1 = rbx_1.d
    sub_141823c70(&var_138, arg4)
    rcx = var_104
    int32_t var_130
    rax_2 = var_130

if (rax_2 == rcx)
    int64_t* rcx_4 = *arg2
    (*(*rcx_4 + 0xa8))(rcx_4, &var_138)

int32_t var_1f0
sub_140598750(&var_138, &var_1f0)
int64_t* var_1e8
*var_1e8 = 0
var_1e8[1] = 0
var_1e8[2].d = 0xffffffff
char* var_1d0
sub_14059a6d0(&var_138, &var_1d0, sub_1405969c0(0, &data_142d40450), var_1e8, var_1f0, nullptr)
int64_t* rcx_8 = *arg2
int64_t var_1c8 = 0
int64_t var_1c0 = 0
int64_t var_188 = 0
int32_t var_180 = 0
int32_t var_15c = 0x80
int64_t var_178
__builtin_memset(&var_178, 0, 0x1c)
int32_t var_158 = 0xffffffff
int32_t var_154 = 0
int64_t var_148 = 0
int32_t var_140 = 0
(*(*rcx_8 + 0x120))(rcx_8, arg1, &var_1c8, &var_188)
int64_t* rcx_9 = *arg2
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x2c)
int32_t var_bc = 0x80
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
(*(*rcx_9 + 0x1a8))(rcx_9, &var_138, &var_e8)
int64_t* var_98
int64_t* rax_9 = sub_140967750(&var_188, &var_98, &var_e8)

if (&var_188 != rax_9)
    sub_1409f61f0(&var_188, rax_9)
    void var_150
    
    if (rax_9[8] == 0)
        memmove(&var_150, &rax_9[7], 4)
    
    if (var_148 != 0)
        sub_140a74f90(var_148)
    
    var_148 = rax_9[8]
    rax_9[8] = 0
    int32_t var_140_1 = rax_9[9].d
    rax_9[9].d = 0

int32_t var_50 = 0
int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

sub_14059ad90(&var_98, 0)
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t* rcx_17 = var_98

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int64_t result_1 = 0
int64_t* var_168

if (*arg3 != 1 || *arg1 == 0)
    int64_t* rcx_29 = *arg2
    result_1 = (*(*rcx_29 + 0x90))(rcx_29, &var_188)
else
    int64_t r14_1 = 0
    char var_1f8
    var_1d0 = &var_1f8
    
    if (var_180 - var_154 s> 0)
        sub_140a6c1e0(&var_188)
        var_1f0.q = &var_1d0
        sub_14181b5f0(var_188, var_180 - var_154, var_1f8)
    
    sub_1405a4480(&var_188)
    int64_t* var_1e8_1 = &var_178
    int32_t rcx_21 = 0
    var_1f0 = 0
    int32_t var_1e0_1 = 0xffffffff
    int32_t r8_8 = 0
    int32_t var_1ec_1 = 1
    int64_t var_1dc_1 = 0
    int32_t var_160
    
    if (var_160 != 0)
        int64_t* r10_1 = &var_178
        
        if (var_168 != 0)
            r10_1 = var_168
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_160 - 1)
        int32_t rdx_14 = *r10_1
        
        if (rdx_14 != 0)
        label_14182a368:
            int32_t rax_21 = neg.d(rdx_14) & rdx_14
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_21)
            int32_t var_1ec_2 = rax_21
            int32_t rax_22
            
            if (rax_21 == 0)
                rax_22 = 0x20
            else
                rax_22 = 0x1f - temp0_2
            
            int32_t rax_23 = r8_8 - rax_22 + 0x1f
            
            if (rax_23 s> var_160)
                rax_23 = var_160
            
            var_1dc_1.d = rax_23
        else
            while (true)
                int64_t rdx_15 = sx.q(rcx_21)
                r8_8 += 0x20
                rcx_21 += 1
                var_1dc_1:4.d = r8_8
                var_1f0 = rcx_21
                
                if (rdx_15.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    var_1dc_1.d = var_160
                    break
                
                rdx_14 = *(r10_1 + (rdx_15 << 2) + 4)
                var_1e0_1 = 0xffffffff
                
                if (rdx_14 != 0)
                    goto label_14182a368
    
    double zmm2_1[0x2] = var_1e0_1.o
    var_1dc_1.d = var_160
    int128_t zmm0_1 = var_1f0.o
    var_98 = &var_188
    int128_t var_90_1 = zmm0_1
    zmm0_1 = var_98.o
    double var_80_1[0x2] = zmm2_1
    double temp0_3[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
    int128_t var_1b0 = zmm0_1
    int128_t var_1a0_1 = var_90_1
    int64_t var_190_1 = temp0_3.q
    
    while (true)
        int64_t rcx_24 = sx.q(var_1a0_1:0xc.d)
        int64_t result_3 = result_1
        char rax_25
        
        if (rcx_24.d != ((0xffffffff << (var_160.b & 0x1f)).q u>> 0x20).d
                || var_1a0_1.q != &var_178)
            rax_25 = 0
        else
            rax_25 = 1
        
        int64_t* rdx_16 = var_1b0.q
        
        if (rax_25 == 0 || rdx_16 != &var_188)
            rax_25 = 1
        else
            rax_25 = 0
        
        if (rax_25 == 0)
            break
        
        int64_t rbx_3 = *rdx_16 + rcx_24 * 0x18
        int64_t* rcx_26 = *arg2
        int64_t result_2 = r14_1 + (*(*rcx_26 + 0xa0))(rcx_26, rbx_3)
        result_1 = result_2
        int64_t* rcx_27 = *arg1
        r14_1 = result_2 - (*(*rcx_27 + 0xa0))(rcx_27, rbx_3)
        var_1a0_1:8.d &= not.d(var_1b0:0xc.d)
        sub_14059bdd0(&var_1b0:8)
        
        if (result_3 s>= result_2)
            result_1 = result_3

int64_t result = 0
int32_t var_a0_1 = 0

if (result_1 s>= 0)
    result = result_1

if (var_a8 != 0)
    sub_140a74f90(var_a8)

sub_14059ad90(&var_e8, 0)
int64_t var_c8

if (var_c8 != 0)
    sub_140a74f90(var_c8)

int64_t rcx_33 = var_e8

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

int32_t var_140_2 = 0

if (var_148 != 0)
    sub_140a74f90(var_148)

sub_14059ad90(&var_188, 0)

if (var_168 != 0)
    sub_140a74f90(var_168)

int64_t rcx_37 = var_188

if (rcx_37 != 0)
    sub_140a74f90(rcx_37)

int64_t rcx_38 = var_1c8

if (rcx_38 != 0)
    sub_140a74f90(rcx_38)

int32_t var_f0_2 = 0

if (var_f8 != 0)
    sub_140a74f90(var_f8)

sub_14059ad90(&var_138, 0)
int64_t var_118

if (var_118 != 0)
    sub_140a74f90(var_118)

int64_t rcx_42 = var_138

if (rcx_42 != 0)
    sub_140a74f90(rcx_42)

__security_check_cookie(rax_1 ^ &var_228)
return result
