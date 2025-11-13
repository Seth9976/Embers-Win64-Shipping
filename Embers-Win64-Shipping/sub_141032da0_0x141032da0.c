// 函数: sub_141032da0
// 地址: 0x141032da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x28)

if (data_1439b4ad4 != 0 && *(rbx + 0x28) != 0)
    sub_14101f400(*(*(arg1 + 0x10) + 0x9d8) + 0x910, rbx + 0x20)
    rbx = *(arg1 + 0x28)

if (rbx != 0)
    int64_t* rcx_2 = *(rbx + 0x18)
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x10))(rcx_2)
    
    void* rcx_3 = *(rbx + 8)
    
    if (rcx_3 != 0)
        int64_t* rcx_4 = *(rcx_3 + 0x18)
        
        if (rcx_4 != 0)
            (*(*rcx_4 + 0x10))(rcx_4)
    
    j_sub_140a74f90(rbx)

*(arg1 + 0x28) = 0
int64_t* rcx_6 = *(arg1 + 0x40)
*(arg1 + 0x40) = 0

if (rcx_6 != 0)
    rcx_6[1].d -= 1
    
    if (rcx_6[1].d == 1)
        (**rcx_6)(rcx_6, 1)

int32_t result = *(arg1 + 0x3c)
void*** rbx_1 = *(arg1 + 0x30)
int32_t i_2 = *(arg1 + 0x38)

if (result s< 0)
    if (i_2 != 0)
        int32_t i
        
        do
            void* rcx_9 = rbx_1[1]
            *rbx_1 = &data_142efcd90
            
            if (rcx_9 != 0)
                int32_t rax_6 = *(rcx_9 + 0x14)
                *(rcx_9 + 0x14) -= 1
                
                if (rax_6 == 1)
                    int64_t* rcx_10 = rbx_1[1]
                    
                    if (rcx_10 != 0)
                        sub_141011360(rcx_10, rax_6.b)
            
            rbx_1 = &rbx_1[3]
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0x3c)
    
    *(arg1 + 0x38) = 0
    
    if (result != 0)
        return sub_1405a5130(arg1 + 0x30, 0)
else
    if (i_2 != 0)
        int32_t i_1
        
        do
            void* rcx_7 = rbx_1[1]
            *rbx_1 = &data_142efcd90
            
            if (rcx_7 != 0)
                result = *(rcx_7 + 0x14)
                *(rcx_7 + 0x14) -= 1
                
                if (result == 1)
                    int64_t* rcx_8 = rbx_1[1]
                    
                    if (rcx_8 != 0)
                        result = sub_141011360(rcx_8, result.b)
            
            rbx_1 = &rbx_1[3]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x38) = 0

return result
