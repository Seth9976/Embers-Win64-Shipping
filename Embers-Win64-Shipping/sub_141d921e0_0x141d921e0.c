// 函数: sub_141d921e0
// 地址: 0x141d921e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x10)
int32_t rbx_1 = rbx - 1
int128_t zmm6 = arg2

if (rbx - 1 s< 0)
    return 

int64_t rdi_2 = sx.q(rbx_1) << 4
int32_t temp1_1

do
    zmm6 = sub_141da3750(*(*(arg1 + 8) + rdi_2), zmm6)
    int64_t* rcx_2 = *(arg1 + 8)
    void* rax = *(rcx_2 + rdi_2 + 8)
    
    if (rax != 0 && *(rax + 8) == 1)
        rax = *(rcx_2 + rdi_2)
        
        if (*(rax + 0x190) == 0 && *(rax + 0x188) s<= 0)
            sub_140dbae50(arg1 + 8, rbx_1, 1, 1)
    
    rdi_2 -= 0x10
    temp1_1 = rbx_1
    rbx_1 -= 1
while (temp1_1 - 1 s>= 0)
