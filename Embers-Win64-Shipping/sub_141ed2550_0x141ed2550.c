// 函数: sub_141ed2550
// 地址: 0x141ed2550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14 = 0
int64_t* rsi = &arg1[2]
__builtin_memset(arg1, 0, 0x20)
void* rdx = &rsi[2]
*(rdx + 0x1c) = 0x80
void* rax = *(rdx + 0x10)

if (rax != 0)
    rdx = rax

__builtin_memset(rdx, 0, 0x1c)
rsi[6].d = 0xffffffff
*(rsi + 0x34) = 0
rsi[8] = 0
rsi[9].d = 0
data_143f3a90c += 1
sub_1419a21e0(0)
int64_t var_a8 = 0
int32_t var_a0 = 0
int32_t var_98 = 0xffffffff
sub_140d3cc80(sub_142459c10(), &var_a8, 1, 0x10, 0)
int64_t r13 = sx.q(var_a0)
int32_t i = var_98 + 1
int64_t rdi = var_a8
int32_t i_1 = i
int32_t arg_8 = r13.d

if (i s< r13.d)
    int32_t i_2 = i
    
    while (*(rdi + (sx.q(i_2) << 3)) == 0)
        i_2 = i + 1
        i_1 = i_2
        i = i_2
        
        if (i_2 s>= r13.d)
            break

uint64_t var_90 = 0
int32_t r15 = r13.d
int32_t var_88 = r13.d

if (r13.d != 0)
    sub_1405c4a00(&var_90, r13.d, 0)
    r14 = var_90
    memcpy(r14, rdi, (r13 << 3).d)
    r13 = zx.q(var_a0)
    i = i_1
    rdi = var_a8
    r15 = var_88
    arg_8 = r13.d

if (i != r13.d)
    do
        int64_t* rsi_1 = *(r14 + (sx.q(i) << 3))
        int64_t* rax_4 = j_sub_140a82f30(0x18)
        void** rdi_1 = rax_4
        
        if (rax_4 == 0)
            rdi_1 = nullptr
        else
            uint64_t r13_1 = 0
            *rax_4 = 0
            rax_4[1].d = 0xffffffff
            *(rax_4 + 0xc) = 0
            sub_140d3a3a0(&rax_4[2], nullptr)
            *rdi_1 = &arg1[2]
            
            if ((rsi_1[0x11].b & 1) != 0 && sub_1405be820(rsi_1) != 0)
                if ((rsi_1[0x11].b & 2) != 0)
                    sub_141efe1c0(rsi_1, *rdi_1)
                
                uint64_t rax_7 = sub_1405be820(rsi_1)
                var_90 = rax_7
                char rdx_5 = (var_88:1.b & 0xfd) | 1
                var_88.b = 1
                var_88:1.b = rdx_5
                r13_1 = rax_7
                sub_141ee0b60(rsi_1)
                rsi_1[0x15] = 0
            
            sub_140d3a3a0(&rdi_1[2], r13_1)
            int64_t* rdx_7 = nullptr
            
            if (sub_140d3e110(&rdi_1[2]) != 0)
                rdx_7 = rsi_1
            
            sub_140d3a3a0(&rdi_1[1], rdx_7)
            r13 = zx.q(arg_8)
        
        int64_t rsi_2 = sx.q(arg1[1].d)
        int32_t rax_9 = (rsi_2 + 1).d
        arg1[1].d = rax_9
        
        if (rax_9 s> *(arg1 + 0xc))
            sub_140638870(arg1)
        
        *(*arg1 + (rsi_2 << 3)) = rdi_1
        int32_t i_3 = i + 1
        i = i_3
        
        if (i_3 s< r15)
            while (*(r14 + (sx.q(i) << 3)) == 0)
                int32_t i_4 = i + 1
                i = i_4
                
                if (i_4 s>= r15)
                    break
    while (i != r13.d)
    
    rdi = var_a8
    rsi = &arg1[2]

if (r14 != 0)
    sub_140a74f90(r14)
    rdi = var_a8

if (rdi != 0)
    sub_140a74f90(rdi)

void var_78
sub_141efdf70(sub_14077e140(&var_78, rsi))
return arg1
