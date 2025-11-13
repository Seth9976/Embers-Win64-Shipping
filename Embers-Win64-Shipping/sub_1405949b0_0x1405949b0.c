// 函数: sub_1405949b0
// 地址: 0x1405949b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
void var_d0
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_d0)
void var_208
void var_b8
sub_140b2f260(&var_b8, 0x42c80000, sub_140a96170(&var_208), 1, data_143ddb418)
sub_140b40000(&var_b8)
int64_t* var_200

if (var_200 != 0)
    var_200[1].d -= 1
    
    if (var_200[1].d == 1)
        (**var_200)(var_200)
        int32_t rax_5 = *(var_200 + 0xc)
        *(var_200 + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*var_200 + 8))(var_200, 1)

void var_1f0
int512_t zmm1_2
int512_t zmm2
zmm1_2, zmm2 = sub_140b389c0(&var_b8, 0x41200000, sub_140a96170(&var_1f0))
int64_t* var_1e8

if (var_1e8 != 0)
    var_1e8[1].d -= 1
    
    if (var_1e8[1].d == 1)
        (**var_1e8)(var_1e8)
        int32_t rax_10 = *(var_1e8 + 0xc)
        *(var_1e8 + 0xc) -= 1
        
        if (rax_10 == 1)
            (*(*var_1e8 + 8))(var_1e8, 1)

zmm2.o = 0x3f000000
zmm1_2.o = 0x3dcccccd
void var_1d8
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_1d8)
void* rcx_12 = data_143ddb400
int32_t rsi = 0
int64_t* var_2a8_1 = &data_143de5780
uint64_t var_288 = 0
int32_t var_280 = 0
sub_140af5b90(rcx_12, u"/Script/Engine.Engine", u"GameEngine", &var_288, var_2a8_1)
int16_t* const r14 = &data_142d40450
int16_t* const rbx_3 = &data_142d40450

if (var_280 != 0)
    rbx_3 = var_288

var_2a8_1.d = 0
void* rax_13 = sub_140d2f240(sub_1424ad0c0(), 0, rbx_3, 0, var_2a8_1.d, 0)

if (rax_13 == 0)
    if (var_280 != 0)
        r14 = var_288
    
    sub_140af98a0("Unknown", 0xf67, u"Failed to load UnrealEd Engine class '%s'.", r14)
    sub_140afbb40()

int64_t var_278 = 0
int64_t var_2a0
var_2a0.b = 0
void* rax_15
int512_t zmm2_1
int128_t zmm6
int128_t zmm7
rax_15, zmm2_1, zmm6, zmm7 = sub_140596910(sub_140cde0b0(), rax_13, 0, 0, 0, var_2a0.b, 0)
uint64_t rcx_15 = var_288
data_143f5b298 = rax_15

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_1d8)
zmm2_1.o = zmm6
int512_t zmm1_3
zmm1_3.o = zmm7
int64_t* rax_16 = sub_141d88590()
int64_t rdx_3 = *rax_16
(*(rdx_3 + 0x18))(rax_16, rdx_3, zmm2_1)
void* rcx_19 = data_143efaed8

if (rcx_19 != 0)
    sub_1418b6fc0(rcx_19)

void var_1c0
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_1c0)
sub_1423e9f90(data_143f5b298)
pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_1c0)
zmm2_1.o = zmm6
void var_1a8
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_1a8)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
uint128_t zmm0
zmm0.q = float.d(performanceCount)
zmm0.q = zmm0.q f* data_143d796f8
zmm0.q = zmm0.q f+ 16777216.0
data_143dbb3b8 = zmm0.q
__builtin_memset(arg1 + 0x18, 0, 0x18)
int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
zmm0 = zx.o(*(arg1 + 0x20))
*(arg1 + 0x30) = performanceCount_1.d
zmm0.q = zmm0.q f/ data_14399f930
*(arg1 + 0x28) = sx.q(int.d(_mm_cvtpd_ps(zmm0)))
pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_1a8)
void var_190
sub_140b389c0(&var_b8, 0x42700000, sub_140a96170(&var_190))
int64_t* var_188

if (var_188 != 0)
    var_188[1].d -= 1
    
    if (var_188[1].d == 1)
        (**var_188)(var_188)
        int32_t rax_22 = *(var_188 + 0xc)
        *(var_188 + 0xc) -= 1
        
        if (rax_22 == 1)
            (*(*var_188 + 8))(var_188, 1)

