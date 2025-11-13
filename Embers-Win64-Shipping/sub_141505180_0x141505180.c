// 函数: sub_141505180
// 地址: 0x141505180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x2a50)
void var_2a58
int64_t rax_1 = __security_cookie ^ &var_2a58
void* rsi = arg3
void* r15 = arg1
void* var_29f0 = arg1
void* var_a8 = nullptr
int32_t var_a0 = 0
int32_t var_9c = 0x100
int64_t var_29d0
__builtin_memset(&var_29d0, 0, 0x14)
sub_141095f70(&var_29d0, 0)
int64_t** var_2a10 = nullptr
int32_t var_2a08 = 0
void var_28f8
sub_14108b090(&var_28f8)
int32_t r8 = *(arg2 + 8)
void** const var_2990 = &data_142f11938
int64_t* var_2988 = &var_29d0
int64_t* var_2980 = &var_2a10
void* var_2978 = &var_28f8
void var_2a17
void* var_2970 = &var_2a17
void** var_2968
sub_14125c360(&var_2968, arg2, r8, rsi, &var_2990)
int512_t zmm0
zmm0.o = zx.o(0)
int128_t zmm10
zmm10.d = 1f f/ *(rsi + 0x300)
var_2968 = &data_142fbb638
int32_t i = 0
int64_t var_2938 = 0
int64_t var_2940 = 0
int128_t var_2928
__builtin_memset(&var_2928, 0, 0x24)
void* var_2960
var_2928.q = *(var_2960 + 0xc8)
var_2928:8.q = *(var_2960 + 0x28)
int64_t var_2938_1 = data_14395d9e8
uint128_t zmm9
zmm9.d = _mm_cvtepi32_ps(zx.o(*(rsi + 0x15a0) - *(rsi + 0x1598))).d f* zmm10.d
void** const* var_2a38
void var_28a8

