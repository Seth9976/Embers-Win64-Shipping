// 函数: sub_141ede860
// 地址: 0x141ede860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x81] == 0)
    return 0

int64_t* rdi = arg1[0x14]
void* rax_1
int64_t rax_2
void* rdx_1

if (rdi != 0)
    rax_1 = sub_1424851f0()
    rdx_1 = rdi[2]
    rax_2 = sx.q(*(rax_1 + 0x38))

void*** rax_6

if (rdi == 0 || rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
    rax_6 = j_sub_140a82f30(0x1a0)
    
    if (rax_6 != 0)
        return sub_141ed2060(rax_6, arg1, nullptr) __tailcall
else
    int64_t* rcx_1 = data_143f5b298
    
    if ((*(*rcx_1 + 0x2e8))(rcx_1, rdi) != 0)
        rax_6 = j_sub_140a82f30(0x1a0)
        
        if (rax_6 != 0)
            return sub_141ed2060(rax_6, arg1, rdi) __tailcall
return 0
