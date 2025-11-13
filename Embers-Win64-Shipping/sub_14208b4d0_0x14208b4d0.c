// 函数: sub_14208b4d0
// 地址: 0x14208b4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
int64_t* result = sub_14208c230(&var_28, *arg2)

if (var_28 != 0)
    int64_t* result_3 = sub_140d2bce0(&var_28)
    int64_t* result_2 = result_3
    
    if (result_3 == 0)
    label_14208b53f:
        result = sub_140d30a00(&var_28, 0)
        result_2 = result
        
        if (result != 0)
            void* rax_2 = sub_1425af170()
            void* rdx_2 = result_2[2]
            result = sx.q(*(rax_2 + 0x38))
            
            if (result.d s<= *(rdx_2 + 0x38))
                int64_t* result_1 = result
                result = *(rdx_2 + 0x30)
                
                if (result[result_1] == rax_2 + 0x30)
                    goto label_14208b56f
    else
        void* rax = sub_1425af170()
        void* rdx_1 = result_2[2]
        int64_t rax_1 = sx.q(*(rax + 0x38))
        
        if (rax_1.d s> *(rdx_1 + 0x38))
            goto label_14208b53f
        
        result = *(rdx_1 + 0x30)
        
        if (result[rax_1] != rax + 0x30 || (result_2[1].d & 0x1400) != 0)
            goto label_14208b53f
        
    label_14208b56f:
        
        if (result_2 != 0)
            result = result_2[7]
            *arg2 = result

int64_t var_20

if (var_20 == 0)
    return result

return sub_140a74f90(var_20)
