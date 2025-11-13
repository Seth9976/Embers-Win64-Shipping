// 函数: sub_1423c3200
// 地址: 0x1423c3200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t rbx = *(arg1 + 0x48)
void** var_f0
sub_140b4cae0(&var_f0, 0)
void* r8 = *(arg1 + 0x48)
var_f0 = &data_14333c3b8
int64_t rax_2 = sx.q(*(arg1 + 0x60))
int64_t var_d8 = rbx
void* r14 = *(r8 + 0xd0)
int32_t r13_1 = *(r14 + 0x20) - rax_2.d
int32_t* rdx = *(*(r14 + 0x18) + (rax_2 << 3))
int32_t r12 = *rdx
uint32_t var_108 = rdx[1]
uint32_t rax_4 = zx.d(*(r8 + 0x60))
*(arg1 + 0x59) = 0
int32_t rcx_5 = ((rax_4 & 1) | 0x808000) << 4
int32_t rsi_1 = rcx_5 | 0x40
rax_4.b &= 2
void* rax_5 = *(r8 + 0xd0)

if (rax_4.b == 0)
    rsi_1 = rcx_5

uint32_t rbx_1

if (rax_5 == 0)
    rbx_1 = 0
else
    void* rcx_6 = *(rax_5 + 0x28)
    
    if (rcx_6 == 0)
        rbx_1 = *(rax_5 + 0xc)
    else
        rbx_1 = zx.d(*(rcx_6 + 0x20))

int64_t r15 = data_143f5a4e0
int64_t rcx_7

if (data_143de5480 == 0)
    rcx_7 = 0
else
    rcx_7.b = GetCurrentThreadId() != data_143de5470

float zmm0[0x4] = *(r15 + (rcx_7 << 2))
float zmm6[0x4] = 0xc1700000

if (not(zmm0[0] < -15f))
    zmm6 = __minss_xmmss_memss(zmm0[0], 0x41700000)

uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(sub_1423c0f90(arg1))).d f+ zmm6[0]
uint128_t zmm3 = sub_1423bdfe0(arg1)
char rax_8

if (rbx_1 == 3 || rbx_1 == 0x27)
    rax_8 = 1
else
    rax_8 = 0

bool cond:3 = *(arg1 + 0x58) != 0
*(arg1 + 0x44) = rax_8
int16_t* var_100
int32_t var_f8
int128_t var_c8

