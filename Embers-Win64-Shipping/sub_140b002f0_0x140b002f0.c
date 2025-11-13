// 函数: sub_140b002f0
// 地址: 0x140b002f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* arg_18 = arg3
int16_t* rbx = arg3
arg3.b = 1
int64_t* result = sub_140aefb30(arg1, arg5, arg3.b)
int64_t* result_1 = result

if (result != 0)
    int32_t rdx_1 = 0
    int32_t rcx = 0
    int64_t var_58 = 0
    int64_t var_50_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_58, rbx_1.d + 1)
            rcx = var_50_1:4.d
            rdx_1 = var_50_1.d
        
        int32_t rax = rdx_1 + rbx_1.d + 1
        var_50_1.d = rax
        
        if (rax s> rcx)
            sub_140594770(&var_58)
        
        UnDecorator::getReferenceType(var_58, arg2, (rbx_1.d + 1) * 2)
        rbx = arg_18
    
    int64_t* rax_1 = sub_140af00b0(result_1, &var_58)
    int64_t rcx_5 = var_58
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    result = sub_140a4f230(rax_1, *sub_140b58260(&var_58, rbx, 1))
    
    if (result.d s> 0)
        result_1[0xa].b = 1
    
    int32_t i = 0
    
    if (arg4[1].d s> 0)
        int64_t* r14_1 = nullptr
        
        do
            int64_t rax_3 = *arg4
            int16_t* rdi_1
            
            if (*(r14_1 + rax_3 + 8) == 0)
                rdi_1 = &data_142d40450
            else
                rdi_1 = *(r14_1 + rax_3)
            
            int16_t* string_1 = nullptr
            int32_t rdx_7 = 0
            int32_t var_40_1 = 0
            int32_t rcx_8 = 0
            int32_t var_3c_1 = 0
            
            if (rdi_1 != 0 && *rdi_1 != 0)
                int64_t rbx_3 = -1
                
                do
                    rbx_3 += 1
                while (rdi_1[rbx_3] != 0)
                
                if (rbx_3.d + 1 s> 0)
                    sub_1405947f0(&string_1, rbx_3.d + 1)
                    rcx_8 = var_3c_1
                    rdx_7 = var_40_1
                
                int32_t rax_4 = rbx_3.d + 1 + rdx_7
                
                if (rax_4 s> rcx_8)
                    sub_140594770(&string_1)
                
                UnDecorator::getReferenceType(string_1, rdi_1, (rbx_3.d + 1) * 2)
                rdx_7 = rax_4
            
            int64_t var_38 = 0
            int16_t* const string = &data_142d40450
            int64_t var_30_1 = 0
            
            if (rdx_7 != 0)
                string = string_1
            
            wchar16* j_2 = wcschr(string, 0x25)
            wchar16* j_1 = j_2
            
            if (j_2 != 0)
                wchar16* j
                
                do
                    int64_t* rax_5 = sub_140af9950(j_1)
                    
                    if (rax_5 != 0)
                        sub_140aef750(&string_1, &var_38)
                        break
                    
                    j = wcschr(&j_1[1], (rax_5 + 0x25).w)
                    j_1 = j
                while (j != 0)
            
            sub_140b58260(&var_58, arg_18, 1)
            result = sub_140ae49f0(rax_1, &var_58, &string_1)
            int64_t rcx_17 = var_38
            
            if (rcx_17 != 0)
                result = sub_140a74f90(rcx_17)
            
            int16_t* string_2 = string_1
            
            if (string_2 != 0)
                result = sub_140a74f90(string_2)
            
            i += 1
            result_1[0xa].b = 1
            r14_1 = &r14_1[2]
        while (i s< arg4[1].d)

return result
