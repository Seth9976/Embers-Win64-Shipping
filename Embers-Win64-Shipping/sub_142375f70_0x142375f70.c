// 函数: sub_142375f70
// 地址: 0x142375f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = data_143de5480
int64_t rbx = data_143f59628
int64_t rcx

if (rax == 0)
    rcx = 0
else
    bool cond:0_1 = GetCurrentThreadId() != data_143de5470
    rax = data_143de5480
    rcx.b = cond:0_1

int32_t r15 = *(rbx + (rcx << 2))
int64_t rbx_1 = data_143f59640
int64_t rcx_1

if (rax == 0)
    rcx_1 = 0
else
    rcx_1.b = GetCurrentThreadId() != data_143de5470

int32_t r14 = *(rbx_1 + (rcx_1 << 2))
int32_t rbp = 4
int64_t* rcx_2 = arg2[1]
int32_t* rdx = *rcx_2

if (&rdx[1] u<= rcx_2[1])
    *(arg1 + 0x48) = *rdx
    int64_t* rax_5 = arg2[1]
    *rax_5 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x48, arg3)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x48, 4)

int64_t* rcx_4 = arg2[1]
int32_t* rdx_2 = *rcx_4
int32_t arg_8

if (&rdx_2[1] u> rcx_4[1])
    int32_t* rdx_3 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_3, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_3, 4)
else
    arg_8 = *rdx_2
    *rcx_4 += 4

int32_t rdx_4 = arg_8
int32_t rax_10 = 0

if (r15 != 0)
    rax_10 = *(arg1 + 0x48)

int32_t rcx_8 = (rdx_4 ^ *(arg1 + 0x44)) & 1
*(arg1 + 0x48) = rax_10
int32_t rax_11

if (r15 == 0 || (rdx_4.b & 2) == 0)
    rax_11 = 0
else
    rax_11 = 2

if (r14 == 0 || (4 & rdx_4.b) == 0)
    rbp = 0

int32_t rcx_13 = ((((rcx_8 ^ *(arg1 + 0x44)) & 0xfffffffd) | rax_11) & 0xfffffffb) | rbp
int32_t r8

if (r14 == 0 || (rdx_4.b & 8) == 0)
    r8 = 0
else
    r8 = 8

*(arg1 + 0x44) = (((r8 | rcx_13) ^ rdx_4) & 0x70) ^ ((rcx_13 & 0xfffffff7) | r8)
sub_1422d1490(arg1 + 0x70, arg2, arg3)
sub_1422aba70(arg1 + 0xf8, arg2, arg3)
sub_1422aba70(arg1 + 0x138, arg2, arg3)
sub_1422abc50(arg1 + 0x178, arg2, arg3)
void** var_118
sub_1422891d0(&var_118, 0)
void** var_d8
sub_1422891d0(&var_d8, 0)
void** var_98
sub_1422891d0(&var_98, 0)
void** var_58
sub_1422891d0(&var_58, 0)
void*** rbx_2 = &var_118

if ((r15 != 0 || r14 != 0) && (*(arg1 + 0x44) & 0x27) != 0)
    rbx_2 = *(arg1 + 0x1f8)
    
    if (rbx_2 == 0)
        void*** rax_17 = j_sub_140a82f30(0x100)
        rbx_2 = rax_17
        
        if (rax_17 == 0)
            rbx_2 = nullptr
        else
            memset(rax_17, 0, 0x100)
            sub_1422891d0(rbx_2, 0)
            sub_1422891d0(&rbx_2[8], 0)
            sub_1422891d0(&rbx_2[0x10], 0)
            sub_1422891d0(&rbx_2[0x18], 0)
        
        *(arg1 + 0x1f8) = rbx_2

sub_1422abc50(rbx_2, arg2, arg3)

if ((*(arg1 + 0x44) & 4) == 0)
    sub_142297830(rbx_2)

sub_1422abc50(arg1 + 0x1b8, arg2, arg3)

if ((*(arg1 + 0x44) & 2) == 0)
    sub_142297830(arg1 + 0x1b8)

sub_1422abc50(&rbx_2[8], arg2, arg3)

if ((*(arg1 + 0x44) & 8) == 0)
    sub_142297830(&rbx_2[8])

sub_1422abc50(&rbx_2[0x10], arg2, arg3)

if ((*(arg1 + 0x44) & 0x20) == 0)
    sub_142297830(&rbx_2[0x10])

sub_1422abc50(&rbx_2[0x18], arg2, arg3)
char rax_18 = (*(arg1 + 0x44)).b

if ((rax_18 & 1) == 0)
    sub_142297830(&rbx_2[0x18])
    rax_18 = (*(arg1 + 0x44)).b

if ((rax_18 & 0x40) == 0)
    (*(*(arg1 + 0x210) + 0x20))(arg1 + 0x210)

return sub_142351cf0(&var_118)
