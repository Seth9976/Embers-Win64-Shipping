// 函数: sub_141b545b0
// 地址: 0x141b545b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141b5cc00(arg1 + 0xe8, 0)
sub_141b5cc80(arg1 + 0x138, 0)
uint64_t result = sub_1418b3200(arg1 + 0x98, 0)
int32_t i_2 = *(arg1 + 0x200)

if (i_2 != 0)
    int64_t* rdi_1 = *(arg1 + 0x1f8) + 8
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 = &rdi_1[2]
        i = i_2
        i_2 -= 1
    while (i != 1)

bool cond:0 = *(arg1 + 0x204) == 0
*(arg1 + 0x200) = 0

if (not(cond:0))
    result = sub_1405a5410(arg1 + 0x1f8, 0)

int32_t i_3 = *(arg1 + 0x1e0)

if (i_3 != 0)
    int64_t* rdi_3 = *(arg1 + 0x1d8) + 8
    int32_t i_1
    
    do
        int64_t* rbx_2 = *rdi_3
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp5_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
        
        rdi_3 = &rdi_3[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

bool cond:1 = *(arg1 + 0x1e4) == 0
*(arg1 + 0x1e0) = 0

if (cond:1)
    return result

return sub_1405a5410(arg1 + 0x1d8, 0)
