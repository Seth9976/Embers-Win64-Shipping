// 函数: sub_141442890
// 地址: 0x141442890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax = arg1
int128_t* rcx = arg2
int64_t i_4 = 7
int64_t i

do
    rax = &rax[8]
    int128_t zmm0 = *rcx
    rcx = &rcx[8]
    rax[-8] = zmm0
    rax[-7] = rcx[-7]
    rax[-6] = rcx[-6]
    rax[-5] = rcx[-5]
    rax[-4] = rcx[-4]
    rax[-3] = rcx[-3]
    rax[-2] = rcx[-2]
    rax[-1] = rcx[-1]
    i = i_4
    i_4 -= 1
while (i != 1)
*rax = *rcx
rax[1] = rcx[1]
rax[2] = rcx[2]
arg1[0x3b].d = arg2[0x3b].d
int64_t* rcx_1 = *(arg2 + 0x3b8)
int64_t* rbx = *(arg1 + 0x3b8)
*(arg1 + 0x3b8) = rcx_1

if (rcx_1 != 0)
    (*(*rcx_1 + 0x30))()

if (rbx != 0)
    (*(*rbx + 0x38))(rbx)

int64_t* rcx_3 = arg2[0x3c].q
int64_t* rbx_1 = arg1[0x3c].q
arg1[0x3c].q = rcx_3

if (rcx_3 != 0)
    (*(*rcx_3 + 0x30))()

if (rbx_1 != 0)
    (*(*rbx_1 + 0x38))(rbx_1)

int64_t* rcx_5 = *(arg2 + 0x3c8)
int64_t* rbx_2 = *(arg1 + 0x3c8)
*(arg1 + 0x3c8) = rcx_5

if (rcx_5 != 0)
    (*(*rcx_5 + 0x30))()

if (rbx_2 != 0)
    (*(*rbx_2 + 0x38))(rbx_2)

int64_t* rcx_7 = arg2[0x3d].q
int64_t* rbx_3 = arg1[0x3d].q
arg1[0x3d].q = rcx_7

if (rcx_7 != 0)
    (*(*rcx_7 + 0x30))()

if (rbx_3 != 0)
    (*(*rbx_3 + 0x38))(rbx_3)

int64_t* rcx_9 = *(arg2 + 0x3d8)
int64_t* rbx_4 = *(arg1 + 0x3d8)
*(arg1 + 0x3d8) = rcx_9

if (rcx_9 != 0)
    (*(*rcx_9 + 0x30))()

if (rbx_4 != 0)
    (*(*rbx_4 + 0x38))(rbx_4)

int64_t* rcx_11 = arg2[0x3e].q
int64_t* rbx_5 = arg1[0x3e].q
arg1[0x3e].q = rcx_11

if (rcx_11 != 0)
    (*(*rcx_11 + 0x30))()

if (rbx_5 != 0)
    (*(*rbx_5 + 0x38))(rbx_5)

int64_t* rcx_13 = *(arg2 + 0x3e8)
int64_t* rbx_6 = *(arg1 + 0x3e8)
*(arg1 + 0x3e8) = rcx_13

if (rcx_13 != 0)
    (*(*rcx_13 + 0x30))()

if (rbx_6 != 0)
    (*(*rbx_6 + 0x38))(rbx_6)

int64_t* rcx_15 = arg2[0x3f].q
int64_t* rbx_7 = arg1[0x3f].q
arg1[0x3f].q = rcx_15

if (rcx_15 != 0)
    (*(*rcx_15 + 0x30))()

if (rbx_7 != 0)
    (*(*rbx_7 + 0x38))(rbx_7)

int64_t* rcx_17 = *(arg2 + 0x3f8)
int64_t* rbx_8 = *(arg1 + 0x3f8)
*(arg1 + 0x3f8) = rcx_17

if (rcx_17 != 0)
    (*(*rcx_17 + 0x30))()

if (rbx_8 != 0)
    (*(*rbx_8 + 0x38))(rbx_8)

sub_141442fa0(&arg1[0x40], &arg2[0x40])
int64_t* rcx_20 = *(arg2 + 0x428)
int64_t* rbx_9 = *(arg1 + 0x428)
*(arg1 + 0x428) = rcx_20

