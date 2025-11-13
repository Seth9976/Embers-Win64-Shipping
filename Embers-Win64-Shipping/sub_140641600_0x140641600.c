// 函数: sub_140641600
// 地址: 0x140641600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr
uint64_t rdi = zx.q(arg2)
*arg3 = 0
void* result_1 = nullptr
int64_t arg_8
int64_t rbx = *sub_140b58170(&arg_8, "ImageWrapper", 1)
j_sub_140b3db50()
int64_t* rax_1
int64_t r8
rax_1, r8 = j_sub_140b407e0(&data_143de7d78, rbx)

if (rdi.d u> 5)
    r8.b = 1
else
    switch (rdi)
        case 0
            r8.b = 1
        case 1
            r8.b = 0
        case 2
            r8.b = 3
        case 3
            r8.b = 4
        case 4
            r8.b = 5
        case 5
            r8.b = 6

int64_t* var_58
(*(*rax_1 + 0x40))(rax_1, &var_58, r8)
int64_t var_68 = 0
int32_t var_60 = 0
int16_t* const rdx_4

if (arg1[1].d == 0)
    rdx_4 = &data_142d40450
else
    rdx_4 = *arg1

if (sub_140b1ef70(&var_68, rdx_4, 0) != 0)
    int64_t* rcx_3 = var_58
    
    if (rcx_3 == 0)
        *arg3 = 1
        result = result_1
    else
        char rax_5
        int64_t rdx_6
        rax_5, rdx_6 = (**rcx_3)(rcx_3, var_68, sx.q(var_60))
        
        if (rax_5 == 0)
            *arg3 = 1
            result = result_1
        else
            int64_t* rcx_4 = var_58
            int128_t var_48
            __builtin_memset(&var_48, 0, 0x18)
            rdx_6.b = 1
            
            if ((*(*rcx_4 + 0x20))(rcx_4, rdx_6, 8, &var_48) == 0)
                goto label_1406417e7
            
            int64_t* rdi_1 = var_58
            arg_8 = 0
            int32_t rax_9 = (*(*rdi_1 + 0x30))(rdi_1)
            int64_t rdx_7 = *rdi_1
            void* result_2 = sub_1423bea40((*(rdx_7 + 0x28))(rdi_1, rdx_7), rax_9, 2, 0)
            result_1 = result_2
            
            if (result_2 != 0)
                int64_t* rcx_9 = var_58
                int32_t rax_12 = (*(*rcx_9 + 0x28))(rcx_9)
                int64_t* rcx_10 = var_58
                *arg4 = rax_12
                *arg5 = (*(*rcx_10 + 0x30))(rcx_10)
                memcpy(sub_140bcb6b0(**(*(result_1 + 0xd0) + 0x18) + 0x10, 2), var_48.q, 
                    (var_48:8.q).d)
                sub_140bd1d40(**(*(result_1 + 0xd0) + 0x18) + 0x10)
                (*(*result_1 + 0x2f8))(result_1)
            label_1406417e7:
                int64_t rcx_20 = var_48.q
                
                if (rcx_20 != 0)
                    sub_140a74f90(rcx_20)
                
                *arg3 = 1
                result = result_1
            else
                int64_t rcx_8 = var_48.q
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)

int64_t rcx_21 = var_68

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp1_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_4 = *var_50
            (*(r8_4 + 8))(var_50, 1, r8_4)

return result
