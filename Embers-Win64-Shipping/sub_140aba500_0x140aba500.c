// 函数: sub_140aba500
// 地址: 0x140aba500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0
int32_t arg_8 = 0
char* rax
uint128_t zmm6
uint128_t zmm7
rax, zmm6, zmm7 = sub_140a752e0()
int64_t rcx = *(arg1 + 0x60)
arg_8.q = rcx
int64_t* rbx

if (rcx == 0)
    rbx = *(rax + 0x40)
    arg_8.q = *(rax + 0x38)
    
    if (rbx != 0)
        rbx[1].d += 1
    
    r14 = 1
else
    rbx = arg_8.q

if ((r14.b & 1) != 0)
    r14 &= 0xfffffffe
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t rax_3 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (rax_3 == 1)
                (*(*rbx + 8))(rbx, 1)

if (wcsncmp(arg2, u"LOCGEN_CURRENCY", 0xf) == 0)
    int16_t i = arg2[0xf]
    void* rcx_5 = &arg2[0xf]
    
    if (i != 0)
        while (i == 9 || i == 0x20)
            i = *(rcx_5 + 2)
            rcx_5 += 2
            
            if (i == 0)
                break
    
    void* rax_6 = nullptr
    
    if (*rcx_5 == 0x28)
        rax_6 = rcx_5
    
    void* rcx_6 = rax_6 + 2
    
    if (rax_6 == 0)
        rcx_6 = rax_6
    
    if (rcx_6 != 0)
        int16_t i_1 = *rcx_6
        
        if (i_1 != 0)
            while (i_1 == 9 || i_1 == 0x20)
                i_1 = *(rcx_6 + 2)
                rcx_6 += 2
                
                if (i_1 == 0)
                    break
        
        int16_t* rax_7 = sub_140abcf90(rcx_6, arg1 + 0x10)
        
        if (rax_7 != 0)
            int16_t* rax_8 = sub_140ac5870(rax_7, 0x2c)
            int16_t* rcx_8 = rax_8
            
            if (rax_8 != 0)
                int16_t i_2 = *rax_8
                
                if (i_2 != 0)
                    while (i_2 == 9 || i_2 == 0x20)
                        i_2 = rcx_8[1]
                        rcx_8 = &rcx_8[1]
                        
                        if (i_2 == 0)
                            break
                
                void* rax_9 = sub_140abd7c0(rcx_8, arg1 + 0x70)
                
                if (rax_9 != 0)
                    int16_t* rax_10 = sub_140ac5870(rax_9, 0x2c)
                    int16_t* rcx_10 = rax_10
                    
                    if (rax_10 != 0)
                        int64_t var_a8 = 0
                        int32_t var_a0_1 = 0
                        int16_t i_3 = *rax_10
                        
                        if (i_3 != 0)
                            while (i_3 == 9 || i_3 == 0x20)
                                i_3 = rcx_10[1]
                                rcx_10 = &rcx_10[1]
                                
                                if (i_3 == 0)
                                    break
                        
                        uint128_t var_38_1 = zmm6
                        uint128_t var_48_1 = zmm7
                        void* rax_11 = sub_140abd7c0(rcx_10, &var_a8)
                        int16_t* result
                        
                        if (rax_11 == 0)
                            result = nullptr
                        else
                            int128_t var_98
                            int128_t* rax_12
                            int32_t rdi_1
                            
                            if (var_a0_1 s> 1)
                                void var_88
                                rax_12 = sub_140a783a0(sub_140a752e0(), &var_88, &var_a8)
                                rdi_1 = 4
                            else
                                rax_12 = &var_98
                                var_98 = zx.o(0)
                                rdi_1 = 2
                            
                            int32_t rdi_2 = rdi_1 | r14
                            
                            if (arg1 + 0x60 != rax_12)
                                *(arg1 + 0x60) = *rax_12
                                *rax_12 = 0
                                sub_1405aeff0(arg1 + 0x68, rax_12 + 8)
                            
                            if ((rdi_2.b & 4) != 0)
                                rdi_2 &= 0xfffffffb
                                int64_t* var_80
                                
                                if (var_80 != 0)
                                    var_80[1].d -= 1
                                    
                                    if (var_80[1].d == 1)
                                        (**var_80)(var_80)
                                        int32_t rax_16 = *(var_80 + 0xc)
                                        *(var_80 + 0xc) -= 1
                                        
                                        if (rax_16 == 1)
                                            (*(*var_80 + 8))(var_80, 1)
                            
                            if ((rdi_2.b & 2) != 0)
                                void* rcx_16 = var_98:8.q
                                
                                if (rcx_16 != 0)
                                    int32_t rax_18 = *(rcx_16 + 8)
                                    *(rcx_16 + 8) -= 1
                                    
                                    if (rax_18 == 1)
                                        int64_t* rbx_2 = var_98:8.q
                                        (**rbx_2)(rbx_2)
                                        int32_t rax_20 = *(rbx_2 + 0xc)
                                        *(rbx_2 + 0xc) -= 1
                                        
                                        if (rax_20 == 1)
                                            int64_t* rcx_18 = var_98:8.q
                                            (*(*rcx_18 + 8))(rcx_18, 1)
                            
                            int16_t* result_1 = sub_140ac5870(rax_11, 0x29)
                            result = result_1
                            
                            if (result_1 == 0)
                                result = nullptr
                            else
                                int32_t rcx_20 = *(arg1 + 0x10)
                                zmm7 = 0x43f0000000000000
                                
                                if (rcx_20 == 0)
                                    zmm6.q = float.d(*(arg1 + 0x18))
                                label_140aba864:
                                    void* rax_23 = sub_140a78440(arg_8.q, arg1 + 0x70)
                                    int32_t var_78 = 3
                                    char var_50_1 = 0
                                    int64_t rax_24 = sub_140a845c0(*(rax_23 + 0xa0))
                                    double zmm0_1 = float.d(rax_24)
                                    
                                    if (rax_24 s< 0)
                                        zmm0_1 = zmm0_1 f+ zmm7.q
                                    
                                    zmm6.q = zmm6.q f/ zmm0_1
                                    uint64_t var_70_1 = zmm6.q
                                    sub_140a99d90(arg1 + 0x10, &var_78)
                                    int64_t* var_60
                                    
                                    if (var_50_1 != 0 && var_60 != 0)
                                        var_60[1].d -= 1
                                        
                                        if (var_60[1].d == 1)
                                            (**var_60)(var_60)
                                            int32_t rsi_1 = *(var_60 + 0xc)
                                            *(var_60 + 0xc) -= 1
                                            
                                            if (rsi_1 == 1)
                                                (*(*var_60 + 8))(var_60, zx.q(rsi_1))
                                    
                                    sub_140ab73d0(arg1, arg3)
                                else
                                    if (rcx_20 == 1)
                                        int64_t rax_22 = *(arg1 + 0x18)
                                        zmm6.q = float.d(rax_22)
                                        
                                        if (rax_22 s< 0)
                                            zmm6.q = zmm6.q f+ zmm7.q
                                        
                                        goto label_140aba864
                                    
                                    if (rcx_20 == 2)
                                        zmm6 = _mm_cvtps_pd((*(arg1 + 0x18)).q)
                                        goto label_140aba864
                                    
                                    if (rcx_20 == 3)
                                        zmm6 = zx.o(*(arg1 + 0x18))
                                        goto label_140aba864
                                    
                                    result = nullptr
                        
                        int64_t rcx_30 = var_a8
                        
                        if (rcx_30 != 0)
                            sub_140a74f90(rcx_30)
                        
                        return result

return nullptr
