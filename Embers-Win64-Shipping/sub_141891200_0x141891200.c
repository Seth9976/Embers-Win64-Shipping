// 函数: sub_141891200
// 地址: 0x141891200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2d8
int64_t rax_1 = __security_cookie ^ &var_2d8
int64_t var_280 = 0
int32_t var_278 = 0
sub_1405947f0(&var_280, 0x18)
int32_t rax_2 = var_278 + 0x18
var_278 = rax_2

if (rax_2 s> 0)
    sub_140594770(&var_280)

UnDecorator::getReferenceType(var_280, u"Build Stream: Open Time", 0x30)
int64_t* rcx_3 = *(arg1 + 0x38)
int64_t* rax_4 = (*(*rcx_3 + 8))(rcx_3, &var_280, 0, 0)
int64_t rcx_4 = var_280
int64_t* rdi = rax_4

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t var_270 = 0
int32_t var_268 = 0
sub_1405947f0(&var_270, 0x18)
int32_t rax_5 = var_268 + 0x18
var_268 = rax_5

if (rax_5 s> 0)
    sub_140594770(&var_270)

UnDecorator::getReferenceType(var_270, u"Build Stream: Read Time", 0x30)
int64_t* rcx_8 = *(arg1 + 0x38)
int64_t* rax_7 = (*(*rcx_8 + 8))(rcx_8, &var_270, 0, 0)
int64_t rcx_9 = var_270

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t var_260 = 0
int32_t var_258 = 0
sub_1405947f0(&var_260, 0x18)
int32_t rax_8 = var_258 + 0x18
var_258 = rax_8

if (rax_8 s> 0)
    sub_140594770(&var_260)

UnDecorator::getReferenceType(var_260, u"Build Stream: Hash Time", 0x30)
int64_t* rcx_13 = *(arg1 + 0x38)
int64_t* rax_10 = (*(*rcx_13 + 8))(rcx_13, &var_260, 0, 0)
int64_t rcx_14 = var_260

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t var_250 = 0
int32_t var_248 = 0
sub_1405947f0(&var_250, 0x1b)
int32_t rax_11 = var_248 + 0x1b
var_248 = rax_11

if (rax_11 s> 0)
    sub_140594770(&var_250)

UnDecorator::getReferenceType(var_250, u"Build Stream: Enqueue Time", 0x36)
int64_t* rcx_18 = *(arg1 + 0x38)
int64_t* rax_13 = (*(*rcx_18 + 8))(rcx_18, &var_250, 0, 0)
int64_t rcx_19 = var_250

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t var_240 = 0
int32_t var_238 = 0
sub_1405947f0(&var_240, 0x20)
int32_t rax_14 = var_238 + 0x20
var_238 = rax_14

if (rax_14 s> 0)
    sub_140594770(&var_240)

UnDecorator::getReferenceType(var_240, u"Build Stream: Data Access Speed", 0x40)
int64_t* rcx_23 = *(arg1 + 0x38)
int64_t r8
r8.b = 2
int64_t* rax_16 = (*(*rcx_23 + 8))(rcx_23, &var_240, r8, 0)
int64_t rcx_24 = var_240

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int64_t var_230 = 0
int32_t var_228 = 0
sub_1405947f0(&var_230, 0x23)
int32_t rax_17 = var_228 + 0x23
var_228 = rax_17

if (rax_17 s> 0)
    sub_140594770(&var_230)

UnDecorator::getReferenceType(var_230, u"Build Stream: Potential Throughput", 0x46)
int64_t* rcx_28 = *(arg1 + 0x38)
int64_t r8_1
r8_1.b = 2
int64_t* rax_19 = (*(*rcx_28 + 8))(rcx_28, &var_230, r8_1, 0)
int64_t rcx_29 = var_230

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

int64_t var_220 = 0
int32_t var_218 = 0
sub_1405947f0(&var_220, 0x1e)
int32_t rax_20 = var_218 + 0x1e
var_218 = rax_20

if (rax_20 s> 0)
    sub_140594770(&var_220)

UnDecorator::getReferenceType(var_220, u"Build Stream: Total Data Read", 0x3c)
int64_t* rcx_33 = *(arg1 + 0x38)
int64_t r8_2
r8_2.b = 1
int64_t* rax_22 = (*(*rcx_33 + 8))(rcx_33, &var_220, r8_2, 0)
int64_t rcx_34 = var_220

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

