// 函数: sub_1426c8670
// 地址: 0x1426c8670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426c7f90(arg1, arg2)
*arg1 = &data_14346f850
arg1[5] = &data_14346fb30
arg1[0x14] = 0
int64_t var_28 = 0
int64_t var_20 = 0
sub_1405947f0(&var_28, 8)
int32_t r14 = var_20:4.d
int32_t rbp = var_20.d + 8
var_20.d = rbp

if (rbp s> r14)
    sub_140594770(&var_28)
    r14 = var_20:4.d
    rbp = var_20.d

int64_t rdi = var_28
sub_1405a7220(rdi, 8, "Move To", 8, 0x3f)

if (&arg1[6] != &var_28)
    int64_t rcx_3 = arg1[6]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    arg1[6] = rdi
    arg1[7].d = rbp
    *(arg1 + 0x3c) = r14
else if (rdi != 0)
    sub_140a74f90(rdi)

int64_t* rax = sub_14272b250()
void* rax_1 = rax[0x23]

if (rax_1 == 0)
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    rax_1 = rax[0x23]

arg1[0xd].d &= 0xfffffffd
int32_t rax_6 = ((zx.d(*(rax_1 + 0x97)) << 0xa ^ *(arg1 + 0xac)) & 0x400) ^ *(arg1 + 0xac)
*(arg1 + 0xac) = rax_6
arg1[0xd].d |= (not.d(rax_6 u>> 9) & 2) | 4
int64_t* rax_11 = sub_14272b250()
void* rax_12 = rax_11[0x23]

if (rax_12 == 0)
    int64_t rdx_2 = *rax_11
    (*(rdx_2 + 0x390))(rax_11, rdx_2)
    rax_12 = rax_11[0x23]

arg1[0x13].d = *(rax_12 + 0x88)
int64_t* rax_14 = sub_14272b250()
void* rax_15 = rax_14[0x23]

if (rax_15 == 0)
    int64_t rdx_3 = *rax_14
    (*(rdx_3 + 0x390))(rax_14, rdx_3)
    rax_15 = rax_14[0x23]

int32_t rax_20 = ((zx.d(*(rax_15 + 0x94)) << 7 ^ *(arg1 + 0xac)) & 0x80) ^ *(arg1 + 0xac)
int32_t rcx_12 = ((rax_20 u>> 2 ^ rax_20) & 0x20) ^ rax_20
*(arg1 + 0xac) = (((rcx_12 * 2) ^ rcx_12) & 0x40) ^ rcx_12
int64_t* rax_25 = sub_14272b250()
void* rax_26 = rax_25[0x23]

if (rax_26 == 0)
    int64_t rdx_4 = *rax_25
    (*(rdx_4 + 0x390))(rax_25, rdx_4)
    rax_26 = rax_25[0x23]

*(arg1 + 0xac) ^= ((zx.d(*(rax_26 + 0x96)) * 2) ^ *(arg1 + 0xac)) & 2
int64_t* rax_31 = sub_14272b250()
void* rax_32 = rax_31[0x23]

if (rax_32 == 0)
    int64_t rdx_5 = *rax_31
    (*(rdx_5 + 0x390))(rax_31, rdx_5)
    rax_32 = rax_31[0x23]

arg1[0x15].d = arg1[0x13].d f* 0.949999988f
*(arg1 + 0xac) = (((zx.d(*(rax_32 + 0x95)) << 2 ^ *(arg1 + 0xac)) & 4) ^ *(arg1 + 0xac)) | 0x318
void* rax_39 = sub_142452380()
void arg_8
sub_1426a9410(&arg1[0xe], arg1, *sub_140b58260(&arg_8, u"BlackboardKey", 1), rax_39)
sub_1426a98a0(&arg1[0xe], arg1, *sub_140b58260(&arg_8, u"BlackboardKey", 1))
return arg1
