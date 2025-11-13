// 函数: sub_1408f1c50
// 地址: 0x1408f1c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const r8

if (arg1[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *arg1

int32_t var_e8 = arg3
int64_t var_98
sub_140a2e390(&var_98, u"Gameplay Automation Screenshot "%s" taken with size: %d x %d", r8)
sub_140b19e60()
sub_140b1f5f0(&data_1439a8bd0, &var_98)
int64_t rcx_1 = var_98

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_140a464c0()
int64_t var_58
int64_t* rax
int64_t r8_1
rax, r8_1 = sub_140b1a780(&var_58, &arg1[4])
int16_t* const rdx_2

if (rax[1].d == 0)
    rdx_2 = &data_142d40450
else
    rdx_2 = *rax

r8_1.b = 1
(*(data_14399ea08 + 0x58))(&data_14399ea08, rdx_2, r8_1)
int64_t rcx_3 = var_58

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t var_c8 = 0
int32_t var_c0 = 0
sub_142083b00(arg2, arg3, arg4, &var_c8)
bool cond:1 = arg1[5].d == 0
int32_t var_80 = var_c0
int128_t var_48 = var_c8.o
int16_t* const r14

if (cond:1)
    r14 = &data_142d40450
else
    r14 = arg1[4]

sub_140a464c0()
sub_140b27070(&var_48, r14, &data_14399ea08, 0)

if (arg1[5].d != 0)
    arg1[4]

int64_t var_78
sub_140a2e390(&var_78, u"Saved %d bytes of screenshot image to %s", zx.q(var_c0))
sub_140b19e60()
sub_140b1f5f0(&data_1439a8bd0, &var_78)
int64_t rcx_7 = var_78

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t var_d8 = 0
int32_t var_d0 = 0
sub_1405947f0(&var_d8, 5)
int32_t rax_4 = var_d0 + 5
var_d0 = rax_4

if (rax_4 s> 0)
    sub_140594770(&var_d8)

UnDecorator::getReferenceType(var_d8, u"json", 0xa)
int16_t* var_a8
sub_140b0f020(&var_a8, &arg1[4], &var_d8)
int64_t rcx_12 = var_d8

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int16_t* rbx = &data_142d40450
int32_t var_a0

if (var_a0 != 0)
    rbx = var_a8

sub_140a464c0()
sub_140b27210(&arg1[2], rbx, 4, &data_14399ea08, 0)
int32_t rax_5 = arg1[3].d
uint64_t r8_5 = zx.q(rax_5 - 1)

if (rax_5 == 0)
    r8_5 = 0

int64_t var_68
sub_140a2e390(&var_68, u"Saved %d bytes of metadata json to %s", r8_5)
sub_140b19e60()
sub_140b1f5f0(&data_1439a8bd0, &var_68)
int64_t rcx_15 = var_68

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t* var_b0 = nullptr
int64_t var_b8

if (&arg1[9] != &var_b8)
    arg1[9] = 0
    var_b8 = 0
    sub_1405aeff0(&arg1[0xa], &var_b0)
    int64_t* rcx_18 = var_b0
    
    if (rcx_18 != 0)
        rcx_18[1].d -= 1
        
        if (rcx_18[1].d == 1)
            int64_t* rbx_1 = var_b0
            (**rbx_1)(rbx_1)
            int32_t rdi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rdi_1 == 1)
                int64_t* rcx_20 = var_b0
                (*(*rcx_20 + 8))(rcx_20, zx.q(rdi_1))

void var_38
int64_t result = sub_1408f22f0(sub_140596d10(&var_38, arg1))
int16_t* rcx_23 = var_a8

if (rcx_23 != 0)
    result = sub_140a74f90(rcx_23)

int64_t rcx_24 = var_c8

if (rcx_24 == 0)
    return result

return sub_140a74f90(rcx_24)
