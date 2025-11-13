// 函数: sub_140e0db30
// 地址: 0x140e0db30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg9
void* rcx = arg1[1]
char r13 = *(rdi + 0x4c)
int128_t* result

if (rcx == 0)
    int64_t* rbx_1 = *arg1
    int32_t rax_5 = rbx_1[5].d
    int64_t rbp_1 = sx.q(rbx_1[1].d)
    arg9.d = rbx_1[3].d
    int32_t rax_7 = (rbp_1 + 1).d
    rbx_1[1].d = rax_7
    
    if (rax_7 s> *(rbx_1 + 0xc))
        sub_1408888d0(rbx_1)
    
    result = (rbp_1 << 7) + *rbx_1
    *result = *arg3
    result[1] = arg3[1]
    result[2].q = 0
    result[4].q = &rbx_1[2]
    *(result + 0x48) = &rbx_1[4]
    *(result + 0x5c) = arg9.d
    result[6].d = rax_5
    *(result + 0x79) = arg8
    *(result + 0x7a) = arg6
    *(result + 0x7b) = arg5
    *(result + 0x7c) = arg7
    char rax_16 = *(result + 0x7d) & 0xfd
    *(result + 0x28) = 0
    result[3].q = arg4
    *(result + 0x7d) = rax_16 | 1
    *(result + 0x38) = 0
    result[5].q = 0
    *(result + 0x58) = arg2
    *(result + 0x64) = 0
    *(result + 0x6c) = 0xffffffff
    result[7].q = 0
    *(result + 0x78) = r13
else
    result = sub_140d993e0(rcx, arg2, arg3, arg4, arg5, arg6, arg7, arg8, r13)

int64_t rax_19 = *(rdi + 0x38)

if (rax_19 == 0)
    int64_t rax_17 = sx.q(*(rdi + 0x40))
    void* rdx_1
    
    if (rax_17.d s>= 0)
        rdx_1 = arg1[2]
    
    if (rax_17.d s< 0 || rax_17.d s>= *(rdx_1 + 8))
        *(result + 0x28) = 0
        return result
    
    rax_19 = (rax_17 << 6) + *rdx_1

*(result + 0x28) = rax_19
return result
