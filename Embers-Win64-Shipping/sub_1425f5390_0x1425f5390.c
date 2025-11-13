// 函数: sub_1425f5390
// 地址: 0x1425f5390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = data_143f70ce8
sub_140b34200("FinalizeRecording", rbp)
bool z

if (0 == *(arg1 + 0x20))
    *(arg1 + 0x20) = 0
    z = true
else
    *(arg1 + 0x20)
    z = false

if (not(z))
    if (arg2 == 0)
        char rdi
        
        if (*(arg1 + 0x31) == 0 || arg3 != 0)
            rdi = 0
        else
            rdi = 1
        
        void var_88
        int64_t* rax_8 = sub_140596d10(&var_88, arg1 + 0x48)
        *(arg1 + 0x20)
        *(arg1 + 0x20) = 0
        
        if (rdi == 0)
            sub_1425f7480(*(arg1 + 0x70))
        else
            sub_1425f5e40(arg1)
            *(arg1 + 0x20)
            *(arg1 + 0x20) = 2
        
        int64_t rcx_11 = *rax_8
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
    else
        int64_t var_68
        sub_140596d10(&var_68, arg1 + 0x48)
        void*** rax_3 = sub_140a82f30(0x28, 8)
        rax_3[1] = arg1
        rax_3[2].b = arg3
        rax_3[3] = var_68
        int32_t var_60
        rax_3[4].d = var_60
        int32_t var_5c
        *(rax_3 + 0x24) = var_5c
        *rax_3 = &data_14344b598
        void*** var_48_1 = rax_3
        int64_t var_58[0x2]
        int64_t (* rax_4)(int64_t* arg1, char* arg2) = var_58[0]
        
        if (rax_3 != -8)
            rax_4 = sub_1425f4be0
        
        var_58[0] = rax_4
        int16_t* rdx_3
        
        if (*(arg1 + 0x50) == 0)
            rdx_3 = &data_142d40450
        else
            rdx_3 = *(arg1 + 0x48)
        
        int64_t rax_5 = *(arg1 + 0x28)
        int128_t zmm3
        zmm3.q = float.d(rax_5)
        
        if (rax_5 s< 0)
            zmm3.q = zmm3.q f+ 1.8446744073709552e+19
        
        if (sub_1425f6920(*(arg1 + 0x70), rdx_3, &var_58, zmm3) != 0)
            *(arg1 + 0x20)
            *(arg1 + 0x20) = 5

return sub_140b38680("FinalizeRecording", rbp) __tailcall
