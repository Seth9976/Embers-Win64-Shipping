// 函数: sub_1418a7ab0
// 地址: 0x1418a7ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
uint64_t result = __security_cookie ^ &var_88
uint64_t result_1 = result

if (*(arg1 + 0xf0) != arg2)
    *(arg1 + 0xf0) = arg2
    char var_20_1 = 0xff
    int64_t* var_68
    int64_t var_48
    sub_14189ca00(&var_48, sub_1418a0140(&var_68, arg2))
    int64_t* rax_2 = j_sub_140a82f30(0x38)
    
    if (rax_2 != 0)
        *rax_2 = 0
        rax_2[6].b = 0xff
        sub_14189e9c0(&rax_2[1], &var_48)
        int64_t* temp0_1 = *(arg1 + 0xe0)
        *(arg1 + 0xe0) = rax_2
        *temp0_1
        *temp0_1 = rax_2
    
    uint64_t rdx_2 = zx.q(var_20_1)
    result = zx.q(rdx_2.d)
    bool cond:1_1
    
    if (rdx_2.d u<= 5)
        switch (rdx_2)
            case 0
                if (rdx_2.b == 0)
                    char var_20_2 = 0xff
                    result = sub_14189e230(&var_48)
            case 1
                if (rdx_2.b == 1)
                    char var_20_3 = 0xff
            case 2
                cond:1_1 = rdx_2.b != 2
            label_1418a7b7f:
                
                if (not(cond:1_1))
                    int64_t rcx_8 = var_48
                    char var_20_4 = 0xff
                    
                    if (rcx_8 != 0)
                        result = sub_140a74f90(rcx_8)
            case 3
                cond:1_1 = rdx_2.b != 3
                goto label_1418a7b7f
            case 4
                if (rdx_2.b == 4)
                    char var_20_5 = 0xff
            case 5
                result = zx.q(rdx_2.b)
                
                if (rdx_2.b == 4)
                    result = 0xff
                
                char var_20_6 = result.b
    int32_t i_5
    int32_t i_2 = i_5
    int64_t* var_58
    int64_t* rbx_3 = var_58
    
    if (i_2 != 0)
        int32_t i
        
        do
            result =
                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                rbx_3)
            rbx_3 = &rbx_3[7]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rbx_3 = var_58
    
    if (rbx_3 != 0)
        result = sub_140a74f90(rbx_3)
    
    int32_t i_4
    int32_t i_3 = i_4
    int64_t* rbx_4 = var_68
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            result =
                pdb_internal::Array<struct FileLCRec* __ptr64>::~Array<struct FileLCRec* __ptr64>(
                rbx_4)
            rbx_4 = &rbx_4[7]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        rbx_4 = var_68
    
    if (rbx_4 != 0)
        result = sub_140a74f90(rbx_4)

__security_check_cookie(result_1 ^ &var_88)
return result
