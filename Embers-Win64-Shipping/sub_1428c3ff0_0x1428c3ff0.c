// 函数: sub_1428c3ff0
// 地址: 0x1428c3ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rbx = arg1
int32_t rcx
int32_t* rax

if (arg2 == 0)
    rax = *arg1
    rcx = *rax
    rbx = &rax[2]
    
    if (*rbx == 0)
        return rax
    
label_1428c406d:
    
    if (rcx == 0xfffffffc)
        sub_1428c3ff0(rbx, 0, 0)
        rax = sub_1428a6780(*rbx)
        *rbx = 0
        return rax
    
    if (rcx == 1)
        if (arg2 == 0)
            *rbx = 0xffffffff
            return rax
        
        *rbx = *(arg2 + 0x20)
        return rax
    
    if (rcx == 5)
        *rbx = 0
        return rax
else
    rax = *(arg2 + 0x18)
    
    if (rax != 0)
        if (arg3 == 0)
            int64_t r8_1 = *(rax + 0x18)
            
            if (r8_1 != 0)
                jump(r8_1)
        else
            int64_t r8 = *(rax + 0x20)
            
            if (r8 != 0)
                jump(r8)
    
    if (*arg2 != 5)
        rcx = *(arg2 + 4)
        
        if (rcx == 1 || *rbx != 0)
            goto label_1428c406d
        
        return rax
    
    rcx = -1
    
    if (*rbx == 0)
        return rax
int64_t* rax_1 = *rbx

if (rcx == 6)
    int64_t rax_3 = sub_1428cd400(rax_1)
    *rbx = 0
    return rax_3

int64_t rax_2 = sub_1428f3260(rax_1, arg3)
*rbx = 0
return rax_2
