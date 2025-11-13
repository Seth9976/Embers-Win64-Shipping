// 函数: sub_1406abe50
// 地址: 0x1406abe50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1406b1310(arg1 + 0x10)
_Mtx_destroy_in_situ(arg1 + 0xa8)
_Cnd_destroy_in_situ(arg1 + 0x60)
int32_t result = sub_1406891d0(arg1 + 0x50, arg1 + 0x50)
int64_t* rcx_4 = *(arg1 + 0x40)

if (rcx_4 != 0)
    result = rcx_4[1].d
    rcx_4[1].d -= 1
    
    if (result == 1)
        int64_t* r8_1 = rcx_4[0x1d]
        
        if (r8_1 == 0)
            result = (**rcx_4)(rcx_4, 1, r8_1)
        else
            result = (**r8_1)(r8_1, rcx_4)

int64_t rdx_2 = *(arg1 + 0x30)

if (rdx_2 u>= 0x10)
    void* rcx_6 = *(arg1 + 0x18)
    
    if (rdx_2 + 1 u>= 0x1000)
        void* r8_2 = *(rcx_6 - 8)
        
        if (rcx_6 - r8_2 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_6 = r8_2
    
    result = j_sub_140a74f90(rcx_6)

*(arg1 + 0x28) = 0
*(arg1 + 0x30) = 0xf
*(arg1 + 0x18) = 0
return result
