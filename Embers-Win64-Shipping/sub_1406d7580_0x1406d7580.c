// 函数: sub_1406d7580
// 地址: 0x1406d7580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18 = nullptr
int32_t i_5 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rsi = &var_18

if (rax_2 != 0)
    rsi = rax_2

void* var_28 = nullptr
int32_t i_4 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t* rax_4 = *(arg2 + 0x38)
int64_t* rdx_4 = &var_28

if (rax_4 != 0)
    rdx_4 = rax_4

int64_t rax_5 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
int64_t result = sub_1406ce540(rsi, rdx_4, arg3)
int32_t i_2 = i_4

if (i_2 != 0)
    void* rbx_2 = var_28 + 0xc8
    int32_t i
    
    do
        int64_t rcx_3 = *(rbx_2 + 0x30)
        
        if (rcx_3 != 0)
            result = sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *rbx_2
        
        if (rcx_4 != 0)
            result = sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = *(rbx_2 - 0x18)
        
        if (rcx_5 != 0)
            result = sub_140a74f90(rcx_5)
        
        int64_t rcx_6 = *(rbx_2 - 0x78)
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = *(rbx_2 - 0xa8)
        
        if (rcx_7 != 0)
            result = sub_140a74f90(rcx_7)
        
        int64_t rcx_8 = *(rbx_2 - 0xb8)
        
        if (rcx_8 != 0)
            result = sub_140a74f90(rcx_8)
        
        int64_t rcx_9 = *(rbx_2 - 0xc8)
        
        if (rcx_9 != 0)
            result = sub_140a74f90(rcx_9)
        
        rbx_2 += 0x178
        i = i_2
        i_2 -= 1
    while (i != 1)

void* rcx_10 = var_28

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int32_t i_3 = i_5

if (i_3 != 0)
    void* rbx_4 = var_18 + 0x40
    int32_t i_1
    
    do
        int64_t rcx_11 = *(rbx_4 + 0x18)
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        result = sub_1406cae40(rbx_4)
        int64_t rcx_13 = *(rbx_4 - 0x10)
        
        if (rcx_13 != 0)
            result = sub_140a74f90(rcx_13)
        
        int64_t rcx_14 = *(rbx_4 - 0x20)
        
        if (rcx_14 != 0)
            result = sub_140a74f90(rcx_14)
        
        int64_t rcx_15 = *(rbx_4 - 0x30)
        
        if (rcx_15 != 0)
            result = sub_140a74f90(rcx_15)
        
        int64_t rcx_16 = *(rbx_4 - 0x40)
        
        if (rcx_16 != 0)
            result = sub_140a74f90(rcx_16)
        
        rbx_4 += 0x70
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

void* rcx_17 = var_18

if (rcx_17 == 0)
    return result

return sub_140a74f90(rcx_17)
