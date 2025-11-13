// 函数: sub_142243560
// 地址: 0x142243560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t result
int64_t result_1

if (arg2 == 0)
    int64_t* rax_11 = sub_14183e350(arg3 + 0xf0)
    
    if (rax_11 == 0)
        result_1 = 0
    else
        int64_t r8_3 = *rax_11
        void var_78
        void var_58
        int64_t rcx_14 = sx.q(sub_142236dd0(arg1, rax_11, 
            sub_1417cbc40(&var_58, (*(r8_3 + 0xa0))(rax_11, &var_78, r8_3))))
        result_1 = *(*arg1 + (rcx_14 << 3))
    
    result = result_1
else if (arg2 == 1)
    int64_t* rax_7 = sub_14183e350(sub_140962f60(arg3))
    int64_t r8_1 = *rax_7
    result_1 = 0
    int64_t* rdx_2 = nullptr
    
    if ((*(r8_1 + 0x20))(rax_7, "PxRigidBody", r8_1) != 0)
        rdx_2 = rax_7
    
    if (rdx_2 != 0)
        int64_t rcx_9 = sx.q(sub_142235bd0(arg1, rdx_2, arg4))
        result_1 = *(*arg1 + (rcx_9 << 3))
    
    result = result_1
else if (arg2 == 2)
    int64_t* rax_3 = sub_14183e350(sub_140962f60(arg3))
    result_1 = 0
    int64_t* rdx_1 = nullptr
    
    if (rax_3[1].w == 6)
        rdx_1 = rax_3
    
    if (rdx_1 != 0)
        int32_t rax_4 = sub_142236460(arg1, rdx_1, arg4)
        *(arg1 + 0x16c) = arg1[0x2d].d
        arg1[0x29].b = 1
        result_1 = *(*arg1 + (sx.q(rax_4) << 3))
    
    result = result_1
else
    result = 0
__security_check_cookie(rax_1 ^ &var_98)
return result
