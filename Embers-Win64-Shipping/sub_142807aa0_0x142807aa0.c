// 函数: sub_142807aa0
// 地址: 0x142807aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = 0
uint32_t var_11c = 0
char* _String_3
char* _EndPtr

if ((*(*arg3 + 0x10))(arg3, "NbParticles", &_String_3) != 0)
    char* _String = _String_3
    _EndPtr = _String
    
    if (_String != 0 && *_String != 0)
        var_11c = strtoul(_String, &_EndPtr, 0xa)

int64_t r9 = *arg3
uint32_t rbx = 0

if ((*(r9 + 0x10))(arg3, "ValidParticleRange", &_String_3, r9) != 0)
    char* _String_1 = _String_3
    _EndPtr = _String_1
    
    if (_String_1 != 0 && *_String_1 != 0)
        rbx = strtoul(_String_1, &_EndPtr, 0xa)

char* _String_17 = nullptr
uint32_t var_154
int32_t i_3
sub_142804d40(arg3, "ValidParticleBitmap", &_String_17, &i_3, &var_154, arg4)
_EndPtr = nullptr
sub_1428064d0(arg3, "Positions", &_EndPtr, &i_3, &var_154, arg4)
int64_t var_b8 = 0
sub_1428064d0(arg3, "Velocities", &var_b8, &i_3, &var_154, arg4)
int64_t var_b0 = 0
int64_t* var_168
sub_142804f00(arg3, "RestOffsets", &var_b0, &i_3, &var_154, arg4, var_168)
int64_t var_a8 = 0
sub_142806910(arg3, "Flags", &var_a8, &i_3, &var_154, arg4, &data_143b7c2f0)
char* _String_18 = nullptr
int32_t r14 = 0
int64_t* rdi
rdi.b = var_b0 != 0
char* _String_12
__builtin_memset(&_String_12, 0, 0x50)
bool cond:1 = var_b8 != 0
int32_t r9_6 = 0
char* _String_19 = nullptr
bool cond:2 = var_a8 != 0
int32_t r13 = 0
int32_t r15 = 0
uint32_t rsi_1 = 0
char var_156 = rdi.b

if (rbx == 0)
    physx::shdfnd::Foundation::error(physx::shdfnd::Foundation::getInstance(), 4, 
        "D:\Build\++Fortnite\Sync\Engine\Source\ThirdParty\PhysX3\PhysX_3.4\Source\PhysXExtensions\src\s"
    "erialization\Xml\SnRepXCoreSerializer.cpp", 
        0x47c, 
        "PxSerialization::createCollectionFromXml: PxParticleRepXSerializer: Xml field "
    ""ValidParticleRange" is zero!")
    *arg2 = &data_1434cce10
    arg2[1] = 0
    arg2[2] = 0
    return arg2

int32_t var_120_1 = 0
var_154 = (rbx - 1) u>> 5
int32_t rax_7 = 0
char* _String_4 = _String_17
uint32_t rdx_2 = var_154
_String_3 = _String_4
int64_t var_110_1
char* _String_13
int64_t var_100_1
char* _String_14
int64_t var_f0_1
char* _String_15
int64_t var_e0_1
char* _String_16
int64_t var_d0_1

