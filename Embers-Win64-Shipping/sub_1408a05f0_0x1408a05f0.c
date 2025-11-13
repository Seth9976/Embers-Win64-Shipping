// 函数: sub_1408a05f0
// 地址: 0x1408a05f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = *(arg1 + 0x20)

while (i != 0)
    int64_t* rbx_1 =
        *(*(*(arg1 + 8) + (((i + *(arg1 + 0x18) - 1) & (*(arg1 + 0x10) - 1)) << 3)) + 8)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            uint64_t rax = zx.q(*(rbx_1 + 0xc))
            *(rbx_1 + 0xc) -= 1
            
            if (rax.d == 1)
                (*(*rbx_1 + 8))(rbx_1)
    
    int64_t rcx_5 = *(arg1 + 0x20)
    i = rcx_5 - 1
    *(arg1 + 0x20) = i
    
    if (rcx_5 == 1)
        *(arg1 + 0x18) = 0

int64_t i_1 = *(arg1 + 0x10)

while (i_1 != 0)
    i_1 -= 1
    int64_t rcx_6 = *(*(arg1 + 8) + (i_1 << 3))
    
    if (rcx_6 != 0)
        j_sub_140a74f90(rcx_6)

void* rcx_8 = *(arg1 + 8)

if (rcx_8 != 0)
    if (*(arg1 + 0x10) << 3 u>= 0x1000)
        void* r8_1 = *(rcx_8 - 8)
        
        if (rcx_8 - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_8 = r8_1
    
    j_sub_140a74f90(rcx_8)

*(arg1 + 0x10) = 0
*(arg1 + 8) = 0
