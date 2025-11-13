// 函数: sub_142c53be0
// 地址: 0x142c53be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
char r14 = arg3
int64_t rbp = sx.q(arg2)
void* rdi = *rbx

if (*(rdi + 0x4e78) != 0)
    return 0

sub_142c5cc40(rdi, rbx)
data_143ccb8a0(*(rdi + 0x230))
int64_t rcx_2 = *(rdi + 0x228)
*(rdi + 0x230) = 0
int64_t rdx_1 = data_143ccb8a0(rcx_2)
*(rdi + 0x228) = 0

if (rbp.d u<= 0x2a && test_bit(0x40004800000, rbp))
    r14 = 1

int64_t r9_1 = *(rbx[0x87] + 0x18)

if (r9_1 != 0)
    int32_t rax_2
    rax_2, rdx_1 = r9_1(rbx, zx.q(rbp.d), zx.q(r14))
    rbp = zx.q(rax_2)

if (rbp.d != 0x2a)
    int32_t rax_3
    rax_3, arg4 = sub_142c6ef90(rbx, rdx_1, arg4)
    
    if (rbp.d == 0 && rax_3 != 0)
        rbp = 0x2a

rbx[0x9a]

if (rbx[0x9e] != neg.q(rbx[0x9a]) && *(rdi + 0x5f2) == 0 && *(rbx + 0x3f1) == 0)
    *(rdi + 0x10) = 0
    return 0

*(rdi + 0x4e78) = 1
int64_t r8_1 = sub_142c59650(rbx)
int64_t* rdx_3 = rbx[0xd]

if (rdx_3 != 0)
    r8_1 = sub_142c5a710(rdi, rdx_3)
    rbx[0xd] = 0

int32_t i = 0

if (*(rdi + 0x4abc) u> 0)
    do
        r8_1 = data_143ccb8a0(*(rdi + zx.q(i) * 0x18 + 0x4ac0))
        i += 1
    while (i u< *(rdi + 0x4abc))

*(rdi + 0x4abc) = 0

if (*(rdi + 0x5f2) != 0 && rbx[0xa4].d != 2)
    if (rbx[0xa8].d != 2 || *(rbx + 0x3f1) != 0 || r14 != 0)
        goto label_142c53dd0
    
    goto label_142c53d5e

if (*(rbx + 0x3f1) != 0 || r14 != 0)
label_142c53dd0:
    sub_142c5c970(rbx, r14, arg4)
else
label_142c53d5e:
    char rax_7
    int512_t zmm2
    rax_7, zmm2 = sub_142c52a10(rdi, rbx, r8_1, arg4)
    
    if (rax_7 == 0)
        *(rdi + 0xa68) = 0
    else
        *(rdi + 0xa68) = rbx
        
        if (*(rbx + 0x3f7) != 0)
            rbx[0x24]
        else if (*(rbx + 0x3f6) != 0)
            rbx[0x2b]
        else if (*(rbx + 0x3f3) == 0)
            rbx[0x1b]
        else
            rbx[0x20]
        
        sub_142c64850(rdi, "Connection #%ld to host %s left intact\n", zx.q(*(rbx + 0x64)), zmm2)

*arg1 = 0
sub_142c5cb60(rdi)
return zx.q(rbp.d)
