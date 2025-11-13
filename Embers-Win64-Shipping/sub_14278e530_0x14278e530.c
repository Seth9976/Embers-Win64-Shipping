// 函数: sub_14278e530
// 地址: 0x14278e530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t arg_8 = 0
void* rax = sub_141d3bad0()
sub_141d3d0f0(rax)
void* rdx = *(arg1 + 0x700)
void* rbp_1

if (rdx != 0)
    rbp_1 = **(rdx + 0x610)

if (rdx == 0 || rbp_1 == 0 || *(rbp_1 + 0x20) s<= 0)
    void* r15_1 = *(arg1 + 0x4f8)
    int64_t* rbx_1
    
    if (r15_1 == 0)
        void* rax_2 = *(arg1 + 0x520)
        rbx_1 = *(rax_2 + 0xc8)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        r15_1 = *(rax_2 + 0xc0) + 0xf8
        rdi = 1
    else
        rbx_1 = arg_8.q
    
    if ((rdi.b & 1) != 0)
        rdi &= 0xfffffffe
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_5 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_5 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* r14_1 = *(arg1 + 0x4f0)
    int64_t* rbx_2
    
    if (r14_1 == 0)
        void* rax_7 = *(arg1 + 0x520)
        rdi |= 2
        rbx_2 = *(rax_7 + 0xc8)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        r14_1 = *(rax_7 + 0xc0) + 0xb0
    else
        rbx_2 = arg_8.q
    
    if ((rdi.b & 2) != 0 && rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t rbp_2 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rbp_2 == 1)
                (*(*rbx_2 + 8))(rbx_2, zx.q(rbp_2))
    
    sub_141d17bb0(r14_1, r15_1, arg1 + 0x698)
else
    *(arg1 + 0x6a0) = 0
    
    if (*(arg1 + 0x6a4) != 0)
        sub_1405a52a0(arg1 + 0x698, 0)
    
    int64_t rdi_1 = sx.q(*(rbp_1 + 0x20))
    
    if (rdi_1.d != 0)
        int32_t rax_1 = *(arg1 + 0x6a0)
        int32_t rdx_2 = rax_1 + rdi_1.d
        
        if (rdx_2 s> *(arg1 + 0x6a4))
            sub_1405a52a0(arg1 + 0x698, rdx_2)
            rax_1 = *(arg1 + 0x6a0)
        
        memcpy((sx.q(rax_1) << 6) + *(arg1 + 0x698), *(rbp_1 + 0x18), (rdi_1 << 6).d)
        *(arg1 + 0x6a0) += rdi_1.d

return sub_141d41e50(rax) __tailcall
