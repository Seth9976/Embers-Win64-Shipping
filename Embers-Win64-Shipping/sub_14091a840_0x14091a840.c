// 函数: sub_14091a840
// 地址: 0x14091a840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rdi_1 = rsi + 0x68
    int32_t i
    
    do
        *(rdi_1 + 8) = 0
        int64_t rcx = *rdi_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        sub_1409259a0(rdi_1 - 0x40, 0)
        int64_t rcx_2 = *(rdi_1 - 0x20)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *(rdi_1 - 0x40)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t* rbx_1 = *(rdi_1 - 0x50)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t rcx_6 = *rsi
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rsi += 0x78
        rdi_1 += 0x78
        i = i_1
        i_1 -= 1
    while (i != 1)
    rsi = *arg1

if (rsi == 0)
    return 

return sub_140a74f90(rsi) __tailcall
