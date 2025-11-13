// 函数: sub_1414dc180
// 地址: 0x1414dc180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x14160)
void var_14198
int64_t rax_1 = __security_cookie ^ &var_14198
void* r14 = arg3
int64_t r12 = *(arg2 + 0x1b0)
uint64_t rbx = arg2
void* r15 = arg1
int64_t r9 = *(arg3 + 0x10)
void* var_14150 = arg3
int64_t var_14158 = r12
sub_1410809a0(arg1, arg2, r12, r9)
int32_t r8_1 = *(r14 + 0x1548)
int64_t var_14160

if (*(r15 + 0x118) != 0xffff)
    int64_t* rcx = &var_14160
    
    if (r8_1 s< 3)
        sub_14137b7f0(rcx, rbx)
    else
        sub_14137baa0(rcx, rbx, 0xf, r8_1)
    
    sub_14077caf0(rbx, &var_14158, r15 + 0x118, var_14160)
    sub_1405d1550(&var_14160)

int64_t rsi_1 = *(arg10 + 0x10)

if (*(r15 + 0x11c) u> 0)
    uint32_t r14_1 = zx.d(*(r15 + 0x11a))
    void*** rcx_5 = (*(rbx + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_5 = &rcx_5[5]
    
    if (rax_5 u> *(rbx + 0x38))
        sub_140b0e3d0(rbx + 0x30, 0x30)
        rcx_5 = (*(rbx + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = &rcx_5[5]
    
    *(rbx + 0x30) = rax_5
    void**** rax_6 = *(rbx + 8)
    *(rbx + 0x14) += 1
    *rax_6 = rcx_5
    *(rbx + 8) = &rcx_5[1]
    rcx_5[1] = 0
    rcx_5[3].d = r14_1
    r14 = var_14150
    *rcx_5 = &data_142da77b8
    rcx_5[2] = r12
    rcx_5[4] = rsi_1

void** rdi = rbx + 0x30
int64_t rax_8 = *(arg11 + 0x18)
void* rsi_4 = (*(rbx + 0x30) + 7) & 0xfffffffffffffff8
int64_t var_14120 = rax_8
void* rcx_9 = rsi_4 + 8

if (rcx_9 u> rdi[1])
    sub_140b0e3d0(rdi, 0x10)
    rax_8 = var_14120
    rsi_4 = (*rdi + 7) & 0xfffffffffffffff8
    rcx_9 = rsi_4 + 8

*rdi = rcx_9
*rsi_4 = rax_8
void*** rcx_13 = (*rdi + 7) & 0xfffffffffffffff8
void* rax_9 = &rcx_13[6]

if (rax_9 u> rdi[1])
    sub_140b0e3d0(rdi, 0x38)
    rcx_13 = (*rdi + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_13[6]

*rdi = rax_9
void**** rax_10 = *(rbx + 8)
*(rbx + 0x14) += 1
*rax_10 = rcx_13
*(rbx + 8) = &rcx_13[1]
rcx_13[1] = 0
*rcx_13 = &data_142da7798
rcx_13[2].d = 1
rcx_13[3] = rsi_4
rcx_13[4] = 2
rcx_13[5] = 0
sub_141083370(r15 + 0x11e, rbx, &var_14158, 0, var_14120)
int64_t var_14178
var_14178.d = 0
int128_t zmm6 = sub_14077c870(rbx, &var_14158, r15 + 0x12c, r14 + 0x1598, var_14178.d)
int64_t* rsi_7 = data_14395f4d0
int64_t r12_1 = *(data_1439b7120 + 0x10)
int64_t r13_1

if (*(r15 + 0x134) u<= 0)
    r13_1 = var_14158
else
    uint32_t r14_2 = zx.d(*(r15 + 0x132))
    void* rcx_21 = (*rdi + 7) & 0xfffffffffffffff8
    void* rax_14 = rcx_21 + 0x28
    
    if (rax_14 u> rdi[1])
        zmm6 = sub_140b0e3d0(rdi, 0x30)
        rcx_21 = (*rdi + 7) & 0xfffffffffffffff8
        rax_14 = rcx_21 + 0x28
    
    *rdi = rax_14
    void** rax_15 = *(rbx + 8)
    *(rbx + 0x14) += 1
    *rax_15 = rcx_21
    *(rbx + 8) = rcx_21 + 8
    *(rcx_21 + 8) = 0
    r13_1 = var_14158
    *rcx_21 = &data_142da77b8
    *(rcx_21 + 0x10) = r13_1
    *(rcx_21 + 0x18) = r14_2
    *(rcx_21 + 0x20) = r12_1

if (*(r15 + 0x138) u> 0)
    uint32_t r14_3 = zx.d(*(r15 + 0x136))
    
    if ((*(*rsi_7 + 8))(rsi_7) == 0)
        void* rcx_28 = (*rdi + 7) & 0xfffffffffffffff8
        void* rax_19 = rcx_28 + 0x28
        
        if (rax_19 u> rdi[1])
            zmm6 = sub_140b0e3d0(rdi, 0x30)
            rcx_28 = (*rdi + 7) & 0xfffffffffffffff8
            rax_19 = rcx_28 + 0x28
        
        *rdi = rax_19
        void** rax_20 = *(rbx + 8)
        *(rbx + 0x14) += 1
        *rax_20 = rcx_28
        *(rbx + 8) = rcx_28 + 8
        *(rcx_28 + 8) = 0
        *rcx_28 = &data_142da77c8
        *(rcx_28 + 0x10) = r13_1
        *(rcx_28 + 0x18) = r14_3
        *(rcx_28 + 0x20) = rsi_7

int64_t* rsi_8 = data_14395f4d0
int64_t r14_4 = *(data_1439b7128 + 0x10)

if (*(r15 + 0x13c) u> 0)
    uint32_t r12_2 = zx.d(*(r15 + 0x13a))
    void* rcx_34 = (*rdi + 7) & 0xfffffffffffffff8
    void* rax_23 = rcx_34 + 0x28
    
    if (rax_23 u> rdi[1])
        zmm6 = sub_140b0e3d0(rdi, 0x30)
        rcx_34 = (*rdi + 7) & 0xfffffffffffffff8
        rax_23 = rcx_34 + 0x28
    
    *rdi = rax_23
    void** rax_24 = *(rbx + 8)
    *(rbx + 0x14) += 1
    *rax_24 = rcx_34
    *(rbx + 8) = rcx_34 + 8
    *(rcx_34 + 8) = 0
    *(rcx_34 + 0x18) = r12_2
    *rcx_34 = &data_142da77b8
    *(rcx_34 + 0x10) = r13_1
    *(rcx_34 + 0x20) = r14_4

if (*(r15 + 0x140) u> 0)
    uint32_t r14_5 = zx.d(*(r15 + 0x13e))
    
    if ((*(*rsi_8 + 8))(rsi_8) == 0)
        void* rcx_41 = (*rdi + 7) & 0xfffffffffffffff8
        void* rax_28 = rcx_41 + 0x28
        
        if (rax_28 u> rdi[1])
            zmm6 = sub_140b0e3d0(rdi, 0x30)
            rcx_41 = (*rdi + 7) & 0xfffffffffffffff8
            rax_28 = rcx_41 + 0x28
        
        *rdi = rax_28
        void** rax_29 = *(rbx + 8)
        *(rbx + 0x14) += 1
        *rax_29 = rcx_41
        *(rbx + 8) = rcx_41 + 8
        *(rcx_41 + 8) = 0
        *rcx_41 = &data_142da77c8
        *(rcx_41 + 0x10) = r13_1
        *(rcx_41 + 0x18) = r14_5
        *(rcx_41 + 0x20) = rsi_8

int32_t r12_3 = arg6
int32_t rsi_10 = arg7 - r12_3
var_14160.d = rsi_10
int128_t zmm7

if (*(r15 + 0x144) u> 0)
    sub_14139bef0(rbx)
    void* rax_31
    rax_31, zmm6, zmm7 = sub_1422c6ca0(rbx)
    int64_t* rsi_11 = data_14395f4d0
    
    if (rax_31 == 0)
        rax_31 = data_1439b70c8
    
    int64_t r12_4 = *(rax_31 + 0x10)
    
    if (*(r15 + 0x144) u> 0)
        uint32_t r14_6 = zx.d(*(r15 + 0x142))
        void* rcx_49 = (*rdi + 7) & 0xfffffffffffffff8
        void* rax_32 = rcx_49 + 0x28
        
        if (rax_32 u> rdi[1])
            zmm6 = sub_140b0e3d0(rdi, 0x30)
            rcx_49 = (*rdi + 7) & 0xfffffffffffffff8
            rax_32 = rcx_49 + 0x28
        
        *rdi = rax_32
        void** rax_33 = *(rbx + 8)
        *(rbx + 0x14) += 1
        *rax_33 = rcx_49
        *(rbx + 8) = rcx_49 + 8
        *(rcx_49 + 8) = 0
        *rcx_49 = &data_142da77b8
        *(rcx_49 + 0x10) = r13_1
        *(rcx_49 + 0x18) = r14_6
        *(rcx_49 + 0x20) = r12_4
    
    if (*(r15 + 0x148) u> 0)
        uint32_t r14_7 = zx.d(*(r15 + 0x146))
        
        if ((*(*rsi_11 + 8))(rsi_11) == 0)
            void* rcx_56 = (*rdi + 7) & 0xfffffffffffffff8
            void* rax_37 = rcx_56 + 0x28
            
            if (rax_37 u> rdi[1])
                zmm6 = sub_140b0e3d0(rdi, 0x30)
                rcx_56 = (*rdi + 7) & 0xfffffffffffffff8
                rax_37 = rcx_56 + 0x28
            
            *rdi = rax_37
            void** rax_38 = *(rbx + 8)
            *(rbx + 0x14) += 1
            *rax_38 = rcx_56
            *(rbx + 8) = rcx_56 + 8
            *(rcx_56 + 8) = 0
            *rcx_56 = &data_142da77c8
            *(rcx_56 + 0x10) = r13_1
            *(rcx_56 + 0x18) = r14_7
            *(rcx_56 + 0x20) = rsi_11
    
    rsi_10 = var_14160.d
    r12_3 = arg6

TEB* gsbase
int64_t r13_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143eeebd0 s> *(0x14 + r13_2))
    _Init_thread_header(&data_143eeebd0)
    
    if (data_143eeebd0 == 0xffffffff)
        int64_t* rcx_61 = data_143db18d0
        
        if (rcx_61 == 0)
            sub_140a53c40()
            rcx_61 = data_143db18d0
        
        int64_t r8_5
        r8_5.b = 1
        int64_t* rax_43 = (*(*rcx_61 + 0xb0))(rcx_61, u"r.AllowStaticLighting", r8_5)
        
        if (rax_43 != 0)
            int64_t rdx_4 = *rax_43
            rax_43 = (*(rdx_4 + 0x58))(rax_43, rdx_4)
        
        data_143eeebc8 = rax_43
        _Init_thread_footer(&data_143eeebd0)

int64_t rax_44 = data_143eeebc8
char var_14168_1

if (rax_44 != 0)
    var_14168_1 = 0

if (rax_44 == 0 || *(rax_44 + 4) != 0)
    var_14168_1 = 1

int64_t i_5 = 0x400
void var_14060
void* rax_45 = &var_14060
int64_t i_6 = 0x400
int64_t i

do
    *(rax_45 - 8) = 0
    *rax_45 = 0
    *(rax_45 + 4) = 0x3f800000
    rax_45 += 0x10
    i = i_6
    i_6 -= 1
while (i != 1)
int64_t i_7 = 0x400
var_10060
void* rax_46 = &var_10060
int64_t i_1

do
    *(rax_46 - 8) = 0
    *rax_46 = 0
    *(rax_46 + 4) = 0x3f800000
    rax_46 += 0x10
    i_1 = i_7
    i_7 -= 1
while (i_1 != 1)
int64_t i_8 = 0x400
void var_c060
void* rax_47 = &var_c060
int64_t i_2

do
    *(rax_47 - 8) = 0
    *rax_47 = 0
    *(rax_47 + 4) = 0x3f800000
    rax_47 += 0x10
    i_2 = i_8
    i_8 -= 1
while (i_2 != 1)
int64_t i_9 = 0x400
void var_8060
void* rax_48 = &var_8060
int64_t i_3

do
    *(rax_48 - 8) = 0
    *rax_48 = 0
    *(rax_48 + 4) = 0x3f800000
    rax_48 += 0x10
    i_3 = i_9
    i_9 -= 1
while (i_3 != 1)
void var_4060
void* rax_49 = &var_4060
int64_t i_4

do
    *(rax_49 - 8) = 0
    *rax_49 = 0
    *(rax_49 + 4) = 0x3f800000
    rax_49 += 0x10
    i_4 = i_5
    i_5 -= 1
while (i_4 != 1)
int32_t arg_58
int32_t r11 = arg_58
int32_t r14_8 = 0
void var_14068
void var_c068

if (r11 s> 0)
    int64_t rbx_1 = sx.q(arg9)
    int64_t r15_1 = 0
    int128_t var_48_1 = zmm6
    int64_t rdx_5 = rbx_1
    int64_t r8_6 = sx.q(r12_3)
    int64_t rcx_64 = rbx_1 - sx.q(rsi_10)
    int128_t var_58_1 = zmm7
    float (* r9_4)[0x4] = rcx_64 * 0x1c
    int32_t var_14138
    var_14138.q = r8_6
    int64_t rdi_1 = rcx_64 << 3
    int32_t var_14130
    var_14130.q = r9_4
    
    do
        void var_10068
        void var_8068
        void var_4068
        uint128_t zmm0_1
        uint128_t zmm1_1
        uint128_t zmm2
        float zmm3[0x4]
        
        if (rbx_1.d + r14_8 s>= rsi_10)
            int64_t r10_1 = *arg8
            int64_t rdx_7 = arg8[2]
            int64_t rax_67
            
            if (arg8[1].d != arg8[3].d)
                int32_t r8_7 = 0
                int64_t rcx_73 = *(rdi_1 + arg8[4])
                
                if ((rcx_73 u>> 0x20).d != 0)
                    r8_7 = arg4
                
                rax_67 = sx.q((rcx_73.d & 0x7fffffff) + r8_7)
            else
                rax_67 = sx.q(rbx_1.d - rsi_10 + r14_8)
            
            int64_t rcx_75 = rax_67 * 3
            zmm1_1 = *(rdx_7 + (rcx_75 << 2) + 8)
            zmm0_1 = _mm_max_ss((*(r9_4 + r10_1 + 0xc)).d, 0x38d1b717)
            zmm3 = *(rdx_7 + (rcx_75 << 2))
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm2.d = 1f f/ zmm0_1.d
            zmm3[0] = (*(rdx_7 + (rcx_75 << 2) + 4)).d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            uint64_t rax_74 = zx.q(r14_8) * 2
            zmm3[0] = zmm1_1.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
            zmm3[0] = zmm2.d
            *(&var_14068 + (rax_74 << 3)) = _mm_shuffle_ps(zmm3, zmm3, 0x39)
            zmm0_1 = *(r9_4 + r10_1 + 4)
            zmm1_1 = *(r9_4 + r10_1 + 8)
            zmm3 = *(r9_4 + r10_1)
            zmm2 = *(r9_4 + r10_1 + 0x10)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm3[0] = zmm0_1.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3[0] = zmm1_1.d
            __builtin_memcpy(&var_c068 + (rax_74 << 3), 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", 0x10)
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
            zmm3[0] = zmm2.d
            __builtin_memcpy(&var_8068 + (rax_74 << 3), 
                "\x00\x00\x00\xc0\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f", 0x10)
            *(&var_10068 + (rax_74 << 3)) = _mm_shuffle_ps(zmm3, zmm3, 0x39)
            __builtin_memset(&var_4068 + (rax_74 << 3), 0, 0x10)
        else
            void* r13_3 = *(*arg5 + (rdx_5 + r8_6 + r15_1) * 0x18 + 8)
            int64_t var_14070_1 = 0
            int64_t* rcx_66 = *(r13_3 + 0x20)
            uint128_t var_140c8
            (*(*rcx_66 + 0x68))(rcx_66, &var_140c8)
            zmm0_1 = var_140c8
            uint128_t var_14118_1 = zmm0_1
            uint64_t rsi_13 = zx.q(r14_8) * 2
            uint128_t var_140b8
            uint128_t var_14108_1 = var_140b8
            *(&var_14068 + (rsi_13 << 3)) = zmm0_1
            *(&var_10068 + (rsi_13 << 3)) = var_140b8
            int64_t* rcx_67 = *(r13_3 + 0x20)
            var_1005c
            
            if ((*(*rcx_67 + 0x30))(rcx_67) != 0)
                *(&var_1005c + (rsi_13 << 3)) = 0
            void* rcx_68 = *(r13_3 + 0x20)
            
            if (*(var_14150 + 0xd74) != 0)
                zmm0_1.d = (*(rcx_68 + 0xc8)).d f* *(&var_10068 + (rsi_13 << 3))
                *(&var_10068 + (rsi_13 << 3)) = zmm0_1.d
                int32_t var_10064[0xfff]
                zmm1_1.d = (*(rcx_68 + 0xc8)).d f* var_10064[rsi_13 * 2]
                var_10064[rsi_13 * 2] = zmm1_1.d
                zmm0_1.d = (*(rcx_68 + 0xc8)).d f* *(&var_10060 + (rsi_13 << 3))
                *(&var_10060 + (rsi_13 << 3)) = zmm0_1.d
            
            int32_t rax_60 = -1
            int32_t var_140a8
            zmm3 = var_140a8
            
            if (*(rcx_68 + 0x13c) == 2)
                rax_60 = 1
            
            r11 = arg_58
            r9_4 = var_14130.q
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            int32_t var_140a4
            zmm3[0] = var_140a4.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            int32_t var_140a0
            zmm3[0] = var_140a0.d
            int32_t var_140ec_1 = 0
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
            int32_t var_1409c
            zmm2.d = _mm_cvtepi32_ps(zx.o(rax_60)).d f* var_1409c
            zmm3[0] = zmm2.d
            *(&var_c068 + (rsi_13 << 3)) = _mm_shuffle_ps(zmm3, zmm3, 0x39)
            float var_140f8[0x4]
            int32_t var_14088
            var_140f8[0] = var_14088.d
            zmm3 = _mm_shuffle_ps(var_140f8, var_140f8, 0xe1)
            int32_t var_14084
            zmm3[0] = var_14084.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            int32_t var_1408c
            zmm3[0] = var_1408c.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
            *(&var_8068 + (rsi_13 << 3)) = zmm3
            var_140f8 = zmm3
            int32_t rcx_69 = *(*(r13_3 + 0x20) + 0xf8)
            
            if (var_14168_1 == 0)
                rcx_69 = -1
            
            int32_t rax_62
            rax_62.b = rcx_69 == 0
            zmm3 = _mm_cvtepi32_ps(zx.o(rax_62))
            int32_t rax_63
            rax_63.b = rcx_69 == 1
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            int32_t rax_64
            rax_64.b = rcx_69 == 2
            zmm3[0] = _mm_cvtepi32_ps(zx.o(rax_63)).d
            int32_t rax_65
            rax_65.b = rcx_69 == 3
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            zmm3[0] = _mm_cvtepi32_ps(zx.o(rax_64)).d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
            zmm3[0] = _mm_cvtepi32_ps(zx.o(rax_65)).d
            *(&var_4068 + (rsi_13 << 3)) = _mm_shuffle_ps(zmm3, zmm3, 0x39)
            rsi_10 = var_14160.d
        r8_6 = var_14138.q
        r9_4 = &(*r9_4)[7]
        r14_8 += 1
        var_14130.q = r9_4
        r15_1 += 1
        rdi_1 += 8
        rdx_5 = rbx_1
    while (r14_8 s< r11)
    
    rbx = arg2
    r15 = arg1
    rdi = rbx + 0x30

int64_t rsi_14 = sx.q(*(r15 + 0xe0))
int16_t* r14_9 = &data_143ce8560
int32_t r8_8 = 0

if (rsi_14 s> 0)
    int64_t rdx_8 = 0
    
    while (true)
        void* rcx_77 = *(r15 + 0xd8)
        
        if ((*(r15 + 0xd8) & 1) != 0)
            rcx_77 = (rcx_77 s>> 1) + r15 + 0xd8
        
        if (*(rcx_77 + (rdx_8 << 3)) == data_143ee8340)
            break
        
        r8_8 += 1
        rdx_8 += 1
        
        if (rdx_8 s>= rsi_14)
            goto label_1414dccb8

int16_t* rsi_15

if (rsi_14 s<= 0 || r8_8 == 0xffffffff)
label_1414dccb8:
    
    if (data_143ce8564 s> *(0x14 + r13_2))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rsi_15 = &data_143ce8560
else
    void* rcx_78 = *(r15 + 0xe8)
    
    if ((rcx_78.b & 1) != 0)
        rcx_78 = (rcx_78 s>> 1) + r15 + 0xe8
    
    rsi_15 = rcx_78 + (sx.q(r8_8) << 1)

int64_t r13_4

if (*rsi_15 == 0xffff)
    r13_4 = var_14158
else
    int64_t* rcx_80 = data_143f0f180
    var_14178.d = 0
    (*(*rcx_80 + 0xf8))(rcx_80, &var_14150, &var_14068, &data_143ee8350, var_14178, 1, var_14168_1)
    void* r12_6 = var_14150
    uint32_t rsi_16 = zx.d(*rsi_15)
    void*** rcx_83 = (*rdi + 7) & 0xfffffffffffffff8
    void* rax_80 = &rcx_83[5]
    
    if (rax_80 u> rdi[1])
        sub_140b0e3d0(rdi, 0x30)
        rcx_83 = (*rdi + 7) & 0xfffffffffffffff8
        rax_80 = &rcx_83[5]
    
    *rdi = rax_80
    void**** rax_81 = *(rbx + 8)
    *(rbx + 0x14) += 1
    *rax_81 = rcx_83
    *(rbx + 8) = &rcx_83[1]
    rcx_83[1] = 0
    r13_4 = var_14158
    *rcx_83 = &data_142da77a8
    rcx_83[2] = r13_4
    rcx_83[3].d = rsi_16
    rcx_83[4] = r12_6
    sub_1405d1550(&var_14150)

int64_t rsi_17 = sx.q(*(r15 + 0xe0))
int32_t r8_10 = 0

if (rsi_17 s> 0)
    int64_t rdx_10 = 0
    
    while (true)
        void* rcx_89 = *(r15 + 0xd8)
        
        if ((*(r15 + 0xd8) & 1) != 0)
            rcx_89 = (rcx_89 s>> 1) + r15 + 0xd8
        
        if (*(rcx_89 + (rdx_10 << 3)) == data_143ee83f0)
            break
        
        r8_10 += 1
        rdx_10 += 1
        
        if (rdx_10 s>= rsi_17)
            goto label_1414dce45

if (rsi_17 s<= 0 || r8_10 == 0xffffffff)
label_1414dce45:
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
else
    void* rcx_101 = *(r15 + 0xe8)
    
    if ((rcx_101.b & 1) != 0)
        rcx_101 = (rcx_101 s>> 1) + r15 + 0xe8
    
    r14_9 = rcx_101 + (sx.q(r8_10) << 1)

if (*r14_9 != 0xffff)
    int64_t* rcx_90 = data_143f0f180
    var_14178.d = 0
    (*(*rcx_90 + 0xf8))(rcx_90, &var_14150, &var_c068, &data_143ee8400, var_14178, 1, var_14168_1)
    void* rsi_18 = var_14150
    uint32_t r14_10 = zx.d(*r14_9)
    void* rcx_93 = (*rdi + 7) & 0xfffffffffffffff8
    void* rax_87 = rcx_93 + 0x28
    
    if (rax_87 u> rdi[1])
        sub_140b0e3d0(rdi, 0x30)
        rcx_93 = (*rdi + 7) & 0xfffffffffffffff8
        rax_87 = rcx_93 + 0x28
    
    *rdi = rax_87
    void** rax_88 = *(rbx + 8)
    *(rbx + 0x14) += 1
    *rax_88 = rcx_93
    *(rbx + 8) = rcx_93 + 8
    *(rcx_93 + 8) = 0
    *rcx_93 = &data_142da77a8
    *(rcx_93 + 0x10) = r13_4
    *(rcx_93 + 0x18) = r14_10
    *(rcx_93 + 0x20) = rsi_18
    sub_1405d1550(&var_14150)

var_14178.d = 0
uint64_t result = sub_140741e30(rbx, &var_14158, r15 + 0x126, &arg_58, var_14178.d)
__security_check_cookie(rax_1 ^ &var_14198)
return result
