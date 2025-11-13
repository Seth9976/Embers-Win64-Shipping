// 函数: sub_140a661a0
// 地址: 0x140a661a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int16_t* const rbx = &data_142d40450
int16_t* rdx

if (*(rax + 0x68) == 0)
    rdx = &data_142d40450
else
    rdx = *(rax + 0x60)

int32_t result

if (sub_140a23cf0(arg2, rdx, 0, 0, 0xffffffff) == 0xffffffff)
    result.b = 0
else
    void* rax_1 = *arg1
    int16_t* const r9_1
    
    if (*(rax_1 + 0x58) == 0)
        r9_1 = &data_142d40450
    else
        r9_1 = *(rax_1 + 0x50)
    
    if (*(rax_1 + 0x68) != 0)
        rbx = *(rax_1 + 0x60)
    
    int64_t var_18
    sub_140597da0(arg3, sub_140a300d0(arg2, &var_18, rbx, r9_1, 0))
    int64_t rbx_1 = var_18
    
    if (rbx_1 != 0)
        int64_t* rcx_3 = data_143ddb3f0
        
        if (rcx_3 == 0)
            sub_140a750a0()
            rcx_3 = data_143ddb3f0
        
        (*(*rcx_3 + 0x30))(rcx_3, rbx_1)
    
    result.b = 1

return result