void var_178
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_178)
int64_t* rcx_34 = data_143f5b298
(*(*rcx_34 + 0x280))(rcx_34, arg1)
pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_178)
sub_140599090(&data_143a30300)
sub_140599090(&data_14399fca0)
void var_160
sub_140b389c0(&var_b8, 0x41f00000, sub_140a96170(&var_160))
int64_t* var_158

if (var_158 != 0)
    var_158[1].d -= 1
    
    if (var_158[1].d == 1)
        (**var_158)(var_158)
        int32_t rax_28 = *(var_158 + 0xc)
        *(var_158 + 0xc) -= 1
        
        if (rax_28 == 1)
            (*(*var_158 + 8))(var_158, 1)

if (sub_140a54810() != 0)
    void var_148
    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_148)
    
    if (data_143de5426 == 0)
        void var_250
        int64_t rbx_7 = *sub_140b58170(&var_250, "SessionServices", 1)
        j_sub_140b3db50()
        int64_t* rax_32 = j_sub_140b407e0(&data_143de7d78, rbx_7)
        int64_t r8_5 = *rax_32
        void var_240
        int64_t* rax_33 = (*(r8_5 + 0x48))(rax_32, &var_240, r8_5)
        
        if (arg1 + 0x48 != rax_33)
            *(arg1 + 0x48) = *rax_33
            *rax_33 = 0
            int64_t rcx_44 = rax_33[1]
            int64_t* rbx_8 = *(arg1 + 0x50)
            
            if (rcx_44 != rbx_8)
                rax_33[1] = 0
                *(arg1 + 0x50) = rcx_44
                
                if (rbx_8 != 0)
                    rbx_8[1].d -= 1
                    
                    if (rbx_8[1].d == 1)
                        (**rbx_8)(rbx_8)
                        int32_t temp4_1 = *(rbx_8 + 0xc)
                        *(rbx_8 + 0xc) -= 1
                        
                        if (temp4_1 == 1)
                            (*(*rbx_8 + 8))(rbx_8, 1)
        
        int64_t* var_238
        
        if (var_238 != 0)
            var_238[1].d -= 1
            
            if (var_238[1].d == 1)
                (**var_238)(var_238)
                int32_t temp2_1 = *(var_238 + 0xc)
                *(var_238 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*var_238 + 8))(var_238, 1)
        
        int64_t* rcx_49 = *(arg1 + 0x48)
        
        if (rcx_49 != 0)
            (*(*rcx_49 + 8))(rcx_49)
    
    int64_t* rax_39 = j_sub_140a82f30(0x10)
    int64_t* rax_40
    
    if (rax_39 == 0)
        rax_40 = nullptr
    else
        rax_40 = sub_141ff36b0(rax_39)
    
    *(arg1 + 0x40) = rax_40
    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_148)

void var_220
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_220)
int64_t* rax_41 = sub_140b7c590()
int64_t r8_6 = *rax_41
char rax_42 = (*(r8_6 + 0x18))(rax_41, 8, r8_6)
char rax_43
int512_t zmm2_2
int128_t zmm6_1
int128_t zmm7_1

if (rax_42 != 0)
    zmm2_2, zmm6_1, zmm7_1 = sub_140b7c510()
    int64_t r8_7 = data_143e19eb0
    rax_43 = (*(r8_7 + 0x18))(&data_143e19eb0, 8, r8_7)

if (rax_42 == 0 || rax_43 == 0)
    sub_140afef00()
    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_220)
    rsi = 1
