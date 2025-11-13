// 函数: sub_142cf4a70
// 地址: 0x142cf4a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = 0xe
void* rdi = &data_143f29e20

do
    int64_t* rbx_1 = *(rdi - 0x20)
    rdi -= 0x38
    i -= 1
    int32_t rax
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            rax = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rbx_2 = *rdi
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            rax = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
while (i != 0)
