// 函数: sub_1423bae50
// 地址: 0x1423bae50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x28)

if (rdi != 0)
    int64_t rcx = *(rdi + 0x58)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    int64_t rcx_1 = *(rdi + 0x48)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    int64_t rcx_2 = *(rdi + 0x38)
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int32_t i_1 = *(rdi + 0x30)
    void* rbx_1 = *(rdi + 0x28)
    
    if (i_1 != 0)
        int32_t i
        
        do
            sub_140bc0410(rbx_1)
            rbx_1 += 0x40
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_1 = *(rdi + 0x28)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    j_sub_140a74f90(rdi)

int64_t result = sub_1423bf9a0(arg1 + 0x18, 0)
int64_t rcx_7 = *(arg1 + 0x18)

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7) __tailcall