if (rcx_20 != 0)
    (*(*rcx_20 + 0x30))()

if (rbx_9 != 0)
    (*(*rbx_9 + 0x38))(rbx_9)

sub_141442fa0(&arg1[0x43], &arg2[0x43])
sub_141442fa0(arg1 + 0x458, arg2 + 0x458)
int64_t* rcx_24 = arg2[0x48].q
int64_t* rbx_10 = arg1[0x48].q
arg1[0x48].q = rcx_24

if (rcx_24 != 0)
    (*(*rcx_24 + 0x30))()

if (rbx_10 != 0)
    (*(*rbx_10 + 0x38))(rbx_10)

sub_141442ee0(arg1 + 0x488, arg2 + 0x488)
sub_141442ee0(arg1 + 0x4b8, arg2 + 0x4b8)
void* rbx_11 = arg1 + 0x4e8
int64_t i_5 = 2
int64_t* r14_1 = arg2 - arg1
int64_t i_6 = 2
int64_t i_1

do
    int64_t* rcx_28 = *(r14_1 + rbx_11)
    int64_t* rdi_1 = *rbx_11
    *rbx_11 = rcx_28
    
    if (rcx_28 != 0)
        (*(*rcx_28 + 0x30))()
    
    if (rdi_1 != 0)
        (*(*rdi_1 + 0x38))(rdi_1)
    
    rbx_11 += 8
    i_1 = i_6
    i_6 -= 1
while (i_1 != 1)
int64_t* rbx_12 = arg1 + 0x4f8
int64_t i_7 = 2
int64_t i_2

do
    int64_t* rcx_30 = *(rbx_12 + r14_1)
    int64_t* rdi_2 = *rbx_12
    *rbx_12 = rcx_30
    
    if (rcx_30 != 0)
        (*(*rcx_30 + 0x30))()
    
    if (rdi_2 != 0)
        (*(*rdi_2 + 0x38))(rdi_2)
    
    rbx_12 = &rbx_12[1]
    i_2 = i_7
    i_7 -= 1
while (i_2 != 1)
int64_t* rbx_13 = arg1 + 0x508
int64_t i_3

do
    int64_t* rcx_32 = *(rbx_13 + r14_1)
    int64_t* rdi_3 = *rbx_13
    *rbx_13 = rcx_32
    
    if (rcx_32 != 0)
        (*(*rcx_32 + 0x30))()
    
    if (rdi_3 != 0)
        (*(*rdi_3 + 0x38))(rdi_3)
    
    rbx_13 = &rbx_13[1]
    i_3 = i_5
    i_5 -= 1
while (i_3 != 1)
*(arg1 + 0x518) = *(arg2 + 0x518)
*(arg1 + 0x51c) = *(arg2 + 0x51c)
arg1[0x52].d = arg2[0x52].d
*(arg1 + 0x524) = *(arg2 + 0x524)
*(arg1 + 0x528) = *(arg2 + 0x528)
*(arg1 + 0x52c) = *(arg2 + 0x52c)
sub_141442ee0(&arg1[0x53], &arg2[0x53])
sub_141442ee0(&arg1[0x56], &arg2[0x56])
sub_141442ee0(&arg1[0x59], &arg2[0x59])

if (&arg1[0x5c] != &arg2[0x5c])
    int64_t rdi_4 = sx.q(*(arg2 + 0x608))
    void* rbx_14 = arg1 + 0x5f8
    sub_1405a4aa0(rbx_14, 0, rdi_4.d, zx.q((i_5 + 4).d))
    void* rax_36 = arg2[0x60].q
    void* rdx_8 = arg2 + 0x5f8
    void* r9_2 = *(rbx_14 + 8)
    
    if (rax_36 != 0)
        rdx_8 = rax_36
    
    if (r9_2 != 0)
        rbx_14 = r9_2
    
    memcpy(rbx_14, rdx_8, (rdi_4 << 2).d)
    *(arg1 + 0x608) = rdi_4.d
    sub_141442520(&arg1[0x5c], &arg2[0x5c])

sub_141442ee0(&arg1[0x61], &arg2[0x61])
return arg1
