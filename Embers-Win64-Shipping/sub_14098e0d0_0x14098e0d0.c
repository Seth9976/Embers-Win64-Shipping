// 函数: sub_14098e0d0
// 地址: 0x14098e0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t rbx = data_143cedbf0
j_sub_140b3db50()
int64_t* rax_2 = j_sub_140b407e0(&data_143de7d78, rbx)
int64_t rdx_1 = *rax_2
int64_t* rax_3 = (*(rdx_1 + 0x48))(rax_2, rdx_1)
int64_t rdx_2 = *rax_3
uint64_t result = (*(rdx_2 + 0x218))(rax_3, rdx_2)

if (result != 0)
    int64_t var_80
    int64_t* rax_4 = sub_140b63b70(&arg_10, &var_80)
    int16_t* const rbx_1 = &data_142d40450
    
    if (rax_4[1].d != 0)
        *rax_4
    
    int16_t* var_90
    sub_140a2e390(&var_90, u"%s%s", &data_142e3c520)
    int64_t rcx_4 = var_80
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    int32_t var_3c_1 = 0x80
    int32_t var_88
    
    if (var_88 != 0)
        rbx_1 = var_90
    
    uint64_t var_68 = 0
    int32_t var_60_1 = 0
    int64_t var_58
    __builtin_memset(&var_58, 0, 0x1c)
    int32_t var_34_1 = 0
    void* var_28_1 = nullptr
    int32_t var_20_1 = 0
    int32_t var_38_1 = 0xffffffff
    sub_14098dd50(&var_68, result + 0x140)
    int64_t rbx_2 = *sub_140b58260(&var_80, rbx_1, 1)
    int32_t rax_11
    void* rdx_6
    
    if (var_60_1 == var_34_1)
        rdx_6 = var_28_1
    label_14098e23d:
        rax_11 = -1
    else
        rdx_6 = var_28_1
        int64_t rcx_10 = (sx.q(var_20_1) - 1) & sx.q(sub_140b5ead0(rbx_2.d) + rbx_2:4.d)
        void var_30
        void* rax_10 = &var_30
        
        if (rdx_6 != 0)
            rax_10 = rdx_6
        
        rax_11 = *(rax_10 + (rcx_10 << 2))
        
        if (rax_11 == 0xffffffff)
        label_14098e23d_1:
            rax_11 = -1
        else
            uint64_t r8_1 = var_68
            
            while (true)
                int64_t rcx_12 = sx.q(rax_11) << 5
                
                if (*(rcx_12 + r8_1) == rbx_2)
                    break
                
                rax_11 = *(rcx_12 + r8_1 + 0x18)
                
                if (rax_11 == 0xffffffff)
                    goto label_14098e23d_1
    
    int32_t var_20_2 = 0
    rbx_2.b = rax_11 != 0xffffffff
    
    if (rdx_6 != 0)
        sub_140a74f90(rdx_6)
    
    sub_1407547c0(&var_68, 0)
    int64_t var_48
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    uint64_t rcx_16 = var_68
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    int16_t* rcx_17 = var_90
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    result = zx.q(rbx_2.b)

__security_check_cookie(rax_1 ^ &var_b8)
return result
