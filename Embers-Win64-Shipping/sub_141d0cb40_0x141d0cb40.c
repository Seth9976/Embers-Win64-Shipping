// 函数: sub_141d0cb40
// 地址: 0x141d0cb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
double zmm1[0x2] = arg3[1]
int128_t var_118 = *arg3
sub_141d050e0()
EnterCriticalSection(&data_143a21100)
int32_t var_128
int32_t* rax_2
int512_t zmm1_1
rax_2, zmm1_1 = sub_141d02ac0(&data_143a210b0, &var_128, arg2)

if (*rax_2 == 0xffffffff)
    zmm1_1 = sub_141cf1540(&data_143a210b0, arg2, &var_118)

LeaveCriticalSection(&data_143a21100)
int64_t* rdi = *(arg1 + 0x20)
int32_t rsi = 0
int64_t rcx = 0
void* r14 = sx.q(*(arg1 + 0x28)) * 0x38
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
void* r14_1 = r14 + rdi
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int64_t var_88
int64_t* var_78

if (rdi != r14_1)
    void* rbx_1 = rdi + 0x2c
    
    do
        int32_t rcx_5 = (*(rbx_1 - 4) ^ *(arg2 + 4)) | (*(rbx_1 - 8) ^ *arg2)
            | (*(rbx_1 + 4) ^ *(arg2 + 0xc)) | (*rbx_1 ^ *(arg2 + 8))
        
        if (rcx_5 == 0)
            int32_t rax_10 = *(rbx_1 - 0x14)
            int16_t* r9_1
            
            if (rax_10 == 0 || rax_10 == 1)
                r9_1 = nullptr
            else
                r9_1 = *(rbx_1 - 0x1c)
            
            int16_t* rdx_2
            
            if (*(rbx_1 - 0x24) == 0)
                rdx_2 = &data_142d40450
            else
                rdx_2 = *rdi
            
            char rax_11
            rax_11, zmm1_1 = sub_141d093d0(arg1, rdx_2, *(rbx_1 - 0xc), r9_1, zmm1_1, 1)
            
            if (rax_11 != 0)
                rsi += 1
                int32_t rax_12
                rax_12, zmm1_1 = sub_141d04e90(rdi)
                var_128 = rax_12
                void var_f8
                
                if (rax_12 != 0xffffffff)
                    zmm1_1 = sub_14077a5e0(&var_98, &var_f8, &var_128, nullptr)
        
        rdi = &rdi[7]
        rbx_1 += 0x38
    while (rdi != r14_1)
    
    if (rsi s> 0)
        int64_t* rax_13 = sub_140b6b610()
        
        if (rax_13 != 0)
            int32_t rcx_9 = 0
            var_118:4.d = 1
            int32_t r8_4 = 0
            var_118.d = 0
            var_118:8.q = &var_88
            zmm1[0].d = 0xffffffff
            zmm1[0] = 0
            int32_t var_70
            
            if (var_70 != 0)
                int64_t* r11_1 = &var_88
                
                if (var_78 != 0)
                    r11_1 = var_78
                
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = sx.q(var_70 - 1)
                int32_t rdx_6 = *r11_1
                
                if (rdx_6 != 0)
                label_141d0cd58:
                    int32_t rax_21 = neg.d(rdx_6) & rdx_6
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rax_21)
                    var_118:4.d = rax_21
                    int32_t rax_22
                    
                    if (rax_21 == 0)
                        rax_22 = 0x20
                    else
                        rax_22 = 0x1f - temp0_2
                    
                    int32_t rax_23 = r8_4 - rax_22 + 0x1f
                    
                    if (rax_23 s> var_70)
                        rax_23 = var_70
                    
                    zmm1[0]:4.d = rax_23
                else
                    while (true)
                        int64_t rdx_7 = sx.q(rcx_9)
                        r8_4 += 0x20
                        rcx_9 += 1
                        zmm1[1].d = r8_4
                        var_118.d = rcx_9
                        
                        if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                            zmm1[0]:4.d = var_70
                            break
                        
                        rdx_6 = *(r11_1 + (rdx_7 << 2) + 4)
                        zmm1[0].d = 0xffffffff
                        
                        if (rdx_6 != 0)
                            goto label_141d0cd58
            
            double var_b0_1[0x2] = zmm1
            int128_t var_c0_1 = var_118
            zmm1[0].d = 0xffffffff << (var_70.b & 0x1f)
            zmm1[0]:4.d = var_70
            double rdi_1 = zmm1[0]
            double temp0_3[0x2] = _mm_unpackhi_pd(zmm1, zmm1[0])
            int128_t var_f0 = (&var_98).o
            int128_t var_e0_1 = var_c0_1
            int64_t var_d0_1 = temp0_3.q
            
            while (true)
                int64_t rax_24 = sx.q(var_e0_1:0xc.d)
                int64_t* rdx_8 = var_f0.q
                
                if (rax_24.d == (rdi_1 u>> 0x20).d && var_e0_1.q == &var_88 && rdx_8 == &var_98)
                    break
                
                int64_t r8_6 = *rax_13
                (*(r8_6 + 0x40))(rax_13, zx.q(*(*rdx_8 + rax_24 * 0xc)), r8_6)
                var_e0_1:8.d &= not.d(var_f0:0xc.d)
                sub_14059bdd0(&var_f0:8)
        
        var_118 = *arg2
        sub_141cf5da0(arg1 + 0x20, &var_118)
        sub_141d0aff0()
    
    rcx = var_58

int32_t var_50_1 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t var_90
bool cond:0 = var_90:4.d == 0
var_90.d = 0

if (not(cond:0))
    sub_140638cc0(&var_98, 0)

int32_t var_68_1 = 0xffffffff
int32_t var_64_1 = 0
void* result = sub_14059a8e0(&var_88, 0)

if (var_78 != 0)
    result = sub_140a74f90(var_78)

int64_t rcx_21 = var_98

if (rcx_21 != 0)
    result = sub_140a74f90(rcx_21)

__security_check_cookie(rax_1 ^ &var_158)
return result
