// 函数: sub_14226e040
// 地址: 0x14226e040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x150))()
void* r15 = *(rax_1 + 0x130)
int64_t* r13 = *(rax_1 + 0x128)

if (r15 == 0 || r13 == 0)
    return 0

void* i = arg1[0x57]

if (i != 0)
    i = *(i + 0x1430)

int64_t* rdx = *(r15 + 0x238)
int64_t* rbx = rdx
void* rcx = &rdx[sx.q(*(r15 + 0x240))]
int32_t rbx_1

if (i == 0)
    if (rdx == rcx)
    label_14226e0ce:
        rbx_1 = -1
    else
        while (*rbx != arg1[0x45])
            rbx = &rbx[1]
            
            if (rbx == rcx)
                goto label_14226e0ce_1
        
        rbx_1 = ((rbx - rdx) s>> 3).d
else if (rdx == rcx)
label_14226e0ce_1:
    rbx_1 = -1
else
    while (*rbx != i)
        rbx = &rbx[1]
        
        if (rbx == rcx)
            goto label_14226e0ce_1
    
    rbx_1 = ((rbx - rdx) s>> 3).d

int32_t rax_3 = *(r15 + 0x240)
int32_t rbp = 0

if (rax_3 s> 0)
    do
        if (rbx_1 == 0 && arg2 s< 0)
            rbx_1 = rax_3 - 1
        else if (rbx_1 != rax_3 - 1 || arg2 s<= 0)
            rbx_1 += arg2
        else
            rbx_1 = 0
        
        i = *(*(r15 + 0x238) + (sx.q(rbx_1) << 3))
        
        if (i != arg1[0x45])
            void* rsi_1 = *(i + 0xe0)
            
            if (rsi_1 != 0)
                void* rax_7 = sub_142497110()
                void* rdx_1 = *(rsi_1 + 0x10)
                int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                
                if (rax_8.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30
                        && *(rsi_1 + 0x250) != 0 && sub_1424b23f0(r13, arg1) != 0)
                    break
        
        rax_3 = *(r15 + 0x240)
        rbp += 1
    while (rbp s< rax_3)

return i
