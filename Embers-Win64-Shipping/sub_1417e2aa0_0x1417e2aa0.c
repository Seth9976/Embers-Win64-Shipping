// 函数: sub_1417e2aa0
// 地址: 0x1417e2aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg2 + 0x20)
int64_t rax
rax.b = rcx != 0
*(arg2 + 0x20) = rax + rcx
void* var_18
int64_t* result = sub_1417d9fc0(&var_18)
int64_t* result_1 = result

if (arg3 != result)
    int32_t i_2 = arg3[1].d
    void* rcx_2 = *arg3
    
    if (i_2 != 0)
        void* rbx_1 = rcx_2 + 0x28
        int32_t i
        
        do
            int64_t rcx_3 = *(rbx_1 + 0x10)
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            int64_t rcx_4 = *rbx_1
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            int64_t rcx_5 = *(rbx_1 - 0x10)
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            int64_t rcx_6 = *(rbx_1 - 0x20)
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rbx_1 += 0x48
            i = i_2
            i_2 -= 1
        while (i != 1)
        rcx_2 = *arg3
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int32_t i_4
int32_t i_3 = i_4

if (i_3 != 0)
    void* rbx_3 = var_18 + 0x28
    int32_t i_1
    
    do
        int64_t rcx_7 = *(rbx_3 + 0x10)
        
        if (rcx_7 != 0)
            result = sub_140a74f90(rcx_7)
        
        int64_t rcx_8 = *rbx_3
        
        if (rcx_8 != 0)
            result = sub_140a74f90(rcx_8)
        
        int64_t rcx_9 = *(rbx_3 - 0x10)
        
        if (rcx_9 != 0)
            result = sub_140a74f90(rcx_9)
        
        int64_t rcx_10 = *(rbx_3 - 0x20)
        
        if (rcx_10 != 0)
            result = sub_140a74f90(rcx_10)
        
        rbx_3 += 0x48
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

void* rcx_11 = var_18

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11)
