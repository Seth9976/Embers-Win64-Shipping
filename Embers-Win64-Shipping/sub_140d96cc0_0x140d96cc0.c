// 函数: sub_140d96cc0
// 地址: 0x140d96cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
*arg3 = 0
int64_t* rdi = *arg1[1]
int64_t* result_1 = rdi[1]
int64_t* result = result_1

if (result_1 != 0)
    int32_t rax_1 = result_1[1].d
    
    if (rax_1 == 0)
        result_1 = nullptr
        result = nullptr
    else
        result_1[1].d = rax_1 + 1
        result = result_1

if (result != 0)
    int64_t* rdi_1 = *rdi
    
    if (rdi_1 != 0)
        int32_t rax_3 = sub_142b91fc0(*rdi_1)
        *arg2 = rax_3
        int64_t* rcx_1 = arg1[1]
        int32_t arg_8 = 0
        void* r9_1 = *rcx_1
        result = sub_140da12c0(*(*arg1 + 8), *rdi_1, rax_3, *(r9_1 + 0x10), *(r9_1 + 0x14), 
            *(r9_1 + 0x18), &arg_8)
        
        if (result.b != 0)
            result = zx.q((((arg_8 + 0x200) s>> 0xa) + 0x20) s>> 6)
            *arg3 = result.w

if (result_1 != 0)
    result_1[1].d -= 1
    
    if (result_1[1].d == 1)
        result = (**result_1)(result_1)
        int32_t temp1_1 = *(result_1 + 0xc)
        *(result_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*result_1 + 8))(result_1, 1)

return result
