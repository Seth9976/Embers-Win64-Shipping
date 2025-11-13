// 函数: sub_140a7ea90
// 地址: 0x140a7ea90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
struct icu_64::Calendar::icu_64::GregorianCalendar::VTable** r14 = nullptr
int32_t var_290 = 0
char var_218 = 0
int32_t var_2b8 = 0
sub_142a7dc20(0, sub_140a82e20, sub_140a84ae0, sub_140a74c40, &var_2b8)
int16_t* var_2b0 = nullptr
int32_t var_2a8 = 0
sub_1405947f0(&var_2b0, 0x15)
int32_t rbx = var_2a8 + 0x15

if (rbx s> 0)
    sub_140594770(&var_2b0)

UnDecorator::getReferenceType(var_2b0, u"Internationalization", 0x2a)
int64_t var_198
int64_t* rax_2 = sub_140b25050(&var_198)
int32_t rdi = rbx - 1

if (rbx == 0)
    rdi = 0

int64_t i_1 = 2
int32_t rdx_1

if (rax_2[1].d == 0)
    rdx_1 = 2

if (rax_2[1].d != 0 || rdi == 0xffffffff)
    rdx_1 = 1

int64_t var_268 = 0
var_268 = *rax_2
*rax_2 = 0
int32_t rax_5 = rax_2[1].d
int32_t rax_6 = *(rax_2 + 0xc)
rax_2[1] = 0
int32_t rdx_3 = rdx_1 + rax_5 + rdi

if (rdx_3 s> rax_6)
    sub_1405947f0(&var_268, rdx_3)

sub_140a2cf70(&var_268, var_2b0, rdi)
int64_t rdi_1 = var_198

if (rdi_1 != 0)
    int64_t* rcx_7 = data_143ddb3f0
    
    if (rcx_7 == 0)
        sub_140a750a0()
        rcx_7 = data_143ddb3f0
    
    (*(*rcx_7 + 0x30))(rcx_7, rdi_1)

int64_t var_188
int64_t* rax_8 = sub_140b139e0(&var_188)
int32_t rbx_1

if (rbx == 0)
    rbx_1 = 0
else
    rbx_1 = rbx - 1

int32_t rdx_6

if (rax_8[1].d == 0)
    rdx_6 = 2

if (rax_8[1].d != 0 || rbx_1 == 0xffffffff)
    rdx_6 = 1

int64_t var_258 = 0
var_258 = *rax_8
*rax_8 = 0
int32_t rax_11 = rax_8[1].d
int32_t rax_12 = *(rax_8 + 0xc)
rax_8[1] = 0
int32_t rdx_8 = rdx_6 + rax_11 + rbx_1

if (rdx_8 s> rax_12)
    sub_1405947f0(&var_258, rdx_8)

sub_140a2cf70(&var_258, var_2b0, rbx_1)
int64_t rbx_2 = var_188

if (rbx_2 != 0)
    int64_t* rcx_12 = data_143ddb3f0
    
    if (rcx_12 == 0)
        sub_140a750a0()
        rcx_12 = data_143ddb3f0
    
    (*(*rcx_12 + 0x30))(rcx_12, rbx_2)

arg1[4].d = 0

if (*(arg1 + 0x24) s<= 0xffffffff)
    sub_1405947f0(&arg1[3], 0)

int16_t* rax_14 = arg1[3]

if (rax_14 != 0)
    *rax_14 = 0

int64_t* i = &var_268
int16_t* var_248
int16_t* const r13_1