if (*(arg2 + 0xdc0) s> 0)
    char* r15_1 = nullptr
    int64_t* rdi_1 = nullptr
    int128_t zmm8 = 0x40000000
    int128_t zmm6
    int128_t var_48_1 = zmm6
    char* var_2a00_1 = nullptr
    int64_t* var_29f8_1 = nullptr
    
    do
        char rax_8 = r15_1[*(arg2 + 0xe48)]
        
        if ((rax_8 & 1) != 0 && (arg5 & rax_8 u>> 1) != 0)
            int64_t rcx_6 = *(arg2 + 0xde8)
            zmm0.o = zx.o(*(rdi_1 + rcx_6))
            int32_t rax_10 = *(rdi_1 + rcx_6 + 8)
            int32_t var_29d4 = (*(rdi_1 + rcx_6 + 0x18)).d
            int64_t var_29e0 = (zmm0.o).q
            int32_t var_29d8_1 = rax_10
            char rax_11
            int32_t zmm7_1
            rax_11, zmm0, zmm7_1 = sub_141f8daa0(rsi + 0xbf0, &var_29e0, &var_29d4)
            
            if (rax_11 != 0)
                zmm6 = var_29d4
                uint32_t rbx_1 = zx.d(*(*(arg2 + 0xe58) + (r15_1 << 1)))
                uint32_t r8_3 = rbx_1 u>> 0xd
                bool cond:2_1
                
                if ((0x1000 & rbx_1.w) != 0)
                    int128_t zmm1_1
                    zmm1_1.d = zmm6.d f* zmm8.d
                    zmm1_1.d = zmm1_1.d f* zmm9.d
                    zmm1_1.d = zmm1_1.d f+ zmm1_1.d
                    zmm1_1.d = zmm1_1.d f- zmm7_1
                    cond:2_1 = int.d(zmm1_1.d) s>> 1 s< 1 << r8_3.b
                else
                    cond:2_1 = zx.d(arg7) - zx.d(arg6) s< r8_3
                
                if (not(cond:2_1))
                    zmm6.d = zmm6.d f* zmm8.d
                    void* rsi_1 = *(*(arg2 + 0xdb8) + (r15_1 << 3))
                    zmm6.d = zmm6.d f* zmm10.d
                    int64_t* rcx_11 = *(rsi_1 + 8)
                    uint32_t r12_1 = zx.d((*(*rcx_11 + 0x180))(rcx_11))
                    uint32_t rax_19 = rbx_1 & 0xf
                    
                    if (rax_19 u>= r12_1)
                        r12_1 = rax_19
                    
                    TEB* gsbase
                    
                    if (data_143cda914 s> *(0x14
                            + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                        _Init_thread_header(&data_143cda914)
                        
                        if (data_143cda914 == 0xffffffff)
                            data_143cda910 = 0x3fb8aa3b
                            _Init_thread_footer(&data_143cda914)
                    
                    zmm0.o = zmm6
                    uint32_t rbx_3 = rbx_1 u>> 4 & 0xf
                    zmm0.d = logf(zmm0.d).d f* data_143cda910
                    zmm0.d = zmm0.d f+ zmm0.d
                    zmm0.d = zmm0.d f- zmm7_1
                    uint32_t rdi_6 = (rbx_1 u>> 8 & 0xf) - 7 - (int.d(zmm0.d) s>> 1)
                    
                    if (rdi_6 s>= r12_1)
                        r12_1 = rbx_3
                        
                        if (rdi_6 s< rbx_3)
                            r12_1 = rdi_6
                    
                    int32_t j = 0
                    
                    if (*(rsi_1 + 0x50) s> 0)
                        int64_t r15_2 = 0
                        
                        do
                            int32_t* rcx_14 = *(rsi_1 + 0x38) + r15_2
                            uint8_t rdx_5 = *(rcx_14 + 0x12)
                            
                            if ((rdx_5 & 4) != 0 && sx.d(rcx_14[4].b) == r12_1
                                    && (rdx_5 u>> 3 & 7) == arg4)
                                uint32_t rax_26
                                
                                if ((rdx_5 & 0x40) != 0)
                                    rax_26 = sub_14141ff40(rcx_14, 0x11)
                                
                                if ((rdx_5 & 0x40) == 0 || rax_26 s< 0)
                                    var_2a38.d = 0xffffffff
                                    zmm0, zmm8, zmm9, zmm10 = sub_1414fdff0(&var_2968, 
                                        sx.q(j) * 0xb0 + *(rsi_1 + 0x48), -1, 
                                        *(*(arg2 + 0xdd8) + (var_2a00_1 << 3)), zmm0, var_2a38.d)
                                else
                                    int64_t r8_4 = *(rsi_1 + 0x28)
                                    int64_t rdx_6 = sx.q(rax_26) * 5
                                    int64_t r9_1 = sx.q(*(r8_4 + (rdx_6 << 2) + 0xc))
                                    int64_t rcx_16
                                    
                                    if (r9_1.d s< 0)
                                        rcx_16 = sx.q(*(r8_4 + (rdx_6 << 2) + 8)) * 0xe8
                                            + *(arg2 + 0xd40)
                                    else
                                        rcx_16 = r9_1 * 0xf8 + *(arg2 + 0x8b8)
                                    
                                    int64_t rbx_4 = sx.q(var_a0)
                                    int32_t i_1 = i
                                    int32_t var_29a0_1 = 0xffffffff
                                    int32_t var_2998 = var_2998
                                        ^ ((*(r8_4 + (rdx_6 << 2) + 0x10) s>> 6 ^ var_2998) & 0x3f)
                                    int64_t var_29b0_1 = *(r8_4 + (rdx_6 << 2))
                                    int32_t rax_32 = (rbx_4 + 1).d
                                    int32_t var_299c_1 = r9_1.d
                                    var_a0 = rax_32
                                    
                                    if (rax_32 s> var_9c)
                                        sub_141460d60(&var_28a8, rbx_4.d)
                                    
                                    int64_t rcx_23 = rbx_4 * 5
                                    zmm0.o = rcx_16.o
                                    void* rdx_8 = &var_28a8
                                    
                                    if (var_a8 != 0)
                                        rdx_8 = var_a8
                                    
                                    *(rdx_8 + (rcx_23 << 3)) = zmm0.o
                                    zmm0.o = zx.o(var_2998.q)
                                    *(rdx_8 + (rcx_23 << 3) + 0x10) = i.o
                                    *(rdx_8 + (rcx_23 << 3) + 0x20) = (zmm0.o).q
                            
                            j += 1
                            r15_2 += 0x14
                        while (j s< *(rsi_1 + 0x50))
                        
                        r15_1 = var_2a00_1
                    
                    rsi = arg3
                    rdi_1 = var_29f8_1
        
        r15_1 = &r15_1[1]
        rdi_1 = &rdi_1[5]
        i += 1
        var_2a00_1 = r15_1
        var_29f8_1 = rdi_1
    while (i s< *(arg2 + 0xdc0))
    
    r15 = var_29f0

int64_t rbx_5 = sx.q(var_a0)

if (rbx_5.d s> 0)
    int64_t rdi_7 = sx.q(var_2a08)
    int32_t rax_36 = (rdi_7 + rbx_5).d
    var_2a08 = rax_36
    
    if (rax_36 s> 0)
        sub_1410b38f0(&var_2a10, rdi_7.d)
    
    void* rdx_12 = &var_28a8
    
    if (var_a8 != 0)
        rdx_12 = var_a8
    
    memcpy(&var_2a10[rdi_7 * 5], rdx_12, (rbx_5 * 0x28).d)

if (var_2a08 s> 0)
    char rax_39 = sub_141421520(*(rsi + 0x1548))
    var_2a38.d = 1
    int32_t var_2a30
    sub_1412c7690(*(rsi + 0x1548), &var_2a10, &var_29d0, &var_29f0, var_2a38.b, var_2a30)
    var_2a38.b = rax_39
    sub_1412e4c00(&var_2a10, &var_28f8, var_29f0, 0, var_2a38.b, 1, r15)

var_2968 = &data_142f11950
var_2990 = &data_142d56fa0
int64_t var_28c8

if (var_28c8 != 0)
    sub_140a74f90(var_28c8)

int64_t var_28d8

if (var_28d8 != 0)
    sub_140a74f90(var_28d8)

sub_14108ca30(&var_28f8)
int64_t result = sub_141095f70(&var_29d0, 0)
int64_t rcx_35 = var_29d0

if (rcx_35 != 0)
    result = sub_140a74f90(rcx_35)

if (var_a8 != 0)
    result = sub_140a74f90(var_a8)

__security_check_cookie(rax_1 ^ &var_2a58)
return result
