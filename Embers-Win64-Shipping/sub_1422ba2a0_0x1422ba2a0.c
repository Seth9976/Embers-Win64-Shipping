// 函数: sub_1422ba2a0
// 地址: 0x1422ba2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = zx.q((arg2 u>> 1).b) & 1
uint8_t r9_1 = (arg2 u>> 3).b & 1
uint8_t rdx = (arg2 u>> 4).b & 1
int64_t rcx_2 = (((rbx << 1) + 1) & 0xfffffffffffffffb) | 8
char r10 = arg2.b & 1

if (r10 != 0)
    rcx_2 = (((rbx << 1) + 1) | 4) & 0xfffffffffffffff7

uint8_t r8_1 = (arg2 u>> 2).b & 1
int64_t rcx_4

if (r8_1 == 0)
    rcx_4 = rcx_2 & 0xfffffffffffff7ef
else
    int64_t rcx_3 = rcx_2 | 0x10
    
    if (rdx != 0)
        rcx_4 = rcx_3 & 0xfffffffffffff7ff
    else
        rcx_4 = rcx_3 | 0x800

int64_t rcx_7
int64_t rcx_5

if (r8_1 != 0)
    rcx_5 = rcx_4 & 0xffffffffffffffdf
label_1422ba32b:
    int64_t rcx_8 = rcx_5 | 0x40
    
    if (r8_1 != 0)
        if (rdx == 0)
            rcx_7 = rcx_8 | 0x1000
        else
            rcx_7 = rcx_8 & 0xffffffffffffefff
    else if (r9_1 == 0 || rdx != 0)
        rcx_7 = rcx_8 & 0xffffffffffffefff
    else
        rcx_7 = rcx_8 | 0x1000
else
    rcx_5 = rcx_4 | 0x20
    
    if (r9_1 != 0)
        goto label_1422ba32b
    
    rcx_7 = rcx_5 & 0xffffffffffffefbf
int64_t rcx_9

if (rbx.b != 0 || r10 != 0)
    rcx_9 = rcx_7 | 0x80
else
    rcx_9 = rcx_7 & 0xffffffffffffff7f

int64_t rcx_13

if (rdx != 0 || r10 != 0)
    int64_t rcx_11 = rcx_9 | 0x200
    
    if (rdx == 0)
        rcx_13 = (rcx_11 & 0xfffffffffffffbff) | 0x2000
    else
        rcx_13 = (rcx_11 | 0x400) & 0xffffffffffffdfff
else
    rcx_13 = (rcx_9 & 0xfffffffffffff9ff) | 0x2000

*arg1 = (rcx_13 & 0xffffffffffff7fff) | 0x100
return arg1