do
    r13_1 = &data_142d40450
    
    if (sub_140b12f50(i) != 0)
        int16_t* rdx_11
        
        if (i[1].d == 0)
            rdx_11 = &data_142d40450
        else
            rdx_11 = *i
        
        void var_d8
        sub_1408f2b40(&var_d8, rdx_11)
        char* var_50
        int32_t rdx_12 = sub_142a4b810(var_50)
        int64_t var_58
        
        if (var_58 != 0)
            int64_t* rcx_17 = data_143ddb3f0
            
            if (rcx_17 == 0)
                sub_140a750a0()
                rcx_17 = data_143ddb3f0
            
            rdx_12 = (*(*rcx_17 + 0x30))(rcx_17, var_58)
        
        int32_t rbx_4 = i[1].d
        int64_t rdi_2 = *i
        int64_t var_288 = 0
        sub_1405a4c70(&var_288, sbb.d(rdx_12, rdx_12, rbx_4 != 0) + 0xa + rbx_4, 0)
        memcpy(var_288, rdi_2, rbx_4 * 2)
        int32_t rcx_21 = sub_140a2cf70(&var_288, u"icudt64l", 8)
        int64_t var_2a0 = var_288
        int32_t rdx_19 = rbx_4 + sbb.d(rcx_21, rcx_21, rbx_4 != 0) + 2
        var_288 = 0
        int32_t var_280_1
        var_280_1.q = 0
        int32_t var_27c
        
        if (rdx_19 s> var_27c)
            sub_1405947f0(&var_2a0, rdx_19)
        
        sub_140a2cf70(&var_2a0, &data_142d40450, 0)
        
        if (&arg1[3] == &var_2a0)
            int64_t rbx_6 = var_2a0
            
            if (rbx_6 != 0)
                int64_t* rcx_27 = data_143ddb3f0
                
                if (rcx_27 == 0)
                    sub_140a750a0()
                    rcx_27 = data_143ddb3f0
                
                (*(*rcx_27 + 0x30))(rcx_27, rbx_6)
        else
            int64_t rbx_5 = arg1[3]
            
            if (rbx_5 != 0)
                int64_t* rcx_26 = data_143ddb3f0
                
                if (rcx_26 == 0)
                    sub_140a750a0()
                    rcx_26 = data_143ddb3f0
                
                (*(*rcx_26 + 0x30))(rcx_26, rbx_5)
            
            arg1[3] = var_2a0
            arg1[4].d = rbx_4
            *(arg1 + 0x24) = var_27c
            int32_t var_298_1
            var_298_1.q = 0
            var_2a0 = 0
        
        int64_t rbx_7 = var_288
        
        if (rbx_7 != 0)
            int64_t* rcx_28 = data_143ddb3f0
            
            if (rcx_28 == 0)
                sub_140a750a0()
                rcx_28 = data_143ddb3f0
            
            (*(*rcx_28 + 0x30))(rcx_28, rbx_7)
        
        break
    
    i = &i[2]
while (i != &var_248)

if (arg1[4].d s<= 1)
    int32_t rax_28 = 0
    var_248 = nullptr
    int32_t var_240_1 = 0
    int64_t* rbx_8 = &var_268
    int32_t var_23c_1 = 0
    
    while (true)
        if (rax_28 s> 1)
            sub_140a20ba0(&var_248, &data_142d576a0, 1)
        
        int32_t rax_29 = rbx_8[1].d
        int32_t r8_4 = rax_29 - 1
        
        if (rax_29 == 0)
            r8_4 = 0
        
        sub_140a20ba0(&var_248, *rbx_8, r8_4)
        rbx_8 = &rbx_8[2]
        
        if (rbx_8 == &var_248)
            break
        
        rax_28 = var_240_1
    
    if (var_240_1 != 0)
        r13_1 = var_248
    
    sub_140af98a0("Unknown", 0x99, u"ICU data directory was not discovered:\n%s", r13_1)
    int16_t* rbx_9 = var_248
    
    if (rbx_9 != 0)
        int64_t* rcx_31 = data_143ddb3f0
        
        if (rcx_31 == 0)
            sub_140a750a0()
            rcx_31 = data_143ddb3f0
        
        (*(*rcx_31 + 0x30))(rcx_31, rbx_9)
    
    sub_140afbb40()

sub_142a7f940(0)
sub_142a7dde0(arg1, sub_140a83f20, sub_140a6bf80, &var_2b8)
sub_142a7da80(&var_2b8)
CRITICAL_SECTION* lpCriticalSection_2 = j_sub_140a82f30(0xf0)
CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection_2

