// 函数: sub_1407bb4e0
// 地址: 0x1407bb4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg3 + 0x34) == 0)
    return 

int64_t* rbx_2

if (*(arg1 + 0xd0) == *(arg1 + 0xfc))
label_1407bb57e:
    rbx_2 = nullptr
else
    int64_t r11_1 = *(arg3 + 0x18)
    void* r9_1 = arg1 + 0x100
    void* r8 = *(r9_1 + 8)
    
    if (r8 != 0)
        r9_1 = r8
    
    int32_t rax_6 =
        *(r9_1 + ((sx.q((r11_1 u>> 0x20).d * 0x17 + r11_1.d) & (sx.q(*(arg1 + 0x110)) - 1)) << 2))
    
    if (rax_6 == 0xffffffff)
    label_1407bb57e_1:
        rbx_2 = nullptr
    else
        while (true)
            rbx_2 = sx.q(rax_6) * 0x78 + *(arg1 + 0xc8)
            
            if (*rbx_2 == r11_1)
                break
            
            rax_6 = rbx_2[0xe].d
            
            if (rax_6 == 0xffffffff)
                goto label_1407bb57e_2
        
        if (rax_6 == 0xffffffff)
        label_1407bb57e_2:
            rbx_2 = nullptr

int32_t r14_1 = *(*(arg3 + 0x20) + 0x10)
void* rax_8 = &rbx_2[7]

if (rbx_2 == 0)
    rax_8 = 0x30

int64_t rcx_3 = *rax_8
void* rax_9 = &rbx_2[0xb]

if (rbx_2 == 0)
    rax_9 = 0x50

int64_t* rdi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rax_10 = *rax_9
void* rax_11 = &rdi_3[2]

if (rax_11 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    rdi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_11 = &rdi_3[2]

*(arg2 + 0x30) = rax_11
*rdi_3 = rcx_3
rdi_3[1] = rax_10
void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_13 = &rcx_7[6]

if (rax_13 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_13 = &rcx_7[6]

*(arg2 + 0x30) = rax_13
void* r8_2 = &rbx_2[6]
void**** rax_14 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_14 = rcx_7
*(arg2 + 8) = &rcx_7[1]
rcx_7[1] = 0
*rcx_7 = &data_142da7798
rcx_7[2].d = 2

if (rbx_2 == 0)
    r8_2 = 0x28

rcx_7[3] = rdi_3
rcx_7[4].d = 1
*(rcx_7 + 0x24) = 3
rcx_7[5] = 0
sub_140888020(arg2, r14_1, r8_2)
void* r8_3 = &rbx_2[0xa]

if (rbx_2 == 0)
    r8_3 = 0x48

sub_140888020(arg2, r14_1, r8_3)
