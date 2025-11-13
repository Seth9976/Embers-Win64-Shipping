// 函数: sub_14209d600
// 地址: 0x14209d600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
int64_t* result = sub_14208c230(&var_28, *arg2)

if (var_28 != 0)
    result = sub_140d2bce0(&var_28)
    int64_t* result_1 = result
    
    if (result != 0)
        void* rax = sub_1425af170()
        void* rcx_2 = result_1[2]
        result = rax + 0x30
        int64_t rdx_1 = sx.q(result[1].d)
        
        if (rdx_1.d s<= *(rcx_2 + 0x38) && *(*(rcx_2 + 0x30) + (rdx_1 << 3)) == result)
            result = result_1[7]
            *arg2 = result

int64_t var_20

if (var_20 == 0)
    return result

return sub_140a74f90(var_20)
