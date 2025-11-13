// 函数: sub_1429088e0
// 地址: 0x1429088e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xb0)
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
char* r14 = arg7
char* r15 = arg8
int32_t i = 0
int32_t result_1 = 0
int32_t j_1 = 0
int32_t result_2 = sub_140611e60(arg1)
int32_t rbp_1 = sub_140611e40(arg1)

if (result_2 s> 0x40)
    sub_1428bc530()
    noreturn

if (rbp_1 s> 0x10)
    sub_1428bc530()
    noreturn

uint64_t result

if (arg4 != 0)
    int64_t* rax_4 = sub_142891ee0()
    char var_98[0x40]
    
    if (rax_4 != 0 && sub_1428919c0(rax_4, arg2, nullptr) != 0)
        while (i == 0 || sub_142891c10(rax_4, &var_98, zx.q(j_1)) != 0)
            if (sub_142891c10(rax_4, arg4, sx.q(arg5)) == 0)
                break
            
            if (arg3 != 0 && sub_142891c10(rax_4, arg3, 8) == 0)
                break
            
            if (sub_1428918e0(rax_4, &var_98, &j_1) == 0)
                break
            
            int32_t rbx_1 = 1
            
            if (arg6 u> 1)
                do
                    if (sub_1428919c0(rax_4, arg2, nullptr) == 0)
                        goto label_142908b3d
                    
                    if (sub_142891c10(rax_4, &var_98, zx.q(j_1)) == 0)
                        goto label_142908b3d
                    
                    if (sub_1428918e0(rax_4, &var_98, &j_1) == 0)
                        goto label_142908b3d
                    
                    rbx_1 += 1
                while (rbx_1 u< arg6)
            
            int32_t j = j_1
            uint64_t rax_15 = 0
            
            if (result_2 != 0)
                while (rax_15.d != j)
                    if (r14 != 0)
                        *r14 = var_98[rax_15]
                        r14 = &r14[1]
                    
                    rax_15 = zx.q(rax_15.d + 1)
                    int32_t result_3 = result_2
                    result_2 -= 1
                    
                    if (result_3 == 1)
                        break
            
            if (rbp_1 != 0 && rax_15.d != j)
                while (rax_15.d != j)
                    if (r15 != 0)
                        *r15 = var_98[rax_15]
                        r15 = &r15[1]
                    
                    rax_15 = zx.q(rax_15.d + 1)
                    int32_t temp1_1 = rbp_1
                    rbp_1 -= 1
                    
                    if (temp1_1 == 1)
                        break
            
            if (result_2 == 0 && rbp_1 == 0)
                result_1 = sub_140611e60(arg1)
                break
            
            if (sub_1428919c0(rax_4, arg2, nullptr) == 0)
                break
            
            i += 1
    
label_142908b3d:
    sub_142891ea0(rax_4)
    sub_1428b8960(&var_98, 0x40)
    result = zx.q(result_1)
else
    result = zx.q(result_2)

__security_check_cookie(rax_1 ^ &var_e8)
return result
