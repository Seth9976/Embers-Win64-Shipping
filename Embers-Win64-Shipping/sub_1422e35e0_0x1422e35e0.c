// 函数: sub_1422e35e0
// 地址: 0x1422e35e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t var_238
sub_140a96170(&var_238)
int64_t* var_230_1
int64_t var_230

if (arg2 == 0)
    void var_1b0
    int64_t* rax_26 = _vfprintf_p_l(&var_1b0, u"Compiling shaders...", u"ShaderCompilingManager")
    int64_t rdx_10 = var_238
    var_238 = *rax_26
    *rax_26 = rdx_10
    var_230_1 = rax_26[1]
    rax_26[1] = var_230
    int32_t var_228_1 = rax_26[2].d
    int64_t* var_1a8
    
    if (var_1a8 != 0)
        var_1a8[1].d -= 1
        
        if (var_1a8[1].d == 1)
            (**var_1a8)(var_1a8)
            int32_t rax_30 = *(var_1a8 + 0xc)
            *(var_1a8 + 0xc) -= 1
            
            if (rax_30 == 1)
                (*(*var_1a8 + 8))(var_1a8, 1)
else
    int32_t rdx = 0
    int32_t rcx_2 = 0
    int32_t var_240_1 = 0
    int32_t var_23c_1 = 0
    int64_t var_138
    __builtin_memset(&var_138, 0, 0x2c)
    int32_t var_10c_1 = 0x80
    int32_t var_108_1 = 0xffffffff
    int32_t var_104_1 = 0
    int64_t var_f8_1 = 0
    int32_t var_f0_1 = 0
    int64_t var_248 = 0
    
    if (*arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_248, rbx_1.d + 1)
            rcx_2 = var_23c_1
            rdx = var_240_1
        
        int32_t rax_2 = rbx_1.d + 1 + rdx
        int32_t var_240_2 = rax_2
        
        if (rax_2 s> rcx_2)
            sub_140594770(&var_248)
        
        UnDecorator::getReferenceType(var_248, arg2, (rbx_1.d + 1) * 2)
    
    void var_1f8
    int64_t* rax_3 = sub_140aae2f0(&var_1f8, &var_248)
    int32_t var_e8 = 4
    int64_t var_d8_1 = *rax_3
    int64_t* rcx_8 = rax_3[1]
    
    if (rcx_8 != 0)
        rcx_8[1].d += 1
    
    int32_t var_c8_1 = rax_3[2].d
    char var_c0_1 = 1
    int64_t var_258 = 0
    int32_t var_250_1 = 0
    sub_1405947f0(&var_258, 0xd)
    int32_t rax_5 = var_250_1 + 0xd
    var_250_1 = rax_5
    
    if (rax_5 s> 0)
        sub_140594770(&var_258)
    
    UnDecorator::getReferenceType(var_258, u"MaterialName", 0x1a)
    int64_t* var_218 = &var_258
    int32_t* var_210_1 = &var_e8
    void var_220
    sub_140b91dc0(&var_138, &var_220, &var_218, nullptr)
    int64_t rcx_13 = var_258
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    if (var_c0_1 != 0)
        char var_c0_2 = 0
        
        if (rcx_8 != 0)
            rcx_8[1].d -= 1
            
            if (rcx_8[1].d == 1)
                (**rcx_8)(rcx_8)
                int32_t rax_8 = *(rcx_8 + 0xc)
                *(rcx_8 + 0xc) -= 1
                
                if (rax_8 == 1)
                    (*(*rcx_8 + 8))(rcx_8, 1)
    
    int64_t* var_1f0
    
    if (var_1f0 != 0)
        var_1f0[1].d -= 1
        
        if (var_1f0[1].d == 1)
            (**var_1f0)(var_1f0)
            int32_t rax_12 = *(var_1f0 + 0xc)
            *(var_1f0 + 0xc) -= 1
            
            if (rax_12 == 1)
                (*(*var_1f0 + 8))(var_1f0, 1)
    
    int64_t rcx_18 = var_248
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    void var_1e0
    void var_1c8
    char* var_198
    int64_t* rax_16 = sub_140aaca20(&var_1e0, 
        sub_140a96390(&var_198, _vfprintf_p_l(&var_1c8, Compiling shaders: {MaterialName}...", 
            ShaderCompilingManager")), &var_138)
    int64_t rdx_8 = var_238
    var_238 = *rax_16
    *rax_16 = rdx_8
    var_230_1 = rax_16[1]
    rax_16[1] = var_230
    int32_t var_228 = rax_16[2].d
    int64_t* var_1d8
    
    if (var_1d8 != 0)
        var_1d8[1].d -= 1
        
        if (var_1d8[1].d == 1)
            (**var_1d8)(var_1d8)
            int32_t rax_20 = *(var_1d8 + 0xc)
            *(var_1d8 + 0xc) -= 1
            
            if (rax_20 == 1)
                (*(*var_1d8 + 8))(var_1d8, 1)
    
    int64_t* var_1c0
    
    if (var_1c0 != 0)
        var_1c0[1].d -= 1
        
        if (var_1c0[1].d == 1)
            (**var_1c0)(var_1c0)
            int32_t rax_24 = *(var_1c0 + 0xc)
            *(var_1c0 + 0xc) -= 1
            
            if (rax_24 == 1)
                (*(*var_1c0 + 8))(var_1c0, 1)
    
    int32_t var_f0_2 = 0
    
    if (var_f8_1 != 0)
        sub_140a74f90(var_f8_1)
    
    sub_140acd610(&var_138)
void var_b8
sub_140b2f260(&var_b8, zx.o(0), &var_238, 0, data_143ddb418)
sub_140b40000(&var_b8)
int64_t var_188
__builtin_memset(&var_188, 0, 0x2c)
int32_t var_15c = 0x80
int32_t var_158 = 0xffffffff
int32_t var_154 = 0
int64_t var_148 = 0
int32_t var_140 = 0
sub_1422d4880(&var_188, arg1 + 0x98)
sub_1422e25f0(arg1 + 0x98, 0)
sub_1422decd0(arg1, arg3, &var_188)
char i

do
    i = sub_1422e94b0(arg1, &var_188)
while (i != 0)
int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
int32_t var_140_1 = 0

if (var_148 != 0)
    sub_140a74f90(var_148)

sub_1422e2670(&var_188, 0)
int64_t var_168

if (var_168 != 0)
    sub_140a74f90(var_168)

int64_t rcx_45 = var_188

if (rcx_45 != 0)
    sub_140a74f90(rcx_45)

int32_t result = sub_140b365b0(&var_b8)
char var_6c = 0
int64_t* var_98

if (var_98 != 0)
    result = var_98[1].d
    var_98[1].d -= 1
    
    if (result == 1)
        (**var_98)(var_98)
        result = *(var_98 + 0xc)
        *(var_98 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_98 + 8))(var_98, 1)

int64_t* var_b0

if (var_b0 != 0)
    result = var_b0[1].d
    var_b0[1].d -= 1
    
    if (result == 1)
        (**var_b0)(var_b0)
        result = *(var_b0 + 0xc)
        *(var_b0 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_b0 + 8))(var_b0, 1)

if (var_230_1 != 0)
    result = var_230_1[1].d
    var_230_1[1].d -= 1
    
    if (result == 1)
        result = (**var_230_1)(var_230_1)
        int32_t rdi_1 = *(var_230_1 + 0xc)
        *(var_230_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*var_230_1 + 8))(var_230_1, zx.q(rdi_1))

__security_check_cookie(rax_1 ^ &var_288)
return result
