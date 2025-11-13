// 函数: sub_1422a68d0
// 地址: 0x1422a68d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = *(arg1 + 0x20)
int64_t* rdi = r15
void* rsi_2 = &r15[sx.q(*(arg1 + 0x28)) * 2]
int32_t rdi_1

if (r15 == rsi_2)
label_1422a6951:
    rdi_1 = -1
else
    while (true)
        int64_t* rbx_1 = rdi[1]
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        bool rax = (**arg2)(arg2, *rdi)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                int64_t rdx_1 = *rbx_1
                (*rdx_1)(rbx_1, rdx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (rax != 0)
            rdi_1 = ((rdi - r15) s>> 4).d
            break
        
        rdi = &rdi[2]
        
        if (rdi == rsi_2)
            goto label_1422a6951

return rdi_1 != 0xffffffff
