// 函数: sub_142bb5400
// 地址: 0x142bb5400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
int64_t rdi = *(rsi + 0x98)
sub_142b99980(rdi, arg1[0x14])
int64_t rdx_1 = arg1[0x16]
arg1[0x14] = 0
sub_142b99980(rdi, rdx_1)
int64_t rdx_2 = arg1[0x27]
arg1[0x16] = 0
sub_142b99980(rdi, rdx_2)
int64_t rdx_3 = arg1[0x29]
arg1[0x27] = 0
sub_142b99980(rdi, rdx_3)
int64_t* rcx_4 = arg1[0x32]
arg1[0x29] = 0

if (rcx_4 != 0)
    sub_142bacda0(rcx_4)

sub_142bb4700(&arg1[0x2a])
arg1[0x33] = -1
void* rax = *(rsi + 0x90)
int64_t* rbp_1

if (rax == 0)
    rbp_1 = nullptr
else
    int64_t r14_1 = *(rax + 0x10)
    int32_t arg_18
    int64_t* rax_1 = sub_142b99860(r14_1, 0x388, &arg_18)
    rbp_1 = rax_1
    
    if (arg_18 != 0)
        rbp_1 = nullptr
    else if (sub_142ba9190(rax_1, r14_1) != 0)
        rbp_1 = nullptr

arg1[0x32] = rbp_1
arg1[0x13].d = zx.d(*(rsi + 0x184))
*(arg1 + 0xac) = zx.d(*(rsi + 0x186))
*(arg1 + 0x94) = 0
arg1[0x15].d = 0
arg1[0x17] = 0
*(arg1 + 0x134) = *(rsi + 0x3d0)
arg1[0x28].w = *(rsi + 0x182)
*(arg1 + 0x89) = 0
arg1[0xf] = 0
arg1[0x10] = 0
int32_t arg_8
arg1[0x14] = sub_142b99a90(rdi, 0x18, 0, arg1[0x13].d, 0, &arg_8)

if (arg_8 == 0)
    arg1[0x16] = sub_142b99a90(rdi, 0x18, 0, *(arg1 + 0xac), 0, &arg_8)
    
    if (arg_8 == 0)
        arg1[0x27] = sub_142b99a90(rdi, 4, 0, *(arg1 + 0x134), 0, &arg_8)
        
        if (arg_8 == 0)
            arg1[0x29] = sub_142b99a90(rdi, 4, 0, zx.d(arg1[0x28].w), 0, &arg_8)
            
            if (arg_8 == 0)
                int16_t rbp_2 = *(rsi + 0x180) + 4
                int32_t rax_11 = sub_142bb4790(rdi, rbp_2, 0, &arg1[0x2a])
                arg_8 = rax_11
                
                if (rax_11 == 0)
                    *(arg1 + 0x15c) = rbp_2
                    __builtin_memcpy(&arg1[0x1e], 
                        "\x00\x00\x00\x00\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x40\x00\x00\x00\x"
                    "00\x01\x00\x00\x00\x40\x00\x00\x00\x01\x00\x00\x00\x01\x00\x00\x00\x44\x00\x00"
                    "00\x00\x00\x00\x00\x00\x00\x00\x00\x09\x00\x03\x00\x00\x00\x00\x00\x00\x00\x00"
                    "00\x01\x00\x01\x00\x01\x00\x00\x00", 
                        0x44)
                    uint64_t (* rax_13)(int64_t* arg1, int512_t arg2 @ zmm0) =
                        *(*(*(rsi + 0x90) + 8) + 0x138)
                    
                    if (rax_13 == 0)
                        rax_13 = sub_142bae8c0
                    
                    *(rsi + 0x3e0) = rax_13
                    return sub_142bb5a50(arg1, arg2)

sub_142bb5320(arg1)
return zx.q(arg_8)
