// 函数: sub_1409674f0
// 地址: 0x1409674f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 s<= 0)
    int64_t rax
    rax.b = 0
    return rax

arg1[5] = arg5
*(arg1 + 0x4c) = arg6
arg1[7].d = arg2
*(arg1 + 0x3c) = arg3
*(arg1 + 0x34) = arg4
int32_t i_1 = arg1[0xc].d

if (i_1 != 0)
    void* rdi_1 = arg1[0xb] + 0x18
    int32_t i
    
    do
        sub_14094b070(rdi_1 + 0x28)
        sub_14094b070(rdi_1 + 0x18)
        *(rdi_1 - 0x10) = &data_142e259e0
        int64_t rcx_2 = *(rdi_1 + 8)
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        int64_t* rbx_1 = *rdi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 += 0x50
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[0xc].d = 0

if (*(arg1 + 0x64) != arg4)
    sub_1405a5310(&arg1[0xb], arg4)

*(arg1 + 0x51) = arg7
(*(*arg1 + 0x340))(arg1)
int64_t rax_7
rax_7.b = 1
return rax_7
