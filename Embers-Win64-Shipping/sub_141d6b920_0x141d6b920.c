// 函数: sub_141d6b920
// 地址: 0x141d6b920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    void* rax_1 = sub_142452380()
    void* rdx = *(arg2 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        if (*(arg1 + 0x10) != 0)
            return 0
        
        int16_t* const rbx_1
        
        if (*(arg1 + 0x30) == 0)
            rbx_1 = &data_142d40450
        else
            rbx_1 = *(arg1 + 0x28)
        
        return sub_140d2ee50(sub_140d41340(), arg2, rbx_1, 0) __tailcall
    
    void* rax_7 = sub_142527690()
    void* rdx_3 = *(arg2 + 0x10)
    int64_t rax_8 = sx.q(*(rax_7 + 0x38))
    
    if (rax_8.d s<= *(rdx_3 + 0x38) && *(*(rdx_3 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
        int32_t rcx_4
        rcx_4.b = sub_140b5b8a0(arg3.d, 0) == 0
        rcx_4.b |= arg3:4.d != 0
        
        if (rcx_4.b != 0 && *(arg1 + 0x10) == arg3)
            if (*(arg1 + 0x20) == 0)
                return sub_141d64b40(*(arg2 + 0x20), &data_142d40450, 0) __tailcall
            
            return sub_141d64b40(*(arg2 + 0x20), *(arg1 + 0x18), 0) __tailcall

int64_t var_28 = *(arg1 + 0x10)
int64_t var_20
sub_140596d10(&var_20, arg1 + 0x18)
void* result = sub_140d2bce0(&var_28)
int64_t rcx_11 = var_20

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return result
