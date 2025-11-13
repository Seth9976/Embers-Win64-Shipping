// 函数: sub_142418800
// 地址: 0x142418800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)

if (sub_140d6df00(arg1 + 0xc8) != 0)
    sub_14240c810(arg1 + 0xe0, 1)
    int64_t rsi_1 = sx.q(*(arg1 + 0xe8))
    int32_t rax_1 = (rsi_1 + 1).d
    *(arg1 + 0xe8) = rax_1
    
    if (rax_1 s> *(arg1 + 0xec))
        sub_1405a4df0(arg1 + 0xe0)
    
    int64_t* rdx_2 = *(arg1 + 0xe0) + rsi_1 * 0x18
    *rdx_2 = *(arg1 + 0xc8)
    rdx_2[1] = *(arg1 + 0xd0)
    void* rax_5 = *(arg1 + 0xd8)
    rdx_2[2] = rax_5
    
    if (rax_5 != 0)
        *(rax_5 + 8) += 1

sub_142418570(arg1)

if (*(arg1 + 0xe8) == 1)
    int64_t rax_6 = data_143e1e998
    
    if (**(arg1 + 0xe0) == rax_6)
        int64_t var_48 = rax_6
        int64_t var_40_1 = data_143e1e9a0.q
        int64_t* rax_8 = data_143e1e9a0:8
        
        if (rax_8 != 0)
            rax_8[1].d += 1
        
        int64_t var_30
        int64_t* rax_12
        int64_t* rbx_2
        int32_t r8_1
        
        switch ((GetKeyboardLayout(0) & 0x3ff) - 7)
            case 0
                var_48 = data_143e1ea88
                var_30 = data_143e1ea90.q
                void* rax_15 = data_143e1ea90:8
                void* var_28_1 = rax_15
                
                if (rax_15 != 0)
                    *(rax_15 + 8) += 1
                
                goto label_14241894a
            case 3
                rax_12 = sub_140d449f0()
                r8_1 = 0xdc
                goto label_1424189cd
            case 5
                rax_12 = sub_140d449f0()
                r8_1 = 0xde
            label_1424189cd:
                sub_140647400(&var_48, sub_140d45b10(rax_12, &var_30, r8_1, 0))
                int64_t* var_20
                rbx_2 = var_20
            label_1424189d6:
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp3_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
            case 9
                var_48 = data_143e1e9e0
                var_30 = data_143e1e9e8.q
                void* rax_18 = data_143e1e9e8:8
                void* var_28_2 = rax_18
                int128_t zmm0_1
                
                if (rax_18 == 0)
                label_14241894a:
                    zmm0_1 = var_30.o
                    rbx_2 = _mm_bsrli_si128(var_40_1.o, 8).q
                    var_40_1.o = zmm0_1
                    goto label_1424189d6
                
                *(rax_18 + 8) += 1
                zmm0_1 = var_30.o
                rbx_2 = _mm_bsrli_si128(var_40_1.o, 8).q
                var_40_1.o = zmm0_1
                goto label_1424189d6
            case 0xa, 0x12
                rax_12 = sub_140d449f0()
                r8_1 = 0xc0
                goto label_1424189cd
        
        if (var_48 != data_143e1e998 && sub_140d6df00(&var_48) != 0)
            int64_t rbx_3 = sx.q(*(arg1 + 0xe8))
            int32_t rax_24 = (rbx_3 + 1).d
            *(arg1 + 0xe8) = rax_24
            
            if (rax_24 s> *(arg1 + 0xec))
                sub_1405a4df0(arg1 + 0xe0)
            
            int64_t* rdx_6 = *(arg1 + 0xe0) + rbx_3 * 0x18
            *rdx_6 = var_48
            rdx_6[1] = var_40_1
            rdx_6[2] = rax_8
            
            if (rax_8 != 0)
                rax_8[1].d += 1
        
        if (rax_8 != 0)
            rax_8[1].d -= 1
            
            if (rax_8[1].d == 1)
                (**rax_8)(rax_8)
                int32_t temp1_1 = *(rax_8 + 0xc)
                *(rax_8 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rax_8 + 8))(rax_8, 1)

void* i = *(arg1 + 0x80)

for (void* rsi_3 = i + sx.q(*(arg1 + 0x88)) * 0x28; i != rsi_3; i += 0x28)
    sub_140d6de10(i + 0x10)

int64_t result = sx.q(*(arg1 + 0x98))
void* i_1 = *(arg1 + 0x90)

for (void* rdi_1 = i_1 + result * 0x28; i_1 != rdi_1; i_1 += 0x28)
    result = sub_140d6de10(i_1 + 0x10)

return result
