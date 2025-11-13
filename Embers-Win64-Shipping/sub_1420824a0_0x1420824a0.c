// 函数: sub_1420824a0
// 地址: 0x1420824a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x48) == 0)
    return 

sub_140cea340()
bool rcx
void* rdx_1

if (*(arg1 + 0x28) == 0)
    rcx = true
    rdx_1 = nullptr
else
    char rax_1 = sub_140d3e110(arg1 + 0x30)
    rdx_1 = *(arg1 + 0x28)
    rcx = rax_1 == 0

if (rcx != 0 && *(arg1 + 0x40) != 0)
    void* rax_2 = sub_140cd0630(arg1 + 0x28, nullptr, 0)
    rdx_1 = rax_2
    
    if (rax_2 == 0 || (data_143e1b828 & *(*(rax_2 + 8) + 0x10)) == 0)
        rdx_1 = *(arg1 + 0x28)
        
        if (rdx_1 != 0)
            *(arg1 + 0x30) = 0xffffffff
            rdx_1 = nullptr
            *(arg1 + 0x34) = 0
            *(arg1 + 0x28) = 0
    else
        *(arg1 + 0x28) = rdx_1

int64_t* rcx_4 = *(arg1 + 0x48)
(*(*rcx_4 + 0xb0))(rcx_4, rdx_1)
