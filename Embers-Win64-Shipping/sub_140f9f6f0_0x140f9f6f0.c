// 函数: sub_140f9f6f0
// 地址: 0x140f9f6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x3a8) != 0)
    int64_t* rcx = *(arg1 + 0x3a0)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x3a8) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x3a0)
        
        *(arg1 + 0x398) = (*(*rcx_1 + 0x48))(rcx_1)

if (*(arg1 + 0x398) == 0)
    *(arg2 + 0xc) = 0x3f800000

int128_t* rax_5 = j_sub_140a82f30(0x10)
int128_t* rdi = rax_5

if (rax_5 == 0)
    rdi = nullptr
else
    *rax_5 = *arg2

void*** rax_6 = j_sub_140a82f30(0x18)

if (rax_6 != 0)
    rax_6[1].d = 1
    *rax_6 = &data_142ec7b18
    *(rax_6 + 0xc) = 1
    rax_6[2] = rdi

int128_t* var_18 = rdi
void*** var_10 = rax_6
sub_140fb6360(*sub_140fb2490(arg1 + 0x310), &var_18, arg3)
sub_140faa630(arg1)
return sub_140fc26e0() __tailcall
