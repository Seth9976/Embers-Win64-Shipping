// 函数: sub_141821500
// 地址: 0x141821500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_1 = rsi + 0x128
    int32_t i
    
    do
        *(rbx_1 + 8) = 0
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        sub_14059ad90(rbx_1 - 0x40, 0)
        int64_t rcx_2 = *(rbx_1 - 0x20)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *(rbx_1 - 0x40)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        *(rbx_1 - 0x48) = 0
        int64_t rcx_4 = *(rbx_1 - 0x50)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        sub_14059ad90(rbx_1 - 0x90, 0)
        int64_t rcx_6 = *(rbx_1 - 0x70)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = *(rbx_1 - 0x90)
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        int64_t* rdi_1 = *(rbx_1 - 0x98)
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t rax_3 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax_3 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        int64_t* rdi_2 = *(rbx_1 - 0xa8)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t rax_7 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (rax_7 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        sub_1409f6120(rsi)
        rsi += 0x138
        rbx_1 += 0x138
        i = i_1
        i_1 -= 1
    while (i != 1)
    rsi = *arg1

if (rsi == 0)
    return 

return sub_140a74f90(rsi) __tailcall
