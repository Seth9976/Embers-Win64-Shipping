// 函数: ??$common_assert_to_message_box_build_string@_W@@YAXQEA_W_KQEB_W2IQEAX@Z
// 地址: 0x1410576c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int32_t rbx = 0
void* var_240 = nullptr
int64_t var_238 = 0
void* rax_2

if (arg2 != 0)
    rax_2 = (*(*arg2 + 0x48))(arg2)
else
    rax_2 = nullptr

uint64_t result_1 = *(rax_2 + 0x58)
int128_t* var_288
int128_t var_268
int128_t var_228

if (*(result_1 + 0xac) != 1)
    void* rax_6 = **(arg1 + 0x20)
    void* r14_1
    
    if (data_1439c7a34 u<= 1)
        r14_1 = **(*(rax_6 + 0x9d8) + 0x6d8)
    else
        r14_1 = rax_6 + 0x570
    
    void var_218
    sub_141961860(&var_218, *(r14_1 + 0x130))
    int32_t var_258_1 = arg7[1].d
    var_268 = *arg7
    int32_t* var_280_1 = &var_268
    void* var_1f8_1 = r14_1
    var_228 = *arg3
    void* var_1f0_1 = r14_1
    char var_190_1 = 0
    sub_141058930(arg1, &var_218, arg2, &var_228, &var_240, var_280_1)
    sub_1419628c0(&var_218)
else
    int32_t var_258 = arg7[1].d
    var_268 = *arg7
    var_288 = &var_268
    var_228 = *arg3
    sub_141059330(arg1, arg2, &var_228, &var_240, arg5, arg6, var_288)
int32_t r12_2 = *(arg3 + 0xc) - *(arg3 + 4)
uint64_t result = result_1
int32_t rdx_3 = *(arg4 + 0xc)
int32_t r14_4 = (*(arg3 + 8) - *arg3) * *(result + 0xac)
arg4[1].d = 0

if (rdx_3 != 0)
    result = sub_14061cd70(arg4, 0)
    rdx_3 = *(arg4 + 0xc)
    rbx = arg4[1].d

int32_t rcx_9 = r12_2 * r14_4 + rbx
arg4[1].d = rcx_9

if (rcx_9 s> rdx_3)
    result = sub_140610660(arg4)

int32_t r10 = *(arg2 + 0x3c)
void* rbx_1 = var_240

if (r10 != 0)
    int32_t var_258_2 = arg7[1].d
    var_268 = *arg7
    var_288.d = sub_140fdf270(*(result_1 + 0xa8)) * r14_4
    result = sub_1410456e0(r10, r14_4, r12_2, rbx_1, var_288.d, *arg4, &var_268)

if (rbx_1 != 0)
    result = sub_140a74f90(rbx_1)

__security_check_cookie(rax_1 ^ &var_2a8)
return result
