// 函数: sub_142644fc0
// 地址: 0x142644fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405ae080(&arg1[0x75])
int32_t i_1 = arg1[0x74].d
int64_t* rbx = arg1[0x73]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_1 = *rbx
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx = &rbx[4]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[0x73]

if (rbx != 0)
    sub_140a74f90(rbx)

arg1[0x72].d = 0
int64_t rcx_3 = arg1[0x71]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_1405b8bd0(&arg1[0x69], 0)
int64_t rcx_5 = arg1[0x6d]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x69]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t* rbx_1 = arg1[0x68]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rax_3 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_142644db0(&arg1[0x64])
sub_1408ffb10(&arg1[0x62])
sub_1408ffb10(&arg1[0x60])
int64_t rcx_12 = arg1[0x5e]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t* rbx_2 = arg1[0x5d]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rsi = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rsi == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rsi))

int64_t rcx_15 = arg1[0x53]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t rcx_16 = arg1[0x4a]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

arg1[0x44] = &data_1434512d8
return sub_1405ae4b0(arg1) __tailcall
