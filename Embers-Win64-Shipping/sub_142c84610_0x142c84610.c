// 函数: sub_142c84610
// 地址: 0x142c84610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0x1f)
    return 

void* rbp_1 = *arg1
void* rdi_1 = *(rbp_1 + 0x250)
*(rdi_1 + 0x1eb8) = rdi_1 + 0x1cb8

if (rdi_1 + 0x1cb8 u< rdi_1 + 0x1eb8)
    *(rdi_1 + 0x1cb8) = 0xff
    *(rdi_1 + 0x1eb8) += 1

char* rax_1 = *(rdi_1 + 0x1eb8)

if (rax_1 u< rdi_1 + 0x1eb8)
    *rax_1 = 0xfa
    *(rdi_1 + 0x1eb8) += 1

char* rax_2 = *(rdi_1 + 0x1eb8)

if (rax_2 u< rdi_1 + 0x1eb8)
    *rax_2 = 0x1f
    *(rdi_1 + 0x1eb8) += 1

uint16_t rax_3 = htons(*(rdi_1 + 0x1ca8))
uint16_t rax_4 = htons(*(rdi_1 + 0x1caa))
char* rcx_2 = *(rdi_1 + 0x1eb8)

if (rcx_2 u< rdi_1 + 0x1eb8)
    *rcx_2 = rax_3.b
    *(rdi_1 + 0x1eb8) += 1

char* rdx = *(rdi_1 + 0x1eb8)

if (rdx u< rdi_1 + 0x1eb8)
    *rdx = rax_3:1.b
    *(rdi_1 + 0x1eb8) += 1

char* rax_5 = *(rdi_1 + 0x1eb8)

if (rax_5 u< rdi_1 + 0x1eb8)
    *rax_5 = rax_4.b
    *(rdi_1 + 0x1eb8) += 1

char* rcx_4 = *(rdi_1 + 0x1eb8)

if (rcx_4 u< rdi_1 + 0x1eb8)
    *rcx_4 = rax_4:1.b
    *(rdi_1 + 0x1eb8) += 1

char* rax_7 = *(rdi_1 + 0x1eb8)

if (rax_7 u< rdi_1 + 0x1eb8)
    *rax_7 = 0xff
    *(rdi_1 + 0x1eb8) += 1

char* rax_8 = *(rdi_1 + 0x1eb8)

if (rax_8 u< rdi_1 + 0x1eb8)
    *rax_8 = 0xf0
    *(rdi_1 + 0x1eb8) += 1

int64_t rax_9 = *(rdi_1 + 0x1eb8)
*(rdi_1 + 0x1ec0) = rax_9
*(rdi_1 + 0x1eb8) = rdi_1 + 0x1cb8
int512_t zmm2 = sub_142c83d40(rbp_1, 0x3e, rdi_1 + 0x1cba, rax_9 - (rdi_1 + 0x1cb8) - 2, arg3)

if (send(arg1[0x47], rdi_1 + 0x1cb8, 3, 0) s< 0)
    zmm2 = sub_142c64760(rbp_1, "Sending data failed (%d)", zx.q(WSAGetLastError()), zmm2)

sub_142c84490(arg1, rdi_1 + 0x1cbb, 4)

if (send(arg1[0x47], rdi_1 + 0x1cbf, 2, 0) s< 0)
    sub_142c64760(rbp_1, "Sending data failed (%d)", zx.q(WSAGetLastError()), zmm2)
