// 函数: sub_140d15670
// 地址: 0x140d15670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10
int32_t* rax
int512_t zmm1
rax, zmm1 = sub_140b5e500(&arg_10, 5)
int64_t rax_1 = *(arg2 + 8)
arg_10 = *rax
int32_t arg_14 = 0
int32_t result
int64_t var_28

if (rax_1 != arg_10.q)
    int32_t rcx_6
    rcx_6.b = (rax_1 u>> 0x20).d == 0
    
    if ((rcx_6.b & sub_140b5b8a0(rax_1.d, 0xd).b) == 0)
        result.b = 0
    else
        void* rcx_7 = *arg3
        var_28 = 0
        int32_t var_20_2 = 0
        sub_140a1d9d0(*(rcx_7 + 8), &var_28, zmm1)
        int64_t rbx_1 = var_28
        
        if (arg1 != &var_28)
            int32_t r8_2 = *(arg1 + 0xc)
            arg1[1].d = var_20_2
            
            if (var_20_2 != 0 || r8_2 != 0)
                sub_1405a4c70(arg1, var_20_2, r8_2)
                memcpy(*arg1, rbx_1, var_20_2 * 2)
                rbx_1 = var_28
            else
                *(arg1 + 0xc) = 0
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
        
        result.b = 1
else
    arg_10.q = 0
    int64_t* rcx_1 = *(*arg3 + 8)
    (*(*rcx_1 + 0x130))(rcx_1, &arg_10)
    void* rcx_2 = arg_10.q
    
    if (rcx_2 != 0)
        var_28 = 0
        int64_t var_20_1 = 0
        sub_140d21e40(rcx_2, 0, &var_28)
        
        if (arg1 == &var_28)
            int64_t rcx_4 = var_28
            
            if (rcx_4 == 0)
                result.b = 1
            else
                sub_140a74f90(rcx_4)
                result.b = 1
        else
            int64_t rcx_3 = *arg1
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            *arg1 = var_28
            arg1[1].d = var_20_1.d
            *(arg1 + 0xc) = var_20_1:4.d
            result.b = 1
    else if (arg1 == &var_28)
        result.b = 1
    else
        int64_t rcx_5 = *arg1
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        *arg1 = 0
        result.b = 1
        arg1[1] = 0
return result
