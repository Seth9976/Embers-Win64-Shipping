// 函数: sub_1427d39b0
// 地址: 0x1427d39b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm1 = *(arg2 + 0x10)
sub_1427e5d10(arg1, *arg2)
int32_t* rax = arg1[0xb]

if (rax != 0)
    *rax += 1

bool cond:0 = arg1[9].b == 0
char* arg_8 = nullptr

if (not(cond:0))
    void* rdx_1 = *arg1
    char const* const rdx_2
    
    if (*(rdx_1 + 0x10) == 0)
        rdx_2 = "bad__repx__name"
    else
        rdx_2 = *(*(rdx_1 + 8) + zx.q(*(rdx_1 + 0x10) - 1) * 0x18)
    
    int64_t* rcx_1 = arg1[5]
    
    if ((*(*rcx_1 + 0x10))(rcx_1, rdx_2, &arg_8) != 0)
        char* rdx_3 = arg_8
        
        if (rdx_3 != 0 && *rdx_3 != 0)
            int64_t* rcx_2 = arg1[4]
            
            if (rcx_2 != 0)
                int64_t rax_7 = (*(*rcx_2 + 8))(rcx_2)
                zmm1:8.q(arg1[6], rax_7)

return sub_1427e5c70(arg1) __tailcall
