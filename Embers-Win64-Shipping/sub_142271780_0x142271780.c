// 函数: sub_142271780
// 地址: 0x142271780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1

if (rbx != 0)
    int64_t* rcx_1 = nullptr
    
    if ((*(*rbx + 0x20))(rbx, "PxRigidBody") != 0)
        rcx_1 = rbx
    
    void arg_8
    
    if (rcx_1 != 0)
        return *(*(*rcx_1 + 0x178))(rcx_1, &arg_8) & 1

return 0
