// 函数: sub_1417fbde0
// 地址: 0x1417fbde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 8) s<= 0)
    return 0

void** result = sub_14284e270(&data_1434d91c0)

if (result == 0)
    return result

char rcx = *arg2
int32_t rax = 0

if (rcx u> 1 || arg2[1] u< 1)
    rax = 0x2000000

if (rcx u> 2 || arg2[1] u< 2)
    rax |= 0x4000000

if (rcx u> 3 || arg2[1] u< 3)
    rax |= 0x10000000

if (rcx u> 4 || arg2[1] u< 4)
    rax |= 0x8000000

int32_t rdx = 0x20000

if (arg2[2] != 0)
    rdx = 0

sub_14284e840(result, rdx | rax)

if (arg2[3] != 0)
    void* rcx_2 = data_143ef9cb8
    
    if (rcx_2 == 0)
        void arg_8
        int64_t rbx_1 = *sub_140b58170(&arg_8, "SSL", (rcx_2 + 1).d)
        j_sub_140b3db50()
        j_sub_140b407e0(&data_143de7d78, rbx_1)
        rcx_2 = data_143ef9cb8
    
    int64_t* rcx_4 = *(rcx_2 + 0x10)
    (*(*rcx_4 + 8))(rcx_4, result)

return result
