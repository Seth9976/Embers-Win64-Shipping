// 函数: sub_142907ca0
// 地址: 0x142907ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint32_t count = arg5
int64_t rdi = 0
*arg3 = 0
void* r14 = arg4
void* rbx = arg2

if (count s<= 0)
    return 0

int32_t i = arg1[1]

if (i s> 0x50)
    sub_1428bc530()
    noreturn

int64_t rcx_1 = sx.q(*arg1)
int32_t r15_2 = i - rcx_1.d

if (r15_2 s<= count)
    if (rcx_1.d != 0)
        int64_t rdi_1 = sx.q(r15_2)
        memcpy(&arg1[2] + rcx_1, r14, rdi_1.d)
        r14 += rdi_1
        count -= r15_2
        rdi = sx.q(sub_142907fc0(arg1, rbx, &arg1[2], arg1[1]))
        rbx += rdi
        *arg1 = 0
        
        if ((arg1[0x17].b & 1) == 0)
            *rbx = 0xa
            rbx += 1
            rdi += 1
        
        *rbx = 0
        i = arg1[1]
    
    for (; count s>= i; i = arg1[1])
        if (rdi u> 0x7fffffff)
            goto label_142907ddd
        
        int32_t rax_4 = sub_142907fc0(arg1, rbx, r14, i)
        int64_t rdx_5 = sx.q(arg1[1])
        int64_t rax_5 = sx.q(rax_4)
        r14 += rdx_5
        count -= rdx_5.d
        rbx += rax_5
        rdi += rax_5
        
        if ((arg1[0x17].b & 1) == 0)
            *rbx = 0xa
            rbx += 1
            rdi += 1
        
        *rbx = 0
    
    if (rdi u> 0x7fffffff)
    label_142907ddd:
        *arg3 = 0
        return 0
    
    if (count != 0)
        memcpy(&arg1[2], r14, count)
    
    *arg1 = count
    *arg3 = rdi.d
else
    memcpy(&arg1[2] + rcx_1, r14, count)
    *arg1 += count

return 1