EnterCriticalSection(arg1 + 0x48)
memset(*(arg1 + 0x78), 0, zx.q(*(arg1 + 0x70)))
*(arg1 + 0x80) = 0
*(arg1 + 0x88) = 0
LeaveCriticalSection(arg1 + 0x48)
int64_t* var_290 = nullptr
int32_t i_5 = 0
_Query_perf_frequency()

if (*(arg1 + 0x20) s> 1)
    sub_141891ce0(arg1, &var_290)
else
    int16_t* const r8_4
    
    if (*(arg1 + 0x10) == 0)
        r8_4 = &data_142d40450
    else
        r8_4 = *(arg1 + 8)
    
    int64_t* rcx_38 = *(arg1 + 0x40)
    (*(*rcx_38 + 0x90))(rcx_38, &var_290, r8_4, 0)

_Query_perf_frequency()
char var_2a8
sub_140688010(var_290, i_5, var_2a8)
sub_141897b30(arg1, &var_290)
EnterCriticalSection(arg1 + 0x110)
int32_t var_2b8

if (arg1 + 0x138 != &var_290)
    int32_t i_3 = *(arg1 + 0x140)
    uint64_t rdi_1 = *(arg1 + 0x138)
    
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t rcx_43 = *rdi_1
            
            if (rcx_43 != 0)
                sub_140a74f90(rcx_43)
            
            rdi_1 += 0x10
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    var_2b8 = 0
    sub_1405967a0(arg1 + 0x138, var_290, i_5, *(arg1 + 0x144), var_2b8)
    rdi = rax_4

*(arg1 + 0x274)
*(arg1 + 0x274) = 1

if (arg1 != -0x110)
    LeaveCriticalSection(arg1 + 0x110)

void var_128
sub_140b2f110(&var_128)
void* rax_25 = j_sub_140a82f30(0xa00000)
int64_t* rsi_1 = var_290
void* rax_28 = &rsi_1[sx.q(i_5) * 2]
int64_t* var_1d8 = rsi_1

