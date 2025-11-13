// 函数: sub_140b30860
// 地址: 0x140b30860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140b3aef0(arg1)
int64_t rcx = arg1[5]

if (rcx != 0)
    result = sub_140a74f90(rcx)

int64_t rcx_1 = arg1[3]

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

int64_t* rbx_1 = arg1[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            jump(*(*rbx_1 + 8))

return result
