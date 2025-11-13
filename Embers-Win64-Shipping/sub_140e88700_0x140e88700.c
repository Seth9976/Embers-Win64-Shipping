// 函数: sub_140e88700
// 地址: 0x140e88700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
uint64_t result = __security_cookie ^ &var_1b8
uint64_t result_1 = result
int64_t* rbx = arg1[0x68]

if (rbx != 0)
    result = zx.q(rbx[1].d)
    
    if (result.d != 0)
        rbx[1].d = result.d + 1
        result.b = 1
    
    if (result.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        int64_t rsi_1 = arg1[0x67]
        
        if (rsi_1 != 0)
            void var_188
            sub_140d947e0(&var_188)
            
            if (rbx != 0)
                rbx[1].d += 1
            
            int64_t var_198 = rsi_1
            int64_t* var_190_1 = rbx
            
            if (rbx != 0)
                rbx[1].d += 1
            
            sub_140da1990(&arg1[0x30], &var_198, &var_188, data_1439ae51c, arg3)
            
            if (rbx != 0)
                rbx[1].d -= 1
                
                if (rbx[1].d == 1)
                    (**rbx)(rbx)
                    int32_t temp4_1 = *(rbx + 0xc)
                    *(rbx + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx + 8))(rbx, 1)
            
            (*(*arg1 + 0x148))(arg1, &var_188, zx.q(arg2))
            void var_38
            sub_140596d80(&var_38)
            int64_t* var_40
            
            if (var_40 != 0)
                var_40[1].d -= 1
                
                if (var_40[1].d == 1)
                    (**var_40)(var_40)
                    int32_t temp5_1 = *(var_40 + 0xc)
                    *(var_40 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*var_40 + 8))(var_40, 1)
            
            void var_180
            result = sub_140d94d20(&var_180)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

__security_check_cookie(result_1 ^ &var_1b8)
return result
