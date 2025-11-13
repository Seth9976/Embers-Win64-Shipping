// 函数: sub_140910a90
// 地址: 0x140910a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140913660(arg1)
int64_t* rax = sub_140914510()
void* r13 = rax[0x23]

if (r13 == 0)
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    r13 = rax[0x23]

int64_t var_f8 = 0
int32_t rbx_1 = 0
int32_t rdi = *(r13 + 0x38)
int32_t r15 = 0
int64_t rsi = *(r13 + 0x30)
int64_t var_128 = 0
int32_t var_120 = 0
int32_t var_11c = 0
int32_t var_f0 = rdi

if (rdi != 0)
    sub_1405a4c70(&var_f8, rdi, 0)
    memcpy(var_f8, rsi, rdi * 2)
else
    int32_t var_ec_1 = 0

sub_140af2b60()
sub_140b2acc0(&data_143dbb3f0, u"TcpMessagingListen=", &var_f8, 1)
int64_t arg_8
char rax_1 = sub_140fcbc40(&var_f8, &arg_8)
int64_t rcx_4 = arg_8
int32_t i_6 = 0
int64_t* i_2 = nullptr
int32_t i_4 = 0

if (rax_1 == 0)
    rcx_4 = data_143e2b8a8

arg_8 = rcx_4
int32_t rcx_5 = 0
int32_t var_13c = 0
int64_t* rsi_1 = *(r13 + 0x40)
void* r14_2 = &rsi_1[sx.q(*(r13 + 0x48)) * 2]

if (rsi_1 != r14_2)
    while (true)
        i_4 = i_6 + 1
        
        if (i_6 + 1 s> rcx_5)
            sub_1405a4f90(&i_2)
        
        sub_140596d10(&i_2[sx.q(i_6) * 2], rsi_1)
        rsi_1 = &rsi_1[2]
        
        if (rsi_1 == r14_2)
            break
        
        rcx_5 = var_13c
        i_6 = i_4

int64_t var_e8 = 0
int64_t var_e0 = 0
sub_140af2b60()

if (sub_140b2acc0(&data_143dbb3f0, u"TcpMessagingConnect=", &var_e8, 1) != 0)
    sub_140a2ccb0(&var_e8, &i_2, U",", 1)

int64_t rcx_11 = var_e8

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

for (int64_t* i = i_2; i != &i[sx.q(i_4) * 2]; i = &i[2])
    int64_t arg_10
    
    if (sub_140fcbc40(i, &arg_10) != 0)
        int64_t rsi_2 = sx.q(rbx_1)
        rbx_1 = (rsi_2 + 1).d
        
        if (rbx_1 s> r15)
            sub_1405a4d70(&var_128)
            r15 = var_11c
        
        *(var_128 + (rsi_2 << 3)) = arg_10

int64_t var_138 = 0
int32_t var_130 = 0
sub_1405947f0(&var_138, 0x21)
int32_t rax_6 = var_130 + 0x21
var_130 = rax_6

if (rax_6 s> 0)
    sub_140594770(&var_138)

UnDecorator::getReferenceType(var_138, u"Initializing TcpMessaging bridge", 0x42)

if (rbx_1 != 0)
    int64_t var_c8
    sub_140a2e390(&var_c8, u" for %d outgoing connections", zx.q(rbx_1))
    int32_t var_c0
    int32_t r8_7
    
    if (var_c0 == 0)
        r8_7 = 0
    else
        r8_7 = var_c0 - 1
    
    sub_140a20ba0(&var_138, var_c8, r8_7)
    int64_t rcx_20 = var_c8
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)

if (arg_8.d != data_143e2b8a8.d || arg_8:4.w != data_143e2b8a8:4.w)
    sub_140a20ba0(&var_138, u", listening on ", 0xf)
    int64_t var_80
    void var_60
    sub_140aae2f0(&var_60, sub_140fcbd10(&arg_8, &var_80))
    int64_t rcx_24 = var_80
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    int64_t* rax_10 = sub_140ac6680(&var_60)
    int32_t rcx_26 = rax_10[1].d
    int32_t r8_8 = rcx_26 - 1
    
    if (rcx_26 == 0)
        r8_8 = 0
    
    sub_140a20ba0(&var_138, *rax_10, r8_8)
    int64_t* var_58
    
    if (var_58 != 0)
        var_58[1].d -= 1
        
        if (var_58[1].d == 1)
            (**var_58)(var_58)
            int32_t rax_13 = *(var_58 + 0xc)
            *(var_58 + 0xc) -= 1
            
            if (rax_13 == 1)
                (*(*var_58 + 8))(var_58, 1)

void*** rax_15 = j_sub_140a82f30(0xe0)
void*** rbx_3

if (rax_15 == 0)
    rbx_3 = nullptr
else
    rbx_3 = sub_14090d6d0(rax_15, &arg_8, &var_128, *(r13 + 0x50))

void*** rax_17 = j_sub_140a82f30(0x18)

if (rax_17 == 0)
    rax_17 = nullptr
else
    rax_17[1].d = 1
    *rax_17 = &data_142e1c960
    *(rax_17 + 0xc) = 1
    rax_17[2] = rbx_3

