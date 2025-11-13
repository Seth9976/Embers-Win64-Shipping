// 函数: sub_14187d020
// 地址: 0x14187d020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0

if (*(arg1 + 0x60) s<= 0)
    return 0

while (rdi u< arg3)
    int64_t rax_1 = sx.q(*(arg1 + 0x60))
    uint32_t count = arg3 - rdi
    int64_t rax_2 = *(arg1 + 0x58)
    int32_t* rbp_1 = rax_2 + ((rax_1 * 3 - 3) << 3)
    uint32_t count_1 = *(rax_2 + ((rax_1 * 3 - 3) << 3) + 0x14) - *(arg1 + 0x68)
    int32_t r13_2 = *(rax_2 + ((rax_1 * 3 - 3) << 3) + 0x10) + *(arg1 + 0x68)
    int64_t* rcx_2 = *(arg1 + 0x50)
    
    if (count_1 u<= count)
        count = count_1
    
    int64_t* rax_5 = (*(*rcx_2 + 8))(rcx_2, rbp_1)
    
    if (rax_5 == 0)
        int16_t* var_48
        sub_140b291e0(rbp_1, &var_48, 0)
        int16_t* const r9_2 = &data_142d40450
        int32_t var_40
        
        if (var_40 != 0)
            r9_2 = var_48
        
        sub_140af98a0("Unknown", 0x68, u"Could not get chunk data (%s).", r9_2)
        int16_t* rcx_10 = var_48
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        sub_140afbb40()
    else
        int64_t arg_8
        (*(*rax_5 + 8))(rax_5, &arg_8, 0)
        memcpy(zx.q(rdi) + arg2, zx.q(r13_2) + arg_8, count)
        (*(*rax_5 + 0x18))(rax_5)
        *(arg1 + 0x68) += count
        rdi += count
        
        if (*(arg1 + 0x68) u>= rbp_1[5])
            int64_t* rcx_7 = *(arg1 + 0x48)
            char rax_10
            int64_t r9_1
            rax_10, r9_1 = (*(*rcx_7 + 0x30))(rcx_7, rbp_1)
            
            if (rax_10 == 0)
                sub_140af98a0("Unknown", 0x60, u"Ordering failure, lost track of references.", r9_1)
                sub_140afbb40()
            
            *(arg1 + 0x68) = 0
            *(arg1 + 0x60) -= 1
            sub_1405fde90(arg1 + 0x58)
    
    if (*(arg1 + 0x60) == 0)
        break

return zx.q(rdi)
