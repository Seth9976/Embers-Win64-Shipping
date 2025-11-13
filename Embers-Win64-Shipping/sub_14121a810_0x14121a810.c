// 函数: sub_14121a810
// 地址: 0x14121a810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* r11 = *arg1
int64_t r9 = arg1[3] + 0x4990
int32_t rdx
rdx.b = *(r11 + 0x60) != 0
int32_t rax_2
rax_2.b = *(r11 + 0x40) != 0
int64_t rdx_1 = arg1[2]
int32_t rax_3
rax_3.b = *(r11 + 0x20) != 0
bool cond:1 = *r11 != 0
int64_t var_78 = 0
int32_t rax_4
rax_4.b = cond:1
int64_t var_68 = 0
int32_t rbx_2 = rax_2 + rdx + rax_3 + rax_4
int64_t var_58 = 0
int64_t var_48 = 0
int64_t* rcx = *arg1[1]
int512_t entry_zmm2
int64_t result = (*(*rcx + 0x18))(rcx, rdx_1, entry_zmm2, r9, arg1[4], r11, rbx_2, &var_78)

if (rbx_2 != 0)
    int64_t* rbp_1 = &var_78
    int64_t i = 0
    int64_t* r15_1 = nullptr
    
    do
        int64_t rax_7 = *rbp_1
        void* rbx_3 = arg1[2]
        int64_t rsi_1 = sx.q(*(rbx_3 + 0x168))
        char var_88_1 = 1
        int64_t var_90_1 = *arg1[6] + (sx.q(*(arg1[5] + (i << 2)) - *arg1[7]) << 3)
        int32_t rax_11 = (rsi_1 + 1).d
        *(rbx_3 + 0x168) = rax_11
        
        if (rax_11 s> *(rbx_3 + 0x16c))
            sub_14119a720(rbx_3 + 0x160, rsi_1.d)
        
        int64_t rax_12 = *(rbx_3 + 0x160)
        int64_t rcx_6 = rsi_1 * 3
        i += 1
        rbp_1 = &rbp_1[2]
        *(rax_12 + (rcx_6 << 3)) = rax_7.o
        *(rax_12 + (rcx_6 << 3) + 0x10) = var_88_1.q
        result = *arg1
        *(r15_1 + result) = 0
        r15_1 = &r15_1[4]
    while (i s< zx.q(rbx_2))

__security_check_cookie(rax_1 ^ &var_d8)
return result
