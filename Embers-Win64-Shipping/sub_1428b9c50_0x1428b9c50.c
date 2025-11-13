// 函数: sub_1428b9c50
// 地址: 0x1428b9c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x4c0)
void var_4d8
int64_t rax_1 = __security_cookie ^ &var_4d8
bool cond:0 = *arg1 != 0
int32_t var_498 = *arg3
uint64_t result

if (not(cond:0))
    result = 1
else
    char var_448[0x400]
    uint64_t rbx_1
    
    if (arg4 != 0)
        rbx_1 = zx.q(arg4(&var_448, 0x400, 0))
    label_1428b9d92:
        
        if (rbx_1.d s>= 0)
            void var_488
            int32_t rax_6 = sub_1429088e0(*arg1, &data_143505b10, &arg1[1], &var_448, rbx_1.d, 1, 
                &var_488, nullptr)
            int64_t* rax_7
            
            if (rax_6 != 0)
                rax_7 = sub_142892200()
            
            if (rax_6 == 0 || rax_7 == 0)
                result = 0
            else
                int32_t var_4b8_4
                var_4b8_4.q = &arg1[1]
                int32_t result_2 = sub_1428929b0(rax_7, *arg1, nullptr, &var_488, var_4b8_4)
                int32_t result_1 = result_2
                
                if (result_2 == 0)
                    sub_1428a5670(9, 0x6a, 0x65, "crypto\pem\pem_lib.c", 0x1cd)
                else
                    int32_t result_3 = sub_1428929e0(rax_7, arg2, &var_498, arg2, var_498)
                    result_1 = result_3
                    
                    if (result_3 == 0)
                        sub_1428a5670(9, 0x6a, 0x65, "crypto\pem\pem_lib.c", 0x1cd)
                    else
                        int64_t rax_8 = sx.q(var_498)
                        *arg3 = rax_8.d
                        int32_t result_4 = sub_142892810(rax_7, arg2 + rax_8, &var_498, arg5)
                        result_1 = result_4
                        
                        if (result_4 == 0)
                            sub_1428a5670(9, 0x6a, 0x65, "crypto\pem\pem_lib.c", 0x1cd)
                        else
                            *arg3 += var_498
                
                sub_1428921c0(rax_7)
                sub_1428b8960(&var_448, 0x400)
                sub_1428b8960(&var_488, 0x40)
                result = zx.q(result_1)
        else
            sub_1428a5670(9, 0x6a, 0x68, "crypto\pem\pem_lib.c", 0x1b2)
            result = 0
    else
        if (arg6 != 0)
            rbx_1 = -1
            
            do
                rbx_1 += 1
            while (arg6[rbx_1] != 0)
            
            if (rbx_1.d s> 0x400)
                rbx_1 = 0x400
            
            memcpy(&var_448, arg6, rbx_1.d)
            goto label_1428b9d92
        
        char* rax_3 = sub_142908b80()
        char const* const r9_1 = "Enter PEM pass phrase:"
        
        if (rax_3 != 0)
            r9_1 = rax_3
        
        int32_t rax_4
        rax_4, arg5 = sub_142908ba0(&var_448, 0, 0x400, r9_1, 0)
        
        if (rax_4 == 0)
            rbx_1 = -1
            
            do
                rbx_1 += 1
            while (var_448[rbx_1] != 0)
            
            goto label_1428b9d92
        
        sub_1428a5670(9, 0x64, 0x6d, "crypto\pem\pem_lib.c", 0x3b)
        memset(&var_448, 0, 0x400)
        sub_1428a5670(9, 0x6a, 0x68, "crypto\pem\pem_lib.c", 0x1b2)
        result = 0

__security_check_cookie(rax_1 ^ &var_4d8)
return result
