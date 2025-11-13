// 函数: sub_1408bacc0
// 地址: 0x1408bacc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = arg1[3]
int128_t* rbx = arg1[2]
int64_t rdi = arg1[1]
int64_t rbp = sx.q(arg2)
void var_38
int64_t* rax = sub_1408bda40(&var_38, nullptr, 0xff)
int64_t rcx_1 = arg1[4]
int128_t zmm2 = rbx[1]
void* r8 = *rax
int128_t zmm3 = rbx[2]
int64_t zmm0 = rbx[3].q
*(r8 + 0x18) = *rbx
*(r8 + 0x10) = rdi
*(r8 + 0x28) = zmm2
*(r8 + 0x50) = rsi
*(r8 + 0x38) = zmm3
*(r8 + 0x58) = rcx_1
*(r8 + 0x48) = zmm0
*(r8 + 0x60) = rbp.d
void* rcx_2 = *rax
int64_t* rbx_1 = *(rcx_2 + 0x70)

if (rbx_1 != 0)
    rbx_1[9].d += 1

sub_1408c3da0(rcx_2, rax[1], rax[2].d, 1)
void* rcx_3 = *arg1
void* rax_1 = *(rcx_3 + 0x20)

if (rax_1 != 0)
    rcx_3 = rax_1

void arg_8
int32_t result = &arg_8
void* rdx_1 = rcx_3 + (rbp << 3)

if (rdx_1 != &arg_8)
    int64_t* rcx_4 = *rdx_1
    *rdx_1 = rbx_1
    
    if (rcx_4 != 0)
        result = rcx_4[9].d
        rcx_4[9].d -= 1
        
        if (result == 1)
            return sub_140a2f6e0(rcx_4)
else if (rbx_1 != 0)
    result = rbx_1[9].d
    rbx_1[9].d -= 1
    
    if (result == 1)
        return sub_140a2f6e0(rbx_1)

return result
