// 函数: sub_1408da9a0
// 地址: 0x1408da9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_1 = rdi + 0x1c
    int32_t i
    
    do
        *(rbx_1 - 0x14) = 0
        
        if (*(rbx_1 - 0x10) != 0)
            sub_140638cc0(rdi, 0)
        
        *(rbx_1 - 4) = 0
        
        if (*rbx_1 != 0)
            sub_1405c5570(rbx_1 - 0xc, 0)
        
        *(rbx_1 + 0xc) = 0
        
        if (*(rbx_1 + 0x10) != 0)
            sub_1405dadb0(rbx_1 + 4, 0)
        
        *(rbx_1 + 0x1c) = 0
        
        if (*(rbx_1 + 0x20) != 0)
            sub_1405dadb0(rbx_1 + 0x14, 0)
        
        *(rbx_1 + 0x2c) = 0
        
        if (*(rbx_1 + 0x30) != 0)
            sub_140679c00(rbx_1 + 0x24, 0)
        
        *(rbx_1 + 0x3c) = 0
        
        if (*(rbx_1 + 0x40) != 0)
            sub_140638cc0(rbx_1 + 0x34, 0)
        
        *(rbx_1 + 0x4c) = 0
        
        if (*(rbx_1 + 0x50) != 0)
            sub_14083ad30(rbx_1 + 0x44, 0)
        
        *(rbx_1 + 0x60) = data_143dbb1f8.q
        int32_t rax = data_143dbb200
        *(rbx_1 + 0x68) = rax
        *(rbx_1 + 0x54) = *(rbx_1 + 0x60)
        *(rbx_1 + 0x5c) = rax
        *(rbx_1 + 0x6c) = 0
        int64_t rcx_7 = *(rbx_1 + 0x74)
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        int64_t rcx_8 = *(rbx_1 + 0x44)
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int64_t rcx_9 = *(rbx_1 + 0x34)
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        int64_t rcx_10 = *(rbx_1 + 0x24)
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        int64_t rcx_11 = *(rbx_1 + 0x14)
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        int64_t rcx_12 = *(rbx_1 + 4)
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        int64_t rcx_13 = *(rbx_1 - 0xc)
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        int64_t rcx_14 = *rdi
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        rdi = &rdi[0x15]
        rbx_1 += 0xa8
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi = *arg1

if (rdi == 0)
    return 

return sub_140a74f90(rdi) __tailcall
