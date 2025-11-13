// 函数: sub_141b27db0
// 地址: 0x141b27db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t rax_2 = *(arg2 + 0x24)
int32_t var_b8 = 0
int32_t var_c8
int32_t var_c4
int64_t rdx

if (rax_2 == 0x80000000)
    int64_t* rdx_1 = 0x10
    
    if (*(arg2 + 0x20) != 0)
        rdx_1 = 4
    
    rdx = *(rdx_1 + arg2)
else
    var_c8 = rax_2
    var_c4 = 0
    rdx = var_c8.q

char result
int512_t zmm1
int32_t zmm6
int32_t zmm7
result, zmm1, zmm6, zmm7 = sub_141a467f0(arg1 + 0x48, rdx, &var_b8)

if (result != 0)
    int32_t var_48_1 = zmm6
    int32_t var_58_1 = zmm7
    int64_t var_98
    sub_141a52640(arg1, &var_98)
    TEB* gsbase
    
    if (data_143f2c7b8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f2c7b8)
        
        if (data_143f2c7b8 == 0xffffffff)
            data_143f2c7b0 = var_98
            _Init_thread_footer(&data_143f2c7b8)
    
    void* var_b0
    void*** var_90
    int64_t var_88
    int64_t* var_80
    int64_t var_78
    
    if (sub_141aef5e0(sub_141a500a0(arg3, zmm1), data_143f2c7b0) == 0)
        sub_141a312f0(&var_90)
        int64_t* rax_7 = sub_140596d10(&var_b0, arg1 + 0x28)
        int64_t var_d8_1 = *(arg1 + 0x40)
        int512_t zmm1_1 = sub_141a54490(&var_90, *(arg1 + 0x20), rax_7, *(arg1 + 0x38))
        void*** rax_9 = j_sub_140a82f30(0x60)
        void*** rbx_1 = rax_9
        
        if (rax_9 == 0)
            rbx_1 = nullptr
        else
            rax_9[1].d = 1
            *(rax_9 + 0xc) = 1
            *rbx_1 = &data_142d4cbc0
            __builtin_memset(&rbx_1[3], 0, 0x20)
            rbx_1[7] = var_78
            rbx_1[2] = &data_143051d00
            rbx_1[8] = &data_142d4c6c0
            rbx_1[9] = var_88
            rbx_1[0xa] = var_80
            
            if (var_80 != 0)
                var_80[1].d += 1
            
            rbx_1[0xb] = var_78
        
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
        
        var_b0 = &rbx_1[2]
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        var_c8.q = data_143f2c7b0
        sub_1405a72d0(sub_141a500a0(arg3, zmm1_1), &var_c8, &var_b0)
        
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
        
        if (var_80 != 0)
            var_80[1].d -= 1
            
            if (var_80[1].d == 1)
                (**var_80)(var_80)
                int32_t temp6_1 = *(var_80 + 0xc)
                *(var_80 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_80 + 8))(var_80, 1)
    
    int32_t rax_26 = *(arg2 + 0x24)
    int64_t rdx_7
    
    if (rax_26 == 0x80000000)
        int64_t* rdx_8 = 0x10
        
        if (*(arg2 + 0x20) != 0)
            rdx_8 = 4
        
        rdx_7 = *(rdx_8 + arg2)
    else
        var_c8 = rax_26
        var_c4 = 0
        rdx_7 = var_c8.q
    
    int32_t zmm0_1
    int512_t zmm1_2
    zmm0_1, zmm1_2 = sub_141a47d70(arg1, rdx_7)
    char rbx_3 = *(arg1 + 0xe8)
    int32_t zmm6_1 = var_b8
    var_88.b &= 0xfc
    void*** rax_27 = sub_140a82f30(0x10, 8)
    char rcx_21 = var_88.b | 1
    var_90 = rax_27
    var_88.b = rcx_21
    void*** rcx_22 = &var_90
    var_c4.q = -1
    
    if ((rcx_21 & 2) == 0)
        rcx_22 = rax_27
    
    char var_bc_1 = 0
    rcx_22[1].d = zmm6_1
    *rcx_22 = &data_14305da18
    int32_t rax_28 = data_1439e5888
    char var_68_1 = rbx_3
    int64_t rbx_4 = data_143f2c7b0
    var_80.d = rax_28
    var_c8 = rax_28
    int32_t var_6c_1 = zmm0_1
    var_80 = -1
    var_78:4.b = 0
    int32_t var_70_1 = 0
    __builtin_memset(&var_b0, 0, 0x14)
    void* rax_29 = sub_141a500a0(arg3, zmm1_2)
    int32_t var_70_2 = *(arg2 + 0x50)
    var_80.o = var_c8.o
    sub_141aeb9f0(sub_1405a8fd0(rax_29 + 0x50, sub_1405be5b0(&var_b0), &var_b0), rbx_4, &var_90)
    result = var_88.b
    
    if ((result & 1) != 0)
        void*** rcx_28 = &var_90
        
        if ((result & 2) == 0)
            rcx_28 = var_90
        
        var_88.b = result & 0xfe
        result = (**rcx_28)(rcx_28, 0)
        
        if ((var_88.b & 2) == 0)
            result = sub_140a74f90(var_90)

__security_check_cookie(rax_1 ^ &var_f8)
return result
