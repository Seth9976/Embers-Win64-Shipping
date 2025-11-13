// 函数: sub_142001d10
// 地址: 0x142001d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int512_t zmm1 = sub_140a96170(&var_38)
char rax = sub_140ab3dc0(arg2 + 0xb8)
int16_t* const r15 = &data_142d40450
wchar16* rax_1

if (rax == 0)
    wchar16* rcx_2
    
    if (arg3[1].d == 0)
        rcx_2 = &data_142d40450
    else
        rcx_2 = *arg3
    
    rax_1, zmm1, arg4 = sub_140abc1e0(rcx_2, &var_38, 0, 0, 0)

int64_t* rdi

if (rax != 0 || rax_1 == 0)
    void* rcx_4 = *(arg2 + 0xb0)
    int16_t* var_58
    int32_t var_50
    
    if (rcx_4 == 0)
        if (sub_140ab3dc0(arg2 + 0xb8) != 0)
            int32_t rsi_1 = *(arg2 + 0x98)
            int64_t r14_1 = *(arg2 + 0x90)
            var_58 = nullptr
            var_50 = rsi_1
            
            if (rsi_1 != 0)
                sub_1405a4c70(&var_58, rsi_1, 0)
                memcpy(var_58, r14_1, rsi_1 * 2)
            else
                int32_t var_4c_1 = 0
        else
            int16_t* var_48 = nullptr
            int64_t var_40_1 = 0
            sub_140aca310(&var_48, arg2 + 0xb8, 0, zmm1, arg4)
            var_58 = var_48
            __builtin_memset(&var_50, 0, 0x18)
    else
        sub_140d21e10(rcx_4, &var_58, 0)
    
    int16_t* rdx_6
    
    if (arg3[1].d == 0)
        rdx_6 = &data_142d40450
    else
        rdx_6 = *arg3
    
    if (var_50 != 0)
        r15 = var_58
    
    int32_t rax_5 = sub_140a54510(r15, rdx_6)
    int16_t* rcx_10 = var_58
    rdi.b = rax_5 == 0
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
else
    rdi = zx.q(sub_140d23290(&var_38, arg2 + 0xb8, arg4, zmm1))

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t rsi_2 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rsi_2 == 1)
            (*(*var_30 + 8))(var_30, zx.q(rsi_2))

return zx.q(rdi.b)
