// 函数: sub_1419f4730
// 地址: 0x1419f4730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2
int32_t rax

if (arg3 != 0)
    rax = (*(*arg3 + 0x58))(arg3)

if (arg3 == 0 || rax == 0)
    arg4[1].d = 0
    
    if (*(arg4 + 0xc) != 0)
        return sub_1405947f0(arg4, 0) __tailcall
    
    return 

int32_t rcx_1 = *(arg4 + 0xc)
int32_t rdx = 0
arg4[1].d = 0
int32_t i_2 = arg1 * arg1 * 2
int32_t i_3 = i_2
uint32_t rsi_2 = i_2 * rdi * rdi * 0xc

if (rcx_1 != rsi_2)
    sub_1405947f0(arg4, rsi_2)
    rdx = arg4[1].d
    rcx_1 = *(arg4 + 0xc)

int32_t rax_5 = rdx + rsi_2
arg4[1].d = rax_5

if (rax_5 s> rcx_1)
    sub_140594770(arg4)

rax = 0
int32_t var_48_1 = 0

if (rdi s<= 0)
    return 

do
    int32_t r15_1 = 0
    int32_t rax_6 = rax * rdi
    int32_t arg_18 = 0
    int32_t var_44_1 = rax_6
    
    do
        uint64_t rax_8 = zx.q((rax_6 + r15_1) * i_2)
        
        if (rax_8.d u< rax_8.d + i_2)
            int32_t r15_3 = (rax_8 + (zx.q((rax_8 + 1).d) << 1)).d
            uint32_t r12_2 = (rax_8 * 3).d << 2
            uint64_t i_1 = zx.q(i_2)
            uint64_t i
            
            do
                int64_t rbp_1 = sx.q(r12_2)
                *(*arg4 + (rbp_1 << 1)) = (*(*arg3 + 0x68))(arg3, zx.q(r15_3 - 2))
                *(*arg4 + (rbp_1 << 1) + 2) = (*(*arg3 + 0x68))(arg3, zx.q(r15_3 - 1))
                *(*arg4 + (rbp_1 << 1) + 4) = (*(*arg3 + 0x68))(arg3, zx.q(r15_3))
                *(*arg4 + (rbp_1 << 1) + 6) = (*(*arg3 + 0x68))(arg3, zx.q(r15_3 - 2))
                *(*arg4 + (rbp_1 << 1) + 8) = (*(*arg3 + 0x68))(arg3, zx.q(r15_3 - 1))
                *(*arg4 + (rbp_1 << 1) + 0xa) = (*(*arg3 + 0x68))(arg3, zx.q(r15_3 - 1))
                *(*arg4 + (rbp_1 << 1) + 0xc) = (*(*arg3 + 0x68))(arg3, zx.q(r15_3))
                *(*arg4 + (rbp_1 << 1) + 0xe) = (*(*arg3 + 0x68))(arg3, zx.q(r15_3))
                *(*arg4 + (rbp_1 << 1) + 0x10) = (*(*arg3 + 0x68))(arg3, zx.q(r15_3 - 2))
                *(*arg4 + (rbp_1 << 1) + 0x12) = (*(*arg3 + 0x68))(arg3, zx.q(r15_3 - 2))
                *(*arg4 + (rbp_1 << 1) + 0x14) = (*(*arg3 + 0x68))(arg3, zx.q(r15_3 - 1))
                int64_t rbx_13 = *arg4
                int16_t rax_33 = (*(*arg3 + 0x68))(arg3, zx.q(r15_3))
                r15_3 += 3
                r12_2 += 0xc
                *(rbx_13 + (rbp_1 << 1) + 0x16) = rax_33
                i = i_1
                i_1 -= 1
            while (i != 1)
            r15_1 = arg_18
            i_2 = i_3
            rdi = arg2
        
        rax_6 = var_44_1
        r15_1 += 1
        arg_18 = r15_1
    while (r15_1 s< rdi)
    
    rax = var_48_1 + 1
    var_48_1 = rax
while (rax s< rdi)