*(arg1 + 0x20) = rbx_3
int64_t* rcx_31 = *(arg1 + 0x28)

if (rax_17 != rcx_31)
    if (rax_17 != 0)
        *(rax_17 + 0xc) += 1
        rcx_31 = *(arg1 + 0x28)
    
    if (rcx_31 != 0)
        int32_t rax_19 = *(rcx_31 + 0xc)
        *(rcx_31 + 0xc) -= 1
        
        if (rax_19 == 1)
            (*(*rcx_31 + 8))(rcx_31, 1)
    
    *(arg1 + 0x28) = rax_17

void* r14_6 = &rbx_3[1]

if (rbx_3 == 0)
    r14_6 = nullptr

if (rax_17 != 0)
    rax_17[1].d += 1

void var_48
int128_t var_b8 = *sub_140b214c0(&var_48)
void arg_18
int64_t rbx_5 = *sub_140b58170(&arg_18, "Messaging", 1)
j_sub_140b3db50()
int64_t* rax_24 = j_sub_140b407e0(&data_143de7d78, rbx_5)
int64_t r8_10 = *rax_24
void var_70
int64_t* rax_25 = (*(r8_10 + 0x68))(rax_24, &var_70, r8_10)
int64_t var_a8 = *rax_25
int64_t* rcx_36 = rax_25[1]

if (rcx_36 != 0)
    *(rcx_36 + 0xc) += 1

int64_t* var_68

if (var_68 != 0)
    var_68[1].d -= 1
    
    if (var_68[1].d == 1)
        (**var_68)(var_68)
        int32_t rax_28 = *(var_68 + 0xc)
        *(var_68 + 0xc) -= 1
        
        if (rax_28 == 1)
            (*(*var_68 + 8))(var_68, 1)

char var_98 = 0
int64_t* var_88 = nullptr
void*** var_d0 = rax_17

if (rax_17 != 0)
    rax_17[1].d += 1

void* var_90 = r14_6
int64_t var_d8 = 0
sub_1405aeff0(&var_88, &var_d0)
void*** rcx_40 = var_d0

if (rcx_40 != 0)
    rcx_40[1].d -= 1
    
    if (rcx_40[1].d == 1)
        void*** rbx_7 = var_d0
        (**rbx_7)(rbx_7)
        int32_t rax_32 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (rax_32 == 1)
            void*** rcx_42 = var_d0
            (*rcx_42)[1](rcx_42, 1)

int64_t var_118
sub_14090e9d0(&var_b8, &var_118)
int32_t result = &var_118
int64_t* var_110

if (arg1 + 0x10 != &var_118)
    *(arg1 + 0x10) = var_118
    var_118 = 0
    result = sub_1405aeff0(arg1 + 0x18, &var_110)

int64_t* rcx_46 = var_110

if (rcx_46 != 0)
    result = rcx_46[1].d
    rcx_46[1].d -= 1
    
    if (result == 1)
        int64_t* rbx_8 = var_110
        (**rbx_8)(rbx_8)
        result = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (result == 1)
            int64_t* rcx_48 = var_110
            result = (*(*rcx_48 + 8))(rcx_48, 1)

int64_t* rbx_9 = var_88

if (rbx_9 != 0)
    result = rbx_9[1].d
    rbx_9[1].d -= 1
    
    if (result == 1)
        (**rbx_9)(rbx_9)
        result = *(rbx_9 + 0xc)
        *(rbx_9 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rbx_9 + 8))(rbx_9, 1)

if (rcx_36 != 0)
    result = *(rcx_36 + 0xc)
    *(rcx_36 + 0xc) -= 1
    
    if (result == 1 && rcx_36 != 0)
        result = (*(*rcx_36 + 8))(rcx_36, 1)

if (rax_17 != 0)
    result = rax_17[1].d
    rax_17[1].d -= 1
    
    if (result == 1)
        (**rax_17)(rax_17)
        result = *(rax_17 + 0xc)
        *(rax_17 + 0xc) -= 1
        
        if (result == 1)
            result = (*rax_17)[1](rax_17, 1)

if (rax_17 != 0)
    result = rax_17[1].d
    rax_17[1].d -= 1
    
    if (result == 1)
        result = (**rax_17)(rax_17)
        int32_t rdi_1 = *(rax_17 + 0xc)
        *(rax_17 + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*rax_17)[1](rax_17, zx.q(rdi_1))

int64_t rcx_56 = var_138

if (rcx_56 != 0)
    result = sub_140a74f90(rcx_56)

int32_t i_3 = i_4
int64_t* i_5 = i_2

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_57 = *i_5
        
        if (rcx_57 != 0)
            result = sub_140a74f90(rcx_57)
        
        i_5 = &i_5[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    i_5 = i_2

if (i_5 != 0)
    result = sub_140a74f90(i_5)

int64_t rcx_59 = var_f8

if (rcx_59 != 0)
    result = sub_140a74f90(rcx_59)

int64_t rcx_60 = var_128

if (rcx_60 == 0)
    return result

return sub_140a74f90(rcx_60)
