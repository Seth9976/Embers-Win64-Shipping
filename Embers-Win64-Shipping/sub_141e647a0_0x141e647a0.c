// 函数: sub_141e647a0
// 地址: 0x141e647a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm0
zmm0.o = zx.o(0)
int32_t r15 = 0
int128_t var_98
__builtin_memset(&var_98, 0, 0x1c)
int64_t var_78 = 0
int32_t var_70 = 0

if (*(arg1 + 0x2d4) == 0)
    goto label_141e64834

int64_t var_88
(*(*arg1 + 0x360))(zmm0, arg3, &var_88, &var_78)

if (var_70 s<= 0)
    int32_t var_80
    r15 = var_80
label_141e64834:
    void* rbx_2
    int64_t* rsi_1
    int64_t* var_68
    int64_t* var_58
    int128_t var_48
    
    if (*(arg1 + 0x2d2) == 0 || r15 != 0)
        var_58 = nullptr
        int32_t var_50_1 = 0
        
        if (arg4 != &var_58 && arg4[1].d != 0)
            int64_t* rcx_10 = *arg4
            
            if (rcx_10 != 0)
                (*(*rcx_10 + 0x40))(rcx_10, &var_58)
        
        int32_t i_3 = arg3[1].d
        void* rbx_3 = *arg3
        var_68 = nullptr
        int32_t i_5 = i_3
        
        if (i_3 != 0)
            sub_140808f70(&var_68, i_3, 0)
            int64_t* rdi_3 = var_68
            int32_t i
            
            do
                *rdi_3 = *rbx_3
                sub_140596d10(&rdi_3[1], rbx_3 + 8)
                rdi_3 = &rdi_3[3]
                rbx_3 += 0x18
                i = i_3
                i_3 -= 1
            while (i != 1)
        else
            int32_t var_5c_2 = 0
        
        void var_38
        int64_t** rax_13 = sub_1423960c0(&arg1[0x2f], &var_48, &var_68, &var_58, arg5, 0, r15 s> 0, 
            sub_140596d10(&var_38, arg6))
        
        if (&var_98 == rax_13)
            rsi_1 = var_98.q
            rbx_2 = var_98:8.q
        else
            rsi_1 = *rax_13
            *rax_13 = nullptr
            rbx_2 = rax_13[1]
            var_98.q = rsi_1
            
            if (rbx_2 == 0)
                rbx_2 = var_98:8.q
            else
                rax_13[1] = 0
                var_98:8.q = rbx_2
        
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                (**var_40)(var_40)
                int32_t temp4_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)
        
        if (var_80 s> 0 && rsi_1 != 0)
            var_48 = var_98
            
            if (rbx_2 != 0)
                *(rbx_2 + 8) += 1
            
            int64_t rax_16 = *arg1
            int32_t var_b8_1
            var_b8_1.q = &var_48
            var_58 = nullptr
            int32_t var_50_2 = 0
            (*(rax_16 + 0x488))(arg1, &var_88, &var_58, 0, var_b8_1)
    else
        int32_t i_2 = arg3[1].d
        int64_t* rbx_1 = *arg3
        var_68 = nullptr
        int32_t i_4 = i_2
        
        if (i_2 != 0)
            sub_140808f70(&var_68, i_2, 0)
            int64_t* rdi_1 = var_68
            int32_t i_1
            
            do
                *rdi_1 = *rbx_1
                sub_140596d10(&rdi_1[1], &rbx_1[1])
                rdi_1 = &rdi_1[3]
                rbx_1 = &rbx_1[3]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        else
            int32_t var_5c_1 = 0
        
        int32_t var_b8
        var_b8.q = sub_140596d10(&var_48, arg6)
        int64_t** rax_4 = sub_142396730(&arg1[0x2f], &var_58, &var_68, 0, var_b8)
        
        if (&var_98 == rax_4)
            rsi_1 = var_98.q
            rbx_2 = var_98:8.q
        else
            rsi_1 = *rax_4
            *rax_4 = nullptr
            rbx_2 = rax_4[1]
            
            if (rbx_2 == 0)
                rbx_2 = var_98:8.q
            else
                rax_4[1] = 0
        
        int32_t var_50
        int64_t* rdi_2 = var_50.q
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp5_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        var_98.q = 0
        var_98:8.d = 0
        var_58.o = zx.o(0)
        sub_14238bbe0(arg4, &var_58, &var_98)
        int64_t rax_8
        
        if (var_98:8.d == 0)
            rax_8 = var_98.q
        label_141e6495c:
            
            if (rax_8 != 0)
                sub_140a74f90(rax_8)
        else
            int64_t* rcx_7 = var_98.q
            
            if (rcx_7 != 0)
                (*(*rcx_7 + 0x38))(rcx_7, 0)
                rax_8 = var_98.q
                
                if (rax_8 != 0)
                    rax_8 = sub_140a84c80(rax_8, 0, 0)
                    var_98.q = rax_8
                
                var_98:8.d = 0
                goto label_141e6495c
    *arg2 = rsi_1
    arg2[1] = rbx_2
else
    *arg2 = 0
    arg2[1] = 0

int64_t rcx_18 = var_78

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

int64_t rcx_19 = var_88

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

sub_140745b20(arg4)
return arg2
