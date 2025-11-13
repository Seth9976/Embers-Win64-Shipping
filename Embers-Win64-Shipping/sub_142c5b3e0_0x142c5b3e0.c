// 函数: sub_142c5b3e0
// 地址: 0x142c5b3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int64_t result = 0
int64_t rcx = *(rbx + 0x588)

if (rcx != 0)
    int64_t* rbx_1 = *(rbx + 0x4ab0)
    
    while (rbx_1[3] != arg2)
        result += 1
        rbx_1 -= -0x80
        
        if (result u>= rcx)
            return result
    
    void* rcx_1 = rbx_1[3]
    
    if (rcx_1 != 0)
        j_sub_1428574d0(rcx_1)
        rbx_1[3] = 0
        rbx_1[5].d = 0
        sub_142c5aac0(&rbx_1[7])
        data_143ccb8a0(*rbx_1)
        int64_t rcx_4 = rbx_1[1]
        *rbx_1 = 0
        result = data_143ccb8a0(rcx_4)
        rbx_1[1] = 0

return result
