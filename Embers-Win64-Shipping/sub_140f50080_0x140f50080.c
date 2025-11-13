// 函数: sub_140f50080
// 地址: 0x140f50080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t result = __security_cookie ^ &var_a8
int64_t result_1 = result
int64_t rsi = 0
int32_t var_88 = 0

if (*(arg1 + 0x3fd) != 0)
    void* entry_r8
    result = sub_140db3500(entry_r8)
    int64_t* rbx_1
    int64_t rbp
    
    if (result.b == 0)
        rbx_1 = var_88.q
        rbp.b = 0
    else
        rbx_1 = arg1[2]
        
        if (rbx_1 != 0)
            int32_t rax_1 = rbx_1[1].d
            
            if (rax_1 != 0)
                rbx_1[1].d = rax_1 + 1
                rax_1.b = 1
            
            if (rax_1.b == 0)
                rbx_1 = nullptr
            
            if (rbx_1 != 0)
                int32_t rax_2 = rbx_1[1].d
                rsi = arg1[1]
                rbx_1[1].d = rax_2
                
                if (rax_2 == 0)
                    (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
        
        var_88.q = rsi
        int64_t* var_80_1 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        rsi = 1
        result = sub_140d9c320(entry_r8, &var_88)
        
        if (result.b == 0)
            rbp.b = 0
        else
            rbp = 1
    
    if ((rsi.b & 1) != 0 && rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rbp.b != 0)
        void* rdx_2 = entry_r8 + 8
        void* rax_7 = *(rdx_2 + 0x120)
        
        if (rax_7 != 0)
            rdx_2 = rax_7
        
        int64_t rcx_6 = sx.q(*(entry_r8 + 0x130)) * 9
        int64_t* rbx_2 = *(rdx_2 + (rcx_6 << 3) - 8)
        int64_t r14_1 = *(rdx_2 + (rcx_6 << 3) - 0x10)
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
        
        int128_t zmm6 = arg1[0x7f].d
        char rsi_1 = *(arg1 + 0x3fc)
        rbp.b = *(arg1 + 0x3fd) == 2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        void*** rax_9 = sub_140a82f30(0x28, 8)
        *rax_9 = &data_142ee7430
        rax_9[1] = arg1
        rax_9[2] = r14_1
        rax_9[3] = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        *(rax_9 + 0x24) = zmm6.d
        rax_9[4].b = rbp.b
        *(rax_9 + 0x21) = rsi_1
        *rax_9 = &data_142ee7450
        uint64_t (* var_78)(int64_t* arg1, int128_t* arg2)
        uint64_t (* rdx_3)(int64_t* arg1, int128_t* arg2) = var_78
        
        if (rax_9 != -8)
            rdx_3 = sub_140f2d3a0
        
        var_78 = rdx_3
        int128_t var_58
        int128_t entry_zmm2
        int128_t entry_zmm3
        
        if (&arg1[0x8e] != &var_78)
            entry_zmm2 = *(arg1 + 0x470)
            entry_zmm3 = *(arg1 + 0x480)
            int128_t zmm4_1 = *(arg1 + 0x490)
            int128_t zmm5_1 = *(arg1 + 0x4a0)
            *(arg1 + 0x470) = var_78.o
            int128_t zmm0_1 = var_58
            *(arg1 + 0x480) = rax_9.o
            *(arg1 + 0x490) = zmm0_1
            var_78.o = entry_zmm2
            rdx_3 = var_78
            void*** var_68_1
            var_68_1.o = entry_zmm3
            rax_9 = var_68_1
            int128_t var_48
            *(arg1 + 0x4a0) = var_48
            var_58 = zmm4_1
            int128_t var_48_1 = zmm5_1
        
        if (rdx_3 != 0)
            void*** rcx_9 = &var_58
            
            if (rax_9 != 0)
                rcx_9 = rax_9
            
            (*rcx_9)[2](rcx_9, rdx_3, entry_zmm2, entry_zmm3)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp5_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        result = sub_140f2cf90(arg1)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp7_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
            
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp8_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)

__security_check_cookie(result_1 ^ &var_a8)
return result
