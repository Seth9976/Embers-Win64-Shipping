// 函数: sub_141d497e0
// 地址: 0x141d497e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg5
int64_t r14 = 0x20002000

if (rax != 0)
    r14 = rax

int64_t* result

if (arg1 != sub_141d49ef0())
    void* var_48 = arg1
    int64_t* rax_1
    
    if (arg1 == 0)
        rax_1 = nullptr
    else
        rax_1 = *(arg1 + 0x50)
    
    int32_t var_38_1 = 0xffffffff
    int16_t var_34_1 = 0x101
    char var_32_1 = 0
    sub_1406328d0(&var_48)
    int64_t* rdi_1 = rax_1
    
    if (rdi_1 == 0)
    label_141d4983c:
        result.b = 1
    else
        while (true)
            if ((arg4 == 0 || (rdi_1[8] & arg4) != 0 || arg4 == -1) && (rdi_1[8] & r14) == 0
                    && r14 != -1)
                int64_t var_68
                sub_140b63b70(&rdi_1[5], &var_68)
                int16_t* rdx_2 = nullptr
                int64_t r15_1 = var_68
                int16_t* var_88 = nullptr
                int32_t var_60
                int32_t var_80_1 = var_60
                
                if (var_60 != 0)
                    sub_1405a4c70(&var_88, var_60, 0)
                    memcpy(var_88, r15_1, var_60 * 2)
                    rdx_2 = var_88
                else
                    int32_t var_7c_1 = 0
                
                uint32_t rcx_5 = zx.d(*rdx_2)
                int32_t rax_2
                rax_2.w = sbb.w((rcx_5 - 0x41).w, (rcx_5 - 0x41).w, rcx_5 - 0x41 u< 0x1a)
                rax_2.w &= 0x20
                rax_2.w += rcx_5.w
                *rdx_2 = rax_2.w
                int128_t zmm0_1 = sub_140a306e0(&var_88, &data_142db68c4, &data_1432262c4, 0)
                int64_t rcx_7 = var_68
                
                if (rcx_7 != 0)
                    zmm0_1 = sub_140a74f90(rcx_7)
                
                int64_t var_78
                sub_141d494f0(&var_78, rdi_1, sx.q(*(rdi_1 + 0x4c)) + arg2, arg4, zmm0_1, r14, arg6)
                int64_t* var_70
                
                if (var_78 == 0)
                    if (var_70 != 0)
                        var_70[1].d -= 1
                        
                        if (var_70[1].d == 1)
                            (**var_70)(var_70)
                            int32_t temp2_1 = *(var_70 + 0xc)
                            *(var_70 + 0xc) -= 1
                            
                            if (temp2_1 == 1)
                                (*(*var_70 + 8))(var_70, 1)
                    
                    int16_t* rcx_16 = var_88
                    
                    if (rcx_16 != 0)
                        sub_140a74f90(rcx_16)
                    
                    result.b = 0
                    break
                
                int16_t** var_58 = &var_88
                int64_t* var_50_1 = &var_78
                sub_141d45ef0(arg3, &arg5, &var_58, nullptr)
                
                if (var_70 != 0)
                    var_70[1].d -= 1
                    
                    if (var_70[1].d == 1)
                        (**var_70)(var_70)
                        int32_t temp3_1 = *(var_70 + 0xc)
                        *(var_70 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*var_70 + 8))(var_70, 1)
                
                int16_t* rcx_12 = var_88
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
            
            int64_t* rax_6 = rdi_1[4]
            sub_1406328d0(&var_48)
            rdi_1 = rax_6
            
            if (rdi_1 == 0)
                goto label_141d4983c_1
else
    int64_t* rdx = *(arg2 + 0x10)
    
    if (rdx != 0)
        sub_141d46260(arg3, rdx)
    
label_141d4983c_1:
    result.b = 1

return result
