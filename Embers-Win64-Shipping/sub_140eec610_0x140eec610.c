// 函数: sub_140eec610
// 地址: 0x140eec610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0x20)

if (i_1 != 0)
    int64_t* rdi_1 = *(arg1 + 0x18) + 0x48
    int32_t i
    
    do
        sub_140d948f0(&rdi_1[2])
        sub_140d948f0(rdi_1)
        int64_t rcx_2 = rdi_1[-2]
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        sub_140ee3c10(&rdi_1[-4])
        int64_t* rbx_1 = rdi_1[-6]
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t* rbx_2 = rdi_1[-8]
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp4_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        rdi_1 = &rdi_1[0xe]
        i = i_1
        i_1 -= 1
    while (i != 1)

bool cond:0 = *(arg1 + 0x24) == 0
*(arg1 + 0x20) = 0

if (not(cond:0))
    sub_1408e7380(arg1 + 0x18, 0)

void* result = sub_140eec7f0(arg1)
*(arg1 + 0x88) |= 1
return result
