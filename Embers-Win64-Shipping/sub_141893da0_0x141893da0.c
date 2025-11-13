// 函数: sub_141893da0
// 地址: 0x141893da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2 = sub_141802500()
int64_t var_158 = 0
int32_t var_150 = 0
sub_1405947f0(&var_158, 0x17)
int32_t rax = var_150 + 0x17
var_150 = rax

if (rax s> 0)
    sub_140594770(&var_158)

UnDecorator::getReferenceType(var_158, u"Generation: Total Time", 0x2e)
int64_t* rcx_3 = *(arg1 + 0xb0)
int64_t* rax_2 = (*(*rcx_3 + 8))(rcx_3, &var_158, 0, 0)
int64_t rcx_4 = var_158
int64_t* r14 = rax_2

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t var_148 = 0
int32_t var_140 = 0
sub_1405947f0(&var_148, 0x1e)
int32_t rax_3 = var_140 + 0x1e
var_140 = rax_3

if (rax_3 s> 0)
    sub_140594770(&var_148)

UnDecorator::getReferenceType(var_148, u"Generation: Data stream speed", 0x3c)
int64_t* rcx_8 = *(arg1 + 0xb0)
int64_t r8
r8.b = 2
int64_t* rax_5 = (*(*rcx_8 + 8))(rcx_8, &var_148, r8, 0)
int64_t rcx_9 = var_148
int64_t* rsi = rax_5

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rax_6 = _Query_perf_frequency()
int64_t* rcx_10 = *(arg1 + 0xa0)
int32_t rax_7 = (*(*rcx_10 + 8))(rcx_10, arg1 + 8, arg1 + 0x50, arg1 + 0x60)
int64_t* rcx_11 = *(arg1 + 0xa0)
*(arg1 + 0xd0) = rax_7
int32_t rax_8 = (*(*rcx_11 + 8))(rcx_11, arg1 + 0x18, arg1 + 0x50, arg1 + 0x60)
int64_t var_e8[0x2]
var_e8[0] = 0
*(arg1 + 0xd4) = rax_8
int64_t var_d8 = 0
void* arg_18 = arg1
void* var_138
int128_t entry_zmm3
sub_141855cc0(&var_138, 2, &arg_18, &var_e8, zmm2, entry_zmm3)
int512_t zmm6
zmm6.o = zx.o(0)
int64_t performanceCount_2
QueryPerformanceCounter(&performanceCount_2)
void* rcx_14 = data_143ddb400
int32_t arg_10 = 0x41200000
int128_t zmm7
zmm7.q = float.d(performanceCount_2)
zmm7.q = zmm7.q f* data_143d796f8
zmm7.q = zmm7.q f+ 0x4170000000000000
double zmm6_1[0x2]
double zmm7_1
double zmm8_1
zmm6_1, zmm7_1, zmm8_1 = sub_140af3b00(rcx_14, BuildPatchServices", StatsLoggerTimeSeconds"
    , &arg_10, &data_143de5780)
int32_t zmm0 = arg_10

if (not(zmm0 f>= 1f))
    arg_10 = 0x3f800000
else if (not(zmm0 f< 60f))
    arg_10 = 0x42700000

bool z

if (0 == *(arg1 + 0xc8))
    *(arg1 + 0xc8) = 0
    z = true
else
    *(arg1 + 0xc8)
    z = false

