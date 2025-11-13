// 函数: sub_140d9f3c0
// 地址: 0x140d9f3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg1[8].d

if (i_2 != 0)
    int64_t* rdi_1 = arg1[7] + 8
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 = &rdi_1[2]
        i = i_2
        i_2 -= 1
    while (i != 1)

arg1[8].d = 0

if (*(arg1 + 0x44) != 0)
    sub_1405a5410(&arg1[7], 0)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_140888ba0(arg1, 0)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
int32_t result = sub_14059a8e0(&arg1[2], 0)
int32_t i_3 = arg1[0x3e].d

if (i_3 != 0)
    int64_t* rdi_3 = arg1[0x3d] + 8
    int32_t i_1
    
    do
        int64_t* rbx_2 = *rdi_3
        
        if (rbx_2 != 0)
            result = rbx_2[1].d
            rbx_2[1].d -= 1
            
            if (result == 1)
                (**rbx_2)(rbx_2)
                result = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
        
        rdi_3 = &rdi_3[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

arg1[0x3e].d = 0

if (*(arg1 + 0x1f4) != 0)
    result = sub_1405a5410(&arg1[0x3d], 0)

arg1[0x3c].d = 0

if (*(arg1 + 0x1e4) == 0)
    return result

return sub_140dbd250(&arg1[9], 0) __tailcall
