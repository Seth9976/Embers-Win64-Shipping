// 函数: sub_1428077a0
// 地址: 0x1428077a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r9 = arg3

if (arg2 u<= arg1)
    return 

if (arg2 - arg1 + 0xb u>= 0x30)
    void* r8 = &arg1[5]
    
    do
        if (arg1 != 0)
            *arg1 = *r9
            *(r8 - 0x10) = r9[1]
            *(r8 - 0xc) = r9[2]
        
        if (r8 != 8)
            *(r8 - 8) = r9[3]
            *(r8 - 4) = r9[4]
            *r8 = r9[5]
        
        if (r8 != -4)
            *(r8 + 4) = r9[6]
            *(r8 + 8) = r9[7]
            *(r8 + 0xc) = r9[8]
        
        if (r8 != -0x10)
            *(r8 + 0x10) = r9[9]
            *(r8 + 0x14) = r9[0xa]
            *(r8 + 0x18) = r9[0xb]
        
        r9 = &r9[0xc]
        arg1 = &arg1[0xc]
        r8 += 0x30
    while (arg1 u< arg2 - 0x24)

if (arg1 u>= arg2)
    return 

void* r9_1 = &r9[2]

do
    if (arg1 != 0)
        *arg1 = *(r9_1 - 8)
        arg1[1] = *(r9_1 - 4)
        arg1[2] = *r9_1
    
    arg1 = &arg1[3]
    r9_1 += 0xc
while (arg1 u< arg2)
