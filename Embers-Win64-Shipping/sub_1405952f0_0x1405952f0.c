// 函数: sub_1405952f0
// 地址: 0x1405952f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
char var_247
char* var_180 = &var_247
var_247 = 0
void*** (* var_188)() = j_sub_140597fc0
int64_t* rax_3 = sub_140a756e0(&var_188, &data_143958018) + 0x10
int64_t* var_208 = rax_3
int64_t rcx_1 = *rax_3
int64_t rcx_2 = rax_3[2]
char var_1f0 = 0
int64_t* result_1 = rax_3[3]
rax_3[3] = &var_208
int64_t* rax_4 = var_208
rax_4[4].d += 1
sub_140a7ddb0(sub_140a753a0(), 1)
sub_140a751d0()

if (data_143f138f5 == 0 && data_143db7a64 == 0)
    sub_1419ba230()

int64_t* rax_8 = sub_141d88590()
int64_t rdx_2 = *rax_8

if ((*(rdx_2 + 0x58))(rax_8, rdx_2) != 0)
    int64_t* rax_10 = sub_141d88590()
    int64_t rdx_3 = *rax_10
    (*(rdx_3 + 0x60))(rax_10, rdx_3)

int64_t r13 = data_143de5458
int64_t var_88
__builtin_memset(&var_88, 0, 0x40)
sub_1405a6010(&var_88, 0x20, u"Frame %d", r13)
int64_t* rcx_8 = data_143db18d0

if (rcx_8 == 0)
    sub_140a53c40()
    rcx_8 = data_143db18d0

(*(*rcx_8 + 0x50))(rcx_8)
sub_140599090(&data_14399fd60)
sub_140b19e60()
void* rdx_4 = data_1439a8bd0
(*(rdx_4 + 0x48))(&data_1439a8bd0, rdx_4)
int64_t rax_12

if (data_143dbb3b5 != 0)
    rax_12 = *(arg1 + 0x28)

if (data_143dbb3b5 == 0 || rax_12 == 0 || data_143de5458 u<= rax_12)
    int64_t zmm1_1 = *(arg1 + 0x20)
    
    if (not(zmm1_1 f== 0.0) && not(zmm1_1 f>= *(arg1 + 0x18)))
        sub_140b721f0(0)
else
    sub_140b721f0(0)

sub_1423f4e60(data_143f5b298)
void* rax_13 = data_143f5b298
int64_t r14 = 0
int64_t* rdi = *(rax_13 + 0xc38)
uint64_t r15_1 = sx.q(*(rax_13 + 0xc40)) << 3 u>> 3

if (rdi u> &rdi[sx.q(*(rax_13 + 0xc40))])
    r15_1 = 0

if (r15_1 != 0)
    do
        void* rbx_1 = *(*rdi + 0x278)
        
        if (rbx_1 != 0)
            int64_t* rbx_2 = *(rbx_1 + 0x1b0)
            char rax_17 = sub_140a80f40()
            int64_t r9_1
            
            if (rax_17 != 0)
                r9_1 = *rbx_2
                (*(r9_1 + 0x18))(rbx_2, &data_143f02b98, 0, r9_1)
            else if (data_143f138f4 != rax_17)
            label_14059556b:
                void var_130
                void** rax_19 = sub_14059a020(&var_130, nullptr, 0xff)
                *(*rax_19 + 0x10) = rbx_2
                void* rcx_13 = *rax_19
                int32_t r8_1 = rax_19[2].d
                int64_t* rdx_5 = rax_19[1]
                int64_t* rbx_3 = *(rcx_13 + 0x20)
                int64_t* var_1e0_1 = rbx_3
                int32_t* rsi_2 = &rbx_3[9]
                
                if (rbx_3 != 0)
                    *rsi_2 += 1
                    rbx_3 = var_1e0_1
                
                sub_1405a5630(rcx_13, rdx_5, r8_1, 1)
                
                if (rbx_3 != 0)
                    int32_t rax_20 = *rsi_2
                    *rsi_2 -= 1
                    
                    if (rax_20 == 1)
                        sub_140a2f6e0(var_1e0_1)
            else if (data_143de5480 == rax_17)
                r9_1 = *rbx_2
                (*(r9_1 + 0x18))(rbx_2, &data_143f02b98, 0, r9_1)
            else
                uint32_t rax_18
                rax_18.b = GetCurrentThreadId() == data_143de5470
                
                if (rax_18.b == 0)
                    goto label_14059556b
                
                r9_1 = *rbx_2
                (*(r9_1 + 0x18))(rbx_2, &data_143f02b98, 0, r9_1)
        
        rdi = &rdi[1]
        r14 += 1
    while (r14 != r15_1)

