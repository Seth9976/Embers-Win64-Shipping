// 函数: sub_140ad6e40
// 地址: 0x140ad6e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d s<= 0)
    return 

int64_t* rcx = arg1[2]
int64_t r8
r8.b = arg1[4].b == 0
(*(*rcx + 0x10))(rcx, arg1, r8)
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rdi_2 = *arg1 + 8
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_2
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_2 = &rdi_2[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    return sub_1405a5410(arg1, 0) __tailcall
