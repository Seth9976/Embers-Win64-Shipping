// 函数: sub_1417d31e0
// 地址: 0x1417d31e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg2[1]
uint64_t (* var_128)(void* arg1, int64_t* arg2) = sub_1417d34e0
int32_t var_120 = 0

if (r14 != 0)
    r14[1].d += 1

int64_t rcx = arg2[2]
int64_t* rbx = r14
int64_t rdx = arg2[3]
int64_t r8 = arg2[4]
int64_t r9 = arg2[5]
int64_t r10 = arg2[6]
int64_t r11 = arg2[7]
int64_t zmm1 = arg2[0xa]
int32_t rdi = arg2[0xb].d
int64_t var_118 = *arg2
int64_t* var_110 = rbx

if (r14 != 0)
    r14[1].d += 1
    rbx = var_110

int64_t var_108 = rcx
int64_t var_100 = rdx
int64_t var_f8 = r8
int64_t var_f0 = r9
int64_t var_e8 = r10
int64_t var_e0 = r11
int128_t var_d8 = *(arg2 + 0x40)
int32_t var_c0 = rdi
int64_t var_c8 = zmm1
void*** result_2 = sub_140a84c80(0, 0x90, 0, r9)
void*** result_1 = result_2
void*** result_3 = result_2

if (result_2 != 0)
    int128_t var_b8 = var_128.o
    void var_90
    sub_1417cd210(result_3, arg1 - 0x408, &var_b8, sub_1417ce050(&var_90, &var_118))
    rbx = var_110

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**var_110)(var_110)
        int32_t rax_4 = *(var_110 + 0xc)
        *(var_110 + 0xc) -= 1
        
        if (rax_4 == 1)
            (*(*var_110 + 8))(var_110, 1)
    
    result_3 = result_1

if (r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        (**r14)(r14)
        int32_t rax_8 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (rax_8 == 1)
            (*(*r14 + 8))(r14, 1)
    
    result_3 = result_1

void var_a8
void** rax_10 = sub_140958da0(&var_a8, nullptr, 0xff)
void* rbx_3 = *rax_10 + 0x10
*rbx_3 = 0
*(rbx_3 + 8) = 0

if (&result_1 != rbx_3 && result_3 != 0)
    void** r8_2 = *result_3
    r8_2[8](result_3, rbx_3, r8_2)

*(rbx_3 + 0x10) = 2
void* rcx_9 = *rax_10
int32_t r8_3 = rax_10[2].d
int64_t* rdx_4 = rax_10[1]
int64_t* rbx_4 = *(rcx_9 + 0x30)
int64_t* arg_18 = rbx_4
void* r14_2 = &rbx_4[9]

if (rbx_4 != 0)
    *r14_2 += 1
    result_3 = result_1
    rbx_4 = arg_18

void*** result = sub_140978a40(rcx_9, rdx_4, r8_3, 1)

if (rbx_4 != 0)
    result = zx.q(*r14_2)
    *r14_2 -= 1
    
    if (result.d == 1)
        result = sub_140a2f6e0(arg_18)
    
    result_3 = result_1

if (result_3 != 0)
    (*result_3)[7](result_3, 0)
    result = sub_140a84c80(result_3, 0, 0)
    result_1 = result
    
    if (result != 0)
        result = sub_140a74f90(result)

int64_t* rbx_5 = arg2[1]

if (rbx_5 != 0)
    result = zx.q(rbx_5[1].d)
    rbx_5[1].d -= 1
    
    if (result.d == 1)
        result = (**rbx_5)(rbx_5)
        int32_t rsi_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (rsi_1 == 1)
            return (*(*rbx_5 + 8))(rbx_5, zx.q(rsi_1))

return result
