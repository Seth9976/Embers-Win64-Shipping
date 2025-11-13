// 函数: sub_140f795a0
// 地址: 0x140f795a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
float var_180 = 0f
*arg2 = 0
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
int64_t* rcx = *arg1
int64_t rsi
rsi.b = sub_140e19840(*(*(*rcx + 0x80))(rcx, &var_180), arg5) == 0
int64_t* var_178

if (var_178 != 0)
    var_178[1].d -= 1
    
    if (var_178[1].d == 1)
        (**var_178)(var_178)
        int32_t temp1_1 = *(var_178 + 0xc)
        *(var_178 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_178 + 8))(var_178, 1)

if (rsi.b != 0)
    int64_t* rsi_1 = *(arg4 + 0x48)
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    char rax_7 = 1
    int64_t* rbx_1
    int64_t r12
    
    if (*(arg4 + 0x38) == data_143e1e008)
        rbx_1 = var_180.q
        r12.b = 1
    else
        rbx_1 = *(arg4 + 0x48)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        rax_7 = 3
        
        if (*(arg4 + 0x38) == data_143e1e020)
            r12.b = 1
        else
            r12.b = 0
    
    if ((rax_7 & 2) != 0 && rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t temp4_1 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)
    
    if (r12.b != 0)
        int64_t* rcx_10 = *arg1
        int32_t var_198
        void* rax_14
        int32_t r8
        rax_14, r8 = sub_140e195e0(*(*(*rcx_10 + 0x80))(rcx_10, &var_198), &var_180)
        bool rsi_2 = *(rax_14 + 1)
        var_180:1.b = 0
        int64_t* var_190
        
        if (var_190 != 0)
            var_190[1].d -= 1
            
            if (var_190[1].d == 1)
                r8 = (**var_190)(var_190)
                int32_t temp7_1 = *(var_190 + 0xc)
                *(var_190 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    r8 = (*(*var_190 + 8))(var_190, 1)
        
        if (rsi_2 == 0)
            r8 = sub_140f7c1d0(arg1)
            *(arg1 + 0x849) = 1
        
        int64_t* rbx_3 = *(arg4 + 0x48)
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
        
        rsi_2 = *(arg4 + 0x38) == data_143e1e008
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                r8 = (**rbx_3)(rbx_3)
                int32_t temp9_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp9_1 == 1)
                    r8 = (*(*rbx_3 + 8))(rbx_3, 1)
        
        int128_t zmm6
        int128_t var_38_1 = zmm6
        int128_t zmm7
        int128_t var_48_1 = zmm7
        int128_t zmm8
        int128_t var_58_1 = zmm8
        int128_t zmm9
        int128_t var_68_1 = zmm9
        int128_t zmm10
        int128_t var_78_1 = zmm10
        int128_t zmm11
        int128_t var_88_1 = zmm11
        int128_t zmm0
        
        if (rsi_2 == 0)
            int64_t* rbx_4 = *(arg4 + 0x48)
            
            if (rbx_4 != 0)
                rbx_4[1].d += 1
            
            rsi_2 = *(arg4 + 0x38) == data_143e1e020
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t temp11_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp11_1 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            if (rsi_2 != 0 && sub_140f6a470(arg1) != 0)
                zmm8 = *(arg3 + 0x1c)
                zmm10 = *(arg3 + 0x20)
                arg5.o = zmm8
                arg5.d = arg5.d f* *(arg3 + 0x28)
                zmm0.d = zmm10.d f* *(arg3 + 0x24)
                zmm11 = *(arg4 + 0x1c)
                int128_t zmm12 = *(arg4 + 0x18)
                arg5.d = arg5.d f- zmm0.d
                zmm0.d = zmm12.d f- *(arg3 + 0x2c)
                zmm12.d = zmm12.d f- *(arg3 + 0x2c)
                zmm9.d = 1f f/ arg5.d
                arg5.o = zmm9
                arg5.d = arg5.d f* *(arg3 + 0x24)
                arg6 = zmm9.d f* *(arg3 + 0x28) f* zmm0.d
                zmm0.d = zmm11.d f- *(arg3 + 0x30)
                zmm11.d = zmm11.d f- *(arg3 + 0x30)
                arg5.d = arg5.d f* zmm0.d
                zmm0.d = zmm9.d f* zmm8.d
                zmm9.d = zmm9.d f* zmm10.d
                zmm0.d = zmm0.d f* zmm11.d
                zmm9.d = zmm9.d f* zmm12.d
                arg6 = (arg6 f- arg5.d) f* *(arg3 + 8)
                zmm0.d = zmm0.d f- zmm9.d
                var_180 = arg6
                zmm0.d = zmm0.d f* *(arg3 + 8)
                int32_t var_17c_1 = zmm0.d
                
                if (sub_140f7b890(arg1, &var_180) == 0 && &var_180 != &arg1[0xf0]
                        && arg1[0xf1].b != 0)
                    arg1[0xf1].b = 0
        else
            if ((*(arg4 + 8) & 3) == 0)
                if (&var_180 != &arg1[0xf0] && arg1[0xf1].b != 0)
                    arg1[0xf1].b = 0
                
                zmm8 = *(arg3 + 0x1c)
                zmm9 = *(arg3 + 0x20)
                arg5.o = zmm8
                arg5.d = arg5.d f* *(arg3 + 0x28)
                int32_t var_188_2 = 0
                zmm0.d = zmm9.d f* *(arg3 + 0x24)
                zmm10 = *(arg4 + 0x18)
                zmm11 = *(arg4 + 0x1c)
                zmm7.d = zmm10.d f- *(arg3 + 0x2c)
                zmm10.d = zmm10.d f- *(arg3 + 0x2c)
                arg5.d = arg5.d f- zmm0.d
                zmm6.d = 1f f/ arg5.d
                arg5.o = zmm11
                zmm11.d = zmm11.d f- *(arg3 + 0x30)
                arg5.d = arg5.d f- *(arg3 + 0x30)
                zmm0.d = zmm6.d f* *(arg3 + 0x28)
                zmm7.d = zmm7.d f* zmm0.d
                zmm0.d = zmm6.d f* *(arg3 + 0x24)
                arg5.d = arg5.d f* zmm0.d
                zmm0.d = zmm6.d f* zmm8.d
                zmm6.d = zmm6.d f* zmm9.d
                zmm11.d = zmm11.d f* zmm0.d
                zmm10.d = zmm10.d f* zmm6.d
                zmm11.d = zmm11.d f- zmm10.d
                var_190:4.d = zmm11.d
            else
                zmm6 = *(arg3 + 0x1c)
                zmm9 = *(arg3 + 0x20)
                arg5.o = zmm6
                arg5.d = arg5.d f* *(arg3 + 0x28)
                int32_t var_188_1 = 1
                zmm0.d = zmm9.d f* *(arg3 + 0x24)
                zmm11 = *(arg4 + 0x18)
                zmm10 = *(arg4 + 0x1c)
                arg5.d = arg5.d f- zmm0.d
                zmm0.d = zmm11.d f- *(arg3 + 0x2c)
                zmm11.d = zmm11.d f- *(arg3 + 0x2c)
                zmm8.d = 1f f/ arg5.d
                arg5.o = zmm8
                zmm7.d = zmm8.d f* *(arg3 + 0x28)
                arg5.d = arg5.d f* *(arg3 + 0x24)
                zmm7.d = zmm7.d f* zmm0.d
                zmm0.d = zmm10.d f- *(arg3 + 0x30)
                zmm10.d = zmm10.d f- *(arg3 + 0x30)
                arg5.d = arg5.d f* zmm0.d
                zmm0.d = zmm8.d f* zmm6.d
                zmm8.d = zmm8.d f* zmm9.d
                zmm0.d = zmm0.d f* zmm10.d
                zmm8.d = zmm8.d f* zmm11.d
                zmm0.d = zmm0.d f- zmm8.d
                var_190:4.d = zmm0.d
            
            zmm7.d = zmm7.d f- arg5.d
            int32_t var_184_1 = (*(arg3 + 8)).d
            var_198 = 0
            int32_t var_194_1 = 1
            var_190.d = zmm7.d
            sub_140f7c300(arg1, &var_198, r8)
            arg1[0x109].b = 1
        int32_t var_b4
        int32_t var_b4_1 = var_b4 & 0xffffff00
        char var_168 = 1
        int64_t var_160_1 = 0
        int64_t var_158_1 = 0
        char var_148_1 = 0
        int64_t var_140
        __builtin_memset(&var_140, 0, 0x88)
        int32_t var_b8_1 = 0x20702
        sub_1405979f0(arg2, &var_168)
        sub_140597700(&var_168)
        int64_t* rcx_24 = *arg1
        sub_140eae530(arg2, (*(*rcx_24 + 0x80))(rcx_24, &var_198, arg6))
        int64_t* rcx_26 = *arg1
        sub_140dbdce0(arg2, (*(*rcx_26 + 0x80))(rcx_26, &var_198), 0, 0)

__security_check_cookie(rax_1 ^ &var_1b8)
return arg2
