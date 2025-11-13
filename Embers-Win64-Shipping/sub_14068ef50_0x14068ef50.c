// 函数: sub_14068ef50
// 地址: 0x14068ef50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
char temp1 = data_143cde020 & 1
data_143cde020 = temp1
int32_t r12 = arg2
void* result = arg1

if (temp1 == 0)
    OSVERSIONINFOEXW versionInformation
    memset(&versionInformation, 0, 0x11c)
    uint64_t dwlConditionMask = VerSetConditionMask(
        VerSetConditionMask(VerSetConditionMask(0, VER_MAJORVERSION, 3), VER_MINORVERSION, 3), 
        VER_SERVICEPACKMAJOR, 3)
    versionInformation.dwOSVersionInfoSize = 0x11c
    versionInformation.dwMajorVersion = 6
    versionInformation.dwMinorVersion = 0
    versionInformation.wServicePackMajor = 0
    bool cond:1_1 = VerifyVersionInfoW(&versionInformation, 
        VER_MINORVERSION | VER_MAJORVERSION | VER_SERVICEPACKMAJOR, dwlConditionMask) != 0
    data_143cde020 = 1
    data_143cde026 = cond:1_1

void*** rax_5 = j_sub_140a82f30(0x100)
void*** rbx = rax_5

if (rax_5 == 0)
    rbx = nullptr
else
    rax_5[1].d = 1
    *(rax_5 + 0xc) = 1
    *rbx = &data_142d8be30
    memset(rbx + 0x11, 0, 0xef)
    rbx[2].b = 0
    rbx[5] = 0
    rbx[6] = 0xf
    rbx[3].b = 0
    rbx[7].d = 0xffffffff
    rbx[8] = 0
    rbx[9].b = 0
    rbx[0xa] = 0
    rbx[0xb] = 0
    int64_t* rax_6 = j_sub_140a82f30(0x28)
    *rax_6 = rax_6
    rax_6[1] = rax_6
    rax_6[2] = rax_6
    rax_6[3].w = 0x101
    rbx[0xa] = rax_6
    _Cnd_init_in_situ(&rbx[0xc])
    _Mtx_init_in_situ(&rbx[0x15], 2)

*(result + 0x10) = rbx
*(result + 8) = &rbx[2]
*(result + 0x28) = 0
*(result + 0x30) = 7
*(result + 0x18) = 0
*(result + 0x48) = 0
*(result + 0x50) = 7
*(result + 0x38) = 0
__builtin_memset(result + 0x58, 0, 0x18)
int64_t var_1f8 = 0
int64_t var_1f0 = 0xf
char var_208 = 0
void*** i_3 = nullptr
class std::locale var_2f0
var_2f0._Ptr = std::locale::_Init(1)
class std::_Lockit var_320
std::_Lockit::_Lockit(&var_320, 0)
int64_t* rsi = data_143cde038
int64_t* var_318 = rsi
uint64_t rax_9 = std::locale::id()
class std::locale::_Locimp* _Ptr = var_2f0._Ptr
int64_t* rbx_1

if (rax_9 u>= _Ptr->_Facetcount)
    rbx_1 = nullptr
label_14068f16e:
    
    if (_Ptr->_Xparent == 0)
        goto label_14068f187
    
    class std::locale::_Locimp* rax_11 = std::locale::_Getgloballocale()
    
    if (rax_9 u>= rax_11->_Facetcount)
    label_14068f18c:
        
        if (rsi == 0)
            sub_1406adbf0(&var_318, &var_2f0)
            rbx_1 = var_318
            std::_Facet_Register(rbx_1)
            (*(*rbx_1 + 8))(rbx_1)
            data_143cde038 = rbx_1
        else
            rbx_1 = rsi
    else
        rbx_1 = rax_11->_Facetvec[rax_9]
    label_14068f187:
        
        if (rbx_1 == 0)
            goto label_14068f18c
else
    rbx_1 = _Ptr->_Facetvec[rax_9]
    
    if (rbx_1 == 0)
        goto label_14068f16e

std::_Lockit::~_Lockit(&var_320)
int64_t* var_300 = rbx_1
class std::locale::facet* var_2f8 = sub_14068b940(&var_2f0)
char var_328
char var_348 = var_328
sub_14068a4a0(&i_3, "  *", &data_142d8b677, 1)
int64_t rcx_15 = *arg5

