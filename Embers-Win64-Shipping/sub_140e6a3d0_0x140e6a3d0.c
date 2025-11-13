// 函数: sub_140e6a3d0
// 地址: 0x140e6a3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d += 1

int64_t* rdx = *(arg1 + 0x220)
int64_t* rcx = rdx
void* rax_2 = &rdx[sx.q(*(arg1 + 0x228)) * 2]
int32_t rcx_6

if (rdx != rax_2)
    while (*rcx != *arg2)
        rcx = &rcx[2]
        
        if (rcx == rax_2)
            goto label_140e6a420
    
    rcx_6 = ((rcx - rdx) s>> 4).d

int64_t rdi

if (rdx == rax_2 || rcx_6 == 0xffffffff || rcx_6 s>= *(arg1 + 0x228) - 1)
label_140e6a420:
    rdi.b = 0
else
    rdi.b = 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg2[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        int64_t r8_1 = *rbx_1
        (*r8_1)(rbx_1, arg3, r8_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_2 = *rbx_1
            (*(r8_2 + 8))(rbx_1, 1, r8_2)

return zx.q(rdi.b)
