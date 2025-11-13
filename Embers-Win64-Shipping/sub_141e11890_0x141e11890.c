// 函数: sub_141e11890
// 地址: 0x141e11890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *(arg1 + 8)

if (rbx == 0)
    *arg2 = 0
    arg2[1].d = 0xffffffff
    *(arg2 + 0xc) = 0
    return arg2

void* rax = sub_1424682e0()
int32_t r9 = 0
int32_t r10 = -1
int32_t arg_8 = 0xffffffff
int32_t arg_c = 0

if (rax != 0)
    sub_140d3a3a0(&arg_8, rax)
    int64_t rax_1 = arg_8.q
    arg_8.q = rax_1
    r10 = rax_1.d
    r9 = arg_c

int32_t rdx_3 = (r10 - r9) ^ r9 u>> 0xd
int32_t rcx_3 = (0x9e3779b9 - r9 - rdx_3) ^ rdx_3 << 8
int32_t r11_3 = (r9 - rcx_3 - rdx_3) ^ rcx_3 u>> 0xd
int32_t rdx_6 = (rdx_3 - rcx_3 - r11_3) ^ r11_3 u>> 0xc
int32_t rcx_6 = (rcx_3 - rdx_6 - r11_3) ^ rdx_6 << 0x10
int32_t r11_6 = (r11_3 - rcx_6 - rdx_6) ^ rcx_6 u>> 5
int32_t rdx_9 = (rdx_6 - rcx_6 - r11_6) ^ r11_6 u>> 3
int32_t rcx_9 = (rcx_6 - rdx_9 - r11_6) ^ rdx_9 << 0xa
int32_t r11_9 = (r11_6 - rcx_9 - rdx_9) ^ rcx_9 u>> 0xf
void* rbx_1

if (rbx[0x42] == rbx[0x4b])
label_141e119ed:
    rbx_1 = sub_141e10690(rbx, r11_9, &arg_8)
else
    void* r8 = &rbx[0x4c]
    void* rcx_11 = *(r8 + 8)
    
    if (rcx_11 != 0)
        r8 = rcx_11
    
    int32_t rax_20 = *(r8 + (((sx.q(rbx[0x50]) - 1) & sx.q(r11_9)) << 2))
    
    if (rax_20 == 0xffffffff)
    label_141e119ed_1:
        rbx_1 = sub_141e10690(rbx, r11_9, &arg_8)
    else
        int32_t* rcx_12 = *(rbx + 0x100)
        int32_t* rdx_13 = rbx
        
        if (rcx_12 != 0)
            rdx_13 = rcx_12
        
        void* rcx_15
        
        while (true)
            rcx_15 = &rdx_13[sx.q(rax_20) * 0x10]
            
            if (*rcx_15 == r10 && *(rcx_15 + 4) == r9)
                break
            
            rax_20 = *(rcx_15 + 0x38)
            
            if (rax_20 == 0xffffffff)
                goto label_141e119ed_2
        
        if (rax_20 == 0xffffffff || rcx_15 == 0)
        label_141e119ed_2:
            rbx_1 = sub_141e10690(rbx, r11_9, &arg_8)
        else
            rbx_1 = rcx_15 + 8

int64_t rsi = sx.q(*(rbx_1 + 0x28))
int32_t rcx_17 = (rsi + 1).d
*(rbx_1 + 0x28) = rcx_17

if (rcx_17 s> *(rbx_1 + 0x2c))
    sub_14083a490(rbx_1, rsi.d)

void* rax_22 = *(rbx_1 + 0x20)

if (rax_22 != 0)
    rbx_1 = rax_22

*(rbx_1 + (rsi << 3)) = arg3
*arg2 = *(arg1 + 8)
arg2[1] = arg_8.q
return arg2
