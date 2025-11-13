// 函数: sub_140686270
// 地址: 0x140686270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x30)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx)

int64_t rdx = *(arg1 + 0x20)

if (rdx u>= 0x10)
    void* rcx_2 = *(arg1 + 8)
    
    if (rdx + 1 u>= 0x1000)
        void* r8_1 = *(rcx_2 - 8)
        
        if (rcx_2 - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_2 = r8_1
    
    j_sub_140a74f90(rcx_2)

*(arg1 + 0x18) = 0
*(arg1 + 0x20) = 0xf
*(arg1 + 8) = 0
