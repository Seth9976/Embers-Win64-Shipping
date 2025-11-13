// 函数: sub_142235300
// 地址: 0x142235300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("Physics")
void* rdi = *(arg1 + 0xa0)
int32_t zmm6_1 = sub_142233fc0(arg1)
int64_t* rax = sub_142565030()
void* rax_1 = rax[0x23]

if (rax_1 == 0)
    int64_t rdx_1 = *rax
    (*(rdx_1 + 0x390))(rax, rdx_1)
    rax_1 = rax[0x23]

int32_t zmm1_1 = (zx.o(0)).d

if (not(zmm6_1 f< 0f))
    zmm1_1 = _mm_min_ss(*(rax_1 + 0xc0), zmm6_1)

sub_141d34610(rdi, zmm1_1)
return sub_140b37f60("Physics") __tailcall
