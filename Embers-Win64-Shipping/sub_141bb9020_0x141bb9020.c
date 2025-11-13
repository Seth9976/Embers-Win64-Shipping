// 函数: sub_141bb9020
// 地址: 0x141bb9020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg2 + 8)
void* rdi = arg2
sub_140d2df10()
int64_t result

if (rbx != &data_143e1d7f0)
    int64_t rbx_1 = *(arg2 + 8)
    sub_140d11f70()
    
    if (rbx_1 != &data_143e1c450)
        if ((*(*(arg2 + 8) + 0x16) & 1) != 0)
            rdi = *(rdi + 0x78)
        
        int64_t rbx_2 = *(rdi + 8)
        sub_140d11680()
        
        if (rbx_2 != &data_143e1be30)
            int64_t rbx_3 = *(arg2 + 8)
            sub_140d113c0()
            
            if (rbx_3 != &data_143e1bfc0)
                result.b = 0
                return &data_143e1bf00

result.b = 1
return result
