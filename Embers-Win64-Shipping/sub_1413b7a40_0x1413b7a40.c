// 函数: sub_1413b7a40
// 地址: 0x1413b7a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
void* rax_3 = *(arg2 + 0x78)
int64_t var_108 = 0
int32_t var_100 = 0
int32_t var_fc = 2
void var_f8
memset(&var_f8, 0, 0x50)
int128_t zmm1 = arg8[1]
int32_t var_a8 = 0
int128_t var_188 = *arg8
char var_98 = 0
int128_t var_178 = zmm1
int32_t var_a0 = 0xffffffff
int128_t var_168 = arg8[2]
int32_t var_9c = 0x101ffff
int64_t var_120 = *(arg8 + 0x68)
int128_t var_158 = arg8[3]
void* rdi_1 = arg8[6].q
int128_t var_148 = arg8[4]
void* var_128 = rdi_1
int128_t var_138 = arg8[5]
void var_118
sub_141299180(&var_118, &var_188)
var_9c:1.b = sub_142293d90((*(*arg6 + 0x1d8))(arg6))
char rax_10

if ((*(arg2 + 0x9c) & 0x4000000) != 0)
    rax_10 = (*(*arg6 + 0x338))(arg6)
    var_9c:2.b = 1

if ((*(arg2 + 0x9c) & 0x4000000) == 0 || rax_10 == 0)
    var_9c:2.b = 0

var_9c:3.b = (*(*arg6 + 0x1d8))(arg6) == 0
int32_t var_4c = 4
bool var_98_1 = (*(*arg6 + 0x20))(arg6) == 1
int64_t var_58 = 0
int32_t var_50 = 0
void var_88
sub_1419cf510(rax_3, 3, 0, &var_88)
int32_t var_1c8 = 0
int64_t var_1b8

if (rdi_1 != 0)
    sub_141097100(&var_118, &var_1b8, 8, &var_1c8)
    int64_t* var_1f8_1 = &var_1b8
    sub_141456250(rdi_1, arg1[1], arg1[3].d, arg4, arg5, arg6, arg7, arg9)
    void* r8_2 = rdi_1 + 0x140
    
    if (rdi_1 == 0)
        r8_2 = nullptr
    
    sub_141227c90(arg4, &arg9[2], r8_2, &var_1b8)

int32_t rax_16 = *(arg2 + 0x70)
int32_t r15_1 = 0
var_1c8 = rax_16

if (rax_16 s> 0)
    int64_t r12_1 = 0
    int64_t rdi_2 = 1
    int64_t rcx_11 = arg3
    
    do
        if ((rcx_11 & rdi_2) != 0)
            void* rax_17 = *(arg2 + 0x68)
            int64_t* rcx_12 = *arg1
            void* rsi_1 = arg2
            
            if (rax_17 != 0)
                rsi_1 = rax_17
            
            void* rax_19 = (*(*rcx_12 + 8))(rcx_12, &var_118)
            
            if (arg8[6].q != 0)
                uint64_t rdx_7 = zx.q(*(rax_19 + 0x70)) & 0x1ff
                int64_t rdx_8 = rdx_7 - (zx.q(rdx_7.d) u>> 1 & 0x5555555555555555)
                int64_t rcx_19 = (rdx_8 u>> 2 & 0x3333333333333333) + (rdx_8 & 0x3333333333333333)
                uint64_t rdx_15 =
                    ((((rcx_19 u>> 4) + rcx_19) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101) u>> 0x38
                
                if (rdx_15.d u< 1)
                    var_1b8 = 0x98
                    int64_t var_1b0_2 = 0
                else
                    void* rax_20 = *(rax_19 + 0x10)
                    void* rcx_20 = rax_19 + 0x20
                    void* r8_3 = rax_19
                    
                    if (rax_20 != 0)
                        r8_3 = rax_20
                    
                    if (*(rax_19 + 0x72) u> 0x50)
                        rcx_20 = *rcx_20
                    
                    var_1b8 = *(r8_3 + (rdx_15 << 3) - 8)
                    void* var_1b0_1 = rcx_20
                
                void* var_1d8_1 = &var_88
                int64_t* var_1e0_1 = &var_1b8
                int64_t* var_1e8_1 = arg9
                void* var_1f0_1 = rsi_1 + r12_1
                void* var_1f8_2 = arg2
                int64_t* var_208
                var_208.d = arg1[3].d
                int64_t* var_210
                var_210.b = 0
                sub_141455490(arg8[6].q, *(*(arg8 + 0x68) + 0x20), arg1[1], (arg1[2]).b, rax_3.d, 
                    var_210, var_208, arg4)
            
            char rcx_24 = -1
            int32_t rdx_18 = zx.d(*(arg2 + 0x9b)) + r15_1
            
            if (rdx_18 s< 0xff)
                rcx_24 = rdx_18.b
            
            *(rax_19 + 0x7c) = rcx_24
            int64_t* rcx_25 = *arg1
            (*(*rcx_25 + 0x10))(rcx_25, rax_19)
            rax_16 = var_1c8
            rcx_11 = arg3
        
        r15_1 += 1
        rdi_2 = rol.q(rdi_2, 1)
        r12_1 += 0x68
    while (r15_1 s< rax_16)

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t result = sub_14125cf90(&var_118)
__security_check_cookie(rax_1 ^ &var_238)
return result