if (sub_140a80f40() == 0)
    uint32_t rax_22
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_22.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_22.b == 0))
        void var_118
        void** rax_23 = sub_140599ae0(&var_118, nullptr, 0xff)
        *(*rax_23 + 0x10) = r13
        void* rcx_17 = *rax_23
        int32_t r8_2 = rax_23[2].d
        int64_t* rdx_6 = rax_23[1]
        int64_t* rbx_4 = *(rcx_17 + 0x20)
        int64_t* var_1d8_1 = rbx_4
        void* rdi_1 = &rbx_4[9]
        
        if (rbx_4 != 0)
            *rdi_1 += 1
            rbx_4 = var_1d8_1
        
        sub_1405a5630(rcx_17, rdx_6, r8_2, 1)
        
        if (rbx_4 != 0)
            int32_t rax_24 = *rdi_1
            *rdi_1 -= 1
            
            if (rax_24 == 1)
                sub_140a2f6e0(var_1d8_1)
    else
        sub_141976900(&data_143f02b88)
        data_14399fa54 += 1
        sub_1419668e0(&data_143f02b98)
        sub_140599090(&data_14399fda8)
else
    sub_141976900(&data_143f02b88)
    data_14399fa54 += 1
    sub_1419668e0(&data_143f02b98)
    sub_140599090(&data_14399fda8)

void* rax_25 = data_143f5b298
int64_t r14_1 = 0
int64_t* rdi_2 = *(rax_25 + 0xc38)
uint64_t r15_3 = sx.q(*(rax_25 + 0xc40)) << 3 u>> 3

if (rdi_2 u> &rdi_2[sx.q(*(rax_25 + 0xc40))])
    r15_3 = 0

if (r15_3 != 0)
    do
        void* rbx_5 = *(*rdi_2 + 0x278)
        
        if (rbx_5 != 0)
            int64_t* rbx_6 = *(rbx_5 + 0x1b0)
            char rax_29 = sub_140a80f40()
            
            if (rax_29 != 0)
                (*(*rbx_6 + 0x2c0))(rbx_6)
            else if (data_143f138f4 != rax_29)
            label_140595765:
                void var_100
                void** rax_32 = sub_140599ed0(&var_100, nullptr, 0xff)
                *(*rax_32 + 0x10) = rbx_6
                void* rcx_22 = *rax_32
                int32_t r8_3 = rax_32[2].d
                int64_t* rdx_7 = rax_32[1]
                int64_t* rbx_7 = *(rcx_22 + 0x20)
                int64_t* var_1d0_1 = rbx_7
                void* rsi_3 = &rbx_7[9]
                
                if (rbx_7 != 0)
                    *rsi_3 += 1
                    rbx_7 = var_1d0_1
                
                sub_1405a5630(rcx_22, rdx_7, r8_3, 1)
                
                if (rbx_7 != 0)
                    int32_t rax_33 = *rsi_3
                    *rsi_3 -= 1
                    
                    if (rax_33 == 1)
                        sub_140a2f6e0(var_1d0_1)
            else if (data_143de5480 == rax_29)
                (*(*rbx_6 + 0x2c0))(rbx_6)
            else
                uint32_t rax_30
                rax_30.b = GetCurrentThreadId() == data_143de5470
                
                if (rax_30.b == 0)
                    goto label_140595765
                
                (*(*rbx_6 + 0x2c0))(rbx_6)
        
        rdi_2 = &rdi_2[1]
        r14_1 += 1
    while (r14_1 != r15_3)