do
    int32_t i = *_String_4
    i_3 = i
    
    if (i != 0)
        int32_t rdx_4 = rax_7 << 5
        _String_17.d = rdx_4
        
        do
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_forward(i)
            uint64_t rbx_2 = zx.q(rdx_4) | zx.q(temp0_1)
            int32_t var_c0 = rbx_2.d
            
            if ((r9_6 & 0x7fffffff) u> r14)
                int32_t* rcx_8 = &_String_18[zx.q(r14) << 2]
                
                if (rcx_8 != 0)
                    *rcx_8 = rbx_2.d
                
                r14 += 1
                var_100_1.d = r14
            else
                sub_1427d0ff0(&_String_13, &var_c0)
                _String_19 = _String_12
                r14 = var_100_1.d
            
            uint64_t rdi_2 = zx.q((rbx_2 * 3).d << 2)
            void* r8_8 = &_EndPtr[rdi_2]
            
            if ((var_110_1:4.d & 0x7fffffff) u> r13)
                void* rdx_7 = &_String_19[zx.q(r13) * 0xc]
                
                if (rdx_7 != 0)
                    *rdx_7 = *r8_8
                    *(rdx_7 + 4) = *(r8_8 + 4)
                    *(rdx_7 + 8) = *(r8_8 + 8)
                
                r13 += 1
                var_110_1.d = r13
            else
                sub_142808f40(&_String_12, r8_8)
                r13 = var_110_1.d
            
            if (cond:1 != 0)
                int32_t* r8_10 = var_b8 + rdi_2
                
                if ((var_d0_1:4.d & 0x7fffffff) u> r15)
                    void* rdx_9 = &_String_16[zx.q(r15) * 0xc]
                    
                    if (rdx_9 != 0)
                        *rdx_9 = *r8_10
                        *(rdx_9 + 4) = r8_10[1]
                        *(rdx_9 + 8) = r8_10[2]
                    
                    r15 += 1
                    var_d0_1.d = r15
                else
                    sub_142808f40(&_String_16, r8_10)
                    r15 = var_d0_1.d
            
            rdi = zx.q(var_156)
            
            if (rdi.b != 0)
                int32_t* rcx_14 = zx.q((rbx_2 << 2).d) + var_b0
                
                if ((var_e0_1:4.d & 0x7fffffff) u> r12)
                    void* rdx_12 = &_String_15[zx.q(r12) << 2]
                    
                    if (rdx_12 != 0)
                        *rdx_12 = *rcx_14
                    
                    r12 += 1
                    var_e0_1.d = r12
                else
                    sub_142808d80(&_String_15, rcx_14)
                    r12 = var_e0_1.d
            
            if (cond:2 != 0)
                int32_t* rcx_17 = zx.q((rbx_2 << 2).d) + var_a8
                
                if ((var_f0_1:4.d & 0x7fffffff) u> rsi_1)
                    void* rdx_15 = &_String_14[zx.q(rsi_1) << 2]
                    
                    if (rdx_15 != 0)
                        *rdx_15 = *rcx_17
                    
                    rsi_1 += 1
                    var_f0_1.d = rsi_1
                else
                    sub_1427d0ff0(&_String_14, rcx_17)
                    rsi_1 = var_f0_1.d
            
            int32_t i_6 = i_3
            rdx_4 = _String_17.d
            _String_18 = _String_13
            r9_6 = var_100_1:4.d
            _String_19 = _String_12
            i = i_6 & (i_6 - 1)
            i_3 = i
        while (i != 0)
        
        rax_7 = var_120_1
        rdx_2 = var_154
    
    rax_7 += 1
    _String_4 = &_String_3[4]
    var_120_1 = rax_7
    _String_3 = _String_4
while (rax_7 u<= rdx_2)

uint64_t rdx_17

if ((*(*arg3 + 0x10))(arg3, "MaxParticles", &_String_3) == 0)
    rdx_17 = zx.q(arg3.d)
    rsi_1.b = 0
else
    char* _String_2 = _String_3
    _EndPtr = _String_2
    
    if (_String_2 == 0 || *_String_2 == 0)
        rdx_17 = zx.q(arg3.d)
        rsi_1.b = 1
    else
        rdx_17 = zx.q(strtoul(_String_2, &_EndPtr, 0xa))
        rsi_1.b = 1

int64_t* rcx_21 = *arg5
int64_t* rax_38 = (*(*rcx_21 + 0xc0))(rcx_21, rdx_17, zx.q(rdi.b))
_String_3.o = *arg5
int64_t var_138_1 = arg5[2]
rsi_1.b &= sub_1427dc2f0(&_String_3, arg3, rax_38, arg4, arg6)
int32_t rdi_3 = 0
char rax_41
int64_t r8_15
rax_41, r8_15 = (*(*arg3 + 0x10))(arg3, "ParticleBaseFlags", &_String_3)