if (lpCriticalSection_2 == 0)
    lpCriticalSection_1 = nullptr
else
    memset(lpCriticalSection_2, 0, 0xf0)
    InitializeCriticalSection(lpCriticalSection_1)
    SetCriticalSectionSpinCount(lpCriticalSection_1, 0xfa0)
    lpCriticalSection_1->__offset(0x28).q = 0
    void* __offset(_RTL_CRITICAL_SECTION, 0x38) rcx_37 = lpCriticalSection_1 + 0x38
    lpCriticalSection_1->__offset(0x30).q = 0
    (rcx_37 - 0x38)->__offset(0x48).q = 0
    (rcx_37 - 0x38)->__offset(0x50).d = 0
    (rcx_37 - 0x38)->__offset(0x54).d = 0x80
    void* rax_31 = (rcx_37 - 0x38)->__offset(0x48).q
    
    if (rax_31 != 0)
        rcx_37 = rax_31
    
    (rcx_37 - 0x38)->__offset(0x38).q = 0
    (rcx_37 - 0x38)->__offset(0x40).q = 0
    lpCriticalSection_1->__offset(0x58).d = 0xffffffff
    lpCriticalSection_1->__offset(0x5c).d = 0
    lpCriticalSection_1->__offset(0x68).q = 0
    lpCriticalSection_1->__offset(0x70).d = 0
    InitializeCriticalSection(&lpCriticalSection_1[3])
    SetCriticalSectionSpinCount(&lpCriticalSection_1[3], 0xfa0)
    lpCriticalSection_1->__offset(0xa0).q = 0
    void* __offset(_RTL_CRITICAL_SECTION, 0xb0) rcx_40 = lpCriticalSection_1 + 0xb0
    lpCriticalSection_1->__offset(0xa8).q = 0
    (rcx_40 - 0xb0)->__offset(0xc0).q = 0
    (rcx_40 - 0xb0)->__offset(0xc8).d = 0
    (rcx_40 - 0xb0)->__offset(0xcc).d = 0x80
    void* rax_32 = (rcx_40 - 0xb0)->__offset(0xc0).q
    
    if (rax_32 != 0)
        rcx_40 = rax_32
    
    (rcx_40 - 0xb0)->__offset(0xb0).q = 0
    (rcx_40 - 0xb0)->__offset(0xb8).q = 0
    lpCriticalSection_1->__offset(0xd0).d = 0xffffffff
    lpCriticalSection_1->__offset(0xd4).d = 0
    lpCriticalSection_1->__offset(0xe0).q = 0
    lpCriticalSection_1->__offset(0xe8).d = 0

data_143db7a50 = lpCriticalSection_1
CRITICAL_SECTION* lpCriticalSection_3 = j_sub_140a82f30(0x78)
CRITICAL_SECTION* lpCriticalSection = lpCriticalSection_3

if (lpCriticalSection_3 == 0)
    lpCriticalSection = nullptr
else
    memset(lpCriticalSection_3, 0, 0x78)
    InitializeCriticalSection(lpCriticalSection)
    SetCriticalSectionSpinCount(lpCriticalSection, 0xfa0)
    lpCriticalSection->__offset(0x28).q = 0
    void* __offset(_RTL_CRITICAL_SECTION, 0x38) rcx_44 = lpCriticalSection + 0x38
    lpCriticalSection->__offset(0x30).q = 0
    (rcx_44 - 0x38)->__offset(0x48).q = 0
    (rcx_44 - 0x38)->__offset(0x50).d = 0
    (rcx_44 - 0x38)->__offset(0x54).d = 0x80
    void* rax_33 = (rcx_44 - 0x38)->__offset(0x48).q
    
    if (rax_33 != 0)
        rcx_44 = rax_33
    
    (rcx_44 - 0x38)->__offset(0x38).q = 0
    (rcx_44 - 0x38)->__offset(0x40).q = 0
    lpCriticalSection->__offset(0x58).d = 0xffffffff
    lpCriticalSection->__offset(0x5c).d = 0
    lpCriticalSection->__offset(0x68).q = 0
    lpCriticalSection->__offset(0x70).d = 0