int64_t* rcx_24 = *(data_143f5b298 + 0x788)

if (rcx_24 != 0 && (*(*rcx_24 + 0x150))(rcx_24) != 0)
    int64_t* rcx_25 = *(data_143f5b298 + 0x788)
    
    if (sub_1420e6130((*(*rcx_25 + 0x150))(rcx_25)) != 0)
        sub_1423dafd0(data_143f5b298, 0)

sub_141ecdfe0(data_143f5b298, _mm_cvtpd_ps(zx.o(data_14399f938)))
sub_140bced50()
int64_t* rcx_29 = data_143ddb3f0
(*(*rcx_29 + 0x68))(rcx_29)
void*** var_228 = nullptr
void*** rax_42 = sub_140a84c80(0, 0x20, 0)
int32_t var_220 = 2

if (rax_42 != 0)
    *rax_42 = &data_142d42be8
    rax_42[1] = sub_141996b50
    rax_42[3] = sub_140a387b0()
    *rax_42 = &data_142d42c40

void*** rax_45

if (var_220 == 0)
    rax_45 = rax_42
label_1405958e0:
    
    if (rax_45 != 0)
        sub_140a74f90(rax_45)
else
    int64_t* rcx_31 = rax_42
    
    if (rcx_31 != 0)
        (*(*rcx_31 + 0x38))(rcx_31, 0)
        rax_45 = rax_42
        
        if (rax_45 != 0)
            rax_45 = sub_140a84c80(rax_45, 0, 0)
            var_228 = rax_45
        
        int32_t var_220_1 = 0
        goto label_1405958e0
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
double zmm2[0x2] = zx.o(0)
zmm2[0] = float.d(performanceCount)
zmm2[0] = zmm2[0] f* data_143d796f8
zmm2[0] = zmm2[0] + 16777216.0
zmm2[0] = zmm2[0] f- data_143cd5b38
data_143cd5b38 = zmm2.q
zmm2[0] = zmm2[0] * 1000.0
float zmm1_3 = _mm_cvtpd_ps(zmm2)
double zmm0[0x2] = data_143f5b278
zmm0[0].d = zmm0[0].d f* 0.75f
zmm1_3 = zmm1_3 * 0.25f f+ zmm0[0].d
zmm0 = 0x447a0000
zmm0[0].d = 1000f / zmm1_3
data_143f5b278 = zmm1_3
data_143f5b274 = zmm0[0].d
char rax_46 = sub_140a80f40()

if (rax_46 != 0)
    data_143a30250 = 1
    sub_1419a2190()
else if (data_143f138f4 != rax_46)
label_1405959a6:
    void var_e8
    int64_t* rax_48 = sub_140599d80(&var_e8, nullptr, 0xff)
    void* rcx_36 = *rax_48
    int32_t r8_4 = rax_48[2].d
    int64_t* rdx_8 = rax_48[1]
    int64_t* rbx_9 = *(rcx_36 + 0x18)
    int64_t* var_1c8_1 = rbx_9
    int32_t* rdi_3 = &rbx_9[9]
    
    if (rbx_9 != 0)
        *rdi_3 += 1
        rbx_9 = var_1c8_1
    
    sub_1405a5890(rcx_36, rdx_8, r8_4, 1)
    
    if (rbx_9 != 0)
        int32_t rax_49 = *rdi_3
        *rdi_3 -= 1
        
        if (rax_49 == 1)
            sub_140a2f6e0(var_1c8_1)
else if (data_143de5480 == rax_46)
    data_143a30250 = 1
    sub_1419a2190()
else
    uint32_t rax_47
    rax_47.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_47.b == 0)
        goto label_1405959a6
    
    data_143a30250 = 1
    sub_1419a2190()

int128_t zmm3 = sub_140d84150(true)
TEB* gsbase
void* rdi_4 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
void* var_210 = rdi_4

