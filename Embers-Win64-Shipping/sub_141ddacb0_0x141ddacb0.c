// 函数: sub_141ddacb0
// 地址: 0x141ddacb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1[2] + 0xcc)
int64_t* result = zx.q(rcx u>> 0x12)

if ((result.b & 1) != 0 || ((rcx u>> 7).b & 1) == 0)
    void* rax_3 = (*(*arg1 + 0x150))(arg1)
    
    if (rax_3 != 0 && sub_142437e30(rax_3, 0, 1) != 0)
        sub_142452ff0(arg1, arg2.d)
    
    result = (*(*arg1 + 0x150))(arg1)
    
    if (result != 0)
        void* rcx_6 = result[0x31]
        int64_t* rcx_7
        
        if (rcx_6 == 0)
            rcx_7 = &result[0x61]
        else
            rcx_7 = *(rcx_6 + 0xc8)
        
        return sub_1420e7dd0(rcx_7, arg1, result[0xa6].d)

return result
