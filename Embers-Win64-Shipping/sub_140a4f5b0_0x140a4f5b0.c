// 函数: sub_140a4f5b0
// 地址: 0x140a4f5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x68)

if (rdi == 0)
    return 

int64_t rcx = rdi[0xb]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = rdi[9]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = rdi[7]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = rdi[5]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int32_t i_1 = rdi[3].d
int64_t* rbx_1 = rdi[2]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_4 = *rbx_1
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = rdi[2]

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int64_t rcx_6 = *rdi

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

*(arg1 + 0x68) = 0
