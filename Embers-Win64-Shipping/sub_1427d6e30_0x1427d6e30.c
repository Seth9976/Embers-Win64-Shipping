// 函数: sub_1427d6e30
// 地址: 0x1427d6e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = arg1[0xb]
int64_t rdx = *arg2
int128_t zmm6
int128_t var_38 = zmm6
int32_t arg_8
int32_t* r14 = &arg_8

if (rax != 0)
    r14 = rax

arg_8 = 0x56
sub_1427e5d10(arg1, rdx)
sub_1427e5d10(arg1, arg2[2])
bool cond:1 = arg1[9].b == 0
char const* const rbp = "bad__repx__name"
char* arg_10 = nullptr
int512_t zmm2

if (not(cond:1))
    void* rdx_2 = *arg1
    char const* const rdx_3
    
    if (*(rdx_2 + 0x10) == 0)
        rdx_3 = "bad__repx__name"
    else
        rdx_3 = *(*(rdx_2 + 8) + zx.q(*(rdx_2 + 0x10) - 1) * 0x18)
    
    int64_t* rcx_2 = arg1[5]
    
    if ((*(*rcx_2 + 0x10))(rcx_2, rdx_3, &arg_10) != 0)
        char* rcx_3 = arg_10
        
        if (rcx_3 != 0 && *rcx_3 != 0)
            void arg_20
            int128_t zmm0_1 = sub_1427e6ee0(rcx_3, &arg_20)
            int64_t rbx_1 = arg1[6]
            arg2[5](rbx_1, &arg_20, &arg_10)
            zmm2.o = arg_10.d
            int512_t zmm1
            zmm1.o = zmm0_1
            arg2[4](rbx_1, zmm1, zmm2)

*r14 += 1
sub_1427e5c70(arg1)
sub_1427e5d10(arg1, arg2[3])
arg_8.q = 0

if (arg1[9].b != 0)
    void* rdx_7 = *arg1
    
    if (*(rdx_7 + 0x10) != 0)
        rbp = *(*(rdx_7 + 8) + zx.q(*(rdx_7 + 0x10) - 1) * 0x18)
    
    int64_t* rcx_9 = arg1[5]
    
    if ((*(*rcx_9 + 0x10))(rcx_9, rbp, &arg_8) != 0)
        char* rcx_10 = arg_8.q
        
        if (rcx_10 != 0 && *rcx_10 != 0)
            int128_t zmm0_2 = sub_1427e6ee0(rcx_10, &arg_10)
            int64_t rbx_2 = arg1[6]
            arg2[5](rbx_2, &arg_8, &arg_10)
            int512_t zmm1_1
            zmm1_1.o = arg_8
            zmm2.o = zmm0_2
            arg2[4](rbx_2, zmm1_1, zmm2)

sub_1427e5c70(arg1)
return sub_1427e5c70(arg1) __tailcall