if (data_143cd5b70 s> *(rdi_4 + 0x14))
    _Init_thread_header(&data_143cd5b70)
    
    if (data_143cd5b70 == 0xffffffff)
        int64_t* rcx_100 = data_143db18d0
        
        if (rcx_100 == 0)
            sub_140a53c40()
            rcx_100 = data_143db18d0
        
        int64_t* rax_107 = (*(*rcx_100 + 0xb0))(rcx_100, u"t.IdleWhenNotForeground", 1)
        int64_t rax_108
        
        if (rax_107 == 0)
            rax_108 = 0
        else
            int64_t rdx_30 = *rax_107
            rax_108 = (*(rdx_30 + 0x58))(rax_107, rdx_30)
        
        data_143cd5b68 = rax_108
        _Init_thread_footer(&data_143cd5b70)

char rsi_1 = 0
char var_248 = 0

if (*data_143cd5b68 != 0 && sub_140d7f150() == 0)
    void* rax_54 = data_143f5b298
    rsi_1 = 1
    var_248 = 1
    int64_t* rdi_5 = *(rax_54 + 0xc38)
    void* rbx_10 = &rdi_5[sx.q(*(rax_54 + 0xc40))]
    
    if (rdi_5 == rbx_10)
    label_140595aa8:
        sub_140b73230(0x3dcccccd)
    else
        while (true)
            if (sub_14242d3d0(*(*rdi_5 + 0x278)) == 0)
                rsi_1 = 0
                var_248 = 0
                break
            
            rdi_5 = &rdi_5[1]
            
            if (rdi_5 == rbx_10)
                goto label_140595aa8
    
    rdi_4 = var_210

if (not(data_143f5ed20.d f== (zx.o(0)).d))
    void* rbx_11 = data_143f5e920
    
    if (rbx_11 != 0)
        void* rax_58 = sub_142437e30(rbx_11, 0, 1)
        
        if (not(data_143f5ed20 f== *(rax_58 + 0x240)))
            void* rax_59 = sub_142437e30(rbx_11, 0, 1)
            *(rax_59 + 0x240) = data_143f5ed20
    
    data_143f5ed20 = 0

sub_140a8e660(&data_143db7b00)
sub_140599090(&data_14399fd78)

if (data_143e29f28 != 0 && rsi_1 == 0)
    sub_140b33630("Input")
    int64_t* rbx_12 = data_143e29f28
    sub_140e78f60(rbx_12)
    sub_140e642c0(rbx_12)
    sub_140b37f60("Input")

if (data_143cd5b80 s> *(rdi_4 + 0x14))
    _Init_thread_header(&data_143cd5b80)
    
    if (data_143cd5b80 == 0xffffffff)
        sub_140b58260(&data_143cd5b78, u"Media", 1)
        _Init_thread_footer(&data_143cd5b80)

int64_t rbx_13 = data_143cd5b78
j_sub_140b3db50()
int64_t* rax_61
double zmm0_4[0x2]
int512_t zmm1_5
int128_t zmm2_1
rax_61, zmm0_4, zmm1_5, zmm2_1 = sub_140b407e0(&data_143de7d78, rbx_13)

if (rax_61 != 0)
    int64_t rdx_10 = *rax_61
    (*(rdx_10 + 0xb0))(rax_61, rdx_10)

int64_t* rcx_46 = data_143f5b298
zmm1_5.o = zx.o(data_14399f938)
zmm1_5.o = _mm_cvtpd_ps(zmm1_5.o)
int64_t rdx_11 = *rcx_46
(*(rdx_11 + 0x2a0))(rcx_46, rdx_11, zx.q(rsi_1))
void* rcx_47 = data_143efaed8
int64_t rdx_13

if (rcx_47 == 0)
    int64_t* rax_69 = sub_141d88590()
    int64_t r8_9 = *rax_69
    (*(r8_9 + 0x50))(rax_69, 1, r8_9)
