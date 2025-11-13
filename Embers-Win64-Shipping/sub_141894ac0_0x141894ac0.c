// 函数: sub_141894ac0
// 地址: 0x141894ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2 = sub_141802500()
int64_t* rcx = *(arg1 + 0x140)
int32_t rax_1 = (*(*rcx + 8))(rcx, arg1 + 8, arg1 + 0xf0, arg1 + 0x100)
int64_t* rcx_1 = *(arg1 + 0x140)
*(arg1 + 0x154) = rax_1
int32_t rax_3 = (*(*rcx_1 + 8))(rcx_1, arg1 + 0x18, arg1 + 0xf0, arg1 + 0x100)
void* arg_10 = arg1
*(arg1 + 0x158) = rax_3
int64_t var_a8[0x2]
var_a8[0] = 0
int64_t var_98 = 0
void* var_c0
int128_t entry_zmm3
sub_141858110(&var_c0, 2, &arg_10, &var_a8, zmm2, entry_zmm3)
double zmm6[0x2] = zx.o(0)
int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
uint128_t zmm10 = 0x4170000000000000
double zmm7[0x2] = zx.o(0)
zmm7[0] = float.d(performanceCount_1)
zmm7[0] = zmm7[0] f* data_143d796f8
zmm7[0] = zmm7[0] f+ zmm10.q
bool z

if (0 == *(arg1 + 0x150))
    *(arg1 + 0x150) = 0
    z = true
else
    *(arg1 + 0x150)
    z = false

if (not(z))
    bool z_1
    
    do
        data_143de5458 += 1
        int64_t* rax_5 = sub_140a242a0()
        int64_t r8_3 = *rax_5
        (*(r8_3 + 0x30))(rax_5, 2, r8_3)
        zmm6 = _mm_cvtpd_ps(zmm6)
        sub_140a35180(sub_140b18f30(), zmm6)
        sub_140b19e60()
        void* rdx_2 = data_1439a8bd0
        (*(rdx_2 + 0x48))(&data_1439a8bd0, rdx_2)
        int64_t performanceCount_2
        QueryPerformanceCounter(&performanceCount_2)
        uint128_t zmm0_1
        zmm0_1.q = 0x3f847ae147ae147b
            f- (float.d(performanceCount_2) f* data_143d796f8 f+ zmm10.q - zmm7[0])
        zmm0_1.d = fconvert.s(zmm0_1.q)
        sub_140b73230(_mm_max_ss(zmm0_1.d, 0))
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        double zmm0_2[0x2] = zx.o(0)
        zmm0_2[0] = float.d(performanceCount)
        zmm0_2[0] = zmm0_2[0] f* data_143d796f8
        zmm0_2[0] = zmm0_2[0] f+ zmm10.q
        zmm6 = zmm0_2
        zmm6[0] = zmm6[0] - zmm7[0]
        zmm7 = zmm0_2
        
        if (0 == *(arg1 + 0x150))
            *(arg1 + 0x150) = 0
            z_1 = true
        else
            *(arg1 + 0x150)
            z_1 = false
    while (not(z_1))

sub_140b19e60()
void* rdx_3 = data_1439a8bd0
(*(rdx_3 + 0x48))(&data_1439a8bd0, rdx_3)
void* rbx = var_c0
void* rax_9

while (true)
    bool z_2
    
    if (0 == *(rbx + 0x78))
        *(rbx + 0x78) = 0
        z_2 = true
    else
        int64_t rax_8
        rax_8.b = *(rbx + 0x78)
        z_2 = false
    
    rax_9 = var_c0
    
    if (not(z_2))
        break
    
    int64_t* rcx_8 = *(rax_9 + 0x70)
    (*(*rcx_8 + 0x20))(rcx_8, 0xffffffff, 0)

char rsi_1 = *(rax_9 + 0x80)
int64_t* var_b8

if (var_b8 != 0)
    var_b8[1].d -= 1
    
    if (var_b8[1].d == 1)
        int64_t rdx_4 = *var_b8
        (*rdx_4)(var_b8, rdx_4)
        int32_t rdi_1 = *(var_b8 + 0xc)
        *(var_b8 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_4 = *var_b8
            (*(r8_4 + 8))(var_b8, zx.q(rdi_1), r8_4)

return zx.q(rsi_1)
