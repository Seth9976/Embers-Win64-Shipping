// 函数: sub_140b78990
// 地址: 0x140b78990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b786a0(arg1 + 0x1a8)
*(arg1 + 0x1a0) = 0
int64_t rcx_1 = *(arg1 + 0x198)

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_140b7c310(arg1 + 0x158, 0)
int64_t rcx_3 = *(arg1 + 0x178)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0x158)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

*(arg1 + 0x150) = 0
int64_t rcx_5 = *(arg1 + 0x148)

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140b7c310(arg1 + 0x108, 0)
int64_t rcx_7 = *(arg1 + 0x128)

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = *(arg1 + 0x108)

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int32_t i_3 = *(arg1 + 0xf0)
int64_t* rdi = *(arg1 + 0xe8)

if (i_3 != 0)
    int32_t i
    
    do
        int64_t rcx_9 = *rdi
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rdi = &rdi[3]
        i = i_3
        i_3 -= 1
    while (i != 1)
    rdi = *(arg1 + 0xe8)

if (rdi != 0)
    sub_140a74f90(rdi)

int64_t result = sub_140b78470(arg1 + 0xd8)
int64_t rcx_12 = *(arg1 + 0xc8)

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

int32_t i_4 = *(arg1 + 0xc0)
int64_t* rdi_1 = *(arg1 + 0xb8)

if (i_4 != 0)
    int32_t i_1
    
    do
        int64_t rcx_13 = *rdi_1
        
        if (rcx_13 != 0)
            result = sub_140a74f90(rcx_13)
        
        rdi_1 = &rdi_1[2]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    rdi_1 = *(arg1 + 0xb8)

if (rdi_1 != 0)
    result = sub_140a74f90(rdi_1)

int32_t i_5 = *(arg1 + 0xb0)
int64_t* rdi_2 = *(arg1 + 0xa8)

if (i_5 != 0)
    int32_t i_2
    
    do
        int64_t rcx_15 = *rdi_2
        
        if (rcx_15 != 0)
            result = sub_140a74f90(rcx_15)
        
        rdi_2 = &rdi_2[2]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    rdi_2 = *(arg1 + 0xa8)

if (rdi_2 != 0)
    result = sub_140a74f90(rdi_2)

int64_t rcx_17 = *(arg1 + 0x98)

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

int64_t rcx_18 = *(arg1 + 0x88)

if (rcx_18 != 0)
    result = sub_140a74f90(rcx_18)

int64_t rcx_19 = *(arg1 + 0x78)

if (rcx_19 != 0)
    result = sub_140a74f90(rcx_19)

int64_t rcx_20 = *(arg1 + 0x68)

if (rcx_20 != 0)
    result = sub_140a74f90(rcx_20)

int64_t rcx_21 = *(arg1 + 0x58)

if (rcx_21 != 0)
    result = sub_140a74f90(rcx_21)

int64_t rcx_22 = *(arg1 + 0x48)

if (rcx_22 != 0)
    result = sub_140a74f90(rcx_22)

int64_t rcx_23 = *(arg1 + 0x38)

if (rcx_23 != 0)
    result = sub_140a74f90(rcx_23)

int64_t rcx_24 = *(arg1 + 0x28)

if (rcx_24 != 0)
    result = sub_140a74f90(rcx_24)

int64_t rcx_25 = *(arg1 + 0x18)

if (rcx_25 != 0)
    result = sub_140a74f90(rcx_25)

int64_t rcx_26 = *(arg1 + 8)

if (rcx_26 == 0)
    return result

return sub_140a74f90(rcx_26)
