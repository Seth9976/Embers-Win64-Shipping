// 函数: sub_142ab5e40
// 地址: 0x142ab5e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
int32_t** rbx = arg1

if (rdi.d s<= 0x22)
    arg1[8].d = 0x22
else
    int64_t* rax_1
    rax_1, arg1 = sub_142a7dd00(rdi + 0xc)
    
    if (rax_1 != 0)
        int32_t* r8 = *rbx
        *rax_1 = *r8
        arg1 = zx.q(r8[2])
        rax_1[1].d = arg1.d
        
        if (*(rbx + 0xc) != 0)
            arg1 = sub_142a7dcd0(*rbx)
        
        *rbx = rax_1
        rbx[1].d = rdi.d
        *(rbx + 0xc) = 1
    
    rbx[8].d = rdi.d

int32_t* result

if ((rdi - 1).d u> 0x3b9ac9fe || arg4 s> 0x3b9aca00 - rdi.d || arg4 s< 0xc4653602 - rdi.d)
    result = arg6
    *result = 0x10
else
    char temp0_1 = arg5
    arg5 = neg.b(arg5)
    arg1.b = sbb.b(arg1.b, arg1.b, temp0_1 != 0)
    **rbx = rdi.d
    arg1.b &= 0x80
    (*rbx)[1] = arg4
    (*rbx)[2].b = arg1.b
    result = sub_142b3be00(*rbx, arg2, rdi.d)
    
    if (*(rbx + 0x54) != 0)
        result = arg6
        *result = 5

return result
