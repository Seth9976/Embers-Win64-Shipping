// 函数: sub_142c3e6f0
// 地址: 0x142c3e6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0x931 || arg2 == 0x9dc || arg2 == 0x9dd || arg2 == 0xb94)
    int32_t rax_1
    rax_1.b = 0
    return rax_1

int32_t rax_4

if (arg2 == 0xdda || arg2 - 0xddc u<= 2)
    void* rdi_1 = *(*arg1 + 0x98)
    rax_4 = data_144019be8
    
    if (rax_4 == 0)
        sub_142bf7370()
        rax_4 = data_144019be8
    
    if ((rax_4.b & 4) == 0)
        void* rcx = arg1[2]
        int32_t arg_10 = 0
        void* r10_1 = *(rcx + 0x40)
        
        if ((*(r10_1 + 0x130))(rcx, *(rcx + 0x48), zx.q(arg2), &arg_10, *(r10_1 + 0x20)) == 0)
            goto label_142c3e7f0
        
        uint64_t rbx_1 = 0
        void* r12_1 = *(arg1[2] + 0x18)
        
        if (*(rdi_1 + 0x48) u<= 0)
            goto label_142c3e7f0
        
        while (true)
            int64_t var_38_1
            var_38_1.d = zx.d(*(rdi_1 + 0x4c))
            
            if (sub_142c2ae00(r12_1, zx.d(*(*(rdi_1 + 0x40) + (rbx_1 << 3))), &arg_10, 1, 
                    var_38_1.d) != 0)
                break
            
            rbx_1 = zx.q(rbx_1.d + 1)
            
            if (rbx_1.d u>= *(rdi_1 + 0x48))
                goto label_142c3e7f0
    
    *arg3 = 0xdd9
    rax_4.b = 1
    *arg4 = arg2
else
label_142c3e7f0:
    void* r10_2 = arg1[3]
    *arg3 = arg2
    *arg4 = 0
    rax_4.b = (*(r10_2 + 0x48))(r10_2, zx.q(arg2), arg3, arg4, *(r10_2 + 0x88)) != 0

return rax_4
