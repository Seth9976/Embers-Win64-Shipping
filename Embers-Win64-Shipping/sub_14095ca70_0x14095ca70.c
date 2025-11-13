// 函数: sub_14095ca70
// 地址: 0x14095ca70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
void* rsi = *arg1

if (i_1 != 0)
    void* rdi_1 = rsi + 0x100
    int32_t i
    
    do
        *(rdi_1 + 8) = 0
        int64_t rcx = *rdi_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        sub_1405e1b50(rdi_1 - 0x40, 0)
        int64_t rcx_2 = *(rdi_1 - 0x20)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *(rdi_1 - 0x40)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *(rdi_1 - 0x68)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t* rbx_1 = *(rdi_1 - 0x80)
        int32_t rax
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                rax = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t* rbx_2 = *(rdi_1 - 0xa0)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                rax = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        int64_t* rbx_3 = *(rdi_1 - 0xb8)
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                rax = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rax == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        int64_t* rbx_4 = *(rdi_1 - 0xd0)
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                rax = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (rax == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        int64_t* rbx_5 = *(rdi_1 - 0xe8)
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                rax = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (rax == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
        
        int64_t rcx_15 = *rsi
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        rsi += 0x110
        rdi_1 += 0x110
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) == arg2)
    return 

return sub_140976bf0(arg1, arg2) __tailcall
