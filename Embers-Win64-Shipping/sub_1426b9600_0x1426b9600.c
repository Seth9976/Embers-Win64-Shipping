// 函数: sub_1426b9600
// 地址: 0x1426b9600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t var_18 = __security_cookie ^ &var_a8
void* rbx = arg1[7]
int64_t result

if (rbx == 0)
    result.b = 0
else
    void* rbx_1 = *(rbx + 0xb0)
    
    if (rbx_1 == 0)
        result.b = 0
    else
        int64_t* rbx_2 = *(rbx_1 + 0x258)
        
        if (rbx_2 == 0)
            result.b = 0
        else
            void* rax_1 = sub_1427249f0()
            void* rdx_1 = rbx_2[2]
            result = sx.q(*(rax_1 + 0x38))
            
            if (result.d s> *(rdx_1 + 0x38))
                result.b = 0
            else if (*(*(rdx_1 + 0x30) + (result << 3)) != rax_1 + 0x30)
                result.b = 0
            else
                char rax_3
                
                if ((arg1[0x17].b & 4) != 0)
                    rax_3 = (*(rbx_2[0x44] + 0x40))(&rbx_2[0x44])
                
                if ((arg1[0x17].b & 4) == 0 || rax_3 == 0)
                    int32_t rax_12
                    int64_t rdx_6
                    rax_12, rdx_6 = (*(*arg1 + 0x2c0))(arg1, rbx_2)
                    
                    if (rax_12 == 2)
                        void* rax_13 = rbx_2[0x5b]
                        int32_t r8_3
                        
                        if (rax_13 == 0)
                            r8_3 = data_143b57f9c
                        else
                            r8_3 = *(rax_13 + 0x238)
                        
                        arg1[0xf].d = r8_3
                        sub_1426c3260(arg1, data_143f721c8, r8_3)
                        sub_1426c3260(arg1, data_143f72200, data_143f7205c)
                        result = 1
                    else if (rax_12 != 1)
                        result = 0
                    else
                        rdx_6.b = 2
                        (*(*arg1 + 0x270))(arg1, rdx_6)
                        result = 1
                else
                    void* rax_4 = sub_141dcc7f0(rbx_2)
                    void*** rax_5 = sub_140a84c80(0, 0x30, 0)
                    
                    if (rax_5 != 0)
                        *rax_5 = &data_142d57800
                        sub_140d3a3a0(&rax_5[1], arg1)
                        rax_5[2] = sub_1426ac940
                        rax_5[4] = sub_140a387b0()
                        *rax_5 = &data_142d57858
                    
                    int64_t var_78 = 0
                    int32_t var_70_1 = 0
                    
                    if (rax_5 != 0)
                        (*rax_5)[8](rax_5, &var_78)
                    
                    void var_68
                    sub_140d3a3a0(&var_68, nullptr)
                    int64_t var_60_1 = 0
                    int64_t var_58_1 = 0
                    void* var_48_1 = nullptr
                    sub_1423e6200(rax_4, &arg1[0x1b], &var_78, 0x3dcccccd, 0, 0xbf800000)
                    
                    if (var_58_1 != 0)
                        void var_38
                        void* rcx_7 = &var_38
                        
                        if (var_48_1 != 0)
                            rcx_7 = var_48_1
                        
                        (*(*rcx_7 + 0x10))(rcx_7)
                    
                    sub_140745b20(&var_78)
                    
                    if (rax_5 != 0)
                        (*rax_5)[7](rax_5, 0)
                        result = sub_140a84c80(rax_5, 0, 0)
                        
                        if (result != 0)
                            sub_140a74f90(result)
                    
                    result.b = 1

__security_check_cookie(var_18 ^ &var_a8)
return result
