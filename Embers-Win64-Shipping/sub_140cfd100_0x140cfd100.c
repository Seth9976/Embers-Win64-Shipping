// 函数: sub_140cfd100
// 地址: 0x140cfd100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int32_t var_68 = 0
void* const rdx
int32_t r13

if ((arg4 & 0x10000000) == 0)
    int64_t* rax_2 = (*(*arg1 + 0x158))(arg1, arg3)
    r13 = 1
    sub_140a20ba0(arg2, &data_142dc30a4, 1)
    int32_t i = 0
    char r12_1 = 1
    
    for (; i s>= 0; i += 1)
        if (i s>= rax_2[1].d)
            break
        
        int64_t rbx_2 = sx.q(i) << 4
        int32_t* rdi_2 = *rax_2 + rbx_2
        int32_t rcx_1
        rcx_1.b = sub_140b5b8a0(rdi_2[2], 0) == 0
        
        if ((rdi_2[3] != 0 | rcx_1.b) != 0)
            void* rax_4 = sub_140d3c6e0(rdi_2)
            
            if (rax_4 != 0 && sub_140d1fd20(rax_4, *(rdi_2 + 8)) != 0)
                if (r12_1 == 0)
                    sub_140a20ba0(arg2, &data_142d7fa60, 1)
                
                r12_1 = 0
                sub_140b5b8a0(*(rbx_2 + *rax_2 + 8), 0)
                int16_t* var_48
                int16_t* const rdi_3
                
                if (sub_140d3c6e0(*rax_2 + rbx_2) == 0)
                    rdi_3 = u"(null)"
                else
                    rbp |= 1
                    var_68.q = *(sub_140d3c6e0(*rax_2 + rbx_2) + 0x18)
                    sub_140b63b70(&var_68, &var_48)
                    rdi_3 = &data_142d40450
                    int32_t var_40
                    
                    if (var_40 != 0)
                        rdi_3 = var_48
                
                int64_t var_60 = *(rbx_2 + *rax_2 + 8)
                int64_t var_38
                int64_t* rax_10 = sub_140b63b70(&var_60, &var_38)
                
                if (rax_10[1].d != 0)
                    *rax_10
                
                int64_t var_58
                sub_140a2e390(&var_58, u"%s.%s", rdi_3)
                int32_t var_50
                int32_t r8_2
                
                if (var_50 == 0)
                    r8_2 = 0
                else
                    r8_2 = var_50 - 1
                
                sub_140a20ba0(arg2, var_58, r8_2)
                int64_t rcx_16 = var_58
                
                if (rcx_16 != 0)
                    sub_140a74f90(rcx_16)
                
                int64_t rcx_17 = var_38
                
                if (rcx_17 != 0)
                    sub_140a74f90(rcx_17)
                
                if ((1 & rbp.b) != 0)
                    int16_t* rcx_18 = var_48
                    rbp &= 0xfffffffe
                    
                    if (rcx_18 != 0)
                        sub_140a74f90(rcx_18)
    
    rdx = &data_142da76f4
else
    rdx = &data_142e14130
    r13 = 2

return sub_140a20ba0(arg2, rdx, r13) __tailcall
