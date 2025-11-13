// 函数: sub_141c0f9c0
// 地址: 0x141c0f9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int128_t var_58
__builtin_memcpy(&var_58, "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 
    0x11)
int128_t var_40 = zx.o(0)

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_58, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t rax_2 = *(arg2 + 0x20)
int128_t zmm0 = var_58
int64_t rcx_1
rcx_1.b = rax_2 != 0
char var_48
char var_20 = var_48
int64_t var_18 = var_40.q
void* rax_5 = var_40:8.q
*(arg2 + 0x20) = rcx_1 + rax_2
void* var_10 = rax_5
int128_t var_30 = zmm0

if (rax_5 != 0)
    *(rax_5 + 8) += 1

int128_t* result = sub_141be0610(arg1, &var_30)
int64_t* rbx_1 = var_40:8.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
