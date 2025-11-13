// 函数: sub_140967610
// 地址: 0x140967610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result

if (arg2 s<= 0)
    result.b = 0
    return result

*(arg1 + 0x28) = arg3
*(arg1 + 0x34) = arg2
int32_t i_1 = *(arg1 + 0x48)
void*** rdi = *(arg1 + 0x40)

if (i_1 != 0)
    int32_t i
    
    do
        remapper::~remapper(&rdi[5])
        *rdi = &data_142e259e0
        int64_t rcx_1 = rdi[3]
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int64_t* rbx_1 = rdi[2]
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi = &rdi[0xf]
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x48) = 0

if (*(arg1 + 0x4c) != arg2)
    sub_1407c4420(arg1 + 0x40, arg2)

result.b = 1
return result