else
    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_220)
    void var_130
    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_130)
    int64_t* rcx_56 = data_143f5b298
    (*(*rcx_56 + 0x288))(rcx_56, "GEngine->Start()")
    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_130)
    zmm2_2.o = zmm6_1
    int512_t zmm1_7
    zmm1_7.o = zmm7_1
    void* rcx_59 = data_143efaed8
    char rax_45
    
    if (rcx_59 != 0)
        rax_45 = sub_1418b4980(rcx_59, 2)
    
    void* rcx_63
    
    if (rcx_59 == 0 || rax_45 == 0)
        void var_100
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_100)
        int64_t* rax_46 = sub_141d88590()
        int64_t r8_8 = *rax_46
        (*(r8_8 + 0x50))(rax_46, 0, r8_8)
        rcx_63 = &var_100
    else
        void var_118
        pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_118)
        double zmm0_1[0x2] = sub_1418b7340(data_143efaed8, 
            "Get().LoadModulesForProject(ELoadingPhase::PostEngineInit)", zmm2_2)
        zmm7_1 = sub_1418b77f0(data_143efaed8, zmm0_1)
        rcx_63 = &var_118
    
    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(rcx_63)
    void var_248
    int64_t rbx_10 = *sub_140b58170(&var_248, "Media", 1)
    j_sub_140b3db50()
    int64_t* rax_48
    int512_t zmm1_8
    int512_t zmm2_3
    int128_t zmm6_2
    rax_48, zmm1_8, zmm2_3, zmm6_2 = sub_140b407e0(&data_143de7d78, rbx_10)
    
    if (rax_48 != 0)
        void*** rax_49 = j_sub_140a82f30(8)
        void*** rbx_11 = rax_49
        
        if (rax_49 == 0)
            rbx_11 = nullptr
        else
            *rbx_11 = &data_142d40898
        
        void*** rax_50 = j_sub_140a82f30(0x18)
        
        if (rax_50 == 0)
            rax_50 = nullptr
        else
            rax_50[1].d = 1
            *rax_50 = &data_142d42e98
            *(rax_50 + 0xc) = 1
            rax_50[2] = rbx_11
        
        void*** var_270 = rbx_11
        (*(*rax_48 + 0x98))(rax_48, &var_270, rbx_11)
        
        if (rax_50 != 0)
            rax_50[1].d -= 1
            
            if (rax_50[1].d == 1)
                (**rax_50)(rax_50)
                int32_t rax_54 = *(rax_50 + 0xc)
                *(rax_50 + 0xc) -= 1
                
                if (rax_54 == 1)
                    (*rax_50)[1](rax_50, 1)
    
    zmm2_3.o = zmm6_2
    zmm1_8.o = zmm7_1
    data_143de542c = 1
    sub_1423efe30(1, 3)
    zmm2_3.o = zmm6_2
    zmm1_8.o = zmm7_1
    void*** rax_56 = sub_140a84c80(0, 0x20, 0)
    void*** var_230_1 = rax_56
    
    if (rax_56 != 0)
        *rax_56 = &data_142d40dc0
        rax_56[1] = sub_14059be80
        rax_56[3] = sub_140a387b0()
        *rax_56 = &data_142d40e18
        sub_140599a00(rax_56, &data_143de56b8)
    else if (data_143de56c0 != 0)
        int64_t* rcx_73 = data_143de56b8
        
        if (rcx_73 != 0)
            (*(*rcx_73 + 0x38))(rcx_73, 0)
            int64_t rcx_74 = data_143de56b8
            
            if (rcx_74 != 0)
                data_143de56b8 = sub_140a84c80(rcx_74, 0, 0)
            
            data_143de56c0 = 0
    
    if (rax_56 != 0)
        (*rax_56)[7](rax_56, 0)
        int64_t rax_61 = sub_140a84c80(rax_56, 0, 0)
        int64_t var_230_2 = rax_61
        
        if (rax_61 != 0)
            sub_140a74f90(rax_61)
    
    sub_140a8d5c0(sub_140a753a0())
    sub_1419d4260()
    void var_e8
    pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_e8)
    sub_140599090(&data_14399fcb8)
    pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_e8)
    sub_1419d7250()
    sub_140b26d80(8)

sub_140b365b0(&var_b8)
char var_6c = 0
int64_t* var_98

if (var_98 != 0)
    var_98[1].d -= 1
    
    if (var_98[1].d == 1)
        (**var_98)(var_98)
        int32_t rax_65 = *(var_98 + 0xc)
        *(var_98 + 0xc) -= 1
        
        if (rax_65 == 1)
            (*(*var_98 + 8))(var_98, 1)

int64_t* var_b0

if (var_b0 != 0)
    var_b0[1].d -= 1
    
    if (var_b0[1].d == 1)
        (**var_b0)(var_b0)
        int32_t rdi_1 = *(var_b0 + 0xc)
        *(var_b0 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_10 = *var_b0
            (*(r8_10 + 8))(var_b0, zx.q(rdi_1), r8_10)

pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(&var_d0)
__security_check_cookie(rax_1 ^ &var_2c8)
return zx.q(rsi)
