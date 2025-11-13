// 函数: sub_14266d3d0
// 地址: 0x14266d3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_18 = arg3
int32_t arg_8 = 0xc
int64_t** var_68 = nullptr
int32_t i_5 = 0
sub_142640150(*arg1 + 0x60, arg2, &var_68, 0)
uint64_t i_4 = zx.q(i_5)
int64_t** r13 = var_68
char* var_58 = &arg_18
int32_t* var_40 = &arg_8
int64_t var_50 = arg2
void** var_48 = arg1
char* result

if (i_4.d != 0)
    int64_t** r15_1 = nullptr
    var_68 = nullptr
    i_5 = 0
    i_5 = i_4.d
    
    if (i_4.d s> 0)
        sub_1405a4d70(&var_68)
        r15_1 = var_68
    
    memset(r15_1, 0, sx.q(i_4.d) << 3)
    
    if (i_4.d s> 0)
        int64_t** rsi_1 = r15_1
        uint64_t i_2 = i_4
        int32_t* rbx_1 = r13
        uint64_t i
        
        do
            if (sub_140d3e110(rbx_1) != 0)
                int64_t* rax_2 = sub_140d3c6e0(rbx_1)
                int64_t* rdi_1 = rax_2
                
                if (rax_2 != 0)
                    rax_2 = sub_140d21950(rdi_1, sub_14254cd20())
                
                *rsi_1 = rax_2
                
                if (rdi_1 != 0 && rax_2 != 0)
                    sub_14266b610(arg1, rdi_1, rax_2, 0xc)
            
            rbx_1 = &rbx_1[2]
            rsi_1 = &rsi_1[1]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    result = sub_1426465b0(&var_58)
    
    if (result.b != 0 && i_4.d s> 0)
        int64_t** rbx_2 = r15_1
        int64_t** rdi_2 = r13
        uint64_t i_3 = i_4
        uint64_t i_1
        
        do
            result = sub_140d3c6e0(rdi_2)
            
            if (result != 0)
                int64_t* r9_1 = *rbx_2
                int32_t arg_10
                
                if (r9_1 != 0)
                    result = sub_142664630(arg1, &arg_10, result, r9_1, 0xc)
            
            rdi_2 = &rdi_2[1]
            rbx_2 = &rbx_2[1]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    if (r15_1 != 0)
        result = sub_140a74f90(r15_1)
else
    result = sub_1426465b0(&var_58)

if (r13 == 0)
    return result

return sub_140a74f90(r13)
