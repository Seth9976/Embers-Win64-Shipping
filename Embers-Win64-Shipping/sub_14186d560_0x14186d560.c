// 函数: sub_14186d560
// 地址: 0x14186d560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* var_70 = nullptr
int32_t var_68 = 0
int32_t result = (*(*arg1 + 0x1c0))(arg1, &var_70)
int32_t* rbx = var_70
void* r15_2 = &rbx[sx.q(var_68) * 4]

if (rbx != r15_2)
    do
        char arg_8 = 0
        int32_t var_40
        sub_140598750(arg3, &var_40)
        int128_t* var_38
        *var_38 = *rbx
        var_38[1].d = 0xffffffff
        void var_88
        int512_t zmm1_1
        result, zmm1_1 =
            sub_14093ebb0(arg3, &var_88, sub_140a6b260(var_38, 0x10), var_38, var_40, &arg_8)
        
        if (arg_8 == 0)
            int64_t var_60 = 0
            int64_t var_58_1 = 0
            int64_t var_80
            sub_14183a8c0(&var_80, arg1, &var_60, rbx, zmm1_1, arg5)
            int64_t rcx_5 = var_60
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            if (arg4 != 0)
                int64_t var_50
                sub_140a2e390(&var_50, u"\t%u", (*(*arg1 + 0x188))(arg1, rbx))
                int32_t var_48
                int32_t r8_4
                
                if (var_48 == 0)
                    r8_4 = 0
                else
                    r8_4 = var_48 - 1
                
                sub_140a20ba0(&var_80, var_50, r8_4)
                int64_t rcx_9 = var_50
                
                if (rcx_9 != 0)
                    sub_140a74f90(rcx_9)
            
            int64_t rdi_2 = sx.q(arg2[1].d)
            int32_t rax_4 = (rdi_2 + 1).d
            arg2[1].d = rax_4
            
            if (rax_4 s> *(arg2 + 0xc))
                sub_1405a4f90(arg2)
            
            int64_t* rcx_13 = (rdi_2 << 4) + *arg2
            *rcx_13 = 0
            *rcx_13 = var_80
            var_80 = 0
            int32_t var_78
            rcx_13[1].d = var_78
            int32_t result_1
            result = result_1
            *(rcx_13 + 0xc) = result
            int64_t rcx_14 = var_80
            var_78.q = 0
            
            if (rcx_14 != 0)
                result = sub_140a74f90(rcx_14)
        
        rbx = &rbx[4]
    while (rbx != r15_2)
    
    rbx = var_70

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
