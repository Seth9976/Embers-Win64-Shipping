// 函数: sub_140cc1d50
// 地址: 0x140cc1d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
int16_t* const rsi = arg3
void* r8 = arg5
int32_t r14 = 0
int32_t var_268 = 0
void* var_270 = r8
TEB* gsbase

if (data_143e1b418 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1b418)
    
    if (data_143e1b418 == 0xffffffff)
        sub_140b58170(&data_143e1b410, "LoadErrors", 1)
        _Init_thread_footer(&data_143e1b418)
    
    r8 = var_270

void* const r12
int64_t r15

if (arg2 == 0)
    r15 = 0
    r12 = nullptr
else
    r15 = *(arg2 + 0x88)
    r12 = *(arg2 + 0x80)

int16_t* var_238

if (rsi == 0)
    if (r8 == 0)
        rsi = u"NULL"
    else
        var_268.q = *(r8 + 0x18)
        sub_140b63b70(&var_268, &var_238)
        rsi = &data_142d40450
        r14 = 1
        int32_t var_230
        
        if (var_230 != 0)
            rsi = var_238

int32_t rdx_3 = 0
int64_t var_298 = 0
int32_t rcx_2 = 0
int64_t var_290 = 0

if (rsi != 0 && *rsi != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rsi[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_298, rbx_1.d + 1)
        rcx_2 = var_290:4.d
        rdx_3 = var_290.d
    
    int32_t rax_5 = rdx_3 + rbx_1.d + 1
    var_290.d = rax_5
    
    if (rax_5 s> rcx_2)
        sub_140594770(&var_298)
    
    UnDecorator::getReferenceType(var_298, rsi, (rbx_1.d + 1) * 2)

if ((r14.b & 1) != 0)
    int16_t* rcx_6 = var_238
    r14 &= 0xfffffffe
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

int32_t var_fc = 0x80
int64_t var_128
__builtin_memset(&var_128, 0, 0x2c)
int32_t var_f4 = 0
int64_t var_e8 = 0
int32_t var_e0 = 0
int32_t var_f8 = 0xffffffff
void var_208
int64_t* rax_6 = sub_140aae420(&var_208, &var_298)
int32_t var_d8 = 4
int64_t var_c8 = *rax_6
int64_t* rcx_9 = rax_6[1]

if (rcx_9 != 0)
    rcx_9[1].d += 1

int32_t var_b8 = rax_6[2].d
char var_b0 = 1
int64_t var_2d8 = 0
int32_t var_2d0 = 0
sub_1405947f0(&var_2d8, 0xc)
int32_t rax_8 = var_2d0 + 0xc
var_2d0 = rax_8

if (rax_8 s> 0)
    sub_140594770(&var_2d8)

UnDecorator::getReferenceType(var_2d8, u"LoadingFile", 0x18)
sub_140acb5e0(&var_128, &var_2d8, &var_d8)
int64_t rcx_14 = var_2d8

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

if (var_b0 != 0 && rcx_9 != 0)
    rcx_9[1].d -= 1
    
    if (rcx_9[1].d == 1)
        (**rcx_9)(rcx_9)
        int32_t rax_11 = *(rcx_9 + 0xc)
        *(rcx_9 + 0xc) -= 1
        
        if (rax_11 == 1)
            (*(*rcx_9 + 8))(rcx_9, 1)

int64_t* var_200

if (var_200 != 0)
    var_200[1].d -= 1
    
    if (var_200[1].d == 1)
        (**var_200)(var_200)
        int32_t rax_15 = *(var_200 + 0xc)
        *(var_200 + 0xc) -= 1
        
        if (rax_15 == 1)
            (*(*var_200 + 8))(var_200, 1)

int64_t var_98 = *arg4
int64_t* rax_18 = arg4[1]
int32_t var_a8 = 4

if (rax_18 != 0)
    rax_18[1].d += 1

int32_t var_88 = arg4[2].d
char var_80 = 1
int64_t var_2c8 = 0
int32_t var_2c0 = 0
sub_1405947f0(&var_2c8, 0xd)
int32_t rax_20 = var_2c0 + 0xd
var_2c0 = rax_20

if (rax_20 s> 0)
    sub_140594770(&var_2c8)

UnDecorator::getReferenceType(var_2c8, u"ErrorMessage", 0x1a)
sub_140acb5e0(&var_128, &var_2c8, &var_a8)
int64_t rcx_24 = var_2c8

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

if (var_80 != 0 && rax_18 != 0)
    rax_18[1].d -= 1
    
    if (rax_18[1].d == 1)
        (**rax_18)(rax_18)
        int32_t rax_23 = *(rax_18 + 0xc)
        *(rax_18 + 0xc) -= 1
        
        if (rax_23 == 1)
            (*(*rax_18 + 8))(rax_18, 1)

int64_t var_288
sub_140a96170(&var_288)
int64_t var_2b8
int64_t* rcx_46
int32_t r14_1

if (r15 != 0)
label_140cc2320:
    r14_1 = r14 | 2
    int16_t* rsi_1
    
    if (*(r15 + 0x1e8) == 0)
        rsi_1 = &data_142d40450
    else
        rsi_1 = *(r15 + 0x1e0)
    
    int32_t rdx_18 = 0
    var_2b8 = 0
    int32_t rcx_47 = 0
    int64_t var_2b0_1 = 0
    
    if (rsi_1 != 0 && *rsi_1 != 0)
        int64_t rbx_9 = -1
        
        do
            rbx_9 += 1
        while (rsi_1[rbx_9] != 0)
        
        if (rbx_9.d + 1 s> 0)
            sub_1405947f0(&var_2b8, rbx_9.d + 1)
            rcx_47 = var_2b0_1:4.d
            rdx_18 = var_2b0_1.d
        
        int32_t rax_41 = rbx_9.d + 1 + rdx_18
        var_2b0_1.d = rax_41
        
        if (rax_41 s> rcx_47)
            sub_140594770(&var_2b8)
        
        UnDecorator::getReferenceType(var_2b8, rsi_1, (rbx_9.d + 1) * 2)
    
    rcx_46 = &var_2b8
    goto label_140cc23b8

int64_t var_280

if (r12 != 0)
    if (r15 != 0)
        goto label_140cc2320
    
    int64_t rax_39 = sub_140d3cb50(r12)
    r15 = rax_39
    
    if (rax_39 != 0)
        goto label_140cc2320
    
    r14_1 = r14 | 4
    int64_t var_250 = *(sub_140d21d80(r12) + 0x18)
    int64_t var_228
    sub_140b63b70(&var_250, &var_228)
    rcx_46 = &var_228
label_140cc23b8:
    int64_t rax_42 = *rcx_46
    *rcx_46 = 0
    int64_t var_260 = rax_42
    int32_t var_258_1 = rcx_46[1].d
    int32_t var_254_1 = *(rcx_46 + 0xc)
    rcx_46[1] = 0
    
    if ((r14_1.b & 4) != 0)
        int64_t rcx_51 = var_228
        r14_1 &= 0xfffffffb
        
        if (rcx_51 != 0)
            sub_140a74f90(rcx_51)
    
    if ((r14_1.b & 2) != 0)
        int64_t rcx_52 = var_2b8
        
        if (rcx_52 != 0)
            sub_140a74f90(rcx_52)
    
    void var_1c0
    int64_t* rax_45 = sub_140aae420(&var_1c0, &var_260)
    int32_t var_78 = 4
    int64_t var_68_1 = *rax_45
    int64_t* rcx_55 = rax_45[1]
    
    if (rcx_55 != 0)
        rcx_55[1].d += 1
    
    int32_t var_58_1 = rax_45[2].d
    char var_50_1 = 1
    int64_t var_2a8 = 0
    int32_t var_2a0_1 = 0
    sub_1405947f0(&var_2a8, 0xd)
    int32_t rax_47 = var_2a0_1 + 0xd
    var_2a0_1 = rax_47
    
    if (rax_47 s> 0)
        sub_140594770(&var_2a8)
    
    UnDecorator::getReferenceType(var_2a8, u"LoadedByFile", 0x1a)
    sub_140acb5e0(&var_128, &var_2a8, &var_78)
    int64_t rcx_60 = var_2a8
    
    if (rcx_60 != 0)
        sub_140a74f90(rcx_60)
    
    if (var_50_1 != 0 && rcx_55 != 0)
        rcx_55[1].d -= 1
        
        if (rcx_55[1].d == 1)
            (**rcx_55)(rcx_55)
            int32_t rax_50 = *(rcx_55 + 0xc)
            *(rcx_55 + 0xc) -= 1
            
            if (rax_50 == 1)
                (*(*rcx_55 + 8))(rcx_55, 1)
    
    int64_t* var_1b8
    
    if (var_1b8 != 0)
        var_1b8[1].d -= 1
        
        if (var_1b8[1].d == 1)
            (**var_1b8)(var_1b8)
            int32_t rax_54 = *(var_1b8 + 0xc)
            *(var_1b8 + 0xc) -= 1
            
            if (rax_54 == 1)
                (*(*var_1b8 + 8))(var_1b8, 1)
    
    void var_1a8
    void var_190
    char* var_140
    int64_t* rax_58 = sub_140aaca20(&var_1a8, 
        sub_140a96390(&var_140, 
            _vfprintf_p_l(&var_190, 
                While loading '{LoadedByFile}' failed to load '{LoadingFile}': {ErrorMessage}", 
            Linker")), &var_128)
    int64_t rdx_26 = var_288
    var_288 = *rax_58
    *rax_58 = rdx_26
    int64_t var_280_2 = rax_58[1]
    rax_58[1] = var_280
    int32_t var_278_1 = rax_58[2].d
    int64_t* var_1a0
    
    if (var_1a0 != 0)
        var_1a0[1].d -= 1
        
        if (var_1a0[1].d == 1)
            (**var_1a0)(var_1a0)
            int32_t rax_62 = *(var_1a0 + 0xc)
            *(var_1a0 + 0xc) -= 1
            
            if (rax_62 == 1)
                (*(*var_1a0 + 8))(var_1a0, 1)
    
    int64_t* var_188
    
    if (var_188 != 0)
        var_188[1].d -= 1
        
        if (var_188[1].d == 1)
            (**var_188)(var_188)
            int32_t rdi_3 = *(var_188 + 0xc)
            *(var_188 + 0xc) -= 1
            
            if (rdi_3 == 1)
                (*(*var_188 + 8))(var_188, zx.q(rdi_3))
    
    int64_t rcx_75 = var_260
    
    if (rcx_75 != 0)
        sub_140a74f90(rcx_75)
else
    void var_1f0
    void var_1d8
    char* var_150
    int64_t* rax_27 = sub_140aaca20(&var_1f0, 
        sub_140a96390(&var_150, 
            _vfprintf_p_l(&var_1d8, Failed to load '{LoadingFile}': {ErrorMessage}", Linker")), &var_128)
    int64_t rdx_12 = var_288
    var_288 = *rax_27
    *rax_27 = rdx_12
    int64_t var_280_1 = rax_27[1]
    rax_27[1] = var_280
    int32_t var_278 = rax_27[2].d
    int64_t* var_1e8
    
    if (var_1e8 != 0)
        var_1e8[1].d -= 1
        
        if (var_1e8[1].d == 1)
            (**var_1e8)(var_1e8)
            int32_t rax_31 = *(var_1e8 + 0xc)
            *(var_1e8 + 0xc) -= 1
            
            if (rax_31 == 1)
                (*(*var_1e8 + 8))(var_1e8, zx.q((r15 + 1).d))
    
    int64_t* var_1d0
    
    if (var_1d0 != 0)
        var_1d0[1].d -= 1
        
        if (var_1d0[1].d == 1)
            (**var_1d0)(var_1d0)
            int32_t rdi_1 = *(var_1d0 + 0xc)
            *(var_1d0 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_1d0 + 8))(var_1d0, zx.q(rdi_1))
void var_178
sub_140accdf0(&var_178, &data_143e1b410)
sub_140af2b60()

if (sub_140b21a10(&data_143dbb3f0, u"SavePackagesThatHaveFailedLoads") == 1)
    void var_218
    sub_140ae44d0(&var_178, &var_218, &var_288)
    int64_t* var_210
    
    if (var_210 != 0)
        var_210[1].d -= 1
        
        if (var_210[1].d == 1)
            (**var_210)(var_210)
            int32_t temp2_1 = *(var_210 + 0xc)
            *(var_210 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_210 + 8))(var_210, 1)
    
    goto label_140cc2650

int16_t** rax_67 = sub_140ac6680(&var_288)

if (rax_67[1].d != 0)
    *rax_67

if (sub_140d2beb0(var_270, arg6) == 0)
label_140cc2650:
    
    if ((arg6 & 0x2002) == 0)
        sub_140cc3000(arg1, arg2, &data_143e1b410)

sub_140acd9c0(&var_178)
sub_1405970a0(&var_288)
int32_t var_e0_1 = 0

if (var_e8 != 0)
    sub_140a74f90(var_e8)

void* result = sub_140acd610(&var_128)
int64_t rcx_83 = var_298

if (rcx_83 != 0)
    result = sub_140a74f90(rcx_83)

__security_check_cookie(rax_1 ^ &var_2f8)
return result
