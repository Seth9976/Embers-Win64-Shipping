// 函数: sub_1409d1290
// 地址: 0x1409d1290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* rdi = *(arg2 + 0x28)
int64_t rbx = sx.q(arg3)
int32_t* r14 = *(arg1 + 0x78) + rbx * 0x48
void* rdx = *(**(*(arg1 + 0x28) + 0x50) + (sx.q(*(arg1 + 0x38)) << 3))
void* rax_5 = *(rdx + 0x28)
void* rdx_1 = rdx + 0x10

if (rax_5 != 0)
    rdx_1 = rax_5

void* rbp = rdx_1 + sx.q(*r14) * 0x18
uint64_t i_1
sub_14099ae30(rdi + 0x308, &i_1, rbx.d, data_143f36150, 0)
void var_80
sub_14099ae30(rdi + 0x308, &var_80, rbx.d, data_143cede10, 0)
void* r8_4 = *(arg1 + 0x28)
void* rcx_3 = *(r8_4 + 0x68)
uint64_t i = i_1
void* rdx_6 = sx.q(*(r8_4 + 0x70)) * 0x30 + rcx_3

if (rcx_3 != rdx_6)
    while (*(rcx_3 + 0x10) != i)
        rcx_3 += 0x30
        
        if (rcx_3 == rdx_6)
            break

int64_t rcx_4 = *arg4

if (rcx_4 == data_143f36150)
    *(*(r8_4 + 0x68) + sx.q(r14[1]) * 0x30 + 0x10) = i
else if (rcx_4 == data_143cede10)
    int64_t var_78
    int64_t* rax_8 = sub_140b63b70(&var_80, &var_78)
    int16_t* rbx_1
    
    if (rax_8[1].d == 0)
        rbx_1 = &data_142d40450
    else
        rbx_1 = *rax_8
    
    void* rax_10 = sub_140d2f6f0(sub_142543940(), 0, rbx_1, 0, 0, 0, 1, 0)
    int64_t rcx_9 = var_78
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    uint64_t i_2 = i_1
    int64_t var_58
    __builtin_memset(&var_58, 0, 0x1c)
    
    if (rax_10 != 0)
        char rax_11 = sub_140b5b8a0(i_2.d, 0)
        i_2.b = i_2:4.d == 0
        
        if ((i_2.b & rax_11) != 0)
            int64_t var_60_2 = *(rax_10 + 0x18)
    
    int128_t zmm1_1 = var_58.o
    i = *(arg1 + 0x28)
    int64_t rdx_11 = sx.q(r14[1]) * 6
    int64_t rcx_10 = *(i + 0x68)
    *(rcx_10 + (rdx_11 << 3)) = rax_10.o
    *(rcx_10 + (rdx_11 << 3) + 0x10) = zmm1_1
    int64_t var_48
    *(rcx_10 + (rdx_11 << 3) + 0x20) = var_48.o
else if (rcx_4 == data_143f36160)
    i = zx.q(*(arg4 + 0x4c))
    *(rbp + 0x15) = i.b
else if (rcx_4 == data_143f36158)
    i = zx.q(*(arg4 + 0x4c))
    *(rbp + 0x14) = i.b

__security_check_cookie(rax_1 ^ &var_c8)
return i