if ((arg5[1] - rcx_15) s>> 5 u> 1)
    char rbx_2 = var_328
    void* r12_1 = nullptr
    int64_t i_2 = 1
    int64_t i
    
    do
        int64_t rax_19 = *(r12_1 + rcx_15 + 0x10)
        int64_t* r8_4 = r12_1 + rcx_15
        var_328 = 0
        
        if (rax_19 == 0x7fffffffffffffff)
            sub_1405871e0()
            noreturn
        
        int64_t* r9 = r8_4
        
        if (r8_4[3] u>= 0x10)
            r9 = *r8_4
        
        var_348.q = rax_19
        int64_t* var_1c8
        sub_14068c320(&var_1c8, zx.q(rbx_2), r8_4, r9, var_348, &var_328, 1)
        int64_t var_1b0
        int64_t r15_1 = var_1b0
        int64_t* r9_1 = &var_1c8
        int64_t* rsi_1 = var_1c8
        int64_t rcx_17 = var_1f8
        
        if (r15_1 u>= 0x10)
            r9_1 = rsi_1
        
        int64_t var_1b8
        
        if (var_1b8 u> var_1f0 - rcx_17)
            var_348.q = var_1b8
            sub_14058c670(&var_208, var_1b8, 0, r9_1, var_348)
            r15_1 = var_1b0
            rsi_1 = var_1c8
        else
            char* rdi_1 = &var_208
            var_1f8 = var_1b8 + rcx_17
            
            if (var_1f0 u>= 0x10)
                rdi_1 = var_208.q
            
            void* rdi_2 = &rdi_1[rcx_17]
            memmove(rdi_2, r9_1, var_1b8.d)
            *(rdi_2 + var_1b8) = 0
        
        if (r15_1 u>= 0x10)
            int64_t* rax_23 = rsi_1
            
            if (r15_1 + 1 u>= 0x1000)
                rsi_1 = rsi_1[-1]
                
                if (rax_23 - rsi_1 - 8 u> 0x1f)
                    goto label_14068f793
            
            j_sub_140a74f90(rsi_1)
        
        int64_t var_1d8_1 = 0
        void* r8_8 = *arg5 + 0x20 + r12_1
        int64_t var_1d0_1 = 0xf
        char var_1e8 = 0
        void* rcx_21 = r8_8
        int64_t var_190_1 = 0xf
        int64_t var_198_1 = 1
        int64_t rdx_6 = *(r8_8 + 0x18)
        int16_t var_1a8 = 0x3b
        
        if (rdx_6 u>= 0x10)
            rcx_21 = *r8_8
        
        void* r9_3 = *(r8_8 + 0x10) + rcx_21
        
        if (rdx_6 u>= 0x10)
            r8_8 = *r8_8
        
        int64_t var_338_1
        var_338_1.d = 0
        var_348.q = &i_3
        int64_t* var_250
        sub_140689e30(&var_250, &var_1e8, r8_8, r9_3, var_348, &var_1a8, var_338_1.d)
        
        if (var_190_1 u>= 0x10)
            void* rcx_23 = var_1a8.q
            void* rax_26 = rcx_23
            
            if (var_190_1 + 1 u>= 0x1000)
                rcx_23 = *(rcx_23 - 8)
                
                if (rax_26 - rcx_23 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(rcx_23)
        
        int64_t rcx_24 = var_1d8_1
        
        if (rcx_24 u>= var_1d0_1)
            sub_14058b730(&var_1e8, 1, 0, 0)
        else
            var_1d8_1 = rcx_24 + 1
            char* rax_30 = &var_1e8
            
            if (var_1d0_1 u>= 0x10)
                rax_30 = var_1e8.q
            
            *(rax_30 + rcx_24) = 0
        
        uint128_t zmm1_1 = var_1d8_1.o
        uint128_t var_188
        int128_t* r9_4 = &var_188
        uint128_t zmm0_1 = var_1e8.o
        int64_t rcx_26 = var_1f8
        int64_t r14_1 = zmm1_1.q
        int64_t var_1d8_2 = 0
        int128_t* rsi_2 = zmm0_1.q
        int64_t var_1d0_2 = 0xf
        var_188 = zmm0_1
        var_1e8 = 0
        int64_t r15_2 = _mm_bsrli_si128(zmm1_1, 8).q
        
        if (r15_2 u>= 0x10)
            r9_4 = rsi_2
        
        if (r14_1 u> var_1f0 - rcx_26)
            var_348.q = r14_1
            sub_14058c670(&var_208, r14_1, 0, r9_4, var_348)
            r15_2 = zmm1_1:8.q
            rsi_2 = var_188.q
        else
            char* rdi_3 = &var_208
            var_1f8 = rcx_26 + r14_1
            
            if (var_1f0 u>= 0x10)
                rdi_3 = var_208.q
            
            void* rdi_4 = &rdi_3[rcx_26]
            memmove(rdi_4, r9_4, r14_1.d)
            *(rdi_4 + r14_1) = 0
        
        if (r15_2 u>= 0x10)
            int128_t* rax_34 = rsi_2
            
            if (r15_2 + 1 u>= 0x1000)
                rsi_2 = *(rsi_2 - 8)
            
            if (r15_2 + 1 u>= 0x1000 && rax_34 - rsi_2 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            j_sub_140a74f90(rsi_2)
        
        if (var_1d0_2 u>= 0x10)
            void* rcx_30 = var_1e8.q
            void* rax_37 = rcx_30
            
            if (var_1d0_2 + 1 u>= 0x1000)
                rcx_30 = *(rcx_30 - 8)
            
            if (var_1d0_2 + 1 u>= 0x1000 && rax_37 - rcx_30 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            j_sub_140a74f90(rcx_30)
        
        r12_1 += 0x40
        rcx_15 = *arg5
        i = i_2 + 2
        i_2 = i
    while (i u< (arg5[1] - rcx_15) s>> 5)
    result = arg1
    r12 = arg2

if (var_1f8 u>= var_1f0)
    sub_14058b730(&var_208, 1, 0, 0)
else
    int64_t var_1f8_1 = var_1f8 + 1
    char* rax_44 = &var_208
    
    if (var_1f0 u>= 0x10)
        rax_44 = var_208.q
    
    *(rax_44 + var_1f8) = 0

void* result_1 = result
void var_2b8
sub_140592d30(&var_2b8, arg3)
void var_298
sub_140592d30(&var_298, arg4)
int128_t var_278
sub_140592d30(&var_278, &var_208)
int64_t* rax_46 = j_sub_140a82f30(0x80)
*rax_46 = &data_142d8bf90
rax_46[1] = result_1
rax_46[2].d = r12
sub_140592d30(&rax_46[3], &var_2b8)
sub_140592d30(&rax_46[7], &var_298)
var_278.b = 0
*(rax_46 + 0x58) = var_278
int128_t zmm0_2 = data_143702ea0
uint128_t var_268
*(rax_46 + 0x68) = var_268
rax_46[0xf].b = arg6
int128_t var_268_1 = zmm0_2
sub_14068f890(&result_1)
void var_248
sub_1406b1120(*(result + 8), &var_248)

if (rax_46 != 0)
    void* rdx_25
    rdx_25.b = rax_46 != &var_248
    (*(*rax_46 + 0x20))(rax_46, rdx_25)

void*** i_5 = i_3

if (i_5 != 0)
    int32_t r15_3 = *(i_5 + 0x2c)
    *(i_5 + 0x2c) -= 1
    
    if (r15_3 == 1)
        void*** i_1 = i_3
        
        while (i_1 != 0)
            void* rax_51 = &i_1[2]
            void*** i_4 = i_1
            i_1 = *rax_51
            *rax_51 = 0
            (**i_4)(i_4, 1)

class std::locale::_Locimp* _Ptr_1 = var_2f0._Ptr
i_3 = nullptr

if (_Ptr_1 != 0)
    int64_t* rax_54 = _Ptr_1->vtable->_Decref(_Ptr_1)
    
    if (rax_54 != 0)
        (**rax_54)(rax_54, 1)

if (var_1f0 u< 0x10)
    __security_check_cookie(rax_1 ^ &var_368)
    return result

void* rcx_42 = var_208.q
void* rax_56 = rcx_42

if (var_1f0 + 1 u>= 0x1000)
    rcx_42 = *(rcx_42 - 8)

if (var_1f0 + 1 u< 0x1000 || rax_56 - rcx_42 - 8 u<= 0x1f)
    j_sub_140a74f90(rcx_42)
    __security_check_cookie(rax_1 ^ &var_368)
    return result

label_14068f793:
_invalid_parameter_noinfo_noreturn()
noreturn
