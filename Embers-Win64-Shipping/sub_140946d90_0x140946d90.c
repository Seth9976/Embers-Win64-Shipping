// 函数: sub_140946d90
// 地址: 0x140946d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *arg1

for (void* rsi_2 = sx.q(arg1[1].d) * 0x50 + i; i != rsi_2; i += 0x50)
    if (sub_14094dfb0(arg2, i) != 0)
        *arg2 = &data_142e259e0
        int64_t rcx_4 = arg2[3]
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t* rdi_1 = arg2[2]
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                int64_t rdx_1 = *rdi_1
                (*rdx_1)(rdi_1, rdx_1)
                int32_t temp3_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    int64_t r8_1 = *rdi_1
                    (*(r8_1 + 8))(rdi_1, 1, r8_1)
        
        return i

*arg2 = &data_142e259e0
int64_t rcx_1 = arg2[3]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t* rbx = arg2[2]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return 0
