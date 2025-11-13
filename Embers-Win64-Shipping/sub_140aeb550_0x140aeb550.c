// 函数: sub_140aeb550
// 地址: 0x140aeb550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x44)
int64_t* rbx = *(arg1 + 0x38)
int32_t i_4 = *(arg1 + 0x40)

if (result s< 0)
    if (i_4 != 0)
        int32_t i
        
        do
            int64_t rcx_1 = *rbx
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx = &rbx[2]
            i = i_4
            i_4 -= 1
        while (i != 1)
        result = *(arg1 + 0x44)
    
    *(arg1 + 0x40) = 0
    
    if (result != 0)
        result = sub_14061cd70(arg1 + 0x38, 0)
else
    if (i_4 != 0)
        int32_t i_1
        
        do
            int64_t rcx = *rbx
            
            if (rcx != 0)
                result = sub_140a74f90(rcx)
            
            rbx = &rbx[2]
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x40) = 0

int32_t i_5 = *(arg1 + 0x28)

if (i_5 != 0)
    void* rbx_2 = *(arg1 + 0x20) + 0x18
    int32_t i_2
    
    do
        int64_t rcx_3 = *(rbx_2 + 0x20)
        
        if (rcx_3 != 0)
            result = sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *rbx_2
        
        if (rcx_4 != 0)
            result = sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = *(rbx_2 - 0x10)
        
        if (rcx_5 != 0)
            result = sub_140a74f90(rcx_5)
        
        rbx_2 += 0x58
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

bool cond:0 = *(arg1 + 0x2c) == 0
*(arg1 + 0x28) = 0

if (not(cond:0))
    result = sub_140775cf0(arg1 + 0x20, 0)

int32_t i_6 = *(arg1 + 0x10)
int64_t* rbx_3 = *(arg1 + 8)

if (i_6 != 0)
    int32_t i_3
    
    do
        int64_t rcx_7 = *rbx_3
        
        if (rcx_7 != 0)
            result = sub_140a74f90(rcx_7)
        
        rbx_3 = &rbx_3[2]
        i_3 = i_6
        i_6 -= 1
    while (i_3 != 1)

bool cond:1 = *(arg1 + 0x14) == 0
*(arg1 + 0x10) = 0

if (not(cond:1))
    result = sub_14061cd70(arg1 + 8, 0)

*(arg1 + 0x30) = 0
return result
