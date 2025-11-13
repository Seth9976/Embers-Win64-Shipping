// 函数: sub_140de0ac0
// 地址: 0x140de0ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec88b0
void* rcx = data_143e20d08

if (rcx != 0)
    int64_t* rdi_1 = arg1[0x2d]
    void* rsi_3 = &rdi_1[sx.q(arg1[0x2e].d) * 2]
    
    if (rdi_1 != rsi_3)
        while (true)
            sub_140dc00e0(rcx, rdi_1)
            rdi_1 = &rdi_1[2]
            
            if (rdi_1 == rsi_3)
                break
            
            rcx = data_143e20d08
    
    void* rcx_1 = arg1[3]
    
    if (rcx_1 != 0)
        sub_140db5440(rcx_1, arg1)
    
    int64_t var_10_1 = -1
    *(arg1 + 0x18) = 0.o
    sub_140dbb220(&arg1[0x27])
    void* rax_1 = data_143e20d08
    int64_t* rdi_2 = *(rax_1 + 0xb0)
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    sub_140e1f4a0(*(rax_1 + 0xa8), arg1)
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp5_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
    
    AcquireSRWLockExclusive(&data_1439af180)
    sub_140e20e10(&data_1439af130, arg1)
    ReleaseSRWLockExclusive(&data_1439af180)
    AcquireSRWLockExclusive(&data_1439af1e0)
    sub_140e20e10(&data_1439af190, arg1)
    ReleaseSRWLockExclusive(&data_1439af1e0)

sub_140745b20(&arg1[0x53])
sub_140745b20(&arg1[0x51])
int32_t i_1 = arg1[0x50].d
void* rcx_8 = arg1[0x4f]

if (i_1 != 0)
    int64_t* rdi_3 = rcx_8 + 8
    int32_t i
    
    do
        sub_140745b20(rdi_3)
        rdi_3 = &rdi_3[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_8 = arg1[0x4f]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t* rcx_10 = arg1[0x4e]

if (rcx_10 != 0)
    int32_t temp1_1 = *(rcx_10 + 0xc)
    *(rcx_10 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_10 + 8))(rcx_10, 1)

int64_t* rdi_4 = arg1[0x4c]

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t temp4_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_4 + 8))(rdi_4, 1)

sub_140745b20(&arg1[0x49])

if (*(arg1 + 0x23c) != 0)
    *(arg1 + 0x23c) = 0

sub_140627040(&arg1[0x45])
sub_140745b20(&arg1[0x41])
sub_140745b20(&arg1[0x3d])

if (arg1[0x3c].b != 0)
    arg1[0x3c].b = 0

sub_140745b20(&arg1[0x36])
sub_140745b20(&arg1[0x33])

if (*(arg1 + 0x17c) != 0)
    *(arg1 + 0x17c) = 0

sub_140596d80(&arg1[0x2d])

if (arg1[0x2c].b != 0)
    arg1[0x2c].b = 0

sub_140de02e0(&arg1[6])
int64_t* rcx_21 = arg1[2]

if (rcx_21 != 0)
    int32_t temp6_1 = *(rcx_21 + 0xc)
    *(rcx_21 + 0xc) -= 1
    
    if (temp6_1 == 1)
        (*(*rcx_21 + 8))(rcx_21, 1)

*arg1 = &data_142ec8880
return &data_142ec8880