if (rsi_1 != rax_28)
    int128_t zmm6
    int128_t var_38_1 = zmm6
    
    do
        bool z_1
        
        if (0 == *(arg1 + 0x270))
            *(arg1 + 0x270) = 0
            z_1 = true
        else
            *(arg1 + 0x270)
            z_1 = false
        
        if (not(z_1))
            break
        
        void var_298
        sub_141828370(&var_298)
        int16_t* const r8_7
        
        if (rsi_1[1].d == 0)
            r8_7 = &data_142d40450
        else
            r8_7 = *rsi_1
        
        int64_t* rcx_48 = *(arg1 + 0x40)
        int64_t* var_2a0
        (*(*rcx_48 + 0x48))(rcx_48, &var_2a0, r8_7, 0, var_2b8)
        int32_t rdx_21 = sub_1418283a0(rdi, &var_298)
        
        if (var_2a0 == 0)
            *(arg1 + 0x270)
            *(arg1 + 0x270) = 1
            int64_t* rcx_110 = var_2a0
            
            if (rcx_110 != 0)
                (**rcx_110)(rcx_110, 1)
            
            break
        
        int32_t rbx_1 = *(arg1 + 0x10)
        int64_t rdi_2 = *(arg1 + 8)
        int16_t* var_210 = nullptr
        sub_1405a4c70(&var_210, sbb.d(rdx_21, rdx_21, rbx_1 != 0) + 2 + rbx_1, 0)
        memcpy(var_210, rdi_2, rbx_1 * 2)
        sub_140a20ba0(&var_210, &data_142d5a024, 1)
        int16_t* rdx_26 = &data_142d40450
        int16_t* rbx_2 = var_210
        var_210 = nullptr
        int32_t var_208_1
        var_208_1.q = 0
        
        if (rbx_1 != 0)
            rdx_26 = rbx_2
        
        int16_t* var_148_1 = rbx_2
        int32_t var_140_1 = rbx_1
        sub_140b20770(rsi_1, rdx_26)
        
        if (rbx_2 != 0)
            sub_140a74f90(rbx_2)
        
        int64_t* rcx_55 = var_2a0
        int64_t rax_35 = (*(*rcx_55 + 0x28))(rcx_55)
        
        if (rax_35 s> 0)
            sub_140b30ae0(&var_128)
            EnterCriticalSection(arg1 + 0x48)
            int64_t rdi_3 = *(arg1 + 0x88)
            LeaveCriticalSection(arg1 + 0x48)
            int64_t var_1a0
            sub_140596d10(&var_1a0, rsi_1)
            int64_t var_190_1 = rax_35
            void* lpCriticalSection = arg1 + 0x98
            int64_t var_188 = rdi_3
            int64_t var_180
            __builtin_memset(&var_180, 0, 0x15)
            int64_t var_168_1 = 0
            int64_t var_160_1 = 0
            EnterCriticalSection(lpCriticalSection)
            int64_t* var_158 = &var_188
            void* r15_1 = arg1 + 0xc0
            int64_t* var_150_1 = &var_1a0
            void var_1d0
            sub_14185a730(r15_1, &var_1d0, &var_158, nullptr)
            
            if (lpCriticalSection != 0)
                LeaveCriticalSection(lpCriticalSection)
            
            if (var_168_1 != 0)
                sub_140a74f90(var_168_1)
            
            int64_t rcx_64 = var_1a0
            
            if (rcx_64 != 0)
                sub_140a74f90(rcx_64)
            
            int64_t* rcx_65 = var_2a0
            
            if ((*(*rcx_65 + 0x30))(rcx_65) == 0)
                int64_t* rsi_2 = rax_7
                char i_1
                
                do
                    bool z_2
                    
                    if (0 == *(arg1 + 0x270))
                        *(arg1 + 0x270) = 0
                        z_2 = true
                    else
                        *(arg1 + 0x270)
                        z_2 = false
                    
                    if (not(z_2))
                        break
                    
                    int64_t* rcx_66 = var_2a0
                    int64_t r15_3 = rax_35 - (*(*rcx_66 + 0x20))(rcx_66)
                    
                    if (r15_3 s>= 0xa00000)
                        r15_3 = 0xa00000
                    
                    sub_141828370(&var_298)
                    int64_t* rcx_68 = var_2a0
                    (*(*rcx_68 + 0x150))(rcx_68, rax_25, zx.q(r15_3.d))
                    sub_1418283a0(rsi_2, &var_298)
                    sub_141828360(rax_22, zx.q(r15_3.d))
                    sub_141828370(&var_298)
                    sub_140b4ad80(&var_128, rax_25, zx.q(r15_3.d))
                    sub_1418283a0(rax_10, &var_298)
                    sub_141828370(&var_298)
                    EnterCriticalSection(arg1 + 0x48)
                    EnterCriticalSection(arg1 + 0x48)
                    int32_t rsi_3 = *(arg1 + 0x70)
                    int32_t rdi_5 = *(arg1 + 0x80)
                    LeaveCriticalSection(arg1 + 0x48)
                    
                    if (rsi_3 - rdi_5 u< r15_3.d)
                        int32_t rsi_5
                        int32_t rdi_6
                        
                        do
                            LeaveCriticalSection(arg1 + 0x48)
                            sub_140b73230(0x3c23d70a)
                            EnterCriticalSection(arg1 + 0x48)
                            EnterCriticalSection(arg1 + 0x48)
                            rsi_5 = *(arg1 + 0x70)
                            rdi_6 = *(arg1 + 0x80)
                            LeaveCriticalSection(arg1 + 0x48)
                        while (rsi_5 - rdi_6 u< r15_3.d)
                    
                    uint64_t rcx_82 = zx.q(*(arg1 + 0x84))
                    uint32_t count = r15_3.d
                    uint32_t count_1 = *(arg1 + 0x70) - rcx_82.d
                    
                    if (count_1 u<= r15_3.d)
                        count = count_1
                    
                    memcpy(rcx_82 + *(arg1 + 0x78), rax_25, count)
                    
                    if (count_1 u< r15_3.d)
                        memcpy(*(arg1 + 0x78), zx.q(count_1) + rax_25, r15_3.d - count_1)
                    
                    int32_t r8_15 = *(arg1 + 0x70)
                    uint32_t temp1_1 = modu.dp.d(0:(*(arg1 + 0x84) + r15_3.d), r8_15)
                    int32_t rcx_86 = *(arg1 + 0x80) + r15_3.d
                    *(arg1 + 0x88) += zx.q(r15_3.d)
                    *(arg1 + 0x84) = temp1_1
                    
                    if (rcx_86 u< r8_15)
                        r8_15 = rcx_86
                    
                    *(arg1 + 0x80) = r8_15
                    LeaveCriticalSection(arg1 + 0x48)
                    sub_1418283a0(rax_13, &var_298)
                    rsi_2 = rax_7
                    zmm6.q = float.d(*rax_22)
                    zmm6.q = zmm6.q f/ sub_141831760(*rsi_2 + *rax_4)
                    sub_1418508e0(rax_16, int.q(zmm6.q))
                    zmm6.q = float.d(*rax_22)
                    zmm6.q = zmm6.q f/ sub_141831760(*rax_4 + *rax_10 + *rsi_2)
                    sub_1418508e0(rax_19, int.q(zmm6.q))
                    int64_t* rcx_95 = var_2a0
                    i_1 = (*(*rcx_95 + 0x30))(rcx_95)
                while (i_1 == 0)
                rsi_1 = var_1d8
                lpCriticalSection = arg1 + 0x98
                r15_1 = arg1 + 0xc0
            
            sub_140b39010(&var_128)
            EnterCriticalSection(lpCriticalSection)
            int64_t* rdx_46
            
            if (*(r15_1 + 8) == *(r15_1 + 0x34))
            label_141891b50:
                rdx_46 = nullptr
            else
                void* r8_16 = *(r15_1 + 0x40)
                void* r9_2 = r15_1 + 0x38
                
                if (r8_16 != 0)
                    r9_2 = r8_16
                
                int32_t rax_56 = *(r9_2 + ((sx.q((rdi_3 u>> 0x20).d * 0x17 + rdi_3.d)
                    & (sx.q(*(r15_1 + 0x48)) - 1)) << 2))
                
                if (rax_56 == 0xffffffff)
                label_141891b50_1:
                    rdx_46 = nullptr
                else
                    while (true)
                        rdx_46 = sx.q(rax_56) * 0x58 + *r15_1
                        
                        if (*rdx_46 == rdi_3)
                            break
                        
                        rax_56 = rdx_46[0xa].d
                        
                        if (rax_56 == 0xffffffff)
                            goto label_141891b50_2
                    
                    if (rax_56 == 0xffffffff)
                    label_141891b50_2:
                        rdx_46 = nullptr
            
            sub_140b3da80(&var_128, &rdx_46[5])
            
            if (lpCriticalSection != 0)
                LeaveCriticalSection(lpCriticalSection)
        else if (rax_35 == 0)
            void var_138
            int64_t* rax_59 = sub_140596d10(&var_138, rsi_1)
            EnterCriticalSection(arg1 + 0x98)
            void var_1cc
            sub_140a5cad0(arg1 + 0x148, &var_1cc, rax_59, nullptr)
            
            if (arg1 != -0x98)
                LeaveCriticalSection(arg1 + 0x98)
            
            int64_t rcx_109 = *rax_59
            
            if (rcx_109 != 0)
                sub_140a74f90(rcx_109)
        
        int64_t* rcx_103 = var_2a0
        (*(*rcx_103 + 0x1b8))(rcx_103)
        int64_t* rcx_104 = var_2a0
        
        if (rcx_104 != 0)
            (**rcx_104)(rcx_104, 1)
        
        rdi = rax_4
        rsi_1 = &rsi_1[2]
        var_1d8 = rsi_1
    while (rsi_1 != rax_28)

*(arg1 + 0x90)
*(arg1 + 0x90) = 1
j_sub_140a74f90(rax_25)
int64_t result = sub_140b30ae0(&var_128)
int32_t i_4 = i_5
int64_t* rbx_6 = var_290

if (i_4 != 0)
    int32_t i_2
    
    do
        int64_t rcx_113 = *rbx_6
        
        if (rcx_113 != 0)
            result = sub_140a74f90(rcx_113)
        
        rbx_6 = &rbx_6[2]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
    rbx_6 = var_290

if (rbx_6 != 0)
    result = sub_140a74f90(rbx_6)

__security_check_cookie(rax_1 ^ &var_2d8)
return result
