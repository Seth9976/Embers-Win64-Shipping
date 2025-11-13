// 函数: sub_142169c70
// 地址: 0x142169c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int512_t zmm0
zmm0.o = zx.o(0)
char rsi = 0
int128_t var_38 = zx.o(0)
(*(*arg1 + 8))(zmm0, &var_38)
int64_t* rbx = var_38:8.q

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int16_t* result = *arg2

if (result == 0)
label_142169ead:
    int64_t* rcx_18 = arg1[1]
    
    if (rcx_18 != 0)
        (*(*rcx_18 + 0x28))(rcx_18)
else
    int16_t* const r15_1 = &data_142d40450
    int16_t* var_48
    int64_t var_40
    int16_t* rdi_1
    
    if (*result == 0)
        rdi_1 = var_48
        rbx.b = 1
    else
        var_48 = nullptr
        var_40 = 0
        sub_1405947f0(&var_48, 3)
        rbx = zx.q(var_40.d + 3)
        var_40.d = rbx.d
        
        if (rbx.d s> 0)
            sub_140594770(&var_48)
            rbx = zx.q(var_40.d)
        
        rdi_1 = var_48
        UnDecorator::getReferenceType(rdi_1, &data_142e89958, 6)
        int16_t* const rdx_2 = &data_142d40450
        rsi = 1
        
        if (rbx.d != 0)
            rdx_2 = rdi_1
        
        if (sub_140a54510(*arg2, rdx_2).d == 0)
            rbx.b = 1
        else
            int16_t* const rdx_3 = &data_142d40450
            
            if (data_143f4d148 != 0)
                rdx_3 = data_143f4d140
            
            if (sub_140a54510(*arg2, rdx_3).d == 0)
                rbx.b = 1
            else
                rbx.b = 0
    
    if ((rsi & 1) != 0 && rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    if (rbx.b == 0)
        int16_t* rdi_2 = *arg2
        int32_t rdx_4 = 0
        var_48 = nullptr
        int32_t rcx_8 = 0
        var_40.d = 0
        var_40:4.d = 0
        
        if (rdi_2 != 0 && *rdi_2 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (rdi_2[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_48, rbx_1.d + 1)
                rcx_8 = var_40:4.d
                rdx_4 = var_40.d
            
            int32_t rax_3 = rdx_4 + rbx_1.d + 1
            var_40.d = rax_3
            
            if (rax_3 s> rcx_8)
                sub_140594770(&var_48)
            
            UnDecorator::getReferenceType(var_48, rdi_2, (rbx_1.d + 1) * 2)
        
        var_38.q = 0
        var_38:8.q = 0
        result = sub_140a2ccb0(&var_48, &var_38, U":\t", 1)
        
        if (result.d == 2)
            int16_t** rbx_3 = var_38.q
            
            if (rbx_3[1].d != 0)
                r15_1 = *rbx_3
            
            sub_14217e3a0(arg1, *sub_140b58260(&arg_8, r15_1, 1), &rbx_3[2])
        else if (result.d == 1)
            arg_8.q = 0
            sub_14217e3a0(arg1, 0, var_38.q)
        
        int32_t i_1 = var_38:8.d
        int64_t* rbx_4 = var_38.q
        
        if (i_1 != 0)
            int32_t i
            
            do
                int64_t rcx_15 = *rbx_4
                
                if (rcx_15 != 0)
                    sub_140a74f90(rcx_15)
                
                rbx_4 = &rbx_4[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rbx_4 = var_38.q
        
        if (rbx_4 != 0)
            sub_140a74f90(rbx_4)
        
        int16_t* rcx_17 = var_48
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        goto label_142169ead

result.b = 1
return result
