// 函数: sub_140f192e0
// 地址: 0x140f192e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int64_t rsi
rsi.b = 0
void** var_298
int128_t zmm1 = sub_140ddd070(&var_298, sub_140f76fa0(*(arg1 + 0x2c0)))

if (*(arg1 + 0x318) != 0)
    int64_t* rax_3
    rax_3, zmm1 = sub_140eff6e0(arg1 + 0x2c8)
    int64_t var_290
    int64_t var_288
    int32_t var_280
    char var_27c
    char var_27b
    int64_t var_278
    int32_t var_270
    int32_t var_26c
    int32_t var_268
    int32_t var_264
    int64_t var_260
    int64_t var_250
    int32_t var_248
    
    if (var_290 != *rax_3 || var_288 != rax_3[1] || var_280 != rax_3[2].d
            || var_27c != *(rax_3 + 0x14) || var_27b != *(rax_3 + 0x15) || var_278 != rax_3[3]
            || var_270.d f!= rax_3[4].d || var_26c.d f!= *(rax_3 + 0x24)
            || var_268.d f!= rax_3[5].d || var_264.d f!= *(rax_3 + 0x2c) || var_260 != rax_3[6]
            || var_250 != rax_3[8] || var_248 != rax_3[9].d)
        zmm1 = sub_140d962e0(&var_290, rax_3)
        rsi.b = 1

if (*(arg1 + 0x358) != 0)
    int128_t* rax_9 = sub_140e11270(arg1 + 0x330, zmm1)
    int32_t var_240
    int32_t var_23c
    int32_t var_238
    int32_t var_234
    char var_230
    uint128_t var_228
    
    if (var_240.d f!= *rax_9 || var_23c.d f!= *(rax_9 + 4) || var_238.d f!= *(rax_9 + 8)
        || var_234.d f!= *(rax_9 + 0xc) || var_230 != rax_9[1].b)
    label_140f19443:
        var_240.o = *rax_9
        char var_230_1 = rax_9[1].b
        int64_t rax_13 = *(rax_9 + 0x18)
        void* rax_14 = rax_9[2].q
        void* var_2c0_1 = rax_14
        
        if (rax_14 != 0)
            *(rax_14 + 8) += 1
        
        int128_t zmm0_1 = rax_13.o
        int64_t var_2c8_1
        var_2c8_1.o = var_228
        int64_t* rbx_1 = _mm_bsrli_si128(var_228, 8).q
        int128_t var_28_1 = zmm0_1
        int128_t var_228_1 = zmm0_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rsi.b = 1
    else if (var_230 == 1 && var_228.q != *(rax_9 + 0x18))
        goto label_140f19443

if (*(arg1 + 0x378) == 0)
label_140f1960a:
    
    if (rsi.b != 0)
        goto label_140f1961b
else
    if (*(arg1 + 0x388) != 0)
        int64_t* rcx_12 = *(arg1 + 0x380)
        
        if (rcx_12 != 0 && (*(*rcx_12 + 0x28))(rcx_12) != 0)
            int64_t* rcx_13
            
            if (*(arg1 + 0x388) == 0)
                rcx_13 = nullptr
            else
                rcx_13 = *(arg1 + 0x380)
            
            *(arg1 + 0x370) = (*(*rcx_13 + 0x48))(rcx_13)
    
    void* rbx_2 = *(arg1 + 0x370)
    
    if (rbx_2 == 0)
        goto label_140f1960a
    
    int32_t var_1c0
    int32_t var_1bc
    int32_t var_1b8
    int32_t var_1b4
    int32_t var_1b0
    int32_t var_1ac
    char var_15c
    
    if (not(var_1c0.d f!= *(rbx_2 + 8)) && not(var_1bc.d f!= *(rbx_2 + 0xc))
            && var_15c == *(rbx_2 + 0x6c) && not(var_1b8.d f!= *(rbx_2 + 0x10))
            && not(var_1b0.d f!= *(rbx_2 + 0x18)) && not(var_1b4.d f!= *(rbx_2 + 0x14))
            && not(var_1ac.d f!= *(rbx_2 + 0x1c)))
        int32_t var_1a8[0xa]
        int64_t var_180
        int64_t var_178
        int32_t var_170
        int32_t var_16c
        int32_t var_168
        int32_t var_164
        char var_15b
        char var_15a
        char var_148
        
        if (sub_140de1a50(&var_1a8, rbx_2 + 0x20) == 0 || var_15b != *(rbx_2 + 0x6d)
                || var_15a != *(rbx_2 + 0x6e) || var_180 != *(rbx_2 + 0x48)
                || var_178 != *(rbx_2 + 0x50) || ((*(rbx_2 + 0x80) ^ var_148) & 1) != 0
                || var_170 f!= *(rbx_2 + 0x58) || var_16c f!= *(rbx_2 + 0x5c)
                || var_168 f!= *(rbx_2 + 0x60) || not(var_164 f== *(rbx_2 + 0x64)))
            goto label_140f19603
        
        goto label_140f1960a
    
label_140f19603:
    void var_1c8
    sub_140693270(&var_1c8, rbx_2)
label_140f1961b:
    sub_140f8dca0(*(arg1 + 0x2c0), &var_298)
    int64_t* rbx_3 = *(arg1 + 0x2c0)
    void var_2b8
    sub_140f74d00(rbx_3, sub_140f75790(rbx_3, &var_2b8))
    int64_t* var_2b0
    
    if (var_2b0 != 0)
        var_2b0[1].d -= 1
        
        if (var_2b0[1].d == 1)
            (**var_2b0)(var_2b0)
            int32_t rdi_1 = *(var_2b0 + 0xc)
            *(var_2b0 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_2b0 + 8))(var_2b0, zx.q(rdi_1))

sub_140de06c0(&var_298)
__security_check_cookie(rax_1 ^ &var_2e8)
return &data_142d8ad00