else
    char rax_62
    rax_62, rdx_13 = sub_1418b49e0(rcx_47, 2)
    
    if (rax_62 != 0)
        rdx_13.b = 2
        char rax_63
        rax_63, rdx_13 = sub_1418b4980(data_143efaed8, rdx_13.b)
        
        if (rax_63 != 0)
            rdx_13, zmm0_4, zmm1_5, zmm2_1, zmm3 = sub_1418b77f0(data_143efaed8, zmm0_4)
        
        void* rbx_14 = data_143f5b298
        
        if (rbx_14 != 0)
            void* rax_64
            rax_64, rdx_13, zmm0_4 = sub_1424ad0c0()
            void* rcx_50 = *(rbx_14 + 0x10)
            int64_t rax_65 = sx.q(*(rax_64 + 0x38))
            
            if (rax_65.d s<= *(rcx_50 + 0x38)
                    && *(*(rcx_50 + 0x30) + (rax_65 << 3)) == rax_64 + 0x30)
                rdx_13, zmm0_4, zmm2_1, zmm3 = sub_142010cb0(rbx_14, zmm1_5, (rax_64 + 0x30).d)
    
    void* rcx_52 = data_143efaed8
    
    if (rcx_52 != 0)
        rdx_13, zmm0_4 = sub_1418b1710(rcx_52)
    
    int64_t* rbx_15 = data_143efaee0
    data_143efaed8 = 0
    
    if (rbx_15 != 0)
        data_143efaee0 = 0
        rbx_15[1].d -= 1
        
        if (rbx_15[1].d == 1)
            (**rbx_15)(rbx_15)
            int32_t temp2_1 = *(rbx_15 + 0xc)
            *(rbx_15 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_15 + 8))(rbx_15, 1)

char* rcx_56 = data_143f56338

if (rcx_56 != 0)
    rdx_13.b = 1
    zmm0_4, zmm2_1, zmm3 = sub_1422ef960(rcx_56, rdx_13, 0)

data_143f3d6c0

if (rax_61 != 0)
    (*(*rax_61 + 0xb8))(rax_61)

int64_t* rcx_59 = data_143f5b298
int64_t* var_240 = nullptr
char rax_72 = (*(*rcx_59 + 0x4c0))(rcx_59)
int64_t* rcx_61 = *(data_143f5b298 + 0x788)
void* rax_73

if (rcx_61 != 0)
    int64_t rdx_14 = *rcx_61
    rax_73 = (*(rdx_14 + 0x150))(rcx_61, rdx_14)

void* const r14_2

if (rcx_61 == 0 || rax_73 == 0)
    r14_2 = nullptr
else
    r14_2 = *(rax_73 + 0xf0)

void* var_238 = nullptr
int32_t i_6 = 0
char r12

if (r14_2 == 0 || *data_143cd5a68 == 0)
    r12 = 0
else
    r12 = 1
    void* var_198
    int64_t* rax_75
    rax_75, zmm0_4, zmm2_1 = sub_141fc69d0(r14_2, &var_198)
    
    if (&var_238 != rax_75)
        int32_t i_3 = i_6
        void* rbx_16 = var_238
        
        if (i_3 != 0)
            int32_t i
            
            do
                zmm0_4 = sub_141fa6360(rbx_16)
                rbx_16 += 0x38
                i = i_3
                i_3 -= 1
            while (i != 1)
            rbx_16 = var_238
        
        if (rbx_16 != 0)
            zmm0_4 = sub_140a74f90(rbx_16)
        
        var_238 = *rax_75
        *rax_75 = 0
        i_6 = rax_75[1].d
        i_6 = *(rax_75 + 0xc)
        rax_75[1] = 0
    
    int32_t i_7
    int32_t i_4 = i_7
    void* rbx_17 = var_198
    
    if (i_4 != 0)
        int32_t i_1
        
        do
            zmm0_4 = sub_141fa6360(rbx_17)
            rbx_17 += 0x38
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
        rbx_17 = var_198
    
    if (rbx_17 != 0)
        zmm0_4 = sub_140a74f90(rbx_17)
    
    rsi_1 = var_248

