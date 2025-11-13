// 函数: sub_141ed9d50
// 地址: 0x141ed9d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg1 + 0xa0)
int64_t rdi
rdi.b = 0

if (rbp != 0)
    int64_t rax_1 = sub_1405be820(arg1)
    void* rax_2 = sub_1423de4b0(data_143f5b298, rax_1)
    
    if (rax_2 != 0)
        int64_t* rbx = *(rax_2 + 0x220)
        void* rsi_2 = &rbx[sx.q(*(rax_2 + 0x228)) * 2]
        
        if (rbx == rsi_2)
            return 0
        
        do
            int64_t* rcx_1 = *rbx
            
            if (rcx_1 != 0 && (*(*rcx_1 + 0x3d0))(rcx_1, rbp, arg2) != 0)
                int64_t* rcx_2 = *rbx
                (*(*rcx_2 + 0x2e0))(rcx_2, rbp, arg2, arg3, arg4, arg5, arg1)
                rdi.b = 1
            
            rbx = &rbx[2]
        while (rbx != rsi_2)
        
        return zx.q(rdi.b)

return 0
