// 函数: sub_1421d9670
// 地址: 0x1421d9670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_50 = &arg_8
void*** (* var_58)() = j_sub_140597fc0
int64_t* rax_1 = sub_140a756e0(&var_58, &data_143958018) + 0x10
float (* rbx)[0x4] = nullptr
int64_t* var_48 = rax_1
int64_t rcx_1 = *rax_1
int64_t rcx_2 = rax_1[2]
char var_30 = 0
int64_t result_1 = rax_1[3]
rax_1[3] = &var_48
int64_t* rax_2 = var_48
rax_2[4].d += 1

if (arg1[0xa].b != 0)
    char* var_50_1 = &arg_8
    arg_8 = 0
    var_58 = j_sub_140597fc0
    void* rax_3 = sub_140a756e0(&var_58, &data_143958018)
    int32_t rdx_2 = *(arg1 + 0x54) << 3
    rbx = (*(rax_3 + 0x10) + 3) & 0xfffffffffffffffc
    int64_t r14_1 = sx.q(rdx_2)
    void* rax_4 = r14_1 + rbx
    
    if (rax_4 u> *(rax_3 + 0x18))
        sub_140b0e3d0(rax_3 + 0x10, rdx_2 + 4)
        rbx = (*(rax_3 + 0x10) + 3) & 0xfffffffffffffffc
        rax_4 = r14_1 + rbx
    
    *(rax_3 + 0x10) = rax_4
    void* rcx_5 = arg1[1]
    int32_t var_70
    var_70.q = arg1[2]
    int64_t var_80
    var_80.d = *(rcx_5 + 0x10)
    sub_1421fd3b0(*arg1, *(rcx_5 + 0x44), *(rcx_5 + 0xb0), *(rcx_5 + 0xc), (*(rcx_5 + 0x28)).b, 
        var_80, (*(rcx_5 + 0x30)).d, var_70, arg1[3] + 0x80, rbx, var_58)

int32_t var_70_1 = *(arg1 + 0x5c)
int64_t result = sub_1421f4700(*arg1, arg1[4], arg1[7], 0, rbx, arg1[2] + 0x60c, (arg1[3]).d + 0x80)

if (var_30 == 0)
    int64_t* rax_12 = var_48
    char var_30_1 = 1
    rax_12[4].d -= 1
    int64_t* rcx_10 = var_48
    
    if (rcx_2 != rcx_10[2])
        sub_140b16b40(rcx_10, rcx_2)
        rcx_10 = var_48
    
    *rcx_10 = rcx_1
    result = result_1
    var_48[3] = result

return result
