// 函数: sub_141b92320
// 地址: 0x141b92320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int64_t* rbx = *(arg1 + 0x30)
int64_t* rdi = rbx

if (rbx != 0)
    int32_t rax_2 = rbx[1].d
    
    if (rax_2 != 0)
        rbx[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rbx = nullptr
        rdi = nullptr

int64_t rax_3

if (rdi != 0)
    rax_3 = *(arg1 + 0x28)

if (rdi == 0 || rax_3 == 0)
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp2_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi + 8))(rdi, 1)
    
    void* var_1e8 = arg1 + 0x18
    void*** rax_10 = sub_141b777c0()
    void* var_200 = &rax_10[2]
    sub_140918950(&var_200, &rax_10[2])
    int64_t var_228_1 = 0x410
    void** var_1f0_1 = &var_1e8
    sub_140e23ed0(&rax_10[2], "SWorldWidgetScreenLayer")
    void var_1d8
    int64_t* rax_11
    int128_t zmm1
    rax_11, zmm1 = sub_140e4fe80(&var_1d8)
    void** (* var_210)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)
    sub_141b8b480(&var_200, &var_210, rax_11, zmm1)
    
    if (rax_10 != 0)
        rax_10[1].d -= 1
        
        if (rax_10[1].d == 1)
            (**rax_10)(rax_10)
            int32_t temp3_1 = *(rax_10 + 0xc)
            *(rax_10 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*rax_10)[1](rax_10, 1)
    
    sub_140ddea30(&var_1d8)
    void** (* r15_1)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4) = var_210
    *(arg1 + 0x28) = r15_1
    int64_t* rcx_13 = *(arg1 + 0x30)
    int64_t* var_208
    
    if (var_208 != rcx_13)
        if (var_208 != 0)
            *(var_208 + 0xc) += 1
            rcx_13 = *(arg1 + 0x30)
        
        if (rcx_13 != 0)
            int32_t temp6_1 = *(rcx_13 + 0xc)
            *(rcx_13 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rcx_13 + 8))(rcx_13, 1)
        
        *(arg1 + 0x30) = var_208
    
    int32_t* i = *(arg1 + 0x38)
    
    for (void* rbp_1 = &i[sx.q(*(arg1 + 0x40)) * 2]; i != rbp_1; i = &i[2])
        void* rax_16 = sub_140d3c6e0(i)
        
        if (rax_16 != 0)
            int64_t* rcx_15 = *(rax_16 + 0x4a0)
            
            if (rcx_15 == 0)
                void* rax_17 = *(rax_16 + 0x4a8)
                
                if (rax_17 != 0)
                    var_1e8 = rax_17
                    void* rax_18 = *(rax_16 + 0x4b0)
                    void* var_1e0_1 = rax_18
                    
                    if (rax_18 != 0)
                        *(rax_18 + 8) += 1
                    
                    sub_141b8ff20(r15_1, rax_16, &var_1e8)
            else
                char var_218 = 0
                char* var_208_1 = &var_218
                var_210 = sub_141b970e0
                sub_141befea0(rcx_15, &var_200, &var_210)
                sub_141b8ff20(r15_1, rax_16, &var_200)
    
    *arg2 = r15_1
    arg2[1] = var_208
    
    if (var_208 != 0)
        int32_t rax_19 = var_208[1].d
        var_208[1].d = rax_19
        
        if (rax_19 == 0)
            (**var_208)(var_208)
            int32_t temp8_1 = *(var_208 + 0xc)
            *(var_208 + 0xc) -= 1
            
            if (temp8_1 == 1)
                (*(*var_208 + 8))(var_208, 1)
else
    if (rbx != 0)
        rbx[1].d += 1
    
    *arg2 = rax_3
    arg2[1] = rbx
    
    if (rbx != 0)
        int32_t rax_4 = rbx[1].d
        rbx[1].d = rax_4
        
        if (rax_4 == 0)
            (**rbx)(rbx)
            int32_t temp5_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx + 8))(rbx, 1)
        
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            int64_t r8_1 = *rbx
            (*r8_1)(rbx, arg3, r8_1)
            int32_t temp7_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp7_1 == 1)
                int64_t r8_2 = *rbx
                (*(r8_2 + 8))(rbx, 1, r8_2)

__security_check_cookie(rax_1 ^ &var_248)
return arg2
