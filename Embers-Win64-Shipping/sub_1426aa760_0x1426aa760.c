// 函数: sub_1426aa760
// 地址: 0x1426aa760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d11c00()
int64_t result

if ((*(arg1[1] + 0x10) & data_143e1bd48) == 0)
    sub_140d11050()
    
    if ((*(arg1[1] + 0x10) & data_143e1b9d8) == 0)
        sub_140d11b50()
        
        if ((*(arg1[1] + 0x10) & data_143e1bcf8) == 0)
            sub_140d11f70()
            
            if ((*(arg1[1] + 0x10) & data_143e1c458) == 0)
                sub_140d2df10()
                int64_t rdx_2 = *(arg1[1] + 0x10)
                
                if ((data_143e1d7f8 & rdx_2) == 0)
                    if (((rdx_2 u>> 0x14).b & 1) == 0)
                        result.b = 0
                        return result
                    
                    int64_t var_18
                    (*(*arg1 + 0x60))(arg1, &var_18, 0, 0)
                    result = sub_140a23cf0(&var_18, u"FVector", 1, 0, 0xffffffff)
                    
                    if (result.d == 0xffffffff && sub_140a23cf0(&var_18, FRotator", (result + 2).d, 
                            0, result.d).d == 0xffffffff)
                        int64_t rcx_6 = var_18
                        
                        if (rcx_6 != 0)
                            sub_140a74f90(rcx_6)
                        
                        result.b = 0
                        return result
                    
                    int64_t rcx_7 = var_18
                    
                    if (rcx_7 != 0)
                        sub_140a74f90(rcx_7)

result.b = 1
return result
