// 函数: sub_1417eab70
// 地址: 0x1417eab70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = &arg1[2]
*arg1 = &data_142fdd538
void* rax = r8 + 0x50
int64_t i_1 = 2
int64_t i

do
    void* rdx_1 = rax - 0x10
    *r8 = data_143dbb0c0
    rax += 0x90
    *(r8 + 0x10) = data_143dbb0d0
    r8 += 0x90
    *(r8 - 0x70) = data_143dbb0e0
    *(rax - 0xb0) = 0
    *(rax - 0xa8) = 0
    *(rax - 0x90) = 0
    *(rax - 0x88) = 0
    *(rax - 0x84) = 0x80
    void* rcx = *(rax - 0x90)
    
    if (rcx != 0)
        rdx_1 = rcx
    
    *rdx_1 = 0
    *(rdx_1 + 8) = 0
    *(rax - 0x80) = 0xffffffff
    *(rax - 0x7c) = 0
    *(rax - 0x70) = 0
    *(rax - 0x68) = 0
    *(rax - 0x60) = 0
    *(rax - 0x58) = -1
    i = i_1
    i_1 -= 1
while (i != 1)
arg1[0x26] = 0
return arg1
