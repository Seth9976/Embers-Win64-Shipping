// 函数: sub_140a670c0
// 地址: 0x140a670c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18 = nullptr
int32_t i_2 = 0
sub_140a5d8f0(arg2, &var_18)
int64_t result = sub_140a5bc30(*arg1, &var_18)
int32_t i_1 = i_2
int64_t* rbp = var_18
int64_t* rdi = rbp

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rbx_1 = *rdi
        
        if (rbx_1 != 0)
            int64_t* rcx_2 = data_143ddb3f0
            
            if (rcx_2 == 0)
                sub_140a750a0()
                rcx_2 = data_143ddb3f0
            
            result = (*(*rcx_2 + 0x30))(rcx_2, rbx_1)
        
        rdi = &rdi[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (rbp == 0)
    return result

int64_t* rcx_3 = data_143ddb3f0

if (rcx_3 == 0)
    sub_140a750a0()
    rcx_3 = data_143ddb3f0

return (*(*rcx_3 + 0x30))(rcx_3, rbp)