if (not(z))
    bool z_1
    
    do
        data_143de5458 += 1
        int64_t* rax_10 = sub_140a242a0()
        int64_t r8_4 = *rax_10
        (*(r8_4 + 0x30))(rax_10, 2, r8_4)
        zmm6_1 = _mm_cvtpd_ps(zmm6_1)
        sub_140a35180(sub_140b18f30(), zmm6_1)
        int64_t* rcx_17 = *(arg1 + 0xa8)
        (*(*rcx_17 + 0x20))(rcx_17, arg1 + 0xb8)
        uint128_t zmm0_1 = sub_140b19e60()
        void* rdx_7 = data_1439a8bd0
        (*(rdx_7 + 0x48))(&data_1439a8bd0, rdx_7)
        sub_1418508e0(r14, _Query_perf_frequency() - rax_6)
        int64_t* rcx_19 = *(arg1 + 0x88)
        (*(*rcx_19 + 0x10))(rcx_19, 0x7f7fffff)
        sub_1418508e0(rsi, int.q(zmm0_1.q))
        int64_t* rcx_21 = *(arg1 + 0xb0)
        (*(*rcx_21 + 0x10))(rcx_21, arg_10)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        zmm0_1.q =
            0x3f847ae147ae147b f- (float.d(performanceCount) f* data_143d796f8 f+ zmm8_1 f- zmm7_1)
        zmm0_1.d = fconvert.s(zmm0_1.q)
        sub_140b73230(_mm_max_ss(zmm0_1.d, 0))
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        double zmm0_2[0x2] = zx.o(0)
        zmm0_2[0] = float.d(performanceCount_1)
        zmm0_2[0] = zmm0_2[0] f* data_143d796f8
        zmm0_2[0] = zmm0_2[0] + zmm8_1
        zmm6_1 = zmm0_2
        zmm6_1[0] = zmm6_1[0] - zmm7_1
        zmm7_1 = zmm0_2[0]
        
        if (0 == *(arg1 + 0xc8))
            *(arg1 + 0xc8) = 0
            z_1 = true
        else
            *(arg1 + 0xc8)
            z_1 = false
    while (not(z_1))

void* rbx = var_138
void* rax_19

while (true)
    bool z_2
    
    if (0 == *(rbx + 0x78))
        *(rbx + 0x78) = 0
        z_2 = true
    else
        int64_t rax_18
        rax_18.b = *(rbx + 0x78)
        z_2 = false
    
    rax_19 = var_138
    
    if (not(z_2))
        break
    
    int64_t* rcx_24 = *(rax_19 + 0x70)
    (*(*rcx_24 + 0x20))(rcx_24, 0xffffffff, 0)

int32_t i_3 = *(rax_19 + 0x88)
void* rbx_1 = *(rax_19 + 0x80)
uint64_t var_128 = 0
int32_t i_4 = i_3

if (i_3 != 0)
    sub_1405a4be0(&var_128, i_3, 0)
    int64_t* r14_2 = var_128 - rbx_1
    int32_t i
    
    do
        *(r14_2 + rbx_1) = 0
        void* rsi_1 = r14_2 + rbx_1
        int32_t rdi_1 = *(rbx_1 + 8)
        int64_t r13_1 = *rbx_1
        *(r14_2 + rbx_1 + 8) = rdi_1
        
        if (rdi_1 != 0)
            sub_1405a4c70(rsi_1, rdi_1, 0)
            memcpy(*rsi_1, r13_1, rdi_1 * 2)
        else
            *(r14_2 + rbx_1 + 0xc) = 0
        
        rbx_1 += 0x10
        i = i_3
        i_3 -= 1
    while (i != 1)
    rsi = rax_5
    r14 = rax_2

double zmm0_3 = sub_140b19e60()
void* rdx_13 = data_1439a8bd0
(*(rdx_13 + 0x48))(&data_1439a8bd0, rdx_13)
sub_1418508e0(r14, _Query_perf_frequency() - rax_6)
int64_t* rcx_29 = *(arg1 + 0x88)
(*(*rcx_29 + 0x10))(rcx_29, 0x7f7fffff)
sub_1418508e0(rsi, int.q(zmm0_3))
int64_t* rcx_31 = *(arg1 + 0xb0)
(*(*rcx_31 + 0x10))(rcx_31, zx.o(0))
bool z_3

if (0 == *(arg1 + 0xcc))
    *(arg1 + 0xcc) = 0
    z_3 = true
else
    *(arg1 + 0xcc)
    z_3 = false

int32_t i_2 = i_4
rsi.b = not(z_3)
uint64_t r14_3 = var_128
uint64_t rbx_2 = r14_3

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t rcx_32 = *rbx_2
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
        
        rbx_2 += 0x10
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (r14_3 != 0)
    sub_140a74f90(r14_3)

int64_t* var_130

if (var_130 != 0)
    var_130[1].d -= 1
    
    if (var_130[1].d == 1)
        int64_t rdx_16 = *var_130
        (*rdx_16)(var_130, rdx_16)
        int32_t rdi_2 = *(var_130 + 0xc)
        *(var_130 + 0xc) -= 1
        
        if (rdi_2 == 1)
            int64_t r8_7 = *var_130
            (*(r8_7 + 8))(var_130, zx.q(rdi_2), r8_7)

return zx.q(rsi.b)
