// 函数: sub_1419f09f0
// 地址: 0x1419f09f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result
int64_t* r8
int512_t zmm1
result, r8, zmm1 = sub_141f23e50(arg1, arg2)
int16_t* const rdi = &data_142d40450
int64_t var_18
int32_t arg_10

if (arg2[8].d s>= 0x15b)
    int32_t rcx
    
    if (arg2[0xe] == 0)
        rcx = 0
    
    if (arg2[0xe] != 0 || (arg2[5].b & 2) != 0)
        rcx = 1
    
    r8 = arg2[1]
    int64_t rdx = *r8
    bool cond:3_1
    
    if (rdx + 4 u> r8[1])
        int64_t rax_1 = *arg2
        arg_10 = rcx
        result, rcx, r8 = (*(rax_1 + 0x150))(arg2, &arg_10, 4)
        cond:3_1 = arg_10 != 0
    else
        cond:3_1 = *rdx != 0
        result = rdx + 4
        *r8 = result
    
    rcx.b = cond:3_1
    
    if (rcx.b != 0)
        result, r8 = sub_1419ec1a0(arg1 + 0x488, arg2, 0, zmm1)
    else if ((arg2[5].b & 1) != 0)
        int64_t* rax_2 = sub_140d21830(arg1, &var_18, 0, 0)
        int16_t* const r9_1
        
        if (rax_2[1].d == 0)
            r9_1 = &data_142d40450
        else
            r9_1 = *rax_2
        
        sub_140af98a0("Unknown", 0x715, 
            This platform requires cooked packages, and physX data was not cooked into %s.", r9_1)
        int64_t rcx_3 = var_18
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        result, r8 = sub_140afbb40()

if (arg2[8].d s>= 0x105)
    int64_t* rdx_4 = arg2[1]
    int64_t rcx_5 = *rdx_4
    bool cond:2_1
    
    if (rcx_5 + 4 u> rdx_4[1])
        int64_t rax_4 = *arg2
        int32_t rbp
        rbp.b = arg2[0xe] != 0
        arg_10 = rbp
        result, r8 = (*(rax_4 + 0x150))(arg2, &arg_10, 4)
        cond:2_1 = arg_10 != 0
    else
        cond:2_1 = *rcx_5 != 0
        result = rcx_5 + 4
        *rdx_4 = result
    
    r8.b = cond:2_1

if ((arg2[8].d s>= 0x105 && r8.b != 0) || (arg2[5].b & 1) == 0)
    return result

int16_t** rax_5 = sub_140d21830(arg1, &var_18, 0, 0)

if (rax_5[1].d != 0)
    rdi = *rax_5

sub_140af98a0("Unknown", 0x740, 
    This platform requires cooked packages, and physX data was not cooked into %s.", rdi)
int64_t rcx_8 = var_18

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return sub_140afbb40()
