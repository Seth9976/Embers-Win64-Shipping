// 函数: sub_1428b1c30
// 地址: 0x1428b1c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void var_78
int64_t rax_1 = __security_cookie ^ &var_78
char* rbx = arg3
int32_t* rax_2 = sub_142890ec0(arg1)
void* r13 = *(rax_2 + 0x520)
int64_t result

if (r13 == -1 || arg4 == r13 + 0x10)
    uint128_t zmm1
    
    if (sub_142890eb0(arg1) == 0)
        sub_1428fe660(rax_2, arg4, rbx, arg2)
        
        if (r13 == -1)
            sub_1428cb9a0(&rax_2[0x130], arg2, arg4)
            *(rax_2 + 0x520) = -1
            result = 1
        else
            sub_1428cb9a0(&rax_2[0x130], arg2, r13)
            char var_58[0x10]
            sub_1428cb7c0(&var_58, &rax_2[0x130])
            int32_t rax_5 = rax_2[0x12f]
            zmm1 = *(rax_2 + 0x474)
            *(rax_2 + 0x4c0) = *(rax_2 + 0x464)
            int128_t zmm0_2 = *(rax_2 + 0x484)
            *(rax_2 + 0x4d0) = zmm1
            zmm1 = *(rax_2 + 0x494)
            *(rax_2 + 0x4e0) = zmm0_2
            zmm0_2 = *(rax_2 + 0x4a4)
            *(rax_2 + 0x4f0) = zmm1
            zmm1 = zx.o(*(rax_2 + 0x4b4))
            *(rax_2 + 0x500) = zmm0_2
            *(rax_2 + 0x510) = zmm1.q
            rax_2[0x146] = rax_5
            sub_1428cb9a0(&rax_2[0x130], &var_58, 0x10)
            sub_1428cb7c0(&var_58, &rax_2[0x130])
            
            if (sub_1428bc500(arg2 + r13, &var_58, 0x10) == 0)
                *(rax_2 + 0x520) = -1
                result = 1
            else
                result = 0
    else
        void* r15_1 = arg4
        
        if (r13 != -1)
            r15_1 = r13
        
        sub_1428cb9a0(&rax_2[0x130], rbx, r15_1)
        
        if (r15_1 != arg4)
            if (rbx != arg2)
                memcpy(arg2, rbx, r15_1.d)
            
            char* rbx_1 = r15_1 + arg2
            sub_1428cb7c0(rbx_1, &rax_2[0x130])
            int32_t rax_4 = rax_2[0x12f]
            zmm1 = *(rax_2 + 0x474)
            *(rax_2 + 0x4c0) = *(rax_2 + 0x464)
            int128_t zmm0_1 = *(rax_2 + 0x484)
            *(rax_2 + 0x4d0) = zmm1
            zmm1 = *(rax_2 + 0x494)
            *(rax_2 + 0x4e0) = zmm0_1
            zmm0_1 = *(rax_2 + 0x4a4)
            *(rax_2 + 0x4f0) = zmm1
            zmm1 = zx.o(*(rax_2 + 0x4b4))
            *(rax_2 + 0x500) = zmm0_1
            *(rax_2 + 0x510) = zmm1.q
            rax_2[0x146] = rax_4
            sub_1428cb9a0(&rax_2[0x130], rbx_1, 0x10)
            sub_1428cb7c0(rbx_1, &rax_2[0x130])
            rbx = arg2
        
        sub_1428fe660(rax_2, arg4, rbx, arg2)
        *(rax_2 + 0x520) = -1
        result = 1
else
    result = 0

__security_check_cookie(rax_1 ^ &var_78)
return result
