// 函数: sub_140a45ec0
// 地址: 0x140a45ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140a46220()
int32_t rcx = *(rax + 0x60)
int32_t rdx = rcx - 1

if (rcx == 0)
    rdx = 0

if (rdx == 0)
    uint64_t rax_1 = sub_140a4d590()
    int64_t var_28 = 0
    int32_t rax_2 = 0
    int32_t rdx_1 = 0
    int32_t var_1c_1 = 0
    int64_t rbp_1 = 0
    int32_t var_20_1 = 0
    
    if (rax_1 != 0 && *rax_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (*(rax_1 + (rbx_1 << 1)) != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_28, rbx_1.d + 1)
            rax_2 = var_1c_1
            rdx_1 = var_20_1
            rbp_1 = var_28
        
        int32_t r14_1 = rbx_1.d + 1 + rdx_1
        
        if (r14_1 s> rax_2)
            sub_140594770(&var_28)
            rbp_1 = var_28
        
        memcpy(rbp_1, rax_1, (rbx_1.d + 1) * 2)
        
        if (r14_1 != 0 && r14_1 - 1 s> 0)
            var_28 = 0
            sub_1405a4c70(&var_28, r14_1 + 0x16, 0)
            memcpy(var_28, rbp_1, r14_1 * 2)
            sub_140a2cf70(&var_28, u"PersistentDownloadDir", 0x15)
            
            if (rax + 0x58 == &var_28)
                int64_t rcx_8 = var_28
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
            else
                int64_t rcx_7 = *(rax + 0x58)
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                *(rax + 0x58) = var_28
                *(rax + 0x60) = r14_1
                *(rax + 0x64) = var_1c_1
        
        if (rbp_1 != 0)
            sub_140a74f90(rbp_1)

if (*(rax + 0x60) == 0)
    return &data_142d40450

return *(rax + 0x58)
