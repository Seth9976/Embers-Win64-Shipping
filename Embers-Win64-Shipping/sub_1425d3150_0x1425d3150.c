// 函数: sub_1425d3150
// 地址: 0x1425d3150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x28)
int32_t result

if (rcx == 0)
    result = sub_1425d2d00(arg2, arg1 + 0x30)
else
    sub_140cd85e0(rcx)
    result = sub_1425d2f00(arg2, *(arg1 + 0x28))

if (&arg2[0x1f] != arg1 + 0x128)
    int64_t rcx_3 = arg2[0x1f]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    arg2[0x1f] = *(arg1 + 0x128)
    *(arg1 + 0x128) = 0
    arg2[0x20].d = *(arg1 + 0x130)
    result = *(arg1 + 0x134)
    *(arg2 + 0x104) = result
    *(arg1 + 0x130) = 0

if (&arg2[0x21] != arg1 + 0x138)
    int64_t rcx_4 = arg2[0x21]
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    arg2[0x21] = *(arg1 + 0x138)
    *(arg1 + 0x138) = 0
    arg2[0x22].d = *(arg1 + 0x140)
    result = *(arg1 + 0x144)
    *(arg2 + 0x114) = result
    *(arg1 + 0x140) = 0

if (&arg2[0x23] != arg1 + 0x148)
    int32_t i_1 = arg2[0x24].d
    void* rbx_2 = arg2[0x23]
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_5 = *(rbx_2 + 0x10)
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            int64_t rcx_6 = *rbx_2
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rbx_2 += 0x28
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_2 = arg2[0x23]
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
    
    arg2[0x23] = *(arg1 + 0x148)
    *(arg1 + 0x148) = 0
    arg2[0x24].d = *(arg1 + 0x150)
    result = *(arg1 + 0x154)
    *(arg2 + 0x124) = result
    *(arg1 + 0x150) = 0

if (&arg2[0x25] != arg1 + 0x158)
    int64_t rcx_8 = arg2[0x25]
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    arg2[0x25] = *(arg1 + 0x158)
    *(arg1 + 0x158) = 0
    arg2[0x26].d = *(arg1 + 0x160)
    result = *(arg1 + 0x164)
    *(arg2 + 0x134) = result
    *(arg1 + 0x160) = 0

if (&arg2[0x27] != arg1 + 0x168)
    int64_t rcx_9 = arg2[0x27]
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    arg2[0x27] = *(arg1 + 0x168)
    *(arg1 + 0x168) = 0
    arg2[0x28].d = *(arg1 + 0x170)
    result = *(arg1 + 0x174)
    *(arg2 + 0x144) = result
    *(arg1 + 0x170) = 0

if (&arg2[0x29] != arg1 + 0x178)
    int64_t rcx_10 = arg2[0x29]
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    arg2[0x29] = *(arg1 + 0x178)
    *(arg1 + 0x178) = 0
    arg2[0x2a].d = *(arg1 + 0x180)
    result = *(arg1 + 0x184)
    *(arg2 + 0x154) = result
    *(arg1 + 0x180) = 0

return result
