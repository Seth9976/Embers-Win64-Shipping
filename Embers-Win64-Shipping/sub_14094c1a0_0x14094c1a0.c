// 函数: sub_14094c1a0
// 地址: 0x14094c1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0xd9) == 0
*arg1 = &data_142e32e10
arg1[1] = &data_142e32f98
arg1[2] = &data_142e32fa8

if (not(cond:0))
    int64_t* rcx = arg1[0x15]
    (*(*rcx + 0x20))(rcx)

sub_1405a46b0(&data_1439aa970, arg1)
void var_28

if (&arg1[0x15] != &var_28)
    arg1[0x15] = 0
    int64_t* rbx_1 = arg1[0x16]
    
    if (rbx_1 != 0)
        arg1[0x16] = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if (&arg1[0x17] != &var_28)
    arg1[0x17] = 0
    int64_t* rbx_2 = arg1[0x18]
    
    if (rbx_2 != 0)
        arg1[0x18] = 0
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp3_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rcx_5 = arg1[0x2a]

if (rcx_5 != 0)
    (**rcx_5)(rcx_5, 1)

if (arg1[0x60].b != 0)
    void* rsi_1 = data_143ced2c8
    
    if (rsi_1 != 0)
        EnterCriticalSection(rsi_1 + 0x60)
        sub_1409740e0(rsi_1 + 0x10, &arg1[2])
        
        if (rsi_1 != -0x60)
            LeaveCriticalSection(rsi_1 + 0x60)
    
    arg1[0x60].b = 0

int32_t i_1 = arg1[0x5c].d
int64_t* rbx_4 = arg1[0x5b]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_9 = *rbx_4
        
        if (rcx_9 != 0)
            (*(*rcx_9 + 0x10))(rcx_9, 1)
        
        rbx_4 = &rbx_4[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_4 = arg1[0x5b]

if (rbx_4 != 0)
    sub_140a74f90(rbx_4)

sub_141c32370(&arg1[0x35])
arg1[0x34].d = 0
int64_t rcx_12 = arg1[0x33]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

sub_14095cf80(&arg1[0x2b], 0)
int64_t rcx_14 = arg1[0x2f]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = arg1[0x2b]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t rcx_16 = arg1[0x28]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

arg1[0x27].d = 0
int64_t rcx_17 = arg1[0x26]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

sub_14095d120(&arg1[0x1e], 0)
int64_t rcx_19 = arg1[0x22]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t rcx_20 = arg1[0x1e]

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t rcx_21 = arg1[0x1c]

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t* rbx_5 = arg1[0x18]

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        (**rbx_5)(rbx_5)
        int32_t temp7_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_5 + 8))(rbx_5, 1)

int64_t* rbx_6 = arg1[0x16]

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        (**rbx_6)(rbx_6)
        int32_t temp8_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rbx_6 + 8))(rbx_6, 1)

sub_141c32420(&arg1[7])
int64_t rcx_27 = arg1[5]

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

sub_140b0be90(&arg1[1])
*arg1 = &data_142e2d488
return &data_142e2d488
