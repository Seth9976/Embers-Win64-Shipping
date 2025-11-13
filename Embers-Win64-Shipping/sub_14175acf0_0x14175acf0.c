// 函数: sub_14175acf0
// 地址: 0x14175acf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int32_t r15 = *(*(arg1 + 0x10) + 0x18)
int32_t rax_1 = *(arg1 + 0x84)
*(arg1 + 0x80) = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405dadb0(arg1 + 0x78, 0)

int32_t rax_2 = *(arg1 + 0xac)
int64_t* rbx = *(arg1 + 0xa0)
int32_t i_2 = *(arg1 + 0xa8)

if (rax_2 s< 0)
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_2 = *rbx
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rbx = &rbx[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rax_2 = *(arg1 + 0xac)
    
    *(arg1 + 0xa8) = 0
    
    if (rax_2 != 0)
        sub_1405a5410(arg1 + 0xa0, 0)
else
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t rcx_1 = *rbx
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx = &rbx[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0xa8) = 0

int32_t rax_3 = *(arg1 + 0x24)
*(arg1 + 0x20) = 0

if (rax_3 s< 0 && rax_3 != 0)
    sub_1405dadb0(arg1 + 0x18, 0)

if (r15 s> 0)
    do
        int64_t rbx_1 = sx.q(*(arg1 + 0x80))
        int32_t rax_4 = (rbx_1 + 1).d
        *(arg1 + 0x80) = rax_4
        
        if (rax_4 s> *(arg1 + 0x84))
            sub_1405a4cf0(arg1 + 0x78)
        
        *(*(arg1 + 0x78) + (rbx_1 << 2)) = rbp
        rbp += 1
    while (rbp s< r15)

return sub_14175b0b0(arg1, arg1 + 0x78, arg2, arg3, arg4.d)
