// 函数: sub_140aad5c0
// 地址: 0x140aad5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a54810()
int32_t* i = *arg3
int32_t rsi = 0

for (void* rbp_2 = &i[sx.q(arg3[1].d) * 0xc]; i != rbp_2; i = &i[0xc])
    int32_t rax_1 = *i
    int32_t rax_4
    
    if (rax_1 s< 0)
        rax_4 = 0
    else if (rax_1 s<= 3)
        rax_4 = 0x14
    else if (rax_1 != 4)
        rax_4 = 0
    else
        sub_140abd990(&i[4])
        int64_t* rcx_1 = *(i + 0x10)
        int32_t rcx_2 = *((*(*rcx_1 + 0x10))(rcx_1) + 8)
        rax_4 = rcx_2 - 1
        
        if (rcx_2 == 0)
            rax_4 = 0
    
    rsi += rax_4

char* rax_5 = *arg2
void* rax_7

if (*rax_5 != 0)
    rax_7 = &rax_5[0x58]
else
    sub_140abd990(&rax_5[0x18])
    int64_t* rcx_4 = *(rax_5 + 0x18)
    rax_7 = (*(*rcx_4 + 0x10))(rcx_4)

void* var_50 = rax_7
int64_t* var_58 = arg3
int64_t (* var_48)(int64_t* arg1, void* arg2, int32_t* arg3) = sub_140aa3c40
int32_t var_38 = rsi
int64_t** var_40 = &var_58
char var_33 = arg4
char r9
char var_34 = r9
sub_140aacb40(arg1, arg2, &var_48)
return arg1
