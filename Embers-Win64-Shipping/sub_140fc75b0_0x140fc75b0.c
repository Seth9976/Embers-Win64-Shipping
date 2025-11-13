// 函数: sub_140fc75b0
// 地址: 0x140fc75b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_18
int64_t* rax_1 = (*(*arg1 + 0xa0))(arg1, &arg_18)
int64_t rdx_1 = data_143e2b878
int64_t rcx = *rax_1
int64_t arg_8 = rcx
int64_t rax_2

if ((-0x8000000000000000 & rdx_1) == 0 || rcx != 0)
    void arg_20
    rax_2 = *sub_140b63580(&data_143e2b878, &arg_20)
    rax_2.b = arg_8 == rax_2
else
    int64_t* rcx_1 = &arg_8
    char* rdx_2 = rdx_1 & 0x7fffffffffffffff
    
    if (data_143e2b884 != 0)
        rax_2 = sub_140b5b9d0(rcx_1, rdx_2)
    else
        rax_2 = sub_140b5b8c0(rcx_1, rdx_2)

if (rax_2.b == 0)
    rax_2 = ntohl(*(arg1 + 0xc))
    *arg2 = rax_2.d
else
    *arg2 = 0
    
    if (arg1[2].w == 0 && *(arg1 + 0x12) == 0 && *(arg1 + 0x14) == 0 && *(arg1 + 0x16) == 0
            && arg1[3].w == 0)
        rax_2 = 0xffff
        
        if (*(arg1 + 0x1a) == 0xffff)
            uint32_t rax_6 = zx.d(*(arg1 + 0x1f))
            *arg2 = ((zx.d(*(arg1 + 0x1c)) << 8 | zx.d(*(arg1 + 0x1d))) << 8 | zx.d(*(arg1 + 0x1e)))
                << 8 | rax_6
            return rax_6

return rax_2