if (rax_72 != 0)
    _mm_cvtpd_ps(zx.o(data_14399f938))
    
    if (r14_2 != 0 && sub_141fc9980(r14_2) != 0)
        void var_d0
        void** rax_80
        int32_t zmm6_2
        rax_80, zmm6_2 = sub_14059a2c0(&var_d0, nullptr, 2)
        float zmm0_5[0x4] = r14_2.o
        void*** var_168_1 = nullptr
        void* rcx_69 = *rax_80
        void** const var_158 = &data_142d42ed8
        int32_t* (* var_178_1)(int64_t* arg1) = sub_140599200
        zmm0_5 = _mm_shuffle_ps(zmm0_5, zmm0_5, 0xd2)
        zmm0_5[0] = zmm6_2
        zmm0_5 = _mm_shuffle_ps(zmm0_5, zmm0_5, 0xc9)
        float var_150_1[0x4] = zmm0_5
        *(rcx_69 + 0x10) = sub_140599200
        *(rcx_69 + 0x20) = 0
        void* const var_1b0_1
        var_1b0_1.o = zmm0_5
        
        if (*(rcx_69 + 0x10) != 0)
            void** const* rcx_70 = &var_158
            
            if (var_168_1 != 0)
                rcx_70 = var_168_1
            
            (**rcx_70)(rcx_70)
        
        if (var_178_1 != 0)
            void** const* rcx_71 = &var_158
            
            if (var_168_1 != 0)
                rcx_71 = var_168_1
            
            (*rcx_71)[2](rcx_71)
        
        void* rcx_72 = *rax_80
        int64_t* rbx_19 = *(rcx_72 + 0x58)
        
        if (rbx_19 != 0)
            rbx_19[9].d += 1
        
        zmm0_4 = sub_1405a5af0(rcx_72, rax_80[1], rax_80[2].d, 1)
        var_240 = rbx_19

if (data_143e29f28 != 0 && rsi_1 == 0)
    sub_1405a3e70(zmm0_4)
    zmm2_1, zmm3 = sub_140e8c780(data_143e29f28, 1)

if (r12 != 0)
    zmm2_1 = sub_141fab050(r14_2, &var_238)

int64_t* rbx_20 = var_240
int64_t r14_3

if (rbx_20 == 0)
    r14_3 = 0
else
    int32_t rdi_6 = data_143de7000
    sub_140b34200("ConcurrentWithSlateTickTasks_Wait", rdi_6)
    sub_1405a6220(sub_140a242a0(), &var_240)
    r14_3 = 0
    var_240 = nullptr
    
    if (rbx_20 != 0)
        rbx_20[9].d -= 1
        
        if (rbx_20[9].d == 1)
            sub_140a2f6e0(rbx_20)
    
    sub_140b38680("ConcurrentWithSlateTickTasks_Wait", rdi_6)

char rax_87 = sub_140a80f40()

if (rax_87 != 0)
    sub_14198b7d0()
else if (data_143f138f4 != rax_87)
label_140595fca:
    void var_b8
    void** rax_89 = sub_14059a170(&var_b8, nullptr, 0xff)
    void* rcx_79 = *rax_89
    int32_t r8_12 = rax_89[2].d
    int64_t* rdx_23 = rax_89[1]
    int64_t* rbx_21 = *(rcx_79 + 0x18)
    int64_t* var_1c0_1 = rbx_21
    void* rdi_7 = &rbx_21[9]
    
    if (rbx_21 != 0)
        *rdi_7 += 1
        rbx_21 = var_1c0_1
    
    sub_1405a5890(rcx_79, rdx_23, r8_12, 1)
    
    if (rbx_21 != 0)
        int32_t rax_90 = *rdi_7
        *rdi_7 -= 1
        
        if (rax_90 == 1)
            sub_140a2f6e0(var_1c0_1)
else if (data_143de5480 == rax_87)
    sub_14198b7d0()
else
    uint32_t rax_88
    rax_88.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_88.b == 0)
        goto label_140595fca
    
    sub_14198b7d0()

int64_t* rcx_82 = data_143f0f180
(*(*rcx_82 + 0x3e0))(rcx_82, _mm_cvtpd_ps(zx.o(data_14399f938)))
int64_t rax_93 = data_143de5458 + 1
data_143de5458 = rax_93

if (rax_93 u> 6)
    *(arg1 + 0x18) = data_14399f938 f+ *(arg1 + 0x18)

int64_t* rbx_22 = *(arg1 + 0x38)
*(arg1 + 0x38) = sub_1419a2d10()

