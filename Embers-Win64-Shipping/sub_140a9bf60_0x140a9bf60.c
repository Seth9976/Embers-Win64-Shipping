// 函数: sub_140a9bf60
// 地址: 0x140a9bf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t* rax_2 = *arg1
int64_t* rbx = *rax_2
void* rdi_2 = &rbx[sx.q(rax_2[1].d) * 8]
int64_t result

if (rbx == rdi_2)
label_140a9bfda:
    result = 0
else
    while (true)
        int32_t rcx = rbx[1].d
        int64_t _MaxCount = sx.q(arg2[1].d)
        int32_t rax_3 = rcx - 1
        
        if (rcx == 0)
            rax_3 = 0
        
        if (_MaxCount.d == rax_3)
            wchar16* _String2
            
            if (rcx == 0)
                _String2 = &data_142d40450
            else
                _String2 = *rbx
            
            if (wcsncmp(*arg2, _String2, _MaxCount) == 0)
                void var_58
                int32_t* rax_5 = sub_140ac5d00(rbx, &var_58)
                sub_140a99d90(*arg1[1], rax_5)
                char var_30
                
                if (var_30 != 0)
                    char var_30_1 = 0
                    int64_t* var_40
                    
                    if (var_40 != 0)
                        var_40[1].d -= 1
                        
                        if (var_40[1].d == 1)
                            (**var_40)(var_40)
                            int32_t rdi_3 = *(var_40 + 0xc)
                            *(var_40 + 0xc) -= 1
                            
                            if (rdi_3 == 1)
                                (*(*var_40 + 8))(var_40, zx.q(rdi_3))
                
                result = *arg1[1]
                break
        
        rbx = &rbx[8]
        
        if (rbx == rdi_2)
            goto label_140a9bfda

__security_check_cookie(rax_1 ^ &var_78)
return result
