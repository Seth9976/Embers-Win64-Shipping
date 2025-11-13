// 函数: sub_141e59870
// 地址: 0x141e59870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]

if (rcx == 0)
    return 

void* rdx_1 = *arg1
int64_t var_38
__builtin_memset(&var_38, 0, 0x28)
int64_t var_30
int64_t var_28
int64_t var_20
int64_t var_18
int32_t rax = (*(*rcx + 8))(rcx, *(rdx_1 + 0x288), zx.q(*(rdx_1 + 0x210)), &var_38, var_38, var_30, 
    var_28, var_20, var_18)
void* rcx_1 = *arg1

if (rax.b != 0)
    *(rcx_1 + 0x16e) &= 0xfb
    *(rcx_1 + 0x16e) |= 8
    *(rcx_1 + 0x208) = var_30.d
    *(*arg1 + 0x204) = var_38:4.d
    int32_t zmm1 = var_28.d
    
    if (not(zmm1 f<= 0f))
        *(*arg1 + 0xf8) = zmm1
    
    void* rcx_3 = *arg1
    
    if (*(rcx_3 + 0x169) != 4)
        *(rcx_3 + 0x274) = var_30:4.d
        *(*arg1 + 0x278) = sub_140a82f30(sx.q(*(*arg1 + 0x274)), 0)
        int64_t* rcx_10 = arg1[1]
        (*(*rcx_10 + 0x20))(rcx_10, *(*arg1 + 0x278), &var_38)
        void* rcx_11 = *arg1
        *(rcx_11 + 0x214) += *(rcx_11 + 0x274)
    else
        int32_t rax_5 = arg1[2].d
        int32_t rdi_2 = *(rcx_3 + 0x204) * rax_5
        *(rcx_3 + 0x270) = rax_5
        void* rcx_4 = *arg1
        int32_t rdi_3 = rdi_2 << 2
        
        if (*(rcx_4 + 0x268) == 0)
            *(*arg1 + 0x268) = sub_140a82f30(zx.q(rdi_3), 0)
            void* rdx_3 = *arg1
            int64_t* rcx_7 = arg1[1]
            (*(*rcx_7 + 0x10))(rcx_7, *(rdx_3 + 0x268), *(rdx_3 + 0x16b) & 1, zx.q(rdi_3))
        else if (0 == *(rcx_4 + 0x1a4))
            *(rcx_4 + 0x1a4) = 0
        else
            *(rcx_4 + 0x1a4)
else if (*(rcx_1 + 0x169) == 4)
    *(rcx_1 + 0x169) = 1
    *(*arg1 + 0x204) = 0
    sub_142372ee0(*arg1)

void* rcx_13 = *arg1

if (*(rcx_13 + 0x169) == 3)
    sub_142372ee0(rcx_13)

int64_t* rcx_14 = arg1[1]

if (rcx_14 != 0)
    (**rcx_14)(rcx_14, 1)

if (var_20 != 0)
    sub_140a74f90(var_20)