if (data_143cd5bb0 s> *(var_210 + 0x14))
    _Init_thread_header(&data_143cd5bb0)
    
    if (data_143cd5bb0 == 0xffffffff)
        atexit(sub_142cb0240)
        _Init_thread_footer(&data_143cd5bb0)

if (data_143cd5bc0 s> *(var_210 + 0x14))
    _Init_thread_header(&data_143cd5bc0)
    
    if (data_143cd5bc0 == 0xffffffff)
        int64_t* rcx_102 = data_143db18d0
        
        if (rcx_102 == 0)
            sub_140a53c40()
            rcx_102 = data_143db18d0
        
        int64_t r8_14
        r8_14.b = 1
        int64_t* rax_110 = (*(*rcx_102 + 0xb0))(rcx_102, u"r.OneFrameThreadLag", r8_14)
        
        if (rax_110 != 0)
            int64_t rdx_31 = *rax_110
            r14_3 = (*(rdx_31 + 0x58))(rax_110, rdx_31)
        
        data_143cd5bb8 = r14_3
        _Init_thread_footer(&data_143cd5bc0)

sub_1423f1ff0(&data_143cd5b88, *data_143cd5bb8 != 0, zmm2_1, zmm3)
sub_140b33630("DeferredTickTime")

if (rbx_22 != 0)
    sub_141993d50(rbx_22)
    j_sub_140a74f90(rbx_22)

sub_140cb7020()
uint128_t zmm6_3 = _mm_cvtpd_ps(zx.o(data_14399f938))
sub_140a35180(sub_140b18f30(), zmm6_3)
sub_140a755d0()
sub_140a8e400(&data_143db7b50)
sub_1423f3030(data_143f5b298)
sub_140b37f60("DeferredTickTime")

if (rax_61 != 0)
    (*(*rax_61 + 0xa8))(rax_61)

sub_140599090(&data_14399fd90)
sub_1423dafd0(data_143f5b298, 3)

if (sub_140a80f40() == 0)
    uint32_t rax_101
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_101.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_101.b == 0))
        void var_a0
        int64_t* rax_102 = sub_140599c30(&var_a0, nullptr, 0xff)
        void* rcx_90 = *rax_102
        int32_t r8_13 = rax_102[2].d
        int64_t* rdx_28 = rax_102[1]
        int64_t* rbx_23 = *(rcx_90 + 0x18)
        int64_t* var_1b8_1 = rbx_23
        int32_t* rdi_9 = &rbx_23[9]
        
        if (rbx_23 != 0)
            *rdi_9 += 1
            rbx_23 = var_1b8_1
        
        sub_1405a5890(rcx_90, rdx_28, r8_13, 1)
        
        if (rbx_23 != 0)
            int32_t rax_103 = *rdi_9
            *rdi_9 -= 1
            
            if (rax_103 == 1)
                sub_140a2f6e0(var_1b8_1)
    else
        sub_140599090(&data_14399fdc0)
        sub_14196d390(&data_143f02b98)
else
    sub_140599090(&data_14399fdc0)
    sub_14196d390(&data_143f02b98)

void var_138
int64_t* result = sub_140b672f0(&var_138)
int32_t i_5 = i_6
void* rbx_24 = var_238

if (i_5 != 0)
    int32_t i_2
    
    do
        result = sub_141fa6360(rbx_24)
        rbx_24 += 0x38
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    rbx_24 = var_238

if (rbx_24 != 0)
    result = sub_140a74f90(rbx_24)

int64_t* rbx_25 = var_240

if (rbx_25 != 0)
    rbx_25[9].d -= 1
    
    if (rbx_25[9].d == 1)
        result = sub_140a2f6e0(var_240)

if (var_1f0 == 0)
    int64_t* rax_104 = var_208
    char var_1f0_1 = 1
    rax_104[4].d -= 1
    int64_t* rcx_96 = var_208
    
    if (rcx_2 != rcx_96[2])
        sub_140b16b40(rcx_96, rcx_2)
        rcx_96 = var_208
    
    *rcx_96 = rcx_1
    result = result_1
    var_208[3] = result

__security_check_cookie(rax_1 ^ &var_268)
return result
