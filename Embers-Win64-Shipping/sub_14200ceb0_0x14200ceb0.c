// 函数: sub_14200ceb0
// 地址: 0x14200ceb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x48) == 0)
    return 

int64_t* r14_1 = *arg2

if (*(arg1 + 0x90) == 0)
    if ((*(*r14_1 + 0x18))(r14_1) != 0 && sub_140d3e170((*(*r14_1 + 0x20))(r14_1), 0, 1).b != 0)
        EnterCriticalSection(arg1 + 0xb0)
        int32_t i = 0
        
        if (*(arg1 + 0x58) s> 0)
            int64_t* r14_2 = nullptr
            
            do
                int64_t* rcx_8 = *(r14_2 + *(arg1 + 0x50))
                (**rcx_8)(rcx_8, arg2)
                i += 1
                r14_2 = &r14_2[2]
            while (i s< *(arg1 + 0x58))
        
        if (arg1 != -0xb0)
            LeaveCriticalSection(arg1 + 0xb0)
else
    int64_t* rbx_1 = arg2[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t* rax = j_sub_140a82f30(0x18)
    int64_t* rdi_1 = nullptr
    int64_t* rcx = rax
    
    if (rax == 0)
        rcx = nullptr
        rdi_1 = rbx_1
    else
        *rax = 0
        rax[1] = r14_1
        rax[2] = rbx_1
    
    if (rcx != 0)
        int64_t* temp0_1 = *(arg1 + 0x80)
        *(arg1 + 0x80) = rcx
        *temp0_1
        *temp0_1 = rcx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rbx_2 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rbx_2 == 1)
                (*(*rdi_1 + 8))(rdi_1, zx.q(rbx_2))