data_143db7a48 = lpCriticalSection
sub_140a7f790(arg1)
arg1[0x1b].b = 0
sub_140a6d000(arg1)
arg1[0x26].b = 0
sub_140a6ce70(arg1)
int64_t var_278 = 0
int32_t var_270 = 0
sub_1405947f0(&var_278, 0xc)
int32_t rax_34 = var_270 + 0xc
var_270 = rax_34

if (rax_34 s> 0)
    sub_140594770(&var_278)

UnDecorator::getReferenceType(var_278, u"en-US-POSIX", 0x18)
void var_178
int64_t* rax_35 = sub_140a73ec0(arg1, &var_178, &var_278, 0)
int64_t* r8_7 = *arg1 + 0x78

if (r8_7 != rax_35)
    *r8_7 = *rax_35
    *rax_35 = 0
    sub_1405aeff0(&r8_7[1], &rax_35[1])

int64_t* var_170

if (var_170 != 0)
    var_170[1].d -= 1
    
    if (var_170[1].d == 1)
        (**var_170)(var_170)
        int32_t rax_38 = *(var_170 + 0xc)
        *(var_170 + 0xc) -= 1
        
        if (rax_38 == 1)
            (*(*var_170 + 8))(var_170, 1)

int64_t rbx_11 = var_278

if (rbx_11 != 0)
    int64_t* rcx_56 = data_143ddb3f0
    
    if (rcx_56 == 0)
        sub_140a750a0()
        rcx_56 = data_143ddb3f0
    
    (*(*rcx_56 + 0x30))(rcx_56, rbx_11)

if (*(*arg1 + 0x78) == 0)
    int64_t var_1f0 = 0
    int64_t var_1e8_1 = 0
    void var_168
    int64_t* rax_42 = sub_140a73ec0(arg1, &var_168, &var_1f0, 1)
    int64_t* r8_10 = *arg1 + 0x78
    
    if (r8_10 != rax_42)
        *r8_10 = *rax_42
        *rax_42 = 0
        sub_1405aeff0(&r8_10[1], &rax_42[1])
    
    int64_t* var_160
    
    if (var_160 != 0)
        var_160[1].d -= 1
        
        if (var_160[1].d == 1)
            (**var_160)(var_160)
            int32_t rax_45 = *(var_160 + 0xc)
            *(var_160 + 0xc) -= 1
            
            if (rax_45 == 1)
                (*(*var_160 + 8))(var_160, 1)
    
    int64_t rbx_13 = var_1f0
    
    if (rbx_13 != 0)
        int64_t* rcx_62 = data_143ddb3f0
        
        if (rcx_62 == 0)
            sub_140a750a0()
            rcx_62 = data_143ddb3f0
        
        (*(*rcx_62 + 0x30))(rcx_62, rbx_13)

int64_t var_1d0
int64_t var_158
sub_140a765b0(&var_1d0, sub_140b67680(&var_158))
int64_t var_210
sub_140a73ec0(arg1, &var_210, &var_1d0, 1)
int64_t rbx_14 = var_1d0

if (rbx_14 != 0)
    int64_t* rcx_66 = data_143ddb3f0
    
    if (rcx_66 == 0)
        sub_140a750a0()
        rcx_66 = data_143ddb3f0
    
    (*(*rcx_66 + 0x30))(rcx_66, rbx_14)

int64_t* rcx_68 = *arg1 + 0x58
int64_t* var_208

if (rcx_68 != &var_210)
    *rcx_68 = var_210
    var_210 = 0
    sub_1405aeff0(&rcx_68[1], &var_208)

int64_t* rcx_70 = var_208