if (cond:3)
    char rcx_50 = (data_1439c7a34).b
    int128_t* var_110_2 = &var_c8
    uint32_t rdx_21 = var_108
    var_c8 = zx.o(0)
    int32_t var_b8_2 = 1
    int32_t var_a4_2 = (1 << rcx_50) - 1
    int32_t var_90_3 = 0
    int64_t var_98_2 = 0
    int128_t var_b4_2 = data_143dbb1e0
    char var_a0_2 = 0
    int64_t* rcx_52 = data_143f0f180
    int32_t var_90_4 = *(*(*(arg1 + 0x48) + 0xd0) + 0x10)
    (*(*rcx_52 + 0x560))(rcx_52, &var_108, &data_143f02b98, zx.q(r12), rdx_21, rbx_1.b, r13_1, 1, 
        rsi_1, var_110_2)
    sub_1405d1600(arg1 + 0xe8, &var_108)
    sub_1405d1550(&var_108)
    sub_1408c8cf0(arg1 + 0x10, *(arg1 + 0xe8))
    *(*(arg1 + 0x10) + 0x58) = *(*(arg1 + 0x48) + 0x18)
    var_108.q = *(*(arg1 + 0x48) + 0x18)
    int128_t zmm2_4 = sub_140b63b70(&var_108, &var_100)
    int64_t* rcx_59 = data_143f0f180
    int16_t* r8_13 = &data_142d40450
    
    if (var_f8 != 0)
        r8_13 = var_100
    
    (*(*rcx_59 + 0x2e8))(rcx_59, *(arg1 + 0x10), r8_13)
    int16_t* rcx_60 = var_100
    
    if (rcx_60 != 0)
        sub_140a74f90(rcx_60)
    
    sub_14198ac20(&data_143f02b98, *(*(arg1 + 0x48) + 0x90), *(arg1 + 0x10), zmm3, zmm2_4)
    int64_t rbx_4 = sx.q(*(arg1 + 0x60))
    
    if (rbx_4.d s< *(r14 + 0x20))
        int64_t rsi_5 = rbx_4 << 3
        
        do
            void* rax_61 = *(arg1 + 0xd8)
            void* rcx_61 = arg1 + 0x68
            
            if (rax_61 != 0)
                rcx_61 = rax_61
            
            if (*(rcx_61 + rsi_5) != 0)
                int64_t* rcx_62 = data_143f0f180
                int32_t var_120_2
                var_120_2.b = 1
                int32_t var_128_2
                var_128_2.b = 0
                char var_130_2
                var_130_2.q = &var_108
                sub_1423c0e50(arg1, rbx_4.d, 
                    (*(*rcx_62 + 0x510))(rcx_62, &data_143f02b98, *(arg1 + 0xe8), 
                        zx.q(rbx_4.d - *(arg1 + 0x60)), 1, var_130_2, var_128_2, var_120_2), 
                    var_108)
                int64_t* rcx_64 = data_143f0f180
                int32_t var_138_7
                var_138_7.b = 0
                (*(*rcx_64 + 0x518))(rcx_64, &data_143f02b98, *(arg1 + 0xe8), 
                    zx.q(rbx_4.d - *(arg1 + 0x60)), var_138_7, 1)
            
            rbx_4 = zx.q(rbx_4.d + 1)
            rsi_5 += 8
        while (rbx_4.d s< *(r14 + 0x20))
