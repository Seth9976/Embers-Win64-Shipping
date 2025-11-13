// 函数: sub_14198b230
// 地址: 0x14198b230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
uint64_t result = __security_cookie ^ &var_68
uint64_t result_1 = result
void* rcx = data_143f02f38

if (rcx != 0)
    int64_t rax_1 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_1 = *(rcx + 8)
    
    result = rax_1 u>> 0x1a
    
    if ((result.b & 1) == 0)
    label_14198b295:
        
        while (data_143f02f38 != 0)
            int32_t rbx_1 = data_14399e5e0
            int64_t* rax_2 = sub_140a242a0()
            int64_t r8_1 = *rax_2
            char rax_3
            int64_t r9_1
            rax_3, r9_1 = (*(r8_1 + 0x20))(rax_2, zx.q(rbx_1), r8_1)
            
            if (rax_3 != 0)
                sub_140af98a0("Unknown", 0x696, Deadlock in FRHICommandListBase::WaitForDispatch.", 
                    r9_1)
                sub_140afbb40()
            
            int64_t* rax_4 = sub_140a242a0()
            int64_t* rcx_3 = data_143f02f38
            int64_t** var_20_1 = nullptr
            int32_t var_14_1 = 4
            int32_t i_2 = 1
            int64_t* var_40 = rcx_3
            
            if (rcx_3 != 0)
                rcx_3[9].d += 1
            
            int64_t r9_2 = *rax_4
            result = (*(r9_2 + 0x48))(rax_4, &var_40, zx.q(rbx_1), r9_2)
            int64_t** rcx_5 = var_20_1
            int64_t** rbx_2 = &var_40
            int32_t i_1 = i_2
            
            if (rcx_5 != 0)
                rbx_2 = rcx_5
            
            if (i_1 != 0)
                int32_t i
                
                do
                    int64_t* rcx_6 = *rbx_2
                    
                    if (rcx_6 != 0)
                        result = zx.q(rcx_6[9].d)
                        rcx_6[9].d -= 1
                        
                        if (result.d == 1)
                            result = sub_140a2f6e0(rcx_6)
                    
                    rbx_2 = &rbx_2[1]
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                rcx_5 = var_20_1
            
            if (rcx_5 != 0)
                result = sub_140a74f90(rcx_5)
            
            void* rcx_7 = data_143f02f38
            
            if (rcx_7 == 0)
                break
            
            int64_t rax_5 = 0
            
            if (0 == *(rcx_7 + 8))
                *(rcx_7 + 8) = 0
            else
                rax_5 = *(rcx_7 + 8)
            
            result = rax_5 u>> 0x1a
            
            if ((result.b & 1) != 0)
                int64_t* rcx_8 = data_143f02f38
                data_143f02f38 = 0
                
                if (rcx_8 == 0)
                    break
                
                result = zx.q(rcx_8[9].d)
                rcx_8[9].d -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(rcx_8)
    else
        int64_t* rcx_1 = data_143f02f38
        data_143f02f38 = 0
        
        if (rcx_1 != 0)
            result = zx.q(rcx_1[9].d)
            rcx_1[9].d -= 1
            
            if (result.d == 1)
                result = sub_140a2f6e0(rcx_1)
            
            goto label_14198b295

__security_check_cookie(result_1 ^ &var_68)
return result
