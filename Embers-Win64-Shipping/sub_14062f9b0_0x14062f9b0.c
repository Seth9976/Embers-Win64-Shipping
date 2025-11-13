// 函数: sub_14062f9b0
// 地址: 0x14062f9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143f5b298

if (rcx != 0)
    int64_t* rcx_1 = *(rcx + 0xb08)
    
    if (rcx_1 != 0 && (*(*rcx_1 + 0x100))(rcx_1) != 0)
        int64_t* rcx_2 = *(data_143f5b298 + 0xb08)
        int64_t* rax_5 = (*(*rcx_2 + 0x100))(rcx_2)
        int64_t rdx_1 = *rax_5
        
        if ((*(rdx_1 + 0x40))(rax_5, rdx_1) != 0)
            int64_t* rcx_4 = *(data_143f5b298 + 0xb08)
            (**rcx_4)(rcx_4, arg1)
            return arg1

sub_140b58170(arg1, "None", 1)
return arg1
