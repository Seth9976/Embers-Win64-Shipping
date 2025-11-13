// 函数: sub_1427b19e0
// 地址: 0x1427b19e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = *arg2
arg3[1].d = arg2[1].d

if (arg1[9].b != 0)
    int64_t* rax_1 = (*(*arg1 + 0x280))()
    int64_t rdx = *rax_1
    int64_t* rax_2 = (*(rdx + 0x2d0))(rax_1, rdx)
    int64_t rdx_1 = *rax_2
    
    if ((*(rdx_1 + 0x18))(rax_2, rdx_1) == 0)
        int32_t rax_3 = arg2[1].d
        int64_t zmm0 = *arg2
        void* var_48 = nullptr
        int64_t var_40 = 0
        int64_t rax_4 = *arg1
        int32_t var_38 = 1
        int32_t var_34 = 4
        int64_t* rax_5 = (*(rax_4 + 0x280))(arg1)
        int64_t rdx_2 = *rax_5
        int64_t* rax_6 = (*(rdx_2 + 0x2d0))(rax_5, rdx_2)
        int64_t r9 = *rax_6
        char rax_7 =
            (*(r9 + 0x20))(rax_6, &var_38, &var_48, r9, var_48, var_40, var_38, zmm0, rax_3)
        void* rcx_5 = var_48
        int64_t* rbx
        
        if (rax_7 == 0)
            rbx.b = 0
        else
            *arg3 = *(rcx_5 + 0x14)
            arg3[1].d = *(rcx_5 + 0x1c)
            rbx.b = 1
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        return zx.q(rbx.b)

int32_t result
result.b = 0
return result
