// 函数: sub_14223c330
// 地址: 0x14223c330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1
int64_t rsi = 0
uint64_t r14_1 = sx.q(arg1[1].d) << 3 u>> 3

if (rdi u> &rdi[arg1[1]])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t rcx = *rdi
        
        if (rcx != 0)
            j_sub_140a74f90(rcx)
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)

int64_t rsi_1 = 0
int64_t* rdi_1 = arg1[2]
uint64_t r14_3 = sx.q(arg1[3].d) << 3 u>> 3

if (rdi_1 u> &rdi_1[arg1[3]])
    r14_3 = 0

if (r14_3 != 0)
    do
        int64_t rcx_1 = *rdi_1
        
        if (rcx_1 != 0)
            j_sub_140a74f90(rcx_1)
        
        rdi_1 = &rdi_1[1]
        rsi_1 += 1
    while (rsi_1 != r14_3)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_1405c5570(arg1, 0)

arg1[3].d = 0

if (*(arg1 + 0x1c) != 0)
    sub_1405c5570(&arg1[2], 0)

sub_14223bea0(&arg1[0x4e])
sub_14223bdf0(&arg1[0x48])
int64_t rcx_6 = arg1[0x46]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

arg1[0x44].d = 0
int64_t rcx_7 = arg1[0x43]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

arg1[0x3c].d = 0

if (*(arg1 + 0x1e4) != 0)
    sub_1405a5410(&arg1[0x3b], 0)

arg1[0x41].d = 0xffffffff
*(arg1 + 0x20c) = 0
sub_14059a8e0(&arg1[0x3d], 0)
int64_t rcx_10 = arg1[0x3f]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t rcx_11 = arg1[0x3b]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

arg1[0x3a].d = 0
int64_t rcx_12 = arg1[0x39]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

sub_14223baa0(&arg1[0x31])
int64_t rcx_14 = arg1[0x2b]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = arg1[0x27]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t rcx_16 = arg1[0x25]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rcx_17 = arg1[0x23]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

sub_14223c080(&arg1[0x14])
int64_t rcx_19 = arg1[0x12]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t rcx_20 = arg1[0x10]

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t rcx_21 = arg1[0xe]

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t rcx_22 = arg1[0xc]

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int64_t rcx_23 = arg1[0xa]

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int64_t result = sub_14223bf50(&arg1[8])
int64_t rcx_25 = arg1[6]

if (rcx_25 != 0)
    result = sub_140a74f90(rcx_25)

int32_t i_1 = arg1[5].d
int64_t* rdi_3 = arg1[4]

if (i_1 != 0)
    int32_t i
    
    do
        result = sub_14223bb60(rdi_3)
        rdi_3 = &rdi_3[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi_3 = arg1[4]

if (rdi_3 != 0)
    result = sub_140a74f90(rdi_3)

int64_t rcx_28 = arg1[2]

if (rcx_28 != 0)
    result = sub_140a74f90(rcx_28)

int64_t rcx_29 = *arg1

if (rcx_29 == 0)
    return result

return sub_140a74f90(rcx_29)
