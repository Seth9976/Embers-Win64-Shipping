// 函数: sub_140790320
// 地址: 0x140790320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

AcquireSRWLockShared(arg1)
int32_t arg_8
sub_14078ef10(&arg1[1], &arg_8, *arg3)
int64_t rax = sx.q(arg_8)
void* const rax_3

if (rax.d == 0xffffffff)
    rax_3 = nullptr
else
    rax_3 = &arg1[rax * 6]

void* rdx_1 = rax_3 + 8

if (rax_3 == 0)
    rdx_1 = nullptr

void* var_48

if (rdx_1 != 0)
    var_48 = *(rdx_1 + 8)
    void* rax_5 = *(rdx_1 + 0x10)
    void* var_40 = rax_5
    
    if (rax_5 != 0)
        *(rax_5 + 8) += 1
    
    sub_14077e9f0(arg2, *(rdx_1 + 0x18), &var_48)
    ReleaseSRWLockShared(arg1)
    return arg2

ReleaseSRWLockShared(arg1)
AcquireSRWLockExclusive(arg1)
int64_t rax_7 = *arg3
void* rax_8 = sub_14077b3d0(&arg1[1], (rax_7 u>> 0x20).d ^ rax_7.d, arg3)
*(rax_8 + 0x18) = arg4
void*** rax_9 = sub_14077b680(arg3)
var_48 = &rax_9[2]
void*** rbx_1 = rax_9
void*** rdi = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1
    rbx_1 = rax_9

void var_38

if (rax_8 + 8 == &var_38)
label_140790478:
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d != 1)
            rbx_1 = rax_9
        else
            (**rdi)(rdi)
            int32_t temp2_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp2_1 != 1)
                rbx_1 = rax_9
            else
                (*rdi)[1](rdi, 1)
                rbx_1 = rax_9
else
    *(rax_8 + 8) = var_48
    void*** rsi_1 = *(rax_8 + 0x10)
    
    if (rdi == rsi_1)
        goto label_140790478
    
    *(rax_8 + 0x10) = rdi
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d != 1)
            rbx_1 = rax_9
        else
            (**rsi_1)(rsi_1)
            int32_t temp5_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp5_1 != 1)
                rbx_1 = rax_9
            else
                (*rsi_1)[1](rsi_1, 1)
                rbx_1 = rax_9

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*rbx_1)[1](rbx_1, 1)

var_48 = *(rax_8 + 8)
void* rax_17 = *(rax_8 + 0x10)
void* var_40_2 = rax_17

if (rax_17 != 0)
    *(rax_17 + 8) += 1

sub_14077e9f0(arg2, *(rax_8 + 0x18), &var_48)
ReleaseSRWLockExclusive(arg1)
return arg2