if (rax_41 == 0)
    rax_41 = 0
else
    char* _String_5 = _String_3
    rdi_3 = 0
    
    if (_String_5 != 0 && *_String_5 != 0)
        char* rax_42 = sub_1427d9810(arg4, _String_5)
        char* rcx_26 = rax_42
        char* rbx_4 = rax_42
        
        if (rax_42 != 0)
            while (*rbx_4 != 0)
                rbx_4 = &rbx_4[1]
                
                if (*rbx_4 == 0x7c)
                    *rbx_4 = 0
                    rbx_4 = &rbx_4[1]
                    rdi_3 |= sub_1427e4c80(rcx_26, &data_143b7c3a0)
                    rcx_26 = rbx_4
                
                if (rbx_4 == 0)
                    break
            
            if (rcx_26 != 0 && *rcx_26 != 0)
                rdi_3 |= sub_1427e4c80(rcx_26, &data_143b7c3a0)
        
        (*(*arg4 + 0x10))(arg4, rax_42)
        rsi_1 = zx.d(rsi_1.b)
    
    rax_41 = 1

rsi_1.b &= rax_41
int64_t i_4 = 0x10
char* i_5 = 0x10
int32_t rsi_3 = 1
int32_t rbx_5 = 1
char* i_1

do
    if ((0x10 & rbx_5.b) == 0 && (rbx_5 & zx.d(rdi_3.w)) != 0)
        r8_15.b = 1
        (*(*rax_38 + 0x168))(rax_38, zx.q(rbx_5), r8_15)
    
    rbx_5 = rol.d(rbx_5, 1)
    i_1 = i_5
    i_5 -= 1
while (i_1 != 1)
uint32_t r12_2 = zx.d(i_5.w)
char rax_49
int64_t r8_17
rax_49, r8_17 = (*(*arg3 + 0x10))(arg3, "ParticleReadDataFlags", &_String_3)

if (rax_49 == 0)
    rax_49 = 0
else
    char* _String_6 = _String_3
    r12_2 = i_5.d
    
    if (_String_6 != 0 && *_String_6 != r12_2.b)
        int64_t* rax_50 = sub_1427d9810(arg4, _String_6)
        int64_t* rbx_6 = rax_50
        int64_t* r14_2 = rax_50
        int64_t* rdi_4 = rax_50
        
        if (rax_50 != 0)
            while (*rdi_4 != 0)
                rdi_4 += 1
                
                if (*rdi_4 == 0x7c)
                    *rdi_4 = 0
                    int32_t rbx_7 = 0
                    rdi_4 += 1
                    int32_t rcx_32
                    
                    if (data_143b7c530 == 0)
                    label_142808111:
                        rcx_32 = 0
                    else
                        char** rax_51 = &data_143b7c530
                        
                        while (true)
                            if (physx::shdfnd::stricmp(*rax_51, r14_2) == 0)
                                rcx_32 = *(zx.q(rbx_7) * 0x10 + 0x143b7c538)
                                break
                            
                            rbx_7 += 1
                            rax_51 = &(&data_143b7c530)[zx.q(rbx_7) * 2]
                            
                            if (*rax_51 == 0)
                                goto label_142808111
                    
                    r12_2 |= rcx_32
                    r14_2 = rdi_4
                
                if (rdi_4 == 0)
                    break
            
            i_4 = 0x10
            
            if (r14_2 != 0 && *r14_2 != 0)
                r12_2 |= sub_1427e4c80(r14_2, &data_143b7c530)
            
            rbx_6 = rax_50
        
        (*(*arg4 + 0x10))(arg4, rbx_6)
        i_5 = nullptr
    
    rax_49 = 1

int64_t i_2

