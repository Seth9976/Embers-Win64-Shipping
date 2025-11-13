// 函数: sub_14062c8d0
// 地址: 0x14062c8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
void* rdi = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rbx_1 = *(rdi + 0x30)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t rcx_2 = *(rdi + 0x10)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t rcx_3 = *rdi
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rdi += 0x40
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) != arg2)
    sub_140638d40(arg1, arg2)
