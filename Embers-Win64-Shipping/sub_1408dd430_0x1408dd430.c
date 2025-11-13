// 函数: sub_1408dd430
// 地址: 0x1408dd430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg1
int64_t* rsi = arg1
int64_t* rcx = *(rax + 0x168)
int64_t* arg_18 = rcx
void* result = &rcx[sx.q(*(rax + 0x170))]
void* result_1 = result

while (rcx != result)
    int64_t* r13_1 = *rcx
    
    if (r13_1 != 0)
        void* rdx_1 = r13_1[0x25]
        int32_t rdi_1 = r13_1[0x12].d
        void* var_70
        __builtin_memset(&var_70, 0, 0x14)
        void* var_58
        __builtin_memset(&var_58, 0, 0x1a)
        sub_14081d930(&var_70, rdx_1)
        void* rax_2 = *rsi
        int32_t i_5 = 0
        int64_t var_68_1 = 0
        int16_t var_40_1
        var_40_1.b = 0
        int64_t* r14_1 = nullptr
        int64_t* var_a0 = nullptr
        *(rax_2 + 0x15d)
        *(rax_2 + 0x15c)
        int512_t zmm1_1
        zmm1_1.o = *(rax_2 + 0x158)
        int32_t i_9 = 0
        int32_t var_94_1 = 0
        void* rax_3 = sub_1408e5610(r13_1)
        int32_t* rsi_1 = *(rax_3 + 0x60)
        void* r12_1 = &rsi_1[sx.q(*(rax_3 + 0x68)) * 3]
        int32_t var_60_1
        
        if (rsi_1 != r12_1)
            int32_t rax_6 = rdi_1 & 1
            
            if (rdi_1 == 0xffffffff)
                rax_6 = 0
            
            do
                int64_t var_88_1 = 3
                void* var_90 = nullptr
                int32_t var_80_1 = 0xc
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = mulu.dp.d(0xaaaaaaab, *rsi_1)
                int32_t rax_7 = rsi_1[1]
                int16_t var_74_1 = 0x100
                char var_72_1 = 1
                sub_1405d16e0(&var_90, r13_1[zx.q(rax_6) * 4 + 0xa])
                int64_t i_10 = sx.q(i_5)
                i_5 = (i_10 + 1).d
                i_9 = i_5
                
                if (i_5 s> var_94_1)
                    sub_1405c4e40(&var_a0)
                    i_5 = i_9
                    r14_1 = var_a0
                
                void* rax_8 = var_90
                int64_t* rcx_8 = &r14_1[i_10 * 4]
                *rcx_8 = rax_8
                
                if (rax_8 != 0)
                    *(rax_8 + 8) += 1
                    i_5 = i_9
                    r14_1 = var_a0
                
                rcx_8[1].d = var_88_1.d
                *(rcx_8 + 0xc) = var_88_1:4.d
                rcx_8[2].d = var_80_1
                *(rcx_8 + 0x14) = temp0_1 u>> 1
                rcx_8[3].d = rax_7
                *(rcx_8 + 0x1c) = var_74_1.b
                *(rcx_8 + 0x1d) = var_74_1:1.b
                *(rcx_8 + 0x1e) = var_72_1
                var_60_1 += rsi_1[1]
                sub_1405d1550(&var_90)
                rsi_1 = &rsi_1[3]
            while (rsi_1 != r12_1)
        
        void* rdi_2
        
        if ((var_58.b & 1) == 0)
            rdi_2 = var_58
        else
            rdi_2 = &var_58 + (var_58 s>> 1)
        
        int64_t var_50_1
        int32_t i_6 = var_50_1.d
        
        if (i_6 != 0)
            int32_t i
            
            do
                sub_1405d1550(rdi_2)
                rdi_2 += 0x20
                i = i_6
                i_6 -= 1
            while (i != 1)
        
        int32_t r8_2 = var_50_1:4.d
        var_50_1.d = i_5
        
        if (i_5 != 0 || r8_2 != 0)
            sub_1405e3e00(&var_58, i_5, r8_2)
            void* rdx_7
            
            if ((var_58.b & 1) == 0)
                rdx_7 = var_58
            else
                rdx_7 = &var_58 + (var_58 s>> 1)
            
            if (i_5 != 0)
                void* rcx_12 = r14_1 + 0xc
                void* rdx_8 = rdx_7 + 0xc
                int32_t i_1
                
                do
                    void* rax_22 = *(rcx_12 - 0xc)
                    *(rdx_8 - 0xc) = rax_22
                    
                    if (rax_22 != 0)
                        *(rax_22 + 8) += 1
                    
                    *(rdx_8 - 4) = *(rcx_12 - 4)
                    *rdx_8 = *rcx_12
                    *(rdx_8 + 4) = *(rcx_12 + 4)
                    *(rdx_8 + 8) = *(rcx_12 + 8)
                    *(rdx_8 + 0xc) = *(rcx_12 + 0xc)
                    *(rdx_8 + 0x10) = *(rcx_12 + 0x10)
                    *(rdx_8 + 0x11) = *(rcx_12 + 0x11)
                    char rax_30 = *(rcx_12 + 0x12)
                    rcx_12 += 0x20
                    *(rdx_8 + 0x12) = rax_30
                    rdx_8 += 0x20
                    i_1 = i_5
                    i_5 -= 1
                while (i_1 != 1)
                i_5 = i_9
                r14_1 = var_a0
        else
            var_50_1:4.d = 0
        
        sub_14081d930(&r13_1[0x75], var_70)
        r13_1[0x76].d = var_68_1.d
        *(r13_1 + 0x3b4) = var_68_1:4.d
        r13_1[0x77].d = var_60_1
        
        if (&r13_1[0x78] != &var_58)
            void* rdi_3 = r13_1[0x78]
            
            if ((rdi_3.b & 1) != 0)
                rdi_3 = (rdi_3 s>> 1) + &r13_1[0x78]
            
            int32_t i_7 = r13_1[0x79].d
            
            if (i_7 != 0)
                int32_t i_2
                
                do
                    sub_1405d1550(rdi_3)
                    rdi_3 += 0x20
                    i_2 = i_7
                    i_7 -= 1
                while (i_2 != 1)
            
            void* rdx_10
            
            if ((var_58.b & 1) == 0)
                rdx_10 = var_58
            else
                rdx_10 = &var_58 + (var_58 s>> 1)
            
            sub_1408d9350(&r13_1[0x78], rdx_10, var_50_1.d, *(r13_1 + 0x3cc), 0)
        
        int64_t var_48
        r13_1[0x7a] = var_48
        r13_1[0x7b].b = var_40_1.b
        *(r13_1 + 0x3d9) = var_40_1:1.b
        (*(r13_1[0x6e] + 0x28))(&r13_1[0x6e])
        int64_t* rdi_5 = r14_1
        
        if (i_5 != 0)
            int32_t i_3
            
            do
                sub_1405d1550(rdi_5)
                rdi_5 = &rdi_5[4]
                i_3 = i_5
                i_5 -= 1
            while (i_3 != 1)
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
        
        void* rbx_1
        
        if ((var_58.b & 1) == 0)
            rbx_1 = var_58
        else
            rbx_1 = &var_58 + (var_58 s>> 1)
        
        int32_t i_8 = var_50_1.d
        
        if (i_8 != 0)
            int32_t i_4
            
            do
                sub_1405d1550(rbx_1)
                rbx_1 += 0x20
                i_4 = i_8
                i_8 -= 1
            while (i_4 != 1)
        
        sub_140a1d5c0(&var_58)
        sub_14081c9d0(&var_70)
        rcx = arg_18
        result = result_1
        rsi = arg1
    
    rcx = &rcx[1]
    arg_18 = rcx

return result
