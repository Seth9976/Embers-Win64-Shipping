// 函数: sub_141f53310
// 地址: 0x141f53310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(&arg1[0xc4])
int64_t i_1 = 2
void* r14 = &arg1[0xb4]

for (int64_t i = 2; i != 0; )
    int64_t rcx_1 = *(r14 - 0x10)
    r14 -= 0x10
    i -= 1
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)

sub_141f517f0(&arg1[0xae])
int64_t rcx_3 = arg1[0xa7]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0xa5]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0xa2]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_1413c3130(&arg1[0x98])
int64_t rcx_7 = arg1[0x96]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0x94]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[0x90]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

void* rdi = &arg1[0x8e]
int64_t rcx_10 = *rdi

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

do
    int64_t rcx_11 = *(rdi - 0x10)
    rdi -= 0x10
    i_1 -= 1
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
while (i_1 != 0)

int64_t rcx_12 = arg1[0x88]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

sub_1408db3b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
