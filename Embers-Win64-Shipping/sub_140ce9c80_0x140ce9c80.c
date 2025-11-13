// 函数: sub_140ce9c80
// 地址: 0x140ce9c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(*arg2 + 8)
(*(*rdi + 0x1c0))(rdi, arg1)

if (((*(arg1 + 8) u>> 4).b & 1) != 0)
    *(rdi + 0x2c) += 1

char rax_4 = rdi[5].b
int64_t* r14 = *(arg1 + 0x10)

if ((rax_4 & 3) != 0 && (rax_4 & 0x10) == 0)
    void* rax_6 = (*(*rdi + 0x40))(rdi, arg1)
    void* rdx_2 = rax_6
    
    if (rax_6 == 0)
        rdx_2 = sub_140d209c0(arg1)
    
    int64_t* r9_1
    
    if (((*(arg1 + 8) u>> 4).b & 1) == 0)
        r9_1 = r14
    else
        r9_1 = r14[8]
    
    (*(*r14 + 0x290))(r14, arg2, arg1, r9_1, rdx_2, 0)
else if (rdi[6].d == 0 || (*(rdi + 0x2b) & 0x10) != 0)
    (*(*r14 + 0x280))(r14, arg2, arg1)
else
    void* rax_12 = (*(*rdi + 0x40))(rdi, arg1)
    int64_t rcx_6
    
    if (rax_12 != 0)
        rcx_6 = *(rax_12 + 0x10)
    else
        rax_12 = sub_140d209c0(arg1)
        
        if (rax_12 != 0)
            rcx_6 = *(rax_12 + 0x10)
        else
            rcx_6 = 0
    
    sub_140ca4a60(r14, arg2, arg1, rax_12, rcx_6)

if (((*(arg1 + 8) u>> 4).b & 1) != 0)
    *(rdi + 0x2c) -= 1

jump(*(*rdi + 0x1c8))