else
    TEB* gsbase
    
    if (data_143f5a778
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f5a778)
        
        if (data_143f5a778 == 0xffffffff)
            int64_t* rcx_68 = data_143db18d0
            
            if (rcx_68 == 0)
                sub_140a53c40()
                rcx_68 = data_143db18d0
            
            int64_t r8_18
            r8_18.b = 1
            int64_t* rax_65 = (*(*rcx_68 + 0xb0))(rcx_68, u"r.VirtualTextureReducedMemory", r8_18)
            
            if (rax_65 != 0)
                int64_t rdx_30 = *rax_65
                rax_65 = (*(rdx_30 + 0x58))(rax_65, rdx_30)
            
            data_143f5a770 = rax_65
            _Init_thread_footer(&data_143f5a778)
    
    void* rdx_1 = *(arg1 + 0x48)
    int32_t rcx_12
    
    if ((*(rdx_1 + 0x3d) & 8) != 0 && *(arg1 + 0x59) != 0 && *(data_143f5a770 + 4) != 0)
        void* rax_12 = *(rdx_1 + 0xd0)
        
        if (rax_12 == 0)
            rcx_12 = 0
        else
            rcx_12 = *(rax_12 + 0x14)
        
        if (data_143a30254 s>= rcx_12)
            rcx_12 = data_143a30254
    
    if ((*(rdx_1 + 0x3d) & 8) == 0 || *(arg1 + 0x59) == 0
            || (*(data_143f5a770 + 4) != 0 && r13_1 s<= rcx_12))
        int32_t var_b8_1 = 1
        int32_t var_90_1 = 0
        var_c8:8.q = 0
        int32_t var_a4_1 = (1 << (data_1439c7a34).b) - 1
        var_c8.q = *(arg1 + 0x50)
        int128_t var_b4_1 = data_143dbb1e0
        char var_a0_1 = 0
        int64_t var_98_1 = 0
        int32_t var_90_2 = *(*(rdx_1 + 0xd0) + 0x10)
        int64_t* rcx_33 = data_143f0f180
        (*(*rcx_33 + 0x560))(rcx_33, &var_108, &data_143f02b98, zx.q(r12), var_108, rbx_1.b, r13_1, 
            1, rsi_1, &var_c8)
        sub_1405d1600(arg1 + 0xe8, &var_108)
        sub_1405d1550(&var_108)
        sub_1408c8cf0(arg1 + 0x10, *(arg1 + 0xe8))
        *(*(arg1 + 0x10) + 0x58) = *(*(arg1 + 0x48) + 0x18)
        var_108.q = *(*(arg1 + 0x48) + 0x18)
        int128_t zmm2_2 = sub_140b63b70(&var_108, &var_100)
        int64_t* rcx_40 = data_143f0f180
        int16_t* r8_8 = &data_142d40450
        
        if (var_f8 != 0)
            r8_8 = var_100
        
        (*(*rcx_40 + 0x2e8))(rcx_40, *(arg1 + 0x10), r8_8)
        int16_t* rcx_41 = var_100
        
        if (rcx_41 != 0)
            sub_140a74f90(rcx_41)
        
        sub_14198ac20(&data_143f02b98, *(*(arg1 + 0x48) + 0x90), *(arg1 + 0x10), zmm3, zmm2_2)
        void* rax_42 = *(*(arg1 + 0x48) + 0xd0)
        
        if (*(arg1 + 0x50) == 0)
            int64_t rbx_3 = sx.q(*(arg1 + 0x60))
            
            if (rbx_3.d s< *(rax_42 + 0x20))
                int64_t rsi_4 = rbx_3 << 3
                
                do
                    void* rax_45 = *(arg1 + 0xd8)
                    void* rcx_44 = arg1 + 0x68
                    
                    if (rax_45 != 0)
                        rcx_44 = rax_45
                    
                    if (*(rcx_44 + rsi_4) != 0)
                        int64_t* rcx_45 = data_143f0f180
                        int32_t var_120_1
                        var_120_1.b = 1
                        int32_t var_128_1
                        var_128_1.b = 0
                        char var_130_1
                        var_130_1.q = &var_108
                        sub_1423c0e50(arg1, rbx_3.d, 
                            (*(*rcx_45 + 0x510))(rcx_45, &data_143f02b98, *(arg1 + 0xe8), 
                                zx.q(rbx_3.d - *(arg1 + 0x60)), 1, var_130_1, var_128_1, 
                                var_120_1), 
                            var_108)
                        int64_t* rcx_47 = data_143f0f180
                        int32_t var_138_4
                        var_138_4.b = 0
                        (*(*rcx_47 + 0x518))(rcx_47, &data_143f02b98, *(arg1 + 0xe8), 
                            zx.q(rbx_3.d - *(arg1 + 0x60)), var_138_4, 1)
                    
                    rbx_3 = zx.q(rbx_3.d + 1)
                    rsi_4 += 8
                while (rbx_3.d s< *(*(*(arg1 + 0x48) + 0xd0) + 0x20))
        else
            int32_t i = 0
            
            if (*(rax_42 + 0x20) s> 0)
                int64_t rdx_19 = 0
                
                do
                    void* rax_43 = *(arg1 + 0xd8)
                    void* rcx_42 = arg1 + 0x68
                    rdx_19 += 8
                    
                    if (rax_43 != 0)
                        rcx_42 = rax_43
                    
                    i += 1
                    *(rcx_42 + rdx_19 - 8) = 0
                while (i s< *(*(*(arg1 + 0x48) + 0xd0) + 0x20))
        
        int32_t rax_50 = *(arg1 + 0x5c)
        int64_t zmm3_2 = *(arg1 + 0x28)
        uint128_t zmm1_2 = _mm_cvtepi32_ps(zx.o(r13_1))
        sub_1419ab9c0(arg1 + 0x30, zmm1_2, zmm1_2, zmm3_2, rax_50)
        void* rax_51 = *(arg1 + 0x48)
        *(arg1 + 0x58) = 1
        *(rax_51 + 0x3d) |= 1
    else
        int128_t zmm0_1 = data_143dbb1e0
        int32_t var_50_1 = 0
        int64_t var_80_1 = 0
        int32_t var_64_1 = (1 << (data_1439c7a34).b) - 1
        int64_t var_88 = *(arg1 + 0x50)
        char var_60_1 = 0
        int64_t var_58_1 = 0
        int32_t var_78_1 = 1
        int128_t var_74_1 = zmm0_1
        int32_t var_50_2 = *(*(rdx_1 + 0xd0) + 0x10)
        int64_t* rcx_15 = data_143f0f180
        int32_t* rdx_2 = **(r14 + 0x18)
        (*(*rcx_15 + 0x560))(rcx_15, &var_108, &data_143f02b98, zx.q(*rdx_2), rdx_2[1], rbx_1.b, 
            *(r14 + 0x20), 1, rsi_1 | 0x400000, &var_88)
        sub_1405d1600(arg1 + 0xe8, &var_108)
        sub_1405d1550(&var_108)
        int64_t* rcx_18 = data_143f0f180
        (*(*rcx_18 + 0x698))(rcx_18, &data_143f02b98, *(arg1 + 0xe8), zx.q(*(arg1 + 0x60)))
        int64_t* rcx_19 = data_143f0f180
        (*(*rcx_19 + 0x6a0))(rcx_19, &data_143f02b98, *(arg1 + 0xe8), zx.q(*(arg1 + 0x60)))
        int64_t rbx_2 = sx.q(*(arg1 + 0x60))
        
        if (rbx_2.d s< *(r14 + 0x20))
            int64_t rsi_3 = rbx_2 << 3
            
            do
                int64_t* rax_22 = *(arg1 + 0xd8)
                int64_t* rcx_20 = arg1 + 0x68
                
                if (rax_22 != 0)
                    rcx_20 = rax_22
                
                if (*(rcx_20 + rsi_3) != 0)
                    int64_t* rcx_21 = data_143f0f180
                    int32_t var_120
                    var_120.b = 1
                    int32_t var_128
                    var_128.b = 0
                    char var_130
                    var_130.q = &var_108
                    sub_1423c0e50(arg1, rbx_2.d, 
                        (*(*rcx_21 + 0x510))(rcx_21, &data_143f02b98, *(arg1 + 0xe8), 
                            zx.q(rbx_2.d), 1, var_130, var_128, var_120), 
                        var_108)
                    int64_t* rcx_23 = data_143f0f180
                    int32_t var_138_1
                    var_138_1.b = 0
                    (*(*rcx_23 + 0x518))(rcx_23, &data_143f02b98, *(arg1 + 0xe8), zx.q(rbx_2.d), 
                        var_138_1, 1)
                
                rbx_2 = zx.q(rbx_2.d + 1)
                rsi_3 += 8
            while (rbx_2.d s< *(r14 + 0x20))
        
        int32_t rax_26 = *(arg1 + 0x5c)
        zmm3 = zx.o(*(arg1 + 0x28))
        uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(r13_1))
        int128_t zmm3_1 = sub_1419ab9c0(arg1 + 0x30, zmm1_1, zmm1_1, zmm3.q, rax_26)
        sub_1408c8cf0(arg1 + 0x10, *(arg1 + 0xe8))
        *(*(arg1 + 0x10) + 0x58) = *(*(arg1 + 0x48) + 0x18)
        var_108.q = *(*(arg1 + 0x48) + 0x18)
        int128_t zmm2_1 = sub_140b63b70(&var_108, &var_100)
        int64_t* rcx_29 = data_143f0f180
        int16_t* const r8_6 = &data_142d40450
        
        if (var_f8 != 0)
            r8_6 = var_100
        
        (*(*rcx_29 + 0x2e8))(rcx_29, *(arg1 + 0x10), r8_6)
        int16_t* rcx_30 = var_100
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        sub_14198ac20(&data_143f02b98, *(*(arg1 + 0x48) + 0x90), *(arg1 + 0x10), zmm3_1, zmm2_1)
        void* rax_31 = *(arg1 + 0x48)
        *(arg1 + 0x58) = 1
        *(rax_31 + 0x3d) |= 1
int64_t result = sub_140b4cc00(&var_f0)
__security_check_cookie(rax_1 ^ &var_158)
return result
