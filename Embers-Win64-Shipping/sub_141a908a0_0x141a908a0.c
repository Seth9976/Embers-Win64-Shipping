// 函数: sub_141a908a0
// 地址: 0x141a908a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14303f920
sub_141a906a0(&arg1[0xd9])
sub_141a90470(&arg1[0xd7])
sub_141a90470(&arg1[0xd5])
sub_141a90530(&arg1[0xd3])
int64_t rcx_4 = arg1[0xd1]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0xcf]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0xcd]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0xcb]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_141a91000(&arg1[0x94])
void* rbx = &arg1[0x7d]
int64_t rcx_9 = *rbx

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t i_6 = 3
int64_t i

do
    rbx -= 0x50
    sub_1405ae200(rbx)
    i = i_6
    i_6 -= 1
while (i != 1)
int64_t i_5 = 2
void* rdi = &arg1[0x5f]
int64_t i_1

for (i_1 = 2; i_1 != 0; )
    int64_t rcx_11 = *(rdi - 0x10)
    rdi -= 0x10
    i_1 -= 1
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

sub_1405ae200(&arg1[0x51])
arg1[0x4f].d = i_1.d
int64_t rcx_13 = arg1[0x4e]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

sub_140597460(&arg1[0x46])
int64_t rcx_15 = arg1[0x44]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

void* rbx_1 = &arg1[0x37]
sub_1405ae180(rbx_1)

for (int64_t i_2 = 2; i_2 != 0; )
    int64_t rcx_17 = *(rbx_1 - 0x10)
    rbx_1 -= 0x10
    i_2 -= 1
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)

int64_t i_3 = 2
void* rdi_1 = &arg1[0x33]

do
    int64_t rcx_18 = *(rdi_1 - 0x10)
    rdi_1 -= 0x10
    i_3 -= 1
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
while (i_3 != 0)

int64_t i_4 = 2
void* r14 = &arg1[0x2f]

do
    int32_t j_1 = *(r14 - 8)
    r14 -= 0x10
    void* rbx_2 = *r14
    i_4 -= 1
    
    if (j_1 != 0)
        int32_t j
        
        do
            int64_t rcx_19 = *(rbx_2 + 0x30)
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            int64_t rcx_20 = *(rbx_2 + 0x18)
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
            
            int64_t rcx_21 = *rbx_2
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            rbx_2 += 0x70
            j = j_1
            j_1 -= 1
        while (j != 1)
        rbx_2 = *r14
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
while (i_4 != 0)

void* rbx_3 = &arg1[0x2b]

do
    int64_t rcx_23 = *(rbx_3 - 0x10)
    rbx_3 -= 0x10
    i_5 -= 1
    
    if (rcx_23 != 0)
        sub_140a74f90(rcx_23)
while (i_5 != 0)

arg1[0x26].d = i_5.d
int64_t rcx_24 = arg1[0x25]

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

void* result = sub_140597460(&arg1[0x1d])
int64_t rcx_26 = arg1[0x19]

if (rcx_26 == 0)
    return result

return sub_140a74f90(rcx_26)
