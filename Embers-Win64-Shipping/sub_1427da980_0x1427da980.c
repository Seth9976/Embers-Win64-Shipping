// 函数: sub_1427da980
// 地址: 0x1427da980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg4
sub_1427e5da0(arg1, *arg3)
void* i = *rdi

while (i != 0)
    sub_1427e5da0(arg1, i)
    void var_18
    int64_t* rax
    int64_t rdx_3
    rax, rdx_3 = arg3[3](&var_18, arg1[2], zx.q(rdi[1].d))
    arg1[3]
    arg1[1]
    int64_t var_28_1 = *rax
    int32_t var_20_1 = rax[1].d
    int32_t var_1c_1 = *(rax + 0xc)
    int64_t var_38_1 = arg1[4]
    sub_1427e1570(*arg1, rdx_3)
    void* rdx_4 = *arg1
    
    if (*(rdx_4 + 0x10) != 0)
        if (*(*(rdx_4 + 8) + zx.q(*(rdx_4 + 0x10) - 1) * 0x10 + 8) != 0)
            int64_t* rcx_6 = arg1[1]
            (*(*rcx_6 + 0x20))(rcx_6, rdx_4)
        
        void* rax_5 = *arg1
        *(rax_5 + 0x10) -= 1
    
    i = rdi[2]
    rdi = &rdi[2]

void* rdx_5 = *arg1

if (*(rdx_5 + 0x10) != 0)
    if (*(*(rdx_5 + 8) + zx.q(*(rdx_5 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_10 = arg1[1]
        (*(*rcx_10 + 0x20))(rcx_10, rdx_5)
    
    i = *arg1
    *(i + 0x10) -= 1

return i
