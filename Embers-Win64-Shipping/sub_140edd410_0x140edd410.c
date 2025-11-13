// 函数: sub_140edd410
// 地址: 0x140edd410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int32_t var_1a8 = 0
int64_t var_e8
__builtin_memset(&var_e8, 0, 0x2c)
int32_t var_bc = 0x80
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
int64_t var_a8 = 0
int32_t var_a0 = 0
void var_170
int64_t* rax_2 = sub_140aae2b0(&var_170, arg1)
int32_t var_98 = 4
int64_t var_88 = *rax_2
int64_t* rax_4 = rax_2[1]

if (rax_4 != 0)
    rax_4[1].d += 1

int32_t var_78 = rax_2[2].d
char var_70 = 1
int64_t var_1c8 = 0
int32_t var_1c0 = 0
sub_1405947f0(&var_1c8, 8)
int32_t rax_6 = var_1c0 + 8
var_1c0 = rax_6

if (rax_6 s> 0)
    sub_140594770(&var_1c8)

UnDecorator::getReferenceType(var_1c8, u"TabType", 0x10)
int64_t* var_1a0 = &var_1c8
int32_t* var_198 = &var_98
sub_140b91dc0(&var_e8, &var_1a8, &var_1a0, nullptr)
int64_t rcx_6 = var_1c8

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

if (var_70 != 0)
    char var_70_1 = 0
    
    if (rax_4 != 0)
        rax_4[1].d -= 1
        
        if (rax_4[1].d == 1)
            (**rax_4)(rax_4)
            int32_t rax_9 = *(rax_4 + 0xc)
            *(rax_4 + 0xc) -= 1
            
            if (rax_9 == 1)
                (*(*rax_4 + 8))(rax_4, 1)

int64_t* var_168

if (var_168 != 0)
    var_168[1].d -= 1
    
    if (var_168[1].d == 1)
        (**var_168)(var_168)
        int32_t rax_13 = *(var_168 + 0xc)
        *(var_168 + 0xc) -= 1
        
        if (rax_13 == 1)
            (*(*var_168 + 8))(var_168, 1)

int32_t rdx_3 = arg1[2]
int128_t var_180 = zx.o(0)
void var_158
int64_t* rax_15 = sub_140aa10e0(&var_158, rdx_3, nullptr, &var_180)
int32_t var_68 = 4
int64_t var_58 = *rax_15
int64_t* rax_17 = rax_15[1]

if (rax_17 != 0)
    rax_17[1].d += 1

int32_t var_48 = rax_15[2].d
char var_40 = 1
int64_t var_1b8 = 0
int32_t var_1b0 = 0
sub_1405947f0(&var_1b8, 0x11)
int32_t rax_19 = var_1b0 + 0x11
var_1b0 = rax_19

if (rax_19 s> 0)
    sub_140594770(&var_1b8)

UnDecorator::getReferenceType(var_1b8, u"InstanceIdNumber", 0x22)
int64_t* var_190 = &var_1b8
int32_t* var_188 = &var_68
void var_1a4
sub_140b91dc0(&var_e8, &var_1a4, &var_190, nullptr)
int64_t rcx_17 = var_1b8

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

if (var_40 != 0)
    char var_40_1 = 0
    
    if (rax_17 != 0)
        rax_17[1].d -= 1
        
        if (rax_17[1].d == 1)
            (**rax_17)(rax_17)
            int32_t rax_22 = *(rax_17 + 0xc)
            *(rax_17 + 0xc) -= 1
            
            if (rax_22 == 1)
                (*(*rax_17 + 8))(rax_17, 1)

int64_t* var_150

if (var_150 != 0)
    var_150[1].d -= 1
    
    if (var_150[1].d == 1)
        (**var_150)(var_150)
        int32_t rax_26 = *(var_150 + 0xc)
        *(var_150 + 0xc) -= 1
        
        if (rax_26 == 1)
            (*(*var_150 + 8))(var_150, 1)

int64_t* rdi_5 = var_180:8.q

if (rdi_5 != 0)
    rdi_5[1].d -= 1
    
    if (rdi_5[1].d == 1)
        (**rdi_5)(rdi_5)
        int32_t rax_30 = *(rdi_5 + 0xc)
        *(rdi_5 + 0xc) -= 1
        
        if (rax_30 == 1)
            (*(*rdi_5 + 8))(rdi_5, 1)

int64_t* rax_32
int32_t rsi_1

if (arg1[2] != 0xffffffff)
    void var_140
    void var_128
    char* var_f8
    rax_32 = sub_140aaca20(&var_140, 
        sub_140a96390(&var_f8, _vfprintf_p_l(&var_128, {TabType} : {InstanceIdNumber}", 
            TabManager")), &var_e8)
    rsi_1 = 6
else
    void var_110
    rax_32 = sub_140aae2b0(&var_110, arg1)
    rsi_1 = 1

*arg2 = *rax_32
void* rax_36 = rax_32[1]
arg2[1] = rax_36

if (rax_36 != 0)
    *(rax_36 + 8) += 1

arg2[2].d = rax_32[2].d

if ((rsi_1.b & 4) != 0)
    rsi_1 &= 0xfffffffb
    int64_t* var_138
    
    if (var_138 != 0)
        var_138[1].d -= 1
        
        if (var_138[1].d == 1)
            (**var_138)(var_138)
            int32_t rax_40 = *(var_138 + 0xc)
            *(var_138 + 0xc) -= 1
            
            if (rax_40 == 1)
                (*(*var_138 + 8))(var_138, 1)

if ((rsi_1.b & 2) != 0)
    rsi_1 &= 0xfffffffd
    int64_t* var_120
    
    if (var_120 != 0)
        var_120[1].d -= 1
        
        if (var_120[1].d == 1)
            (**var_120)(var_120)
            int32_t rax_44 = *(var_120 + 0xc)
            *(var_120 + 0xc) -= 1
            
            if (rax_44 == 1)
                (*(*var_120 + 8))(var_120, 1)

int64_t* var_108

if ((rsi_1.b & 1) != 0 && var_108 != 0)
    var_108[1].d -= 1
    
    if (var_108[1].d == 1)
        (**var_108)(var_108)
        int32_t rbx_1 = *(var_108 + 0xc)
        *(var_108 + 0xc) -= 1
        
        if (rbx_1 == 1)
            int64_t r8_3 = *var_108
            (*(r8_3 + 8))(var_108, zx.q(rbx_1), r8_3)

int32_t var_a0_1 = 0

if (var_a8 != 0)
    sub_140a74f90(var_a8)

sub_140acd610(&var_e8)
__security_check_cookie(rax_1 ^ &var_1e8)
return arg2