if (rcx_70 != 0)
    rcx_70[1].d -= 1
    
    if (rcx_70[1].d == 1)
        int64_t* rbx_15 = var_208
        (**rbx_15)(rbx_15)
        int32_t rax_53 = *(rbx_15 + 0xc)
        *(rbx_15 + 0xc) -= 1
        
        if (rax_53 == 1)
            int64_t* rcx_72 = var_208
            (*(*rcx_72 + 8))(rcx_72, 1)

int64_t rbx_16 = var_158

if (rbx_16 != 0)
    int64_t* rcx_73 = data_143ddb3f0
    
    if (rcx_73 == 0)
        sub_140a750a0()
        rcx_73 = data_143ddb3f0
    
    (*(*rcx_73 + 0x30))(rcx_73, rbx_16)

int64_t var_1c0
int64_t var_148
sub_140a765b0(&var_1c0, sub_140b678b0(&var_148))
int64_t var_200
sub_140a73ec0(arg1, &var_200, &var_1c0, 1)
int64_t rbx_17 = var_1c0

if (rbx_17 != 0)
    int64_t* rcx_77 = data_143ddb3f0
    
    if (rcx_77 == 0)
        sub_140a750a0()
        rcx_77 = data_143ddb3f0
    
    (*(*rcx_77 + 0x30))(rcx_77, rbx_17)

int64_t* rcx_79 = *arg1 + 0x68
int64_t* var_1f8

if (rcx_79 != &var_200)
    *rcx_79 = var_200
    var_200 = 0
    sub_1405aeff0(&rcx_79[1], &var_1f8)

int64_t* rcx_81 = var_1f8

if (rcx_81 != 0)
    rcx_81[1].d -= 1
    
    if (rcx_81[1].d == 1)
        int64_t* rbx_18 = var_1f8
        (**rbx_18)(rbx_18)
        int32_t rax_61 = *(rbx_18 + 0xc)
        *(rbx_18 + 0xc) -= 1
        
        if (rax_61 == 1)
            int64_t* rcx_83 = var_1f8
            (*(*rcx_83 + 8))(rcx_83, 1)

int64_t rbx_19 = var_148

if (rbx_19 != 0)
    int64_t* rcx_84 = data_143ddb3f0
    
    if (rcx_84 == 0)
        sub_140a750a0()
        rcx_84 = data_143ddb3f0
    
    (*(*rcx_84 + 0x30))(rcx_84, rbx_19)

void* rcx_85 = *arg1
int64_t* rdx_42 = *(rcx_85 + 0x60)
int64_t var_238 = *(rcx_85 + 0x58)
int64_t* var_230 = rdx_42

if (rdx_42 != 0)
    rdx_42[1].d += 1
    rdx_42 = var_230

int128_t zmm1_1

if (&var_238 != rcx_85 + 0x28)
    zmm1_1 = var_238.o
    int128_t var_f8_1 = zmm1_1
    var_238.o = *(rcx_85 + 0x28)
    rdx_42 = var_230
    *(rcx_85 + 0x28) = zmm1_1

if (rdx_42 != 0)
    rdx_42[1].d -= 1
    
    if (rdx_42[1].d == 1)
        (**var_230)(var_230, rdx_42)
        int32_t rax_67 = *(var_230 + 0xc)
        *(var_230 + 0xc) -= 1
        
        if (rax_67 == 1)
            (*(*var_230 + 8))(var_230, 1)

void* rcx_88 = *arg1
int64_t* rdx_43 = *(rcx_88 + 0x70)
int64_t var_228 = *(rcx_88 + 0x68)
int64_t* var_220 = rdx_43

if (rdx_43 != 0)
    rdx_43[1].d += 1
    rdx_43 = var_220

if (&var_228 != rcx_88 + 0x38)
    zmm1_1 = var_228.o
    int128_t var_e8_1 = zmm1_1
    var_228.o = *(rcx_88 + 0x38)
    rdx_43 = var_220
    *(rcx_88 + 0x38) = zmm1_1

