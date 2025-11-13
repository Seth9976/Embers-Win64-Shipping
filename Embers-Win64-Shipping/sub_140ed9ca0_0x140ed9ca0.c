// 函数: sub_140ed9ca0
// 地址: 0x140ed9ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* rdi = arg2
void* rcx = *arg2
uint64_t rax

if (rcx == 0)
    rcx.b = 1
else
    rax, rcx, arg3 = sub_140f053d0(rcx)
    
    if (rax.b != 0)
        rcx.b = 1
    else
        rcx.b = 0

int64_t* rbx = *(arg1 + 0x168)
int64_t rbp = 0

if (rbx != 0)
    rax = zx.q(rbx[1].d)
    
    if (rax.d == 0)
        rbx = nullptr
    else
        rbx[1].d = rax.d + 1
        
        if (rbx != 0)
            rbp = *(arg1 + 0x160)

if (rcx.b != 0)
    rax = *rdi
    
    if (rbp != rax)
        if (rax != 0)
            sub_140f19e30(rax, arg3)
            rax = *rdi
        
        uint64_t var_28 = rax
        void* rax_1 = rdi[1]
        void* var_20_1 = rax_1
        
        if (rax_1 != 0)
            *(rax_1 + 8) += 1
        
        int64_t var_18 = rbp
        int64_t* var_10_1 = rbx
        
        if (rbx != 0)
            rbx[1].d += 1
        
        sub_140ea4aa0(arg1 + 0x170, &var_18, &var_28)
        *(arg1 + 0x160) = *rdi
        void* rdi_1 = rdi[1]
        int64_t* rcx_3 = *(arg1 + 0x168)
        
        if (rdi_1 != rcx_3)
            if (rdi_1 != 0)
                *(rdi_1 + 0xc) += 1
                rcx_3 = *(arg1 + 0x168)
            
            if (rcx_3 != 0)
                int32_t temp2_1 = *(rcx_3 + 0xc)
                *(rcx_3 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rcx_3 + 8))(rcx_3, 1)
            
            *(arg1 + 0x168) = rdi_1

if (rbx == 0)
    return 

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t temp1_1 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (temp1_1 == 1)
    (*(*rbx + 8))(rbx, 1)
