// 函数: sub_1405928e0
// 地址: 0x1405928e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1

if (rbx == 0)
    return 

int64_t rdx = *(rbx + 0x20)

if (rdx u>= 8)
    void* rcx = *(rbx + 8)
    
    if ((rdx << 1) + 2 u>= 0x1000)
        void* r8_1 = *(rcx - 8)
        
        if (rcx - r8_1 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx = r8_1
    
    j_sub_140a74f90(rcx)

*(rbx + 0x20) = 7
*(rbx + 0x18) = 0
*(rbx + 8) = 0
return j_sub_140a74f90(rbx) __tailcall
