// 函数: sub_142b74c00
// 地址: 0x142b74c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg5

if (*rdi s> 0)
    return 

int32_t r14_1 = *(arg1 + 0x78)
int64_t* rcx = *(arg1 + 0x68)
int64_t* rax

if (rcx != 0)
    if (rcx[1].d s<= r14_1)
        rax = sub_142a5da90(rcx, r14_1 * 2, r14_1)
    
    if (rcx[1].d s<= r14_1 && rax == 0)
        *rdi = 7
    else if (r14_1 s<= 0x7fff)
    label_142b74cc2:
        int64_t rax_1 = sx.q(*(arg1 + 0x78))
        *(arg1 + 0x78) = rax_1.d + 1
        *(**(arg1 + 0x68) + (rax_1 << 3)) = arg2.q
        sub_142b74dc0(arg1, 0xd, arg3, arg4, r14_1.w, rdi)
    else
        *rdi = 8
else
    rax = j_sub_142a7dd00(0x50)
    arg5 = rax
    int64_t* rbx_1 = rax
    
    if (rax == 0)
        rbx_1 = nullptr
    else
        memset(rax, 0, 0x50)
        rbx_1[1].d = 8
        *rbx_1 = &rbx_1[2]
        *(rbx_1 + 0xc) = 0
    
    *(arg1 + 0x68) = rbx_1
    
    if (rbx_1 != 0)
        goto label_142b74cc2
    
    *rdi = 7
