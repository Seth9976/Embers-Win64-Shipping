// 函数: sub_141c943e0
// 地址: 0x141c943e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14320fe68
sub_1405b8890(&arg1[0x28], 0)
sub_141c9c580(&arg1[0x1e], 0)

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= arg1[0x1d].d)
        break
    
    void* rsi_1 = arg1[0x1c][sx.q(i)]
    
    if (rsi_1 != 0)
        sub_140cad990(rsi_1 + 0x18)
        sub_141c94120(rsi_1 + 8)
        j_sub_140a74f90(rsi_1)

arg1[0x1d].d = 0

if (*(arg1 + 0xec) != 0)
    sub_1405c5570(&arg1[0x1c], 0)

sub_1405ae080(&arg1[0x28])
arg1[0x27].d = 0
int64_t rcx_8 = arg1[0x26]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_141c9c770(&arg1[0x1e], 0)
int64_t rcx_10 = arg1[0x22]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x1e]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[0x1c]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = arg1[0x1a]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t* rbx = arg1[0x18]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int32_t i_5 = arg1[0x15].d
int64_t* rbx_1 = arg1[0x14]

if (i_5 != 0)
    int32_t i_1
    
    do
        int64_t rcx_16 = *rbx_1
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        rbx_1 = &rbx_1[2]
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
    rbx_1 = arg1[0x14]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t rcx_18 = arg1[0x12]

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int32_t i_6 = arg1[0x11].d
int64_t* rbx_2 = arg1[0x10]

if (i_6 != 0)
    int32_t i_2
    
    do
        int64_t rcx_19 = *rbx_2
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        rbx_2 = &rbx_2[2]
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)
    rbx_2 = arg1[0x10]

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

int32_t i_7 = arg1[0xf].d
int64_t* rbx_3 = arg1[0xe]

if (i_7 != 0)
    int32_t i_3
    
    do
        sub_140cad990(rbx_3)
        rbx_3 = &rbx_3[0x19]
        i_3 = i_7
        i_7 -= 1
    while (i_3 != 1)
    rbx_3 = arg1[0xe]

if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

int64_t rcx_23 = arg1[0xc]

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int32_t i_8 = arg1[9].d
int64_t* rbx_4 = arg1[8]

if (i_8 != 0)
    int32_t i_4
    
    do
        int64_t rcx_24 = *rbx_4
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        rbx_4 = &rbx_4[3]
        i_4 = i_8
        i_8 -= 1
    while (i_4 != 1)
    rbx_4 = arg1[8]

if (rbx_4 != 0)
    sub_140a74f90(rbx_4)

int64_t rcx_26 = arg1[6]

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

DeleteCriticalSection(&arg1[1])
*arg1 = &data_142d565e8
return &data_142d565e8
