// 函数: sub_141b28240
// 地址: 0x141b28240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t rax_2 = *(arg2 + 0x24)
int32_t var_a8 = 0
int32_t var_b8
int32_t var_b4
int32_t rdx

if (rax_2 == 0x80000000)
    void* const rdx_1 = 0x10
    
    if (*(arg2 + 0x20) != 0)
        rdx_1 = 4
    
    rdx = (*(rdx_1 + arg2)).d
else
    var_b8 = rax_2
    var_b4 = 0
    rdx = (var_b8.q).d

char result = sub_141a47350(arg1 + 0x48, rdx, &var_a8)

if (result != 0)
    int64_t var_88
    sub_141a52640(arg1, &var_88)
    TEB* gsbase
    
    if (data_143f2c7c8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f2c7c8)
        
        if (data_143f2c7c8 == 0xffffffff)
            data_143f2c7c0 = var_88
            _Init_thread_footer(&data_143f2c7c8)
    
    void* var_a0
    int64_t* var_80
    int64_t var_78
    int64_t* var_70
    int64_t var_68
    
    if (sub_141a2a790(sub_141a500a0(arg3, arg4), data_143f2c7c0) == 0)
        sub_141a312f0(&var_80)
        int64_t* rax_7 = sub_140596d10(&var_a0, arg1 + 0x28)
        int64_t var_c8_1 = *(arg1 + 0x40)
        int512_t zmm1 = sub_141a54490(&var_80, *(arg1 + 0x20), rax_7, *(arg1 + 0x38))
        void*** rax_9 = j_sub_140a82f30(0x60)
        void*** rbx_1 = rax_9
        
        if (rax_9 == 0)
            rbx_1 = nullptr
        else
            rax_9[1].d = 1
            *(rax_9 + 0xc) = 1
            *rbx_1 = &data_142d4cbc0
            __builtin_memset(&rbx_1[3], 0, 0x20)
            rbx_1[7] = var_68
            rbx_1[2] = &data_143051d30
            rbx_1[8] = &data_142d4c6c0
            rbx_1[9] = var_78
            rbx_1[0xa] = var_70
            
            if (var_70 != 0)
                var_70[1].d += 1
            
            rbx_1[0xb] = var_68
        
        int64_t* rdi_1 = &rbx_1[3]
        
        if (rbx_1 == -0x10)
            rdi_1 = nullptr
        
        if (rdi_1 != 0)
            void* rax_14
            
            if (*rdi_1 != 0)
                rax_14 = rdi_1[1]
            
            if (*rdi_1 == 0 || rax_14 == 0 || *(rax_14 + 8) s<= 0)
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                *rdi_1 = &rbx_1[2]
                int64_t* rcx_9 = rdi_1[1]
                
                if (rbx_1 != rcx_9)
                    if (rbx_1 != 0)
                        *(rbx_1 + 0xc) += 1
                        rcx_9 = rdi_1[1]
                    
                    if (rcx_9 != 0)
                        int32_t temp8_1 = *(rcx_9 + 0xc)
                        *(rcx_9 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rcx_9 + 8))(rcx_9, 1)
                    
                    rdi_1[1] = rbx_1
                
                if (rbx_1 != 0)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp7_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*rbx_1)[1](rbx_1, 1)
        
        var_a0 = &rbx_1[2]
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        var_b8.q = data_143f2c7c0
        sub_1405a72d0(sub_141a500a0(arg3, zmm1), &var_b8, &var_a0)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp4_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*rbx_1)[1](rbx_1, 1)
        
        if (var_70 != 0)
            var_70[1].d -= 1
            
            if (var_70[1].d == 1)
                (**var_70)(var_70)
                int32_t temp6_1 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_70 + 8))(var_70, 1)
    
    int32_t rax_26 = *(arg2 + 0x24)
    int64_t rdx_7
    
    if (rax_26 == 0x80000000)
        int64_t* rdx_8 = 0x10
        
        if (*(arg2 + 0x20) != 0)
            rdx_8 = 4
        
        rdx_7 = *(rdx_8 + arg2)
    else
        var_b8 = rax_26
        var_b4 = 0
        rdx_7 = var_b8.q
    
    int32_t zmm0_1
    int512_t zmm1_1
    zmm0_1, zmm1_1 = sub_141a47d70(arg1, rdx_7)
    char rdi_3 = *(arg1 + 0xd8)
    int32_t rbx_3 = var_a8
    var_78.b &= 0xfc
    int64_t* rax_27 = sub_140a82f30(0x10, 8)
    char rcx_21 = var_78.b | 1
    var_80 = rax_27
    var_78.b = rcx_21
    int64_t* rcx_22 = &var_80
    var_b4.q = -1
    
    if ((rcx_21 & 2) == 0)
        rcx_22 = rax_27
    
    char var_ac_1 = 0
    *rcx_22 = &data_14302f4b8
    rcx_22[1].d = rbx_3
    int32_t rax_28 = data_1439e5888
    int64_t rbx_4 = data_143f2c7c0
    var_70.d = rax_28
    var_b8 = rax_28
    int32_t var_5c_1 = zmm0_1
    var_70 = -1
    var_68:4.b = 0
    int32_t var_60_1 = 0
    char var_58_1 = rdi_3
    __builtin_memset(&var_a0, 0, 0x14)
    void* rax_29 = sub_141a500a0(arg3, zmm1_1)
    int32_t var_60_2 = *(arg2 + 0x50)
    var_70.o = var_b8.o
    sub_141a285f0(sub_1405a8fd0(rax_29 + 0x50, sub_1405be5b0(&var_a0), &var_a0), rbx_4, &var_80)
    result = var_78.b
    
    if ((result & 1) != 0)
        int64_t* rcx_28 = &var_80
        
        if ((result & 2) == 0)
            rcx_28 = var_80
        
        var_78.b = result & 0xfe
        result = (**rcx_28)(rcx_28, 0)
        
        if ((var_78.b & 2) == 0)
            result = sub_140a74f90(var_80)

__security_check_cookie(rax_1 ^ &var_e8)
return result
