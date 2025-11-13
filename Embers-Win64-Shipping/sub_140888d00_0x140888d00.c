// 函数: sub_140888d00
// 地址: 0x140888d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1419d7320(arg1, arg2, arg3)
int64_t* rdx = arg2[1]
int32_t result_1 = *(arg1 + 0x90)
int32_t* rcx = *rdx
int32_t result

if (&rcx[1] u> rdx[1])
    int32_t* rdx_1 = &result_1
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        result = sub_140b54070(arg2, rdx_1, arg3)
    else
        result = (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    result = *rcx
    result_1 = result
    *rdx += 4

int32_t rbx = 0

if (result_1 s> 0)
    void** rdi_1 = nullptr
    
    do
        uint64_t var_18
        result = sub_140a1d9d0(arg2, &var_18, 
            sub_140d21830(*(*(rdi_1 + *(arg1 + 0x88)) + 0x10), &var_18, 0, 0))
        uint64_t rcx_5 = var_18
        
        if (rcx_5 != 0)
            result = sub_140a74f90(rcx_5)
        
        rbx += 1
        rdi_1 = &rdi_1[1]
    while (rbx s< result_1)

return result
