// 函数: sub_141d76f30
// 地址: 0x141d76f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx

if (*(arg1 + 0x7c) != 1)
    rbx = arg2[1]
    
    if (rbx != 0)
    label_141d770fb:
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t rdi_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*rbx + 8))(rbx, zx.q(rdi_1))
    
    return 

*(arg1 + 0x60) += 1
int64_t* rbx_1 = arg2[1]
int64_t r15_1 = *arg2

if (rbx_1 != 0)
    rbx_1[1].d += 1

uint32_t rax_1 = sub_140a80f40()
uint64_t rax

if (rax_1.b == 0)
    if (data_143f138f4 == 0)
        if (data_143de5480 == 0)
            rax_1.b = 1
        else
            rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || rax_1.b == 0)
        void var_48
        void** rax_10 = sub_141d776e0(&var_48, nullptr, 0xff)
        void* rcx_5 = *rax_10
        *(rcx_5 + 0x10) = arg1
        *(rcx_5 + 0x18) = r15_1
        *(rcx_5 + 0x20) = rbx_1
        void* rcx_6 = *rax_10
        int32_t r8_1 = rax_10[2].d
        int64_t* rdx_2 = rax_10[1]
        int64_t* rbx_2 = *(rcx_6 + 0x30)
        int64_t* arg_18 = rbx_2
        void* rsi_1 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rsi_1 += 1
            rbx_2 = arg_18
        
        sub_140778000(rcx_6, rdx_2, r8_1, 1)
        
        if (rbx_2 != 0)
            rax = zx.q(*rsi_1)
            *rsi_1 -= 1
            
            if (rax.d == 1)
                sub_140a2f6e0(arg_18)
    else
        int64_t rbp_2 = sx.q(*(arg1 + 0x70))
        int32_t rax_5 = (rbp_2 + 1).d
        *(arg1 + 0x70) = rax_5
        
        if (rax_5 s> *(arg1 + 0x74))
            sub_1405a4f90(arg1 + 0x68)
        
        rax = (rbp_2 << 4) + *(arg1 + 0x68)
        *rax = r15_1
        *(rax + 8) = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        label_141d7703f:
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                rax = zx.q(*(rbx_1 + 0xc))
                *(rbx_1 + 0xc) -= 1
                
                if (rax.d == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
else
    int64_t rbp_1 = sx.q(*(arg1 + 0x70))
    int32_t rax_2 = (rbp_1 + 1).d
    *(arg1 + 0x70) = rax_2
    
    if (rax_2 s> *(arg1 + 0x74))
        sub_1405a4f90(arg1 + 0x68)
    
    rax = (rbp_1 << 4) + *(arg1 + 0x68)
    *rax = r15_1
    *(rax + 8) = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        
        if (rbx_1 != 0)
            goto label_141d7703f
rbx = arg2[1]

if (rbx != 0)
    goto label_141d770fb
