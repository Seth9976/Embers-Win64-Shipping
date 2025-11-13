// 函数: sub_142645640
// 地址: 0x142645640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143452778
sub_14264bdb0(arg1, 1)
int64_t rcx = arg1[0xa4]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_1405ae080(&arg1[0x98])
int64_t* rdi = arg1[0x97]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_3 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rdi + 8))(rdi, 1)

arg1[0x95].d = 0
int64_t rcx_4 = arg1[0x94]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg1[0x8d].d = 0

if (*(arg1 + 0x46c) != 0)
    sub_1405a52a0(&arg1[0x8c], 0)

arg1[0x92].d = 0xffffffff
*(arg1 + 0x494) = 0
sub_14059a8e0(&arg1[0x8e], 0)
int64_t rcx_7 = arg1[0x90]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0x8c]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

sub_1405ae100(&arg1[0x82])
arg1[0x81].d = 0
int64_t rcx_10 = arg1[0x80]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

arg1[0x79].d = 0

if (*(arg1 + 0x3cc) != 0)
    sub_1405a5410(&arg1[0x78], 0)

arg1[0x7e].d = 0xffffffff
*(arg1 + 0x3f4) = 0
sub_14059a8e0(&arg1[0x7a], 0)
int64_t rcx_13 = arg1[0x7c]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = arg1[0x78]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

DeleteCriticalSection(&arg1[0x6e])
int64_t rcx_16 = arg1[0x6b]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

sub_1405ae100(&arg1[0x60])
sub_142645300(&arg1[0x49])
arg1[0x48].d = 0
int64_t rcx_19 = arg1[0x47]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

sub_142644ef0(&arg1[0x3f])
DeleteCriticalSection(&arg1[0x3a])
sub_142644c90(&arg1[0x38])
int64_t rcx_23 = arg1[0x35]

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

sub_1405ae100(&arg1[0x2b])
arg1[0x2a].d = 0
int64_t rcx_25 = arg1[0x29]

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

arg1[0x22].d = 0

if (*(arg1 + 0x114) != 0)
    sub_140775d60(&arg1[0x21], 0)

arg1[0x27].d = 0xffffffff
*(arg1 + 0x13c) = 0
sub_14059a8e0(&arg1[0x23], 0)
int64_t rcx_28 = arg1[0x25]

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

int64_t rcx_29 = arg1[0x21]

if (rcx_29 != 0)
    sub_140a74f90(rcx_29)

sub_140596eb0(&arg1[0x1c])
int64_t rcx_31 = arg1[0x1a]

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

int64_t rcx_32 = arg1[0x18]

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

int64_t rcx_33 = arg1[0x16]

if (rcx_33 != 0)
    sub_140a74f90(rcx_33)

int64_t rcx_34 = arg1[0x14]

if (rcx_34 != 0)
    sub_140a74f90(rcx_34)

int64_t rcx_35 = arg1[0x12]

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

sub_142644d40(&arg1[0xf])
int64_t rcx_37 = arg1[0xb]

if (rcx_37 != 0)
    sub_140a74f90(rcx_37)

*arg1 = &data_1433e5e30
return sub_140d163b0(arg1) __tailcall
