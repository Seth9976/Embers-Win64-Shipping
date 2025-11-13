// 函数: sub_1414150b0
// 地址: 0x1414150b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
char arg_8
char* var_50 = &arg_8
void*** (* var_58)() = j_sub_140597fc0
arg_8 = 0
int64_t* rax_1 = sub_140a756e0(&var_58, &data_143958018) + 0x10
int64_t* var_48 = rax_1
int64_t rcx_1 = *rax_1
int64_t rcx_2 = rax_1[2]
char var_30 = 0
int64_t result_1 = rax_1[3]
rax_1[3] = &var_48
int64_t* rax_2 = var_48
rax_2[4].d += 1
sub_140b33630("PreRender")
int32_t i = 0

if (*(rbx + 0x78) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* rcx_3 = *(rsi_1 + *(rbx + 0x70))
        (*(*rcx_3 + 0x30))(rcx_3, arg2, rbx + 0x10)
        int32_t j = 0
        
        if (*(rbx + 0x18) s> 0)
            do
                int64_t* rcx_4 = *(rsi_1 + *(rbx + 0x70))
                int64_t r9_1 = *rcx_4
                (*(r9_1 + 0x38))(rcx_4, arg2, sx.q(j) * 0x5240 + *(rbx + 0xa0), r9_1)
                j += 1
            while (j s< *(rbx + 0x18))
        
        i += 1
        rsi_1 = &rsi_1[2]
    while (i s< *(rbx + 0x78))

sub_140b37f60("PreRender")
int64_t result = sub_1423cc240(arg2)

if (var_30 == 0)
    int64_t* rax_7 = var_48
    char var_30_1 = 1
    rax_7[4].d -= 1
    int64_t* rcx_6 = var_48
    
    if (rcx_2 != rcx_6[2])
        sub_140b16b40(rcx_6, rcx_2)
        rcx_6 = var_48
    
    *rcx_6 = rcx_1
    result = result_1
    var_48[3] = result

return result
