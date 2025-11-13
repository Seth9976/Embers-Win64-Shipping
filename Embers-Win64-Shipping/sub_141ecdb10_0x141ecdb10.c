// 函数: sub_141ecdb10
// 地址: 0x141ecdb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int64_t* rcx

if (((arg1[1].d u>> 4).b & 1) == 0)
    rcx = arg1[4]
else
    rcx = nullptr

int32_t var_198
void var_168
(*(*rcx + 0x6f8))(rcx, &var_198, &var_168)
void var_158
memset(&var_158, 0, 0x88)
void* r14 = nullptr
int32_t var_150 = 0x3f800000

if (((arg1[1].d u>> 4).b & 1) == 0)
    r14 = arg1[4]

int64_t* r14_1 = *(r14 + 0x250)
TEB* gsbase

if (data_143f3a840 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f3a840)
    
    if (data_143f3a840 == 0xffffffff)
        sub_140b58170(&data_143f3a838, "TeleportTrace", 1)
        _Init_thread_footer(&data_143f3a840)

int64_t var_c8 = data_143f3a838
int64_t var_c0 = 0
int64_t var_88 = 0
int32_t var_80 = 0
int32_t var_7c = 8
int64_t var_68 = 0
int32_t var_60 = 0
int32_t var_5c = 4
int32_t var_b8 = 0x101
int32_t var_b0 = 0
char var_aa = 1
char var_ac = 0
int16_t var_b4 = 0

if (r14_1 != 0)
    int32_t var_60_1 = 1
    int32_t var_78_1 = *(r14_1 + 0xc)
    int64_t var_c0_1 = r14_1[3]

void var_188
int32_t* rax_12 = sub_140ae4210(&var_168, &var_188)
float zmm7[0x4] = var_198
int64_t rax_13 = *arg1
float var_190
float zmm3 = var_190 + rax_12[2] f* 1000000f
int32_t var_194
int64_t zmm8
zmm8.d = var_194.d f+ rax_12[1] f* 1000000f
zmm7[0] = zmm7[0] + *rax_12 * 1000000f
void* rax_14 = (*(rax_13 + 0x150))(arg1)
int32_t rdi = data_143f3a5c8
int64_t zmm6 = var_198.q
sub_140b34200("RaycastSingle", rdi)
float var_1a0 = zmm3
int64_t var_1c8 = zmm6
int32_t* var_1d8 = &data_143f3a680
float var_1c0_1 = var_190
int128_t* var_1e0 = &data_143f3a660
int64_t* var_1e8 = &var_c8
char var_1f0 = 2
int64_t var_1a8
int64_t* var_1f8 = &var_1a8
var_1a8 = (_mm_unpacklo_ps(zmm7, zmm8)).q
void var_1b8
char rax_16 =
    sub_141eb32e0(rax_14, &var_158, &var_1b8, &var_1c8, var_1f8, var_1f0, var_1e8, var_1e0, var_1d8)
int64_t result = sub_140b38680("RaycastSingle", rdi)
float var_148
float zmm0_1[0x4]
float zmm1_1[0x4]

if (rax_16 != 0)
    int32_t var_130
    zmm1_1 = var_130
    zmm1_1[0] = zmm1_1[0] * 4f
    zmm0_1 = var_148
    zmm0_1[0] = zmm0_1[0] + zmm1_1[0]
    int32_t var_144
    zmm1_1 = var_144
    float var_12c
    zmm1_1[0] = zmm1_1[0] + var_12c * 4f
    var_148 = zmm0_1[0]
    int32_t var_140
    zmm0_1 = var_140
    float var_128
    zmm0_1[0] = zmm0_1[0] + var_128 * 4f
    float var_144_1 = zmm1_1[0]
    float var_140_1 = zmm0_1[0]

float var_178[0x4]
int64_t rax_22
int64_t* rcx_8

if (r14_1 != 0)
    void* rbx_2 = r14_1[0x26]
    int32_t rax_20
    
    if (rbx_2 == 0)
        zmm0_1 = zx.o(data_143dbb208)
        rax_20 = data_143dbb210
    else
        zmm1_1 = *(rbx_2 + 0x1c0)
        uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_2 + 0x180), zmm1_1, 4))
        var_178 = zmm1_1
        
        if (temp0_2 != 0)
            *(rbx_2 + 0x180) = zmm1_1
            int32_t* rax_18 = sub_140adf5d0(&var_178, &var_188)
            *(rbx_2 + 0x190) = *rax_18
            *(rbx_2 + 0x198) = rax_18[2]
        
        zmm0_1 = zx.o(*(rbx_2 + 0x190))
        rax_20 = *(rbx_2 + 0x198)
    
    rcx_8 = r14_1
    var_1c8 = zmm0_1.q
    zmm0_1 = zx.o(var_1c8)
    int32_t var_1a0_1 = rax_20
    rax_22 = *r14_1
    goto label_141ecdf19

void* rbx_3 = arg1[4]

if (rbx_3 != 0)
    void* rax_23 = sub_14249be50()
    void* rdx_6 = *(rbx_3 + 0x10)
    result = sx.q(*(rax_23 + 0x38))
    
    if (result.d s<= *(rdx_6 + 0x38))
        int64_t result_1 = result
        result = *(rdx_6 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_23 + 0x30)
            void* rdi_1 = *(rbx_3 + 0x618)
            
            if (rdi_1 != 0)
                int64_t* rdi_2 = *(rdi_1 + 0x250)
                
                if (rdi_2 != 0)
                    void* rbx_4 = rdi_2[0x26]
                    int32_t rax_27
                    
                    if (rbx_4 == 0)
                        zmm0_1 = zx.o(data_143dbb208)
                        rax_27 = data_143dbb210
                    else
                        zmm1_1 = *(rbx_4 + 0x1c0)
                        uint32_t temp0_4 =
                            _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_4 + 0x180), zmm1_1, 4))
                        var_178 = zmm1_1
                        
                        if (temp0_4 != 0)
                            *(rbx_4 + 0x180) = zmm1_1
                            int32_t* rax_25 = sub_140adf5d0(&var_178, &var_188)
                            *(rbx_4 + 0x190) = *rax_25
                            *(rbx_4 + 0x198) = rax_25[2]
                        
                        zmm0_1 = zx.o(*(rbx_4 + 0x190))
                        rax_27 = *(rbx_4 + 0x198)
                    
                    rcx_8 = rdi_2
                    var_1c8 = zmm0_1.q
                    zmm0_1 = zx.o(var_1c8)
                    int32_t var_1a0_2 = rax_27
                    rax_22 = *rdi_2
                label_141ecdf19:
                    var_1f8.b = 0
                    var_1a8 = zmm0_1.q
                    result = (*(rax_22 + 0x4f0))(rcx_8, &var_148, &var_1a8, 0, var_1f8)

if (var_68 != 0)
    result = sub_140a74f90(var_68)

if (var_88 != 0)
    result = sub_140a74f90(var_88)

__security_check_cookie(rax_1 ^ &var_218)
return result
