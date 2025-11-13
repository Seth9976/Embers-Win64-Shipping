// 函数: sub_140d959b0
// 地址: 0x140d959b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec27e8
sub_1405a46b0(&sub_140a752e0()[8], arg1)
sub_140d9eac0(&arg1[8], 0)
sub_140d9ea40(&arg1[0x12], 0)
void* rdx_1 = arg1[7]

if (rdx_1 != 0)
    arg1[7] = 0
    sub_140d974d0(&arg1[7], rdx_1)

int64_t rcx_4 = arg1[6]

if (rcx_4 != 0)
    arg1[6] = 0
    j_sub_140a74f90(rcx_4)

void* rdx_3 = arg1[5]

if (rdx_3 != 0)
    arg1[5] = 0
    sub_140d97410(&arg1[5], rdx_3)

int64_t* rdi = arg1[4]

if (rdi != 0)
    arg1[4] = 0
    sub_140d94f50(rdi)
    j_sub_140a74f90(rdi)

int64_t* rdi_1 = arg1[3]

if (rdi_1 != 0)
    arg1[3] = 0
    sub_140d94f50(rdi_1)
    j_sub_140a74f90(rdi_1)

int64_t* rdi_2 = arg1[2]

if (rdi_2 != 0)
    arg1[2] = 0
    rdi_2[9].d = 0
    int64_t rcx_10 = rdi_2[8]
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    sub_140d9eb40(rdi_2, 0)
    int64_t rcx_12 = rdi_2[4]
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int64_t rcx_13 = *rdi_2
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    j_sub_140a74f90(rdi_2)

int64_t* rdi_3 = arg1[1]

if (rdi_3 != 0)
    arg1[1] = 0
    sub_142b91960(*rdi_3)
    sub_140a74f90(rdi_3[1])
    j_sub_140a74f90(rdi_3)

sub_140596eb0(&arg1[0x30])
int64_t rcx_19 = arg1[0x2e]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

DeleteCriticalSection(&arg1[0x29])
int64_t* rdi_4 = arg1[0x25]

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t temp1_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi_4 + 8))(rdi_4, 1)

sub_140596d80(&arg1[0x22])
int64_t rcx_24 = arg1[0x20]

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int64_t rcx_25 = arg1[0x1e]

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

int64_t rcx_26 = arg1[0x1c]

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

arg1[0x1b].d = 0
int64_t rcx_27 = arg1[0x1a]

if (rcx_27 != 0)
    sub_140a74f90(rcx_27)

sub_140d9ee70(&arg1[0x12], 0)
int64_t rcx_29 = arg1[0x16]

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

int64_t rcx_30 = arg1[0x12]

if (rcx_30 != 0)
    sub_140a74f90(rcx_30)

arg1[0x11].d = 0
int64_t rcx_31 = arg1[0x10]

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

sub_140d9f040(&arg1[8], 0)
int64_t rcx_33 = arg1[0xc]

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

int64_t rcx_34 = arg1[8]

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

sub_140d974d0(&arg1[7], arg1[7])
j_sub_140a74f90(arg1[6])
sub_140d97410(&arg1[5], arg1[5])
int64_t* rdi_5 = arg1[4]

if (rdi_5 != 0)
    sub_140d94f50(rdi_5)
    j_sub_140a74f90(rdi_5)

int64_t* rdi_6 = arg1[3]

if (rdi_6 != 0)
    sub_140d94f50(rdi_6)
    j_sub_140a74f90(rdi_6)

int64_t* rdi_7 = arg1[2]

if (rdi_7 != 0)
    rdi_7[9].d = 0
    int64_t rcx_42 = rdi_7[8]
    
    if (rcx_42 != 0)
        sub_140a74f90(rcx_42)
    
    sub_140d9eb40(rdi_7, 0)
    int64_t rcx_44 = rdi_7[4]
    
    if (rcx_44 != 0)
        sub_140a74f90(rcx_44)
    
    int64_t rcx_45 = *rdi_7
    
    if (rcx_45 != 0)
        sub_140a74f90(rcx_45)
    
    j_sub_140a74f90(rdi_7)

int64_t* rdi_8 = arg1[1]

if (rdi_8 != 0)
    sub_142b91960(*rdi_8)
    sub_140a74f90(rdi_8[1])
    j_sub_140a74f90(rdi_8)

*arg1 = &data_142dd6680
return &data_142dd6680
