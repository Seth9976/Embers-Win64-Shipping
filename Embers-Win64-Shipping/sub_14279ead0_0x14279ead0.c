// 函数: sub_14279ead0
// 地址: 0x14279ead0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0xe]
int128_t var_40
__builtin_memset(&var_40, 0, 0x38)
(*(*rcx + 8))(rcx, &var_40)
int64_t* rcx_1 = arg1[0x1e]
int64_t* rbx

if ((*(*rcx_1 + 0x260))(rcx_1, &var_40) != 0)
    int64_t* rcx_6 = arg1[0x1e]
    int64_t rax_10 = (*(*rcx_6 + 0x268))(rcx_6, &var_40)
    arg1[6] = rax_10
    
    if (rax_10 != 0)
        sub_140597df0(&arg1[0x23], &arg1[0x1c])
        int64_t* rcx_8 = arg1[6]
        (*(*rcx_8 + 0x260))(rcx_8)
        int64_t rax_12 = arg1[6]
        int64_t* rcx_9 = arg1[0x10]
        int64_t rdx_6 = rax_12 + 0x28
        int64_t r8_1 = *rcx_9
        
        if (rax_12 == 0)
            rdx_6 = 0
        
        (*(r8_1 + 0x270))(rcx_9, rdx_6, r8_1)
        (*(*arg1 + 0x2e0))(arg1)
        sub_140aeb3d0(&arg1[8], arg1, arg1[6])
        rbx.b = 1
    else
        rbx.b = 0
else
    int64_t rbx_1 = *arg1[0xf]
    void var_58
    int64_t* rax_4 = _vfprintf_p_l(&var_58, 
        UInteractiveToolManager::ActivateTool: CanBuildTool returned false.", UInteractiveToolManager")
    (*(rbx_1 + 8))(arg1[0xf], rax_4, 0)
    int64_t* var_50
    
    if (var_50 == 0)
        rbx.b = 0
    else
        var_50[1].d -= 1
        
        if (var_50[1].d != 1)
            rbx.b = 0
        else
            (**var_50)(var_50)
            int32_t rdi_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (rdi_1 != 1)
                rbx.b = 0
            else
                (*(*var_50 + 8))(var_50, zx.q(rdi_1))
                rbx.b = 0

int64_t var_18

if (var_18 != 0)
    sub_140a74f90(var_18)

int128_t var_30
int64_t rcx_13 = var_30:8.q

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

return zx.q(rbx.b)
