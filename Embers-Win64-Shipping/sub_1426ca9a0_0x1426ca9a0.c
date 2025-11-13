// 函数: sub_1426ca9a0
// 地址: 0x1426ca9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[0x26].d
int64_t* rbx = arg1[0x25]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[0x25]

if (rbx != 0)
    sub_140a74f90(rbx)

sub_1407e4310(&arg1[0x22])
arg1[0x21].d = 0
int64_t rcx_3 = arg1[0x20]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_1426d50b0(&arg1[0x18], 0)
int64_t rcx_5 = arg1[0x1c]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x18]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_1405ae200(&arg1[0xe])
uint64_t result = sub_140745b20(&arg1[0xc])
int64_t rcx_9 = arg1[8]

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = arg1[3]

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = *arg1

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