if (rdx_43 != 0)
    rdx_43[1].d -= 1
    
    if (rdx_43[1].d == 1)
        (**var_220)(var_220, rdx_43)
        int32_t rdi_3 = *(var_220 + 0xc)
        *(var_220 + 0xc) -= 1
        
        if (rdi_3 == 1)
            (*(*var_220 + 8))(var_220, zx.q(rdi_3))

void* rcx_91 = *arg1
int64_t var_1b0 = *(rcx_91 + 0x28)
void* rax_74 = *(rcx_91 + 0x30)
void* var_1a8 = rax_74

if (rax_74 != 0)
    *(rax_74 + 8) += 1

sub_140a7d580(arg1, &var_1b0)
int64_t var_1e0
pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(&var_1e0)
int32_t var_1d8
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_138
char rax_76
int64_t* rbx_22

if (var_1d8 s> 1)
    int16_t var_130_1 = 2
    var_138 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    
    if (var_1d8 != 0 && var_1d8 - 1 s> 0)
        int64_t rdi_4 = var_1e0
        CRITICAL_SECTION* rax_77 = sub_142a4a0b0(&var_138, var_1d8)
        int64_t rbx_23 = sx.q(var_1d8 - 1) * 2
        memcpy(rax_77, rdi_4, rbx_23.d)
        *(rax_77 + rbx_23) = 0
        sub_142a4a600(&var_138, var_1d8 - 1)
    
    rbx_22 = sub_142a64de0(&var_138)
    rax_76 = 1
else
    rbx_22 = sub_142a64c40()
    rax_76 = var_218

if ((rax_76 & 1) != 0)
    sub_142a47ff0(&var_138)

sub_142a64580(rbx_22)
(*(*rbx_22 + 0x38))(rbx_22)
int64_t rbx_24 = var_1e0

if (rbx_24 != 0)
    int64_t* rcx_102 = data_143ddb3f0
    
    if (rcx_102 == 0)
        sub_140a750a0()
        rcx_102 = data_143ddb3f0
    
    (*(*rcx_102 + 0x30))(rcx_102, rbx_24)

var_290 = 0
struct icu_64::UObject::icu_64::Calendar::VTable** rax_81 = j_sub_142a7dd00(0x290)

if (rax_81 != 0)
    r14 = sub_142a725e0(rax_81, &var_290)

void var_1a0

if (&arg1[0x4a] != &var_1a0)
    struct icu_64::Calendar::icu_64::GregorianCalendar::VTable** rcx_104 = arg1[0x4a]
    arg1[0x4a] = r14
    
    if (rcx_104 != 0)
        (*rcx_104)->__offset(0x0).q(rcx_104, 1)
else if (r14 != 0)
    (*r14)->__offset(0x0).q(r14, 1)

void* rbx_25 = arg1[0x4a]

if (rbx_25 != 0)
    sub_142a65ed0()
    sub_142a6c230(rbx_25, &data_144015798)

int16_t** rdi_5 = &var_248
lpCriticalSection_1.b = var_2b8 s<= 0

do
    int64_t rbx_26 = rdi_5[-2]
    rdi_5 = &rdi_5[-2]
    i_1 -= 1
    
    if (rbx_26 != 0)
        int64_t* rcx_106 = data_143ddb3f0
        
        if (rcx_106 == 0)
            sub_140a750a0()
            rcx_106 = data_143ddb3f0
        
        (*(*rcx_106 + 0x30))(rcx_106, rbx_26)
while (i_1 != 0)

int16_t* rbx_27 = var_2b0

if (rbx_27 != 0)
    int64_t* rcx_107 = data_143ddb3f0
    
    if (rcx_107 != 0)
        (*(*rcx_107 + 0x30))(rcx_107, var_2b0)
    else
        sub_140a750a0()
        int64_t* rcx_108 = data_143ddb3f0
        int64_t r8_16 = *rcx_108
        (*(r8_16 + 0x30))(rcx_108, rbx_27, r8_16)

__security_check_cookie(rax_1 ^ &var_2e8)
return zx.q(lpCriticalSection_1.b)
