// 函数: sub_140a38070
// 地址: 0x140a38070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* rax_2 = *arg4
void** var_30 = nullptr
int32_t var_24 = 4
int32_t i_2 = 1
void* var_50 = rax_2

if (rax_2 != 0)
    *(rax_2 + 0x48) += 1

int64_t rcx = *arg2
int64_t rax_3 = arg2[2]
arg2[2] = 0
int128_t zmm1 = *(arg2 + 0x30)
int128_t var_88 = *(arg2 + 0x20)

if (rcx != 0)
    *arg2 = 0

void var_68
int64_t* rax_4 = sub_140958c20(&var_68, &var_50, 0xff)
void* rcx_2 = *rax_4
*(rcx_2 + 0x10) = rcx
*(rcx_2 + 0x20) = rax_3
int128_t* var_98_1 = nullptr
*(rcx_2 + 0x30) = var_88
*(rcx_2 + 0x40) = zmm1
int64_t rax_7 = rcx

if (*(rcx_2 + 0x10) != 0)
    rax_7 = 0

*(rcx_2 + 0x50) = arg5
void* rcx_3 = *rax_4
int32_t r8 = rax_4[2].d
int64_t* rdx_1 = rax_4[1]
void* rax_9 = *(rcx_3 + 0x68)
*arg1 = rax_9

if (rax_9 != 0)
    *(rax_9 + 0x48) += 1

int64_t* r9
r9.b = 1
sub_1409787e0(rcx_3, rdx_1, r8, r9.b)

if (rax_7 != 0)
    int128_t* rcx_4 = &var_88
    
    if (var_98_1 != 0)
        rcx_4 = var_98_1
    
    (*(*rcx_4 + 0x10))(rcx_4)

void** rcx_6 = var_30
void** rbx = &var_50
int32_t i_1 = i_2

if (rcx_6 != 0)
    rbx = rcx_6

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rcx_5 = *rbx
        
        if (rcx_5 != 0)
            rcx_5[9].d -= 1
            
            if (rcx_5[9].d == 1)
                sub_140a2f6e0(rcx_5)
        
        rbx = &rbx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_6 = var_30

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

if (*arg2 != 0)
    void* rdx_2 = arg2[2]
    void* rcx_7 = &arg2[4]
    
    if (rdx_2 != 0)
        rcx_7 = rdx_2
    
    int64_t rdx_3 = *rcx_7
    (*(rdx_3 + 0x10))(rcx_7, rdx_3)

__security_check_cookie(rax_1 ^ &var_d8)
return arg1
