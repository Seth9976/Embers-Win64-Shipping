// 函数: sub_141182980
// 地址: 0x141182980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14 = zx.q(*(arg2 + 0x88))
void* rbx = arg2
int32_t var_114 = r14.d
void* rsi = arg1

if (r14.d == 0)
    return 

int32_t rax = *(arg2 + 0xcc)
int32_t zmm1 = float.s(r14) f* 0.125f
int32_t i_3 = neg.d(int.d(-0.5f f- (zmm1 f+ zmm1)) s>> 1)

if (i_3 == 0)
    return 

int32_t r13_1 = 1
int32_t r15_1 = 0
int128_t zmm7 = zx.o(0)
uint64_t i_1 = zx.q(i_3)
int32_t var_130 = 1
int32_t var_12c_1 = 1
uint128_t zmm8 = zx.o(var_130.q)
int128_t var_b8_1 = zx.o(0)
int32_t var_134_1 = 0
uint64_t i_2 = i_1
int32_t var_11c_1 = 1
uint64_t i

do
    int32_t* rax_3
    int512_t zmm6_1
    rax_3, zmm6_1 = sub_14081d830(0x60, *(rsi + 8), 1, 0)
    int32_t* rdi_1 = rax_3
    
    if (rax_3 == 0)
        rdi_1 = nullptr
    else
        __builtin_memset(&rdi_1[4], 0, 0x48)
    
    memset(&rdi_1[1], 0, 0x5c)
    *rdi_1 = rax
    int32_t r14_1 = r14.d - r15_1
    int32_t rsi_1 = 0
    
    if (r14_1 u>= 8)
        r14_1 = 8
    
    int32_t var_120_1 = r14_1
    *(rdi_1 + 0x50) = *arg3
    int32_t var_138_1 = 1
    int32_t r9_1 = 1
    
    if (r14_1 != 0)
        int32_t r13_2 = 1
        
        do
            int64_t r12_1 = *(rbx + 0x80)
            int64_t r15_2 = sx.q(r15_1 + rsi_1) * 5
            int32_t* rcx_2 = data_143e6d188
            void* rdx_2 = sx.q(data_143e6d190) * 0x160 + rcx_2
            int64_t var_128
            
            if (rcx_2 == rdx_2)
            label_141182b38:
                var_130.q = 0
                var_128 = 0
            else
                while (*rcx_2 != *(r12_1 + (r15_2 << 3) + 0x1c))
                    rcx_2 = &rcx_2[0x58]
                    
                    if (rcx_2 == rdx_2)
                        goto label_141182b38
                
                int64_t rbx_4 = sx.q(rcx_2[0x14])
                int64_t r14_2 = *(rcx_2 + 0x48)
                var_130.q = 0
                var_128.d = rbx_4.d
                
                if (rbx_4.d != 0)
                    sub_140808f70(&var_130, rbx_4.d, 0)
                    memcpy(var_130.q, r14_2, (rbx_4 * 0x18).d)
                    r9_1 = var_138_1
                    r14_1 = var_120_1
                else
                    r14_1 = var_120_1
                    var_128:4.d = 0
            int64_t* rbx_3 =
                *(*(var_130.q + sx.q(*(r12_1 + (r15_2 << 3) + 0x20)) * 0x18 + 8) + 0x10)
            
            if (rbx_3 != 0)
                rbx_3[1].d += 1
            
            if (rsi_1 == 0)
                if (r14_1 != 8)
                    *(rdi_1 + 0x10) = rbx_3
                    *(rdi_1 + 0x18) = rbx_3
                    *(rdi_1 + 0x20) = rbx_3
                    *(rdi_1 + 0x28) = rbx_3
                    *(rdi_1 + 0x30) = rbx_3
                    *(rdi_1 + 0x38) = rbx_3
                    *(rdi_1 + 0x40) = rbx_3
                    *(rdi_1 + 0x48) = rbx_3
                
                goto label_141182bf4
            
            if (rsi_1 u<= 7)
            label_141182bf4:
                
                switch (jump_table_141182e64[zx.q(rsi_1)])
                    case 0x1182c01
                        *(rdi_1 + 0x10) = rbx_3
                    case 0x1182c07
                        *(rdi_1 + 0x18) = rbx_3
                    case 0x1182c0d
                        *(rdi_1 + 0x20) = rbx_3
                    case 0x1182c13
                        *(rdi_1 + 0x28) = rbx_3
                    case 0x1182c19
                        *(rdi_1 + 0x30) = rbx_3
                    case 0x1182c1f
                        *(rdi_1 + 0x38) = rbx_3
                    case 0x1182c25
                        *(rdi_1 + 0x40) = rbx_3
                    case 0x1182c2b
                        *(rdi_1 + 0x48) = rbx_3
            
            var_138_1 = r9_1 | r13_2
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    char rax_13
                    
                    if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                        rax_13 = sub_1405949a0()
                    
                    if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_13 != 0))
                        (**rbx_3)(rbx_3, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rbx_3 + 0xc))
                            *(rbx_3 + 0xc) = 1
                            z_1 = true
                        else
                            *(rbx_3 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_15 = sub_140a20af0()
                            uint64_t rdx_5 = zx.q(rax_15)
                            void* const rax_16
                            
                            if (rax_15 != 0)
                                rax_16 = *((rdx_5 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_5.d) & 0x3fff) * 0x18
                            else
                                rax_16 = nullptr
                            
                            *(rax_16 + 8) = rbx_3
                            sub_1405a42f0(&data_143f02390, rdx_5.d)
            
            int64_t rcx_11 = var_130.q
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            r9_1 = var_138_1
            rsi_1 += 1
            r15_1 = var_134_1
            rbx = arg2
            r13_2 = rol.d(r13_2, 1)
        while (rsi_1 u< r14_1)
        
        zmm7 = var_b8_1
        i_1 = i_2
        r13_1 = var_11c_1
    
    rdi_1[1] = r9_1
    rdi_1[2] = r13_1
    int128_t var_a8
    char rcx_14 =
        sub_1419a2ec0(std::_Get_future_error_what((*1111")[3]), &var_a8, &data_143e6b2f0, 0)
    zmm6_1.o = var_a8
    int128_t zmm6_2 = sub_14118ea30(rcx_14)
    int128_t var_98_1 = zmm7
    sub_141998c50(zmm6_2.q, &data_143e72550, rdi_1)
    rsi = arg1
    uint64_t var_d0_1 = zmm8.q
    int32_t var_c8_1 = 1
    void*** rax_22
    char rcx_16
    rax_22, rcx_16 = sub_14081d830(0x60, *(rsi + 8), 1, 0)
    void*** rbx_5 = rax_22
    
    if (rax_22 == 0)
        rbx_5 = nullptr
    else
        sub_14118ea30(rcx_16)
        void* var_f0_1 = &data_143e72580
        int128_t var_88 = rdi_1.o
        void arg_20
        sub_141992bd0(rbx_5, &arg_20, &var_88, 2)
        *rbx_5 = &data_142f2c9d8
        *(rbx_5 + 0x38) = rdi_1.o
        *(rbx_5 + 0x48) = zmm6_2
        rbx_5[0xb] = var_c8_1.q
    
    sub_1419968d0(rsi, rbx_5)
    rbx = arg2
    r13_1 = 0
    r14 = zx.q(var_114)
    r15_1 += 8
    i = i_1
    i_1 -= 1
    var_134_1 = r15_1
    i_2 = i_1
    var_11c_1 = 0
while (i != 1)
