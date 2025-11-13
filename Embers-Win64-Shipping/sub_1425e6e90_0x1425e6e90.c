// 函数: sub_1425e6e90
// 地址: 0x1425e6e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const arg_8 = arg1

if (*(arg1 + 0x60) == 0)
    return &__return_addr

char* rax = j_sub_140a82f30(0x90)
char* rsi_1 = rax

if (rax == 0)
    rsi_1 = nullptr
else
    memset(rax, 0, 0x90)
    __builtin_memset(&rsi_1[0x10], 0, 0x78)

int64_t rax_1 = sub_140b73b20(0)
int16_t* const r14_1 = &data_142d40450
int16_t* rdx

if (arg3[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg3

int32_t rax_2

if (sub_140a54510(rax_1, rdx) == 0)
    rax_2.b = 1
else
    int16_t* rdx_1
    
    if (arg3[1].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *arg3
    
    if (data_143de54e8 != 0)
        r14_1 = data_143de54e0
    
    if (sub_140a54510(r14_1, rdx_1) == 0)
        rax_2.b = 1
    else
        rax_2 = sub_1405a71a0(&data_143de5500, arg3)
        
        if (rax_2.b != 0)
            rax_2.b = 1

*rsi_1 = rax_2.b
int64_t var_48
int64_t* rax_3 = sub_140af3130(&var_48)

if (&rsi_1[8] != rax_3)
    int64_t rcx_4 = *(rsi_1 + 8)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    *(rsi_1 + 8) = *rax_3
    *rax_3 = 0
    *(rsi_1 + 0x10) = rax_3[1].d
    *(rsi_1 + 0x14) = *(rax_3 + 0xc)
    rax_3[1] = 0

int64_t rcx_6 = var_48

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_140b65ba0()

if (*(rsi_1 + 0x18) != &data_143e18e20)
    int32_t rbx_3
    
    if (data_143e18e20 == 0)
        rbx_3 = 0
    else
        int64_t rbx_2 = -1
        
        do
            rbx_2 += 1
        while ((&data_143e18e20)[rbx_2] != 0)
        
        rbx_3 = rbx_2.d + 1
    
    int32_t rdx_3 = 0
    *(rsi_1 + 0x20) = 0
    
    if (*(rsi_1 + 0x24) != rbx_3)
        sub_1405947f0(&rsi_1[0x18], rbx_3)
        rdx_3 = *(rsi_1 + 0x20)
    
    int32_t rax_6 = rbx_3 + rdx_3
    *(rsi_1 + 0x20) = rax_6
    
    if (rax_6 s> *(rsi_1 + 0x24))
        sub_140594770(&rsi_1[0x18])
    
    if (rbx_3 != 0)
        memcpy(*(rsi_1 + 0x18), &data_143e18e20, rbx_3 * 2)

*(rsi_1 + 0x28) = data_143de54b0
GetCurrentProcessId()
sub_140b65ba0()
int64_t var_68
sub_140a2e390(&var_68, u"%s-%i", &data_143e18e20)

if (&rsi_1[0x38] == &var_68)
    int64_t rcx_12 = var_68
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
else
    int64_t rcx_11 = *(rsi_1 + 0x38)
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    *(rsi_1 + 0x38) = var_68
    int32_t var_60
    *(rsi_1 + 0x40) = var_60
    int32_t var_5c
    *(rsi_1 + 0x44) = var_5c

int64_t var_b8 = 0
int64_t var_b0_1 = 0
sub_1405947f0(&var_b8, 0x10)
int32_t r13_1 = var_b0_1:4.d
int32_t r15_1 = var_b0_1.d + 0x10
var_b0_1.d = r15_1

if (r15_1 s> r13_1)
    sub_140594770(&var_b8)
    r13_1 = var_b0_1:4.d
    r15_1 = var_b0_1.d

int64_t r14_3 = var_b8
int16_t var_d8_1 = 0x3f
sub_1405a7220(r14_3, 0x10, "WindowsNoEditor", 0x10, 0x3f)

if (&rsi_1[0x48] != &var_b8)
    int64_t rcx_16 = *(rsi_1 + 0x48)
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    *(rsi_1 + 0x48) = r14_3
    *(rsi_1 + 0x50) = r15_1
    *(rsi_1 + 0x54) = r13_1
else if (r14_3 != 0)
    sub_140a74f90(r14_3)

int128_t zmm0_2 = data_143de54c0
uint64_t var_a8 = 0
*(rsi_1 + 0x58) = zmm0_2
int32_t r15_2 = (data_143de54d8.q).d
int64_t rbx_7 = data_143de54d0
int32_t r13_2
uint64_t r14_4

if (r15_2 != 0)
    sub_1405a4c70(&var_a8, r15_2, 0)
    r14_4 = var_a8
    memcpy(r14_4, rbx_7, r15_2 * 2)
    int32_t var_9c
    r13_2 = var_9c
else
    r13_2 = 0
    int32_t var_9c_1 = 0
    r14_4 = 0

if (&rsi_1[0x68] != &var_a8)
    int64_t rcx_20 = *(rsi_1 + 0x68)
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    *(rsi_1 + 0x68) = r14_4
    *(rsi_1 + 0x70) = r15_2
    *(rsi_1 + 0x74) = r13_2
else if (r14_4 != 0)
    sub_140a74f90(r14_4)

int32_t r15_3 = (data_143de54e8.q).d
int64_t rbx_9 = data_143de54e0
uint64_t var_98 = 0
int32_t r13_3
uint64_t r14_5

if (r15_3 != 0)
    sub_1405a4c70(&var_98, r15_3, 0)
    r14_5 = var_98
    memcpy(r14_5, rbx_9, r15_3 * 2)
    int32_t var_8c
    r13_3 = var_8c
else
    r13_3 = 0
    int32_t var_8c_1 = 0
    r14_5 = 0

if (&rsi_1[0x78] != &var_98)
    int64_t rcx_24 = *(rsi_1 + 0x78)
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    *(rsi_1 + 0x78) = r14_5
    *(rsi_1 + 0x80) = r15_3
    *(rsi_1 + 0x84) = r13_3
else if (r14_5 != 0)
    sub_140a74f90(r14_5)

void* const r15_4 = arg_8
rsi_1[0x88] = data_14399f928
int64_t* rcx_27 = *arg2
void* r15_5 = *(r15_4 + 0x60)
int128_t* rax_13 = (*(*rcx_27 + 0x48))(rcx_27)
int128_t* var_88 = nullptr
int32_t var_80_1 = 1
sub_1405a4f90(&var_88)
int64_t rbx_12 = sx.q(var_80_1)
int128_t* r14_6 = var_88
*r14_6 = *rax_13
uint64_t var_78 = 0
int32_t var_70_1 = rbx_12.d

if (rbx_12.d != 0)
    sub_1405a4be0(&var_78, rbx_12.d, 0)
    memcpy(var_78, r14_6, (rbx_12 << 4).d)
else
    int32_t var_6c_1 = 0

int64_t arg_20 = 0
int128_t var_58 = zx.o(0)
arg_8 = 0x2bca2875f4373fff
void** var_c0_1 = &arg_8
int64_t* var_c8_1 = &arg_20
var_d8_1.q = &var_58
sub_14200dcd0(r15_5, rsi_1, sub_1425e1d60(), 0, var_d8_1, &var_78)
int64_t* rbx_13 = var_58:8.q

if (rbx_13 != 0)
    rbx_13[1].d -= 1
    
    if (rbx_13[1].d == 1)
        (**rbx_13)(rbx_13)
        int32_t r12_1 = *(rbx_13 + 0xc)
        *(rbx_13 + 0xc) -= 1
        
        if (r12_1 == 1)
            (*(*rbx_13 + 8))(rbx_13, zx.q(r12_1))
    
    r14_6 = var_88

uint64_t rcx_34 = var_78

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

return sub_140a74f90(r14_6)
