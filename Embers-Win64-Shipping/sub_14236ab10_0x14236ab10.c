// 函数: sub_14236ab10
// 地址: 0x14236ab10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t result = (*(*arg1 + 0x20))()
void** r8 = arg1[4]

if (r8 != 0)
    int32_t r15_1 = r8[1].d
    
    if (r15_1 s> 0)
        void* rsi_1 = nullptr
        int32_t r9_1 = 0
        int32_t rdx_1 = 0
        int128_t zmm0 = data_143dbb1e0
        int32_t var_68_1 = 1
        int32_t var_54_1 = (1 << (data_1439c7a34).b) - 1
        char var_50_1 = 0
        int64_t var_48_1 = 0
        int32_t var_40_1 = 0
        int128_t* var_80
        __builtin_memset(&var_80, 0, 0x18)
        int128_t var_64_1 = zmm0
        
        if (r15_1 != 0)
            do
                void* rcx_2 = *r8
                
                if ((*r8 & 1) != 0)
                    rcx_2 = (rcx_2 s>> 1) + r8
                
                int64_t rax_5 = sx.q(rdx_1)
                rdx_1 += 1
                r9_1 += *((rax_5 << 6) + rcx_2 + 0x10)
            while (rdx_1 u< r15_1)
        
        int64_t* rcx_3 = data_143f0f180
        int64_t var_98
        int128_t var_78
        (*(*rcx_3 + 0x488))(rcx_3, &var_98, &data_143f02b98, zx.q(r9_1 << 4), 0x201, &var_78, 
            &var_80)
        void* rdi_1 = &arg1[2]
        
        if (rdi_1 != &var_98)
            int64_t* rbx_1 = *rdi_1
            *rdi_1 = var_98
            var_98 = 0
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    char rax_10
                    
                    if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                        rax_10 = sub_1405949a0()
                    
                    if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_10 != 0))
                        (**rbx_1)(rbx_1, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rbx_1 + 0xc))
                            *(rbx_1 + 0xc) = 1
                            z_1 = true
                        else
                            *(rbx_1 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_12 = sub_140a20af0()
                            uint64_t rdx_3 = zx.q(rax_12)
                            void* const rax_13
                            
                            if (rax_12 != 0)
                                rax_13 = *((rdx_3 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_3.d) & 0x3fff) * 0x18
                            else
                                rax_13 = nullptr
                            
                            *(rax_13 + 8) = rbx_1
                            sub_1405a42f0(&data_143f02390, rdx_3.d)
        
        sub_1405d1550(&var_98)
        int128_t* r11_2 = var_80
        int32_t r14_1 = 0
        
        if (r15_1 != 0)
            do
                int64_t* rax_18 = arg1[4]
                void* rcx_9 = *rax_18
                
                if ((rcx_9.b & 1) != 0)
                    rcx_9 = (rcx_9 s>> 1) + rax_18
                
                int32_t i = 0
                void* rax_21 = (sx.q(r14_1) << 6) + rcx_9
                int32_t rdi_2 = *(rax_21 + 0x10)
                
                if (rdi_2 u>= 4)
                    int64_t var_a0_1 = 0
                    void* r10_2 = &r11_2[2]
                    
                    do
                        void* rax_23 = *(rax_21 + 8)
                        
                        if ((rax_23.b & 1) != 0)
                            rax_23 = (rax_23 s>> 1) + rax_21 + 8
                        
                        int64_t i_1 = sx.q(i)
                        void* rax_24 = *(rax_21 + 0x18)
                        
                        if ((rax_24.b & 1) != 0)
                            rax_24 = (rax_24 s>> 1) + rax_21 + 0x18
                        
                        int32_t var_a4_1 = *(rax_24 + (i_1 << 2))
                        *r11_2 = (*(rax_23 + (i_1 << 2))).d.o
                        void* rax_27 = *(rax_21 + 8)
                        
                        if ((rax_27.b & 1) != 0)
                            rax_27 = (rax_27 s>> 1) + rax_21 + 8
                        
                        void* rax_29 = *(rax_21 + 0x18)
                        
                        if ((rax_29.b & 1) != 0)
                            rax_29 = (rax_29 s>> 1) + rax_21 + 0x18
                        
                        int32_t var_a4_2 = *(rax_29 + (i_1 << 2) + 4)
                        *(r10_2 - 0x10) = (*(rax_27 + (i_1 << 2) + 4)).d.o
                        void* rax_32 = *(rax_21 + 8)
                        
                        if ((rax_32.b & 1) != 0)
                            rax_32 = (rax_32 s>> 1) + rax_21 + 8
                        
                        void* rax_34 = *(rax_21 + 0x18)
                        
                        if ((rax_34.b & 1) != 0)
                            rax_34 = (rax_34 s>> 1) + rax_21 + 0x18
                        
                        int32_t var_a4_3 = *(rax_34 + (i_1 << 2) + 8)
                        *r10_2 = (*(rax_32 + (i_1 << 2) + 8)).d.o
                        void* rax_37 = *(rax_21 + 8)
                        
                        if ((rax_37.b & 1) != 0)
                            rax_37 = (rax_37 s>> 1) + rax_21 + 8
                        
                        void* rax_39 = *(rax_21 + 0x18)
                        
                        if ((rax_39.b & 1) != 0)
                            rax_39 = (rax_39 s>> 1) + rax_21 + 0x18
                        
                        r11_2 = &r11_2[4]
                        int32_t var_a4_4 = *(rax_39 + (i_1 << 2) + 0xc)
                        i += 4
                        *(r10_2 + 0x10) = (*(rax_37 + (i_1 << 2) + 0xc)).d.o
                        r10_2 += 0x40
                    while (i u< rdi_2 - 3)
                
                if (i u< rdi_2)
                    int64_t var_a0_2 = 0
                    
                    do
                        void* rax_43 = *(rax_21 + 8)
                        
                        if ((rax_43.b & 1) != 0)
                            rax_43 = (rax_43 s>> 1) + rax_21 + 8
                        
                        int64_t i_2 = sx.q(i)
                        void* rax_44 = *(rax_21 + 0x18)
                        
                        if ((rax_44.b & 1) != 0)
                            rax_44 = (rax_44 s>> 1) + rax_21 + 0x18
                        
                        i += 1
                        int32_t var_a4_5 = *(rax_44 + (i_2 << 2))
                        *r11_2 = (*(rax_43 + (i_2 << 2))).d.o
                        r11_2 = &r11_2[1]
                    while (i u< rdi_2)
                
                r14_1 += 1
            while (r14_1 u< r15_1)
            
            rdi_1 = &arg1[2]
        
        int64_t* rcx_12 = data_143f0f180
        (*(*rcx_12 + 0x138))(rcx_12, &data_143f02b98, *rdi_1)
        int64_t* rcx_13 = data_143f0f180
        int128_t* var_c0_1
        var_c0_1.b = 0x30
        int64_t var_90
        (*(*rcx_13 + 0x4b8))(rcx_13, &var_90, &data_143f02b98, *rdi_1, 0x10, var_c0_1)
        
        if (&arg1[3] != &var_90)
            int64_t* rbx_3 = arg1[3]
            arg1[3] = var_90
            var_90 = 0
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    char rax_50
                    
                    if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                        rax_50 = sub_1405949a0()
                    
                    if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_50 != 0))
                        (**rbx_3)(rbx_3, 1)
                    else
                        bool z_2
                        
                        if (0 == *(rbx_3 + 0xc))
                            *(rbx_3 + 0xc) = 1
                            z_2 = true
                        else
                            *(rbx_3 + 0xc)
                            z_2 = false
                        
                        if (z_2)
                            int32_t rax_52 = sub_140a20af0()
                            
                            if (rax_52 != 0)
                                rsi_1 = *((zx.q(rax_52) u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rax_52) & 0x3fff) * 0x18
                            
                            *(rsi_1 + 8) = rbx_3
                            sub_1405a42f0(&data_143f02390, rax_52)
        
        result = sub_1405ec8a0(&var_90)

__security_check_cookie(rax_1 ^ &var_e8)
return result
