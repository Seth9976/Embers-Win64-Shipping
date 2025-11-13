// 函数: sub_140acd7a0
// 地址: 0x140acd7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x30) != 0)
    *(arg1 + 0x30) = 0
    int32_t i_1 = *(arg1 + 0x28)
    void* rbx_1 = *(arg1 + 0x20)
    
    if (i_1 != 0)
        int32_t i
        
        do
            if (*(rbx_1 + 0x60) != 0)
                *(rbx_1 + 0x60) = 0
            
            sub_140b0bbf0(rbx_1)
            rbx_1 += 0x68
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_1 = *(arg1 + 0x20)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)

if (*(arg1 + 0x18) == 0)
    return 

*(arg1 + 0x18) = 0
int64_t* rbx_2 = *(arg1 + 8)

if (rbx_2 == 0)
    return 

rbx_2[1].d -= 1

if (rbx_2[1].d != 1)
    return 

(**rbx_2)(rbx_2)
int32_t rdi_1 = *(rbx_2 + 0xc)
*(rbx_2 + 0xc) -= 1

if (rdi_1 == 1)
    (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))
