// 函数: sub_141f05150
// 地址: 0x141f05150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0xc5].d
int64_t* rcx
int64_t* r8

if (rax == 0)
    r8 = arg1[0xc4]
    rcx = nullptr
else
    rcx = arg1[0xc4]
    r8 = rcx

int64_t rax_1

if (rcx != 0)
    rax_1 = *rcx
label_141f051a9:
    (*(rax_1 + 0x38))(rcx, 0)
    int64_t rcx_1 = arg1[0xc4]
    
    if (rcx_1 != 0)
        arg1[0xc4] = sub_140a84c80(rcx_1, 0, 0)
    
    arg1[0xc5].d = 0
else if (rax != 0 && r8 != 0)
    rax_1 = *r8
    rcx = r8
    goto label_141f051a9
int64_t rcx_2 = arg1[0xc4]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t i_2 = 2
void* r14 = &arg1[0xb4]

for (int64_t i = 2; i != 0; )
    int64_t rcx_3 = *(r14 - 0x10)
    r14 -= 0x10
    i -= 1
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

int32_t i_3 = arg1[0xaf].d
int64_t* rdi = arg1[0xae]

if (i_3 != 0)
    int32_t i_1
    
    do
        sub_141f518b0(rdi)
        rdi = &rdi[5]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rdi = arg1[0xae]

if (rdi != 0)
    sub_140a74f90(rdi)

int64_t rcx_6 = arg1[0xa7]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0xa5]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0xa2]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

arg1[0xa1].d = 0
int64_t rcx_9 = arg1[0xa0]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

arg1[0x99].d = 0

if (*(arg1 + 0x4cc) != 0)
    sub_14090a730(&arg1[0x98], 0)

arg1[0x9e].d = 0xffffffff
*(arg1 + 0x4f4) = 0
sub_14059a8e0(&arg1[0x9a], 0)
int64_t rcx_12 = arg1[0x9c]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = arg1[0x98]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = arg1[0x96]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = arg1[0x94]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t rcx_16 = arg1[0x90]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

void* rdi_2 = &arg1[0x8e]
int64_t rcx_17 = *rdi_2

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

do
    int64_t rcx_18 = *(rdi_2 - 0x10)
    rdi_2 -= 0x10
    i_2 -= 1
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
while (i_2 != 0)

int64_t rcx_19 = arg1[0x88]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

sub_141f04bd0(&arg1[0x83])
int64_t rcx_21 = arg1[0x81]

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

return sub_140747130(arg1) __tailcall