do
    if ((rsi_3 & zx.d(r12_2.w)) != 0)
        r8_17.b = 1
        (*(*rax_38 + 0x1c8))(rax_38, zx.q(rsi_3), r8_17)
    
    rsi_3 = rol.d(rsi_3, 1)
    i_2 = i_4
    i_4 -= 1
while (i_2 != 1)
char* _String_8 = _String_13
char* _String_10 = _String_12
char* _String_9 = _String_16
_String_3 = i_5
int32_t var_140_1 = 0xc
int128_t zmm0_2 = _String_3.o
_String_3 = i_5
int32_t var_140_2 = 4
int128_t var_70_1 = zmm0_2
uint32_t var_98 = var_11c
zmm0_2 = _String_3.o
_String_3 = i_5
int32_t var_140_3 = 4
int128_t var_60_1 = zmm0_2
zmm0_2 = _String_3.o
_String_3 = _String_8
int32_t var_140_4 = 4
int128_t var_50_1 = zmm0_2
zmm0_2 = _String_3.o
_String_3 = _String_10
int32_t var_140_5 = 0xc
int128_t var_90_1 = zmm0_2
int128_t var_80_1 = _String_3.o

if (cond:1 != 0)
    _String_3 = _String_9
    var_140_5 = 0xc
    int128_t var_70_2 = _String_3.o

char* _String_11 = _String_15

if (var_156 != 0)
    _String_3 = _String_11
    var_140_5 = 4
    int128_t var_60_2 = _String_3.o

char* _String_7 = _String_14

if (cond:2 != 0)
    _String_3 = _String_7
    var_140_5 = 4
    int128_t var_50_2 = _String_3.o

(*(*rax_38 + 0xb0))(rax_38, &var_98)
int64_t* var_138_2

if ((rsi_1.b & rax_49) == 0)
    _String_3 = &data_1434cce10
    var_140_5.q = 0
    var_138_2 = nullptr
else
    var_140_5.q = rax_38
    _String_3 = "PxParticleFluid"
    var_138_2 = rax_38

int32_t rax_62 = var_f0_1:4.d
*arg2 = _String_3.o
arg2[2] = var_138_2

if ((rax_62 & 0x7fffffff) != 0 && rax_62 s>= 0 && _String_7 != 0)
    class physx::PxAllocatorCallback* rax_63 = physx::shdfnd::getAllocator()
    int64_t r8_18 = *rax_63
    (*(r8_18 + 0x10))(rax_63, _String_7, r8_18)

int32_t rax_64 = var_e0_1:4.d

if ((rax_64 & 0x7fffffff) != 0 && rax_64 s>= 0 && _String_11 != 0)
    class physx::PxAllocatorCallback* rax_65 = physx::shdfnd::getAllocator()
    int64_t r8_19 = *rax_65
    (*(r8_19 + 0x10))(rax_65, _String_11, r8_19)

int32_t rax_66 = var_d0_1:4.d

if ((rax_66 & 0x7fffffff) != 0 && rax_66 s>= 0 && _String_9 != 0)
    class physx::PxAllocatorCallback* rax_67 = physx::shdfnd::getAllocator()
    int64_t r8_20 = *rax_67
    (*(r8_20 + 0x10))(rax_67, _String_9, r8_20)

int32_t rax_68 = var_110_1:4.d

if ((rax_68 & 0x7fffffff) != 0 && rax_68 s>= 0 && _String_10 != 0)
    class physx::PxAllocatorCallback* rax_69 = physx::shdfnd::getAllocator()
    int64_t r8_21 = *rax_69
    (*(r8_21 + 0x10))(rax_69, _String_10, r8_21)

int32_t rax_70 = var_100_1:4.d

if ((rax_70 & 0x7fffffff) != 0 && rax_70 s>= 0 && _String_8 != 0)
    class physx::PxAllocatorCallback* rax_71 = physx::shdfnd::getAllocator()
    int64_t r8_22 = *rax_71
    (*(r8_22 + 0x10))(rax_71, _String_8, r8_22)

return arg2
