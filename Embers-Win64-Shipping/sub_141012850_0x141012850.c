// 函数: sub_141012850
// 地址: 0x141012850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

AcquireSRWLockExclusive(arg1 + 0xb0)
void* rdi_2

if (*(arg1 + 0x18) == *(arg1 + 0x44))
label_1410128f3:
    rdi_2 = nullptr
else
    void* rdx = *(arg1 + 0x50)
    void* r8 = arg1 + 0x48
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rbx_1 = *(r8 + (((sx.q(*(arg1 + 0x58)) - 1) & sx.q(arg2[0x2d].d)) << 2))
    
    if (rbx_1 == 0xffffffff)
    label_1410128f3_1:
        rdi_2 = nullptr
    else
        int64_t r14_1 = *(arg1 + 0x10)
        
        while (true)
            rdi_2 = sx.q(rbx_1) * 0x310 + r14_1
            void arg_8
            
            if (sub_141010a20(&arg_8, rdi_2, arg2) != 0)
                break
            
            rbx_1 = *(rdi_2 + 0x308)
            
            if (rbx_1 == 0xffffffff)
                goto label_1410128f3_2
        
        if (rbx_1 == 0xffffffff)
        label_1410128f3_2:
            rdi_2 = nullptr

void* rax_4 = rdi_2 + 0x300

if (rdi_2 == 0)
    rax_4 = nullptr

if (rax_4 != 0)
    *arg3 = *rax_4
    return ReleaseSRWLockExclusive(arg1 + 0xb0) __tailcall

int64_t* rax_7 = j_sub_140a82f30(0x30)
int64_t* rbx_2 = rax_7

if (rax_7 == 0)
    rbx_2 = nullptr
else
    *rax_7 = *(arg1 + 8)
    int32_t rdx_4 = (1 << (data_1439c7a34).b) - 1
    rax_7[1].d = rdx_4
    *(rax_7 + 0xc) = rdx_4
    rax_7[2] = 0
    rax_7[3] = 0
    InitializeSRWLock(&rax_7[4])
    rbx_2[5].b = 0

int64_t* var_48 = rbx_2
sub_141000fa0(arg1 + 0x10, arg2, &var_48)
*arg3 = var_48
ReleaseSRWLockExclusive(arg1 + 0xb0)
int64_t* var_40 = arg3
void* rax_9 = *(arg4 + 0x10)
void* rcx_12 = arg4 + 0x20

if (rax_9 != 0)
    rcx_12 = rax_9

return (*arg4)((*(*rcx_12 + 8))(rcx_12), &var_40, arg2)
