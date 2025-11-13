// 函数: sub_142671ac0
// 地址: 0x142671ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1434597b0
int64_t* rdi = arg1[0xa]

if (rdi != 0)
    arg1[0xa] = 0
    sub_142692ae0(rdi)
    sub_142671860(&rdi[7])
    j_sub_140a74f90(rdi)

int64_t* rcx_3 = arg1[9]

if (rcx_3 != 0)
    arg1[9] = 0
    (**rcx_3)(rcx_3, 1)

int64_t* rdi_1 = arg1[0xb]

if (rdi_1 != 0)
    arg1[0xb] = 0
    sub_142632530(*rdi_1)
    sub_1426325c0(rdi_1[1])
    sub_1426324d0(rdi_1[2])
    sub_142671860(&rdi_1[3])
    j_sub_140a74f90(rdi_1)

int64_t rcx_9 = arg1[0x77]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[0x6e]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t* rdi_2 = arg1[0x69]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t rax_4 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rax_4 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

sub_140596e10(&arg1[0x66])
int64_t* rcx_14 = arg1[0x65]

if (rcx_14 != 0)
    int32_t rsi_1 = *(rcx_14 + 0xc)
    *(rcx_14 + 0xc) -= 1
    
    if (rsi_1 == 1 && rcx_14 != 0)
        (*(*rcx_14 + 8))(rcx_14, zx.q(rsi_1))

sub_141db7f30(&arg1[0x62])
sub_142671920(&arg1[0x60])
sub_142671980(&arg1[0x5e])
int64_t rcx_18 = arg1[0x5c]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

sub_142671860(&arg1[0x5a])
sub_142671860(&arg1[0x58])
sub_1405ae080(&arg1[0x4c])
int64_t rcx_22 = arg1[0x2a]

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int64_t rcx_23 = arg1[0x17]

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int64_t* rdi_3 = arg1[0xb]

if (rdi_3 != 0)
    sub_142632530(*rdi_3)
    sub_1426325c0(rdi_3[1])
    sub_1426324d0(rdi_3[2])
    sub_142671860(&rdi_3[3])
    j_sub_140a74f90(rdi_3)

int64_t* rdi_4 = arg1[0xa]

if (rdi_4 != 0)
    sub_142692ae0(rdi_4)
    sub_142671860(&rdi_4[7])
    j_sub_140a74f90(rdi_4)

int64_t* rcx_32 = arg1[9]

if (rcx_32 != 0)
    (**rcx_32)(rcx_32, 1)

int64_t rcx_33 = arg1[6]

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

*arg1 = &data_142d44d70
void* rcx_34 = data_143e1a338

if (rcx_34 != 0 && arg1[1].b != 0)
    return sub_140bb6e00(rcx_34, arg1)

return &data_142d44d70
