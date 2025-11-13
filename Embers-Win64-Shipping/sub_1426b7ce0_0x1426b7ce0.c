// 函数: sub_1426b7ce0
// 地址: 0x1426b7ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1[0xd].b & 4) == 0 && (arg1[0xb].b & 4) == 0)
    return 

uint64_t rdi_1

if ((*(arg1 + 0x55) & 4) == 0)
    rdi_1 = arg1
else
    rdi_1 = sub_1426b2a30(arg1, arg2)

if (rdi_1 == 0)
    return 

void* rcx = *arg2
int64_t rbp_2 = zx.q(*(arg1 + 0x52)) + *(zx.q(*(rcx + 0x260)) * 0x58 + *(rcx + 0x110) + 0x30)
char rax_3 = arg1[0xb].b

if ((rax_3 & 4) != 0)
    int32_t temp0_1
    
    if ((arg1[0xd].b & 2) == 0 && (rax_3 & 8) != 0)
        uint32_t rax_6 = zx.d((*(*arg1 + 0x298))(arg1))
        void* const rax_8
        
        if (rax_6 == 0)
            rax_8 = nullptr
        else
            rax_8 = rbp_2 - (zx.q(rax_6 + 3) & 0xfffffffffffffffc)
        
        temp0_1 = _mm_max_ss(*(rax_8 + 4), 0)
    
    if ((arg1[0xd].b & 2) != 0 || (rax_3 & 8) == 0 || not(temp0_1 f> 0f))
        sub_1426be7d0(rdi_1, rbp_2)

uint64_t rax = zx.q(arg1[0xd].d)

if ((rax.b & 4) != 0)
    (*(*rdi_1 + 0x2d0))(rdi_1, arg2)
    rax = zx.q(arg1[0xd].d)

if ((rax.b & 1) != 0)
    int512_t zmm3
    zmm3.o = zx.o(0)
    (*(*rdi_1 + 0x2c0))(rdi_1, *arg2, rbp_2, zmm3, arg3)
