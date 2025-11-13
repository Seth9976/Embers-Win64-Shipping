// 函数: sub_142b42a00
// 地址: 0x142b42a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg1

if (rax == 1)
    rax = arg1[1]
    
    if (rax == 1)
        sub_142a48d70(arg2, u"compact-long", 0, 0xffffffff)
        void* rax_1
        rax_1.b = 1
        return rax_1
    
    if (rax == 0)
        sub_142a48d70(arg2, u"compact-short", 0, 0xffffffff)
        void* rax_2
        rax_2.b = 1
        return rax_2
    
    *arg3 = 0x10
else if (rax == 0)
    wchar16 const* const rdx = u"engineering"
    
    if (arg1[1].b != 3)
        rdx = u"scientific"
    
    sub_142a48d70(arg2, rdx, 0, 0xffffffff)
    int16_t arg_8
    
    if (*(arg1 + 6) s> 1)
        arg_8 = 0x2f
        sub_142a48d70(arg2, &arg_8, 0, 1)
        sub_142b41510(sx.d(*(arg1 + 6)), arg2)
    
    void* rax_3
    
    if (*(arg1 + 6) s<= 1 || *arg3 s<= 0)
        if (arg1[2] != 0)
            arg_8 = 0x2f
            sub_142a48d70(arg2, &arg_8, 0, 1)
            sub_142b44af0(arg1[2], arg2)
        
        rax_3.b = 1
    else
        rax_3.b = 0
    
    return rax_3

rax.b = 0
return rax
