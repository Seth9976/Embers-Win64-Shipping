// 函数: sub_141ba6300
// 地址: 0x141ba6300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
void var_58
int64_t* rax_2 = sub_140a96170(&var_58)
int64_t var_40 = *rax_2
int64_t* rax_4 = rax_2[1]

if (rax_4 != 0)
    rax_4[1].d += 1

int32_t rax_5 = rax_2[2].d
int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t rax_8 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (rax_8 == 1)
            (*(*var_50 + 8))(var_50, 1)

char var_28 = 1
int64_t* rax_10 = sub_140d3c6e0(arg1 + 0x18)
int64_t r9 = *rax_10
(*(r9 + 0x210))(rax_10, *(arg1 + 8), &var_40, r9)
int64_t* rbx_1 = rax_4
*arg2 = var_40
arg2[1] = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1
    rbx_1 = rax_4

arg2[2].d = rax_5

if (var_28 != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rsi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_2 = *rbx_1
            (*(r8_2 + 8))(rbx_1, zx.q(rsi_1), r8_2)

__security_check_cookie(rax_1 ^ &var_78)
return arg2
