// 函数: sub_1406a9710
// 地址: 0x1406a9710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = arg2

if ((*(arg1 + 0x10) & 0x100) != 0)
    rdi = std::ctype<char>::tolower(*(*(arg1 + 0x18) + 8))

void* rsi = *(arg1 + 8)
int64_t* rbx_1 = *(rsi + 0x30)

if (rbx_1 == 0)
    int64_t* rax_2 = j_sub_140a82f30(zx.q((&rbx_1[2]).d))
    rbx_1 = rax_2
    
    if (rax_2 == 0)
        rbx_1 = rax_2
    else
        *rbx_1 = 0
        rbx_1[1] = 0
    
    *(rsi + 0x30) = rbx_1

int32_t rax_4 = *(rbx_1 + 4)

if (*rbx_1 u<= rax_4)
    int32_t rsi_1 = rax_4 + 0x10
    int64_t rax_3 = realloc(rbx_1[1], zx.q(rsi_1))
    
    if (rax_3 == 0)
        std::_Xbad_alloc()
        noreturn
    
    rbx_1[1] = rax_3
    rax_4 = *(rbx_1 + 4)
    *rbx_1 = rsi_1

int64_t result = rbx_1[1]
*(zx.q(rax_4) + result) = rdi
*(rbx_1 + 4) += 1
return result
