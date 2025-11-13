// 函数: sub_1419f08e0
// 地址: 0x1419f08e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
int512_t zmm1
result, zmm1 = sub_141f23e50(arg1, arg2)

if (arg2[8].d s>= 0x15b)
    int32_t rcx
    
    if (arg2[0xe] != 0 || (arg2[5].b & 2) != 0)
        rcx = 1
    else
        rcx = 0
    
    int64_t* r8_1 = arg2[1]
    int64_t rdx = *r8_1
    bool cond:0_1
    
    if (rdx + 4 u> r8_1[1])
        int64_t rax_1 = *arg2
        int32_t arg_10 = rcx
        result, rcx = (*(rax_1 + 0x150))(arg2, &arg_10, 4)
        cond:0_1 = arg_10 != 0
    else
        cond:0_1 = *rdx != 0
        result = rdx + 4
        *r8_1 = result
    
    rcx.b = cond:0_1
    
    if (rcx.b != 0)
        return sub_1419ec1a0(arg1 + 0x488, arg2, 0, zmm1)
    
    if ((arg2[5].b & 1) != 0)
        int64_t var_18
        int64_t* rax_2 = sub_140d21830(arg1, &var_18, 0, 0)
        int16_t* const r9
        
        if (rax_2[1].d == 0)
            r9 = &data_142d40450
        else
            r9 = *rax_2
        
        sub_140af98a0("Unknown", 0x715, 
            This platform requires cooked packages, and physX data was not cooked into %s.", r9)
        int64_t rcx_3 = var_18
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        return sub_140afbb40() __tailcall

return result
