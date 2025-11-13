// 函数: sub_14095d800
// 地址: 0x14095d800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = 0
int64_t* var_28
int64_t* result = sub_1409633d0(&var_28, (*(*arg1 + 0x150))(), 0)
int64_t* rdi = var_28

if (rdi != 0)
    result = (*(*rdi + 0x20))(rdi, arg2)
    
    if (result != 0 && result[0x1c].d == 4)
        void*** var_38 = nullptr
        void*** rax_3 = sub_140a84c80(0, 0x30, 0)
        var_38 = rax_3
        int32_t var_30_1 = 3
        
        if (rax_3 != 0)
            *rax_3 = &data_142e335b8
            sub_140d3a3a0(&rax_3[1], arg1)
            rax_3[2] = sub_14094eb1c
            rax_3[4] = sub_140a387b0()
            *rax_3 = &data_142e33610
        
        void arg_18
        arg1[0x18] = *(*(*rdi + 0xc8))(rdi, &arg_18, &var_38)
        void*** rax_8
        
        if (var_30_1 == 0)
            rax_8 = var_38
        label_14095d92b:
            
            if (rax_8 != 0)
                sub_140a74f90(rax_8)
        else
            void*** rcx_5 = var_38
            
            if (rcx_5 != 0)
                (*rcx_5)[7](rcx_5, 0)
                rax_8 = var_38
                
                if (rax_8 != 0)
                    rax_8 = sub_140a84c80(rax_8, 0, 0)
                    var_38 = rax_8
                
                int32_t var_30_2 = 0
                goto label_14095d92b
        result = (*(*rdi + 0xc0))(rdi, arg2)

int64_t* var_20

if (var_20 != 0)
    result = zx.q(var_20[1].d)
    var_20[1].d -= 1
    
    if (result.d == 1)
        result = (**var_20)(var_20)
        int32_t rdi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_20 + 8))(var_20, zx.q(rdi_1))

return result
