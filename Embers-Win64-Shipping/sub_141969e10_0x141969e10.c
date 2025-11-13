// 函数: sub_141969e10
// 地址: 0x141969e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
char rax_1
int64_t r9
rax_1, r9 = (*(*rcx + 8))(rcx)
int32_t result
uint64_t rdx_3
int64_t* rsi

if (rax_1 == 0)
    if (arg1[2] == 0)
        sub_140af98a0("Unknown", 0x314, 
            Tried to create a Gfx Pipeline State without Vertex Shader", r9)
        sub_140afbb40()
    
    int64_t* rcx_4 = data_143f0f180
    void* r12_1 = *arg1
    int64_t* var_48
    (*(*rcx_4 + 0xe0))(rcx_4, &var_48, &arg1[1])
    int64_t r9_1
    result, r9_1 = sub_141962b90(r12_1 + 0x18, &var_48)
    int64_t* rsi_1 = var_48
    
    if (rsi_1 != 0)
        result = rsi_1[1].d
        rsi_1[1].d -= 1
        
        if (result == 1)
            if (rsi_1[2].b == 0)
                result = 0
                bool z_2
                
                if (0 == *(rsi_1 + 0xc))
                    *(rsi_1 + 0xc) = 1
                    z_2 = true
                else
                    result = *(rsi_1 + 0xc)
                    z_2 = false
                
                if (z_2)
                    int32_t rax_8 = sub_140a20af0()
                    uint64_t rdx_6 = zx.q(rax_8)
                    void* const rax_9
                    
                    if (rax_8 != 0)
                        rax_9 = *((rdx_6 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_6.d) & 0x3fff) * 0x18
                    else
                        rax_9 = nullptr
                    
                    *(rax_9 + 8) = rsi_1
                    result, r9_1 = sub_1405a42f0(&data_143f02390, rdx_6.d)
            else
                result, r9_1 = (**rsi_1)(rsi_1, 1)
    
    if (*(r12_1 + 0x18) == 0)
        if (arg1[0x15].w s>= 0)
            sub_140af98a0("Unknown", 0x8b, u"Shader compilation failures are Fatal.", r9_1)
            result = sub_140afbb40()
        else
            result = sub_141981240(sub_141974050(&arg1[1]), &arg1[1])
    
    int64_t* rsi_2 = arg1[1]
    
    if (rsi_2 != 0)
        result = rsi_2[1].d
        rsi_2[1].d -= 1
        
        if (result == 1)
            if (rsi_2[2].b == 0)
                result = 0
                bool z_3
                
                if (0 == *(rsi_2 + 0xc))
                    *(rsi_2 + 0xc) = 1
                    z_3 = true
                else
                    result = *(rsi_2 + 0xc)
                    z_3 = false
                
                if (z_3)
                    int32_t rax_15 = sub_140a20af0()
                    uint64_t rdx_8 = zx.q(rax_15)
                    void* const rax_16
                    
                    if (rax_15 != 0)
                        rax_16 = *((rdx_8 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_8.d) & 0x3fff) * 0x18
                    else
                        rax_16 = nullptr
                    
                    *(rax_16 + 8) = rsi_2
                    result = sub_1405a42f0(&data_143f02390, rdx_8.d)
            else
                result = (**rsi_2)(rsi_2, 1)
    
    int64_t* rsi_3 = arg1[2]
    
    if (rsi_3 != 0)
        result = rsi_3[1].d
        rsi_3[1].d -= 1
        
        if (result == 1)
            if (rsi_3[2].b == 0)
                result = 0
                bool z_4
                
                if (0 == *(rsi_3 + 0xc))
                    *(rsi_3 + 0xc) = 1
                    z_4 = true
                else
                    result = *(rsi_3 + 0xc)
                    z_4 = false
                
                if (z_4)
                    int32_t rax_21 = sub_140a20af0()
                    uint64_t rdx_9 = zx.q(rax_21)
                    void* const rax_22
                    
                    if (rax_21 != 0)
                        rax_22 = *((rdx_9 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_9.d) & 0x3fff) * 0x18
                    else
                        rax_22 = nullptr
                    
                    *(rax_22 + 8) = rsi_3
                    result = sub_1405a42f0(&data_143f02390, rdx_9.d)
            else
                result = (**rsi_3)(rsi_3, 1)
    
    int64_t* rsi_4 = arg1[5]
    
    if (rsi_4 != 0)
        result = rsi_4[1].d
        rsi_4[1].d -= 1
        
        if (result == 1)
            if (rsi_4[2].b == 0)
                result = 0
                bool z_5
                
                if (0 == *(rsi_4 + 0xc))
                    *(rsi_4 + 0xc) = 1
                    z_5 = true
                else
                    result = *(rsi_4 + 0xc)
                    z_5 = false
                
                if (z_5)
                    int32_t rax_27 = sub_140a20af0()
                    uint64_t rdx_10 = zx.q(rax_27)
                    void* const rax_28
                    
                    if (rax_27 != 0)
                        rax_28 = *((rdx_10 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_10.d) & 0x3fff) * 0x18
                    else
                        rax_28 = nullptr
                    
                    *(rax_28 + 8) = rsi_4
                    result = sub_1405a42f0(&data_143f02390, rdx_10.d)
            else
                result = (**rsi_4)(rsi_4, 1)
    
    int64_t* rsi_5 = arg1[6]
    
    if (rsi_5 != 0)
        result = rsi_5[1].d
        rsi_5[1].d -= 1
        
        if (result == 1)
            if (rsi_5[2].b == 0)
                result = 0
                bool z_6
                
                if (0 == *(rsi_5 + 0xc))
                    *(rsi_5 + 0xc) = 1
                    z_6 = true
                else
                    result = *(rsi_5 + 0xc)
                    z_6 = false
                
                if (z_6)
                    int32_t rax_33 = sub_140a20af0()
                    uint64_t rdx_11 = zx.q(rax_33)
                    void* const rax_34
                    
                    if (rax_33 != 0)
                        rax_34 = *((rdx_11 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_11.d) & 0x3fff) * 0x18
                    else
                        rax_34 = nullptr
                    
                    *(rax_34 + 8) = rsi_5
                    result = sub_1405a42f0(&data_143f02390, rdx_11.d)
            else
                result = (**rsi_5)(rsi_5, 1)
    
    int64_t* rsi_6 = arg1[4]
    
    if (rsi_6 != 0)
        result = rsi_6[1].d
        rsi_6[1].d -= 1
        
        if (result == 1)
            if (rsi_6[2].b == 0)
                result = 0
                bool z_7
                
                if (0 == *(rsi_6 + 0xc))
                    *(rsi_6 + 0xc) = 1
                    z_7 = true
                else
                    result = *(rsi_6 + 0xc)
                    z_7 = false
                
                if (z_7)
                    int32_t rax_39 = sub_140a20af0()
                    uint64_t rdx_12 = zx.q(rax_39)
                    void* const rax_40
                    
                    if (rax_39 != 0)
                        rax_40 = *((rdx_12 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_12.d) & 0x3fff) * 0x18
                    else
                        rax_40 = nullptr
                    
                    *(rax_40 + 8) = rsi_6
                    result = sub_1405a42f0(&data_143f02390, rdx_12.d)
            else
                result = (**rsi_6)(rsi_6, 1)
    
    int64_t* rsi_7 = arg1[3]
    
    if (rsi_7 != 0)
        result = rsi_7[1].d
        rsi_7[1].d -= 1
        
        if (result == 1)
            if (rsi_7[2].b == 0)
                result = 0
                bool z_8
                
                if (0 == *(rsi_7 + 0xc))
                    *(rsi_7 + 0xc) = 1
                    z_8 = true
                else
                    result = *(rsi_7 + 0xc)
                    z_8 = false
                
                if (z_8)
                    int32_t rax_45 = sub_140a20af0()
                    uint64_t rdx_13 = zx.q(rax_45)
                    void* const rax_46
                    
                    if (rax_45 != 0)
                        rax_46 = *((rdx_13 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_13.d) & 0x3fff) * 0x18
                    else
                        rax_46 = nullptr
                    
                    *(rax_46 + 8) = rsi_7
                    result = sub_1405a42f0(&data_143f02390, rdx_13.d)
            else
                result = (**rsi_7)(rsi_7, 1)
    
    int64_t* rsi_8 = arg1[7]
    
    if (rsi_8 != 0)
        result = rsi_8[1].d
        rsi_8[1].d -= 1
        
        if (result == 1)
            if (rsi_8[2].b == 0)
                result = 0
                bool z_9
                
                if (0 == *(rsi_8 + 0xc))
                    *(rsi_8 + 0xc) = 1
                    z_9 = true
                else
                    result = *(rsi_8 + 0xc)
                    z_9 = false
                
                if (z_9)
                    int32_t rax_51 = sub_140a20af0()
                    uint64_t rdx_14 = zx.q(rax_51)
                    void* const rax_52
                    
                    if (rax_51 != 0)
                        rax_52 = *((rdx_14 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_14.d) & 0x3fff) * 0x18
                    else
                        rax_52 = nullptr
                    
                    *(rax_52 + 8) = rsi_8
                    result = sub_1405a42f0(&data_143f02390, rdx_14.d)
            else
                result = (**rsi_8)(rsi_8, 1)
    
    int64_t* rsi_9 = arg1[8]
    
    if (rsi_9 != 0)
        result = rsi_9[1].d
        rsi_9[1].d -= 1
        
        if (result == 1)
            if (rsi_9[2].b == 0)
                result = 0
                bool z_10
                
                if (0 == *(rsi_9 + 0xc))
                    *(rsi_9 + 0xc) = 1
                    z_10 = true
                else
                    result = *(rsi_9 + 0xc)
                    z_10 = false
                
                if (z_10)
                    int32_t rax_57 = sub_140a20af0()
                    uint64_t rdx_15 = zx.q(rax_57)
                    void* const rax_58
                    
                    if (rax_57 != 0)
                        rax_58 = *((rdx_15 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_15.d) & 0x3fff) * 0x18
                    else
                        rax_58 = nullptr
                    
                    *(rax_58 + 8) = rsi_9
                    result = sub_1405a42f0(&data_143f02390, rdx_15.d)
            else
                result = (**rsi_9)(rsi_9, 1)
    
    rsi = arg1[9]
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            if (rsi[2].b != 0)
                jump(**rsi)
            
            result = 0
            bool z_11
            
            if (0 == *(rsi + 0xc))
                *(rsi + 0xc) = 1
                z_11 = true
            else
                result = *(rsi + 0xc)
                z_11 = false
            
            if (z_11)
                int32_t rax_63 = sub_140a20af0()
                rdx_3 = zx.q(rax_63)
                
                if (rax_63 != 0)
                    goto label_14196a3bd
                
                *(nullptr + 8) = rsi
                return sub_1405a42f0(&data_143f02390, rdx_3.d)
else
    int64_t* rcx_1 = data_143f0f180
    void* rbx_1 = *arg1
    int64_t* arg_20
    (*(*rcx_1 + 0xf0))(rcx_1, &arg_20, *(rbx_1 + 0x18))
    result = sub_141962b90(rbx_1 + 0x20, &arg_20)
    rsi = arg_20
    
    if (rsi != 0)
        int32_t rdi_1 = rsi[1].d
        rsi[1].d -= 1
        
        if (rdi_1 == 1)
            if (rsi[2].b != 0)
                return (**rsi)(rsi, zx.q(rdi_1))
            
            result = 0
            bool z_1
            
            if (0 == *(rsi + 0xc))
                *(rsi + 0xc) = 1
                z_1 = true
            else
                result = *(rsi + 0xc)
                z_1 = false
            
            if (z_1)
                int32_t rax_5 = sub_140a20af0()
                rdx_3 = zx.q(rax_5)
                
                if (rax_5 == 0)
                    *(nullptr + 8) = rsi
                    return sub_1405a42f0(&data_143f02390, rdx_3.d)
                
            label_14196a3bd:
                *(*((rdx_3 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rdx_3.d) & 0x3fff) * 0x18
                    + 8) = rsi
                return sub_1405a42f0(&data_143f02390, rdx_3.d)
return result
