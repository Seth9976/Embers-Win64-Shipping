// 函数: sub_14222aea0
// 地址: 0x14222aea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14222ad10(&arg1[0x17])
int64_t rcx_1 = arg1[0x15]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x13]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x11]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0xe]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int32_t i_2 = arg1[0xd].d
int64_t* rbx = arg1[0xc]

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_5 = *rbx
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        rbx = &rbx[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx = arg1[0xc]

if (rbx != 0)
    sub_140a74f90(rbx)

int32_t i_3 = arg1[0xb].d
int64_t* rbx_1 = arg1[0xa]

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_7 = *rbx_1
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        rbx_1 = &rbx_1[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_1 = arg1[0xa]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

return sub_140ae7180(arg1) __tailcall
