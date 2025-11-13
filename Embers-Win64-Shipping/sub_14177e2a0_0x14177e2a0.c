// 函数: sub_14177e2a0
// 地址: 0x14177e2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x40)
int64_t rdi = 0
uint64_t rsi_1 = sx.q(*(arg1 + 0x48)) << 3 u>> 3

if (rbx u> &rbx[sx.q(*(arg1 + 0x48))])
    rsi_1 = 0

if (rsi_1 != 0)
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            j_sub_140a74f90(rcx)
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != rsi_1)

*(arg1 + 0x18) = 0

if (*(arg1 + 0x1c) s<= 0xffffffff)
    sub_1407c4490(arg1 + 0x10, 0)

*(arg1 + 0x28) = 0

if (*(arg1 + 0x2c) s<= 0xffffffff)
    sub_1407c4490(arg1 + 0x20, 0)

int32_t rax_2 = *(arg1 + 0x3c)
void* rdi_1 = *(arg1 + 0x30)
int32_t i_2 = *(arg1 + 0x38)

if (rax_2 s< 0)
    if (i_2 != 0)
        void* rdi_3 = rdi_1 + 0x128
        int32_t i
        
        do
            int64_t rcx_4 = *rdi_3
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            rdi_3 += 0x140
            i = i_2
            i_2 -= 1
        while (i != 1)
        rax_2 = *(arg1 + 0x3c)
    
    *(arg1 + 0x38) = 0
    
    if (rax_2 != 0)
        sub_14177e9d0(arg1 + 0x30, 0)
else
    if (i_2 != 0)
        int64_t* rdi_2 = rdi_1 + 0x128
        int32_t i_1
        
        do
            int64_t rcx_3 = *rdi_2
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rdi_2 = &rdi_2[0x28]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x38) = 0

int32_t result = *(arg1 + 0x4c)
*(arg1 + 0x48) = 0

if (result s< 0 && result != 0)
    result = sub_1405c5570(arg1 + 0x40, 0)

*(arg1 + 0x78) = 0
return result
