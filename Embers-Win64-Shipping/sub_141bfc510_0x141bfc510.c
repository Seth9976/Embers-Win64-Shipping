// 函数: sub_141bfc510
// 地址: 0x141bfc510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 0xa) = *(arg2 + 0xa)
*(arg1 + 0xc) = *(arg2 + 0xc)
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x18) = *(arg2 + 0x18)
*(arg1 + 0x20) = *(arg2 + 0x20)
*(arg1 + 0x28) = *(arg2 + 0x28)
int64_t* r14 = *(arg2 + 0x30)
uint64_t* r15 = *(arg1 + 0x30)

if (r15 != r14)
    void* rbx_1 = &r15[7]
    int64_t rdi_1 = sx.q(r14[9].d)
    sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
    void* rax_4 = r14[8]
    void* rdx = &r14[7]
    void* r9_1 = *(rbx_1 + 8)
    
    if (rax_4 != 0)
        rdx = rax_4
    
    if (r9_1 != 0)
        rbx_1 = r9_1
    
    memcpy(rbx_1, rdx, (rdi_1 << 2).d)
    r15[9].d = rdi_1.d
    sub_140e29380(r15, r14)

*(arg1 + 0x38) = *(arg2 + 0x38)
int64_t* rbx_2 = *(arg2 + 0x48)
int64_t var_38 = *(arg2 + 0x40)

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (&var_38 != arg1 + 0x40)
    var_38.o = *(arg1 + 0x40)
    *(arg1 + 0x40) = var_38.o

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

*(arg1 + 0xc) = *(arg2 + 0xc)
*(arg1 + 0x50) = *(arg2 + 0x50)
*(arg1 + 0x54) = *(arg2 + 0x54)
*(arg1 + 0x58) = *(arg2 + 0x58)
*(arg1 + 0x5c) = *(arg2 + 0x5c)
*(arg1 + 0x5d) = *(arg2 + 0x5d)
*(arg1 + 0x60) = *(arg2 + 0x60)
*(arg1 + 0x68) = *(arg2 + 0x68)
*(arg1 + 0x69) = *(arg2 + 0x69)
char result = *(arg2 + 0x6a)
*(arg1 + 0x6a) = result
return result
