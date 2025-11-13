// 函数: sub_141f524e0
// 地址: 0x141f524e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
void* result = *arg1

if ((*(result + 0x420) == 0 || arg1[3].b != 0) && (*(result + 0x428) == 0 || arg1[3].b == 0))
    int64_t* rax_2 = j_sub_140a82f30(0x210)
    int64_t* rbx_1 = rax_2
    
    if (rax_2 == 0)
        rbx_1 = rax_2
    else
        rbx_1[1].d = 0xffffffff
        *(rbx_1 + 0xc) = (*(arg1 + 0x1c)).b
        rax_2 = nullptr
        rbx_1[0x12] = 0
        rbx_1[0x13].d = 0
        *(rbx_1 + 0x9c) = 8
        rbx_1[0x14].d = 0xffff0001
        *(rbx_1 + 0xa4) = 0xff
        rbx_1[0x19] = 0
        rbx_1[0x1a].d = 0
        *(rbx_1 + 0xd4) = 2
        rbx_1[0x21] = 0
        rbx_1[0x22].d = 0
        *(rbx_1 + 0x114) = 3
        __builtin_memset(&rbx_1[0x23], 0, 0x48)
        rbx_1[0x34].d = 0
        *(rbx_1 + 0x1a4) = 4
        __builtin_memset(&rbx_1[0x35], 0, 0x40)
        rbx_1[0x3d] = -1
        rbx_1[0x3e].d = 0xffffffff
        __builtin_memset(rbx_1 + 0x1f4, 0, 0x14)
        rbx_1[0x41].d = 0xffffffff
        *rbx_1 = &data_14327fb68
    
    void* rcx = *arg1
    
    if (arg1[3].b == 0)
        *(rcx + 0x420) = rbx_1
    else
        *(rcx + 0x428) = rbx_1
    
    void* rcx_1 = arg1[1]
    int64_t* var_e8 = rax_2
    int64_t var_e0_1 = 0
    int64_t* var_d8_1 = rax_2
    int64_t var_d0_1 = 0
    int64_t* var_c8_1 = rax_2
    int64_t var_c0_1 = 0
    int32_t var_78_1 = rax_2.d
    int32_t var_74_1 = 4
    int64_t* var_70_1 = rax_2
    int64_t var_68_1 = 0
    int64_t* var_60_1 = rax_2
    int64_t var_58
    __builtin_memset(&var_58, 0, 0x28)
    int64_t var_30_1 = -1
    int32_t var_28_1 = 0xffffffff
    int32_t var_24_1 = rax_2.d
    int64_t* var_20_1 = rax_2
    sub_142290930(rcx_1 + 0xf8, rbx_1, &var_e8)
    sub_1422b9c80(arg1[1] + 0x70, rbx_1, &var_e8)
    sub_1422b9b10(arg1[1] + 0x70, rbx_1, &var_e8)
    sub_1422b9a60(arg1[1] + 0x70, rbx_1, &var_e8, *(arg1[2] + 0x80))
    
    if (arg1[3].b == 0)
        sub_142290850(arg1[1] + 0x138, rbx_1, &var_e8)
    else
        sub_1422908d0(rbx_1, &var_e8, 0)
    
    sub_1421026a0(rbx_1, &var_e8)
    result = (*(*rbx_1 + 0x28))(rbx_1)

__security_check_cookie(rax_1 ^ &var_108)
return result
